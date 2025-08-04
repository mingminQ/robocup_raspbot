# --------------------------------------------------------------------------------------------------
# SPDX-License-Identifier: Apache-2.0
# Copyright (c) 2025 Minkyu Kil
# --------------------------------------------------------------------------------------------------
cmake_minimum_required(VERSION 3.8)
project(robocup_bringup)

# --------------------------------------------------------------------------------------------------
# Ensure C++17 standard is used if not already set
# --------------------------------------------------------------------------------------------------
if(NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 17)
endif()

# --------------------------------------------------------------------------------------------------
# Add extra warning flags for GCC and Clang
# --------------------------------------------------------------------------------------------------
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# --------------------------------------------------------------------------------------------------
# Find required ROS2 and message packages
# --------------------------------------------------------------------------------------------------
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(OpenCV REQUIRED)

# --------------------------------------------------------------------------------------------------
# Include local header files
# --------------------------------------------------------------------------------------------------
include_directories(
    include
    ${OpenCV_INCLUDE_DIRS}
)

# --------------------------------------------------------------------------------------------------
# IAHRS interactive driver
# --------------------------------------------------------------------------------------------------
add_executable(raspbot_camera
    node/raspbot_camera_node.cpp
    src/raspbot_camera.cpp
)
ament_target_dependencies(raspbot_camera
    rclcpp
    sensor_msgs
    cv_bridge
    OpenCV
)
target_include_directories(raspbot_camera 
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
install(
    TARGETS raspbot_camera
    DESTINATION lib/${PROJECT_NAME}
)

# --------------------------------------------------------------------------------------------------
# Install launch files
# --------------------------------------------------------------------------------------------------
install(
    DIRECTORY launch
    DESTINATION share/${PROJECT_NAME}
)

# --------------------------------------------------------------------------------------------------
# Register the package with ament
# --------------------------------------------------------------------------------------------------
ament_package()