// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_msgs:msg/ObjectDetection2D.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__BUILDER_HPP_
#define ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robocup_msgs/msg/detail/object_detection2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robocup_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectDetection2D_bounding_box
{
public:
  explicit Init_ObjectDetection2D_bounding_box(::robocup_msgs::msg::ObjectDetection2D & msg)
  : msg_(msg)
  {}
  ::robocup_msgs::msg::ObjectDetection2D bounding_box(::robocup_msgs::msg::ObjectDetection2D::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_msgs::msg::ObjectDetection2D msg_;
};

class Init_ObjectDetection2D_score
{
public:
  explicit Init_ObjectDetection2D_score(::robocup_msgs::msg::ObjectDetection2D & msg)
  : msg_(msg)
  {}
  Init_ObjectDetection2D_bounding_box score(::robocup_msgs::msg::ObjectDetection2D::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_ObjectDetection2D_bounding_box(msg_);
  }

private:
  ::robocup_msgs::msg::ObjectDetection2D msg_;
};

class Init_ObjectDetection2D_label
{
public:
  explicit Init_ObjectDetection2D_label(::robocup_msgs::msg::ObjectDetection2D & msg)
  : msg_(msg)
  {}
  Init_ObjectDetection2D_score label(::robocup_msgs::msg::ObjectDetection2D::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_ObjectDetection2D_score(msg_);
  }

private:
  ::robocup_msgs::msg::ObjectDetection2D msg_;
};

class Init_ObjectDetection2D_header
{
public:
  Init_ObjectDetection2D_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectDetection2D_label header(::robocup_msgs::msg::ObjectDetection2D::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectDetection2D_label(msg_);
  }

private:
  ::robocup_msgs::msg::ObjectDetection2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_msgs::msg::ObjectDetection2D>()
{
  return robocup_msgs::msg::builder::Init_ObjectDetection2D_header();
}

}  // namespace robocup_msgs

#endif  // ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__BUILDER_HPP_
