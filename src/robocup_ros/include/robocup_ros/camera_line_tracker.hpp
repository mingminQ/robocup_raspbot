#ifndef ROBOCUP_ROS_CAMERA_LINE_TRACKER_HPP_
#define ROBOCUP_ROS_CAMERA_LINE_TRACKER_HPP_

#include "yahboomcar_msgs/msg/servo_control.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "rclcpp/rclcpp.hpp"

#include <string>
#include <vector>

namespace robocup
{
    class CameraLineTracker : public rclcpp::Node
    {
    public:

        CameraLineTracker();

        ~CameraLineTracker() = default;

    private:
        
        void image_callback(const sensor_msgs::msg::Image &msg);

        void initialize_node();

        void declare_parameters();

    private:

        // Publishers
        rclcpp::Publisher<yahboomcar_msgs::msg::ServoControl>::SharedPtr servo_pub_;
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr motor_pub_;

        // Subscribers
        rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr image_sub_;

        // Image threshold
        std::vector<int64_t> hsv_min_;
        std::vector<int64_t> hsv_max_;

        // Display result flag
        bool display_result_;

    }; // class CameraLineTracker

} // namespace robocup

#endif // ROBOCUP_ROS_CAMERA_LINE_TRACKER_HPP_