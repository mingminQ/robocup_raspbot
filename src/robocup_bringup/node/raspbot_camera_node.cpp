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
 * @file    raspbot_camera_node.cpp
 * @brief   Raspbot camera image publisher node
 * @author  Minkyu Kil
 * @date    2025-06-17
 * @version 1.0
 *
 * -------------------------------------------------------------------------------------------------
 */

#include "robocup_bringup/raspbot_camera.hpp"

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    setvbuf(stdout, NULL, _IONBF, BUFSIZ);

    rclcpp::Node::SharedPtr node = std::make_shared<robocup::RsapbotCamera>();
    rclcpp::spin(node);

    rclcpp::shutdown();
    return 0;
}