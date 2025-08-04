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
 * @file    yolo_v11_detection_publisher.py
 * @brief   Raspbot yolo v11 detection result publisher
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
from robocup_msgs.msg import ObjectDetection2D, ObjectDetection2DArray

import cv2
import ros2_numpy as rnp
from ultralytics import YOLO

class YoloV11DetectionPublisher(Node):

    def __init__(self):

        super().__init__('yolo_v11_detection_publisher')

        # Parameters
        self.declare_parameter('display_result', False)
        self.declare_parameter('model_pt', 'yolo11n.pt')
        self.declare_parameter('image_topic', '/image')
        self.declare_parameter('detection_topic', '/yolo_v11/detection')

        self.display_result = self.get_parameter('display_result').get_parameter_value().bool_value
        self.model_pt       = self.get_parameter('model_pt').get_parameter_value().string_value
        self.image_topic    = self.get_parameter('image_topic').get_parameter_value().string_value
        self.result_topic   = self.get_parameter('detection_topic').get_parameter_value().string_value

        # Ultralytics model load
        self.model = YOLO(self.model_pt)
        self.get_logger().info(f'Loaded YOLO model from: {self.model_pt}')

        # Publishers
        result_qos = QoSProfile(
            history     = HistoryPolicy.KEEP_LAST,
            depth       = 1,
            durability  = DurabilityPolicy.VOLATILE,
            reliability = ReliabilityPolicy.RELIABLE
        )

        self.result_pub = self.create_publisher(
            ObjectDetection2DArray,
            self.result_topic,
            result_qos
        )

        # Subscribers
        image_qos = QoSProfile(
            history     = HistoryPolicy.KEEP_LAST,
            depth       = 10,
            durability  = DurabilityPolicy.VOLATILE,
            reliability = ReliabilityPolicy.BEST_EFFORT
        )

        self.image_sub = self.create_subscription(
            Image, 
            self.image_topic, 
            self.image_callback, 
            image_qos
        )

    def image_callback(self, msg: Image):

        # Convert image
        image = rnp.numpify(msg)

        # YOLO v11 inference
        detection = self.model(image, verbose=False)[0]

        # To ROS message
        detected_object_array = ObjectDetection2DArray()
        detected_object_array.header = msg.header

        for box in detection.boxes.data.tolist():
            x1, y1, x2, y2, score, label_idx = box
            center_x = (x1 + x2) / 2.0
            center_y = (y1 + y2) / 2.0
            size_x = x2 - x1
            size_y = y2 - y1
            label = detection.names[int(label_idx)]

            detected_object = ObjectDetection2D()
            detected_object.header = msg.header
            detected_object.label  = label
            detected_object.score  = float(score)
            detected_object.bounding_box.center.x = float(center_x)
            detected_object.bounding_box.center.y = float(center_y)
            detected_object.bounding_box.size_x   = float(size_x)
            detected_object.bounding_box.size_y   = float(size_y)

            detected_object_array.detections.append(detected_object)

        # Publish result
        self.result_pub.publish(detected_object_array)

        # Display result
        if(self.display_result):
            annotated_img = detection.plot()
            cv2.imshow('YOLO Result', annotated_img)
            cv2.waitKey(1)

def main(args=None):

    rclpy.init(args=args)
    node = YoloV11DetectionPublisher()

    try:
        rclpy.spin(node)
    finally:
        if node.display_result:
            cv2.destroyAllWindows()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
