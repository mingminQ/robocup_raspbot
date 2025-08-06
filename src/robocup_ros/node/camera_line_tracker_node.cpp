#include "robocup_ros/camera_line_tracker.hpp"

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::Node::SharedPtr node = std::make_shared<robocup::CameraLineTracker>();
    rclcpp::spin(node);

    rclcpp::shutdown();
    return 0;
}