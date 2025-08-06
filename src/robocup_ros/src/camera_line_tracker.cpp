#include "robocup_ros/camera_line_tracker.hpp"
#include "robocup_ros/image_processor/line_tracker.hpp"
#include "cv_bridge/cv_bridge.h"

#include <functional>
#include <algorithm>
#include <chrono>

using namespace std::chrono_literals;
using std::placeholders::_1;

robocup::CameraLineTracker::CameraLineTracker()
  : Node("camera_line_tracker")
{
    declare_parameters();
    initialize_node();
}

void robocup::CameraLineTracker::image_callback(const sensor_msgs::msg::Image &msg)
{
    // Convert image
    cv::Mat image, hsv_image, gray_image;
    try
    {
        image      = cv_bridge::toCvCopy(msg, "bgr8")->image;
        hsv_image  = convert_to_hsv(image);
        gray_image = convert_to_gray(image);
    }
    catch (cv_bridge::Exception& ex)
    {
        RCLCPP_ERROR(this->get_logger(), "CameraLineTracker::image_callback() %s", ex.what());
        return;
    }

    // Threshold image
    cv::Mat binary_image = threshold_hsv(hsv_image, 
                                         hsv_min_[0], hsv_min_[1], hsv_min_[2],
                                         hsv_max_[0], hsv_max_[1], hsv_max_[2]);

    // Display
    if(display_result_)
    {
        cv::imshow("Line tracker", binary_image);
        cv::waitKey(1);
    }
}

void robocup::CameraLineTracker::initialize_node()
{
    // Publishers
    servo_pub_ = this->create_publisher<yahboomcar_msgs::msg::ServoControl>(
        "/servo",
        rclcpp::QoS(rclcpp::KeepLast(10)).reliable().durability_volatile()
    );

    motor_pub_ = this->create_publisher<geometry_msgs::msg::Twist>(
        "/cmd_vel",
        rclcpp::QoS(rclcpp::KeepLast(10)).reliable().durability_volatile()
    );

    // Subscribers
    image_sub_ = this->create_subscription<sensor_msgs::msg::Image>(
        "/image",
        rclcpp::QoS(rclcpp::KeepLast(1)).best_effort().durability_volatile(),
        std::bind(&CameraLineTracker::image_callback, this, _1)
    );
}

void robocup::CameraLineTracker::declare_parameters()
{
    // HSV threshold
    this->declare_parameter<std::vector<int64_t>>("hsv_min", {50, 71, 80});
    hsv_min_ = this->get_parameter("hsv_min").as_integer_array();

    this->declare_parameter<std::vector<int64_t>>("hsv_max", {87, 256, 256});
    hsv_max_ = this->get_parameter("hsv_max").as_integer_array();

    // Display result flag
    this->declare_parameter<bool>("display_result", false);
    display_result_ = this->get_parameter("display_result").as_bool();
}