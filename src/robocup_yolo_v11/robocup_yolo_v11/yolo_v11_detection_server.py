#!/usr/bin/env python3

'''
 * -------------------------------------------------------------------------------------------------
 * 
 * Copyright 2025 Minkyu Kil
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * @file    yolo_v11_detection_server.py
 * @brief   Raspbot yolo v11 detection result service server
 * @author  Minkyu Kil
 * @date    2025-06-17
 * @version 1.0
 *
 * -------------------------------------------------------------------------------------------------
'''

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, HistoryPolicy, DurabilityPolicy, ReliabilityPolicy

from sensor_msgs.msg import Image
from robocup_msgs.msg import ObjectDetection2DArray, ObjectDetection2D
from robocup_srvs.srv import ObjectDetection2DService

import cv2
import ros2_numpy as rnp
from ultralytics import YOLO

class YoloV11DetectionServer(Node):

    def __init__(self):

        super().__init__('yolo_v11_detection_server')

        # Parameters
        self.declare_parameter('display_result', False)
        self.declare_parameter('model_pt', 'yolo11n.pt')
        self.declare_parameter('image_topic', '/image')
        self.declare_parameter('detection_service', '/yolo_v11/detection_service')

        self.display_result    = self.get_parameter('display_result').get_parameter_value().bool_value
        self.model_pt          = self.get_parameter('model_pt').get_parameter_value().string_value
        self.image_topic       = self.get_parameter('image_topic').get_parameter_value().string_value
        self.detection_service = self.get_parameter('detection_service').get_parameter_value().string_value

        # Ultralytics model load
        self.model = YOLO(self.model_pt)
        self.get_logger().info(f'Loaded YOLO model from: {self.model_pt}')

        # Detection service
        self.detection_srv = self.create_service(
            ObjectDetection2DService,
            self.detection_service,
            self.detection_request_callback
        )

        # Subscribers
        self.latest_frame = None

        self.image_qos = QoSProfile(
            history     = HistoryPolicy.KEEP_LAST,
            depth       = 10,
            durability  = DurabilityPolicy.VOLATILE,
            reliability = ReliabilityPolicy.BEST_EFFORT
        )

        self.image_sub = self.create_subscription(
            Image,
            self.image_topic,
            self.image_callback,
            self.image_qos
        )

        # Display result
        if self.display_result:
            cv2.namedWindow('YOLO Result', cv2.WINDOW_AUTOSIZE)
            cv2.startWindowThread()
            self.create_timer(1.0/30.0, lambda: cv2.waitKey(1))

    def image_callback(self, msg: Image):
        self.latest_frame = msg

    def detection_request_callback(self,
        request: ObjectDetection2DService.Request,
        response: ObjectDetection2DService.Response
    ) -> ObjectDetection2DService.Response:

        if self.latest_frame is None:
            response.detections = ObjectDetection2DArray()
            return response
        
        # YOLO v11 inference
        image = rnp.numpify(self.latest_frame)
        detection = self.model(image, verbose=False)[0]

        # To ROS message
        detected_object_array = ObjectDetection2DArray()
        detected_object_array.header = self.latest_frame.header

        for box in detection.boxes.data.tolist():
            x1, y1, x2, y2, score, label_idx = box
            center_x = (x1 + x2) / 2.0
            center_y = (y1 + y2) / 2.0
            size_x = x2 - x1
            size_y = y2 - y1
            label = detection.names[int(label_idx)]

            detected_object = ObjectDetection2D()
            detected_object.header = self.latest_frame.header
            detected_object.label  = label
            detected_object.score  = float(score)
            detected_object.bounding_box.center.x = float(center_x)
            detected_object.bounding_box.center.y = float(center_y)
            detected_object.bounding_box.size_x   = float(size_x)
            detected_object.bounding_box.size_y   = float(size_y)

            detected_object_array.detections.append(detected_object)

        # Display result
        if(self.display_result):
            annotated_img = detection.plot()
            cv2.imshow('YOLO Result', annotated_img)
            cv2.waitKey(1)

        # Detection response
        response.detections = [detected_object_array]
        return response

def main(args=None):

    rclpy.init(args=args)
    node = YoloV11DetectionServer()

    try:
        rclpy.spin(node)
    finally:
        if node.display_result:
            cv2.destroyAllWindows()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
