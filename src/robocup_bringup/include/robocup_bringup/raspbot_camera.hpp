/**
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
 */

#ifndef ROBOCUP_BRINGUP_RASPBOT_CAMERA_HPP_
#define ROBOCUP_BRINGUP_RASPBOT_CAMERA_HPP_

#include "sensor_msgs/msg/compressed_image.hpp"
#include "rclcpp/rclcpp.hpp"

#include "opencv2/opencv.hpp"

#include <string>

namespace robocup
{
    class RsapbotCamera : public rclcpp::Node
    {
    // "RsapbotCamera" member functions
    public:

        RsapbotCamera();

        ~RsapbotCamera();

    private:

        void timer_callback();

        void initialize_node();

        void declare_parameters();

    // "RsapbotCamera" member variables
    private:

        // Timer to publish image topic
        rclcpp::TimerBase::SharedPtr timer_;

        // Image topic publisher
        rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr image_pub_;

        // Video capture
        cv::VideoCapture video_capture_;

        // Frame ID and topic
        std::string frame_id_;
        std::string image_topic_;

    }; // class RsapbotCamera
}

#endif // ROBOCUP_BRINGUP_RASPBOT_CAMERA_HPP_