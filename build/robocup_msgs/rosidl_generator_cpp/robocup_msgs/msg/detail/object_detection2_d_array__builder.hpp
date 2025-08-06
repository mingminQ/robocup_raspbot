// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_msgs:msg/ObjectDetection2DArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D_ARRAY__BUILDER_HPP_
#define ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robocup_msgs/msg/detail/object_detection2_d_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robocup_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectDetection2DArray_detections
{
public:
  explicit Init_ObjectDetection2DArray_detections(::robocup_msgs::msg::ObjectDetection2DArray & msg)
  : msg_(msg)
  {}
  ::robocup_msgs::msg::ObjectDetection2DArray detections(::robocup_msgs::msg::ObjectDetection2DArray::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_msgs::msg::ObjectDetection2DArray msg_;
};

class Init_ObjectDetection2DArray_header
{
public:
  Init_ObjectDetection2DArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectDetection2DArray_detections header(::robocup_msgs::msg::ObjectDetection2DArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectDetection2DArray_detections(msg_);
  }

private:
  ::robocup_msgs::msg::ObjectDetection2DArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_msgs::msg::ObjectDetection2DArray>()
{
  return robocup_msgs::msg::builder::Init_ObjectDetection2DArray_header();
}

}  // namespace robocup_msgs

#endif  // ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D_ARRAY__BUILDER_HPP_
