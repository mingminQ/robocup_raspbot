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
 * @file    raspbot_camera.cpp
 * @brief   Raspbot camera image publisher
 * @author  Minkyu Kil
 * @date    2025-06-17
 * @version 1.0
 *
 * -------------------------------------------------------------------------------------------------
 */

#include "robocup_bringup/raspbot_camera.hpp"

#include <functional>
#include <algorithm>
#include <chrono>

using namespace std::chrono_literals;

robocup::RsapbotCamera::RsapbotCamera()
  : Node("raspbot_camera"),
    video_capture_("/dev/video19", cv::CAP_V4L2)
{
    declare_parameters();
    initialize_node();
}

robocup::RsapbotCamera::~RsapbotCamera()
{
    video_capture_.release();
}

void robocup::RsapbotCamera::timer_callback()
{
    cv::Mat frame;
    if(!video_capture_.read(frame))
    {
        RCLCPP_WARN(this->get_logger(), "RaspbotCamera::timer_callback() camera frame read failed");
        return;
    }

    std::vector<std::uint8_t> buffer;
    if(!cv::imencode(".png", frame, buffer))
    {
        RCLCPP_WARN(this->get_logger(), "RaspbotCamera::timer_callback() failed to encode image to PNG");
        return;
    }

    sensor_msgs::msg::CompressedImage msg;
    msg.header.stamp    = this->now();
    msg.header.frame_id = frame_id_;
    msg.format = "png";
    msg.data = std::move(buffer);

    image_pub_->publish(msg);
}

void robocup::RsapbotCamera::initialize_node()
{
    // Timer
    timer_ = this->create_wall_timer(30ms, std::bind(&RsapbotCamera::timer_callback, this));

    // Publisher
    image_pub_ = this->create_publisher<sensor_msgs::msg::CompressedImage>(image_topic_,
        rclcpp::QoS(rclcpp::KeepLast(1)).best_effort().durability_volatile()
    );

    // Video capture
    video_capture_.open(0);
    video_capture_.set(cv::CAP_PROP_AUTO_EXPOSURE, 0.25);
    video_capture_.set(cv::CAP_PROP_EXPOSURE, -156);
}

void robocup::RsapbotCamera::declare_parameters()
{
    // Frame ID and topic
    this->declare_parameter<std::string>("frame_id", "camera");
    frame_id_ = this->get_parameter("frame_id").as_string();

    this->declare_parameter<std::string>("iamge_topic", "/compressed_image");
    image_topic_ = this->get_parameter("iamge_topic").as_string();
}