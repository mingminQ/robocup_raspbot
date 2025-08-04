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
 * @file    raspbot_camera.hpp
 * @brief   Raspbot camera image publisher
 * @author  Minkyu Kil
 * @date    2025-06-17
 * @version 1.0
 *
 * -------------------------------------------------------------------------------------------------
'''

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, HistoryPolicy, DurabilityPolicy, ReliabilityPolicy

from sensor_msgs.msg import CompressedImage
from std_msgs.msg import String

import cv2
from cv_bridge import CvBridge
from ultralytics import YOLO

class YoloV11DetectionPublisher(Node):

    def __init__(self):

        super.__init__('yolo_v11_detection_publisher')

        # Parameters
        self.declare_parameter('display_result', False)
        self.declare_parameter('model_pt', 'yolo11n.pt')
        self.declare_parameter('image_topic', '/compressed_image')
        self.declare_parameter('detection_topic', '/yolo_v11/detection')

        self.display_result = self.get_parameter('display_result').get_parameter_value().bool_value
        self.model_pt       = self.get_parameter('model_pt').get_parameter_value().string_value
        self.image_topic    = self.get_parameter('image_topic').get_parameter_value().string_value
        self.result_topic   = self.get_parameter('detection_topic').get_parameter_value().string_value

        # Ultralytics model load
        self.bridge = CvBridge()
        self.model = YOLO(self.model_pt)
        self.get_logger().info(f'Loaded YOLO model from: {self.model_pt}')

        # Publishers


        # Subscribers
        image_qos = QoSProfile(
            history=HistoryPolicy.KEEP_LAST,
            depth=1,
            durability=DurabilityPolicy.VOLATILE,
            reliability=ReliabilityPolicy.BEST_EFFORT
        )

        self.image_sub = self.create_subscription(
            CompressedImage, 
            self.image_topic, 
            self.image_callback, 
            image_qos
        )

    def image_callback(self, msg: CompressedImage):

        try:
            cv_image = self.bridge.compressed_imgmsg_to_cv2(msg, 'bgr8')
        except Exception as ex:
            self.get_logger().error(f'cv_bridge error: {ex}')
            return
        
        detection          = self.model(cv_image)
        json_str           = detection[0].tojson()
        detection_msg      = String()
        detection_msg.data = json_str
        self.pub.publish(detection_msg)

        if(self.display_result):

            annotated_img = detection[0].plot()
            cv2.imshow('YOLO Result', annotated_img)
            cv2.waitKey(1)

def main(args=None):

    rclpy.init(args=args)
    node = YoloV11DetectionPublisher()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()