// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__BUILDER_HPP_
#define ROBOCUP_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robocup_msgs/msg/detail/bounding_box2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robocup_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBox2D_size_y
{
public:
  explicit Init_BoundingBox2D_size_y(::robocup_msgs::msg::BoundingBox2D & msg)
  : msg_(msg)
  {}
  ::robocup_msgs::msg::BoundingBox2D size_y(::robocup_msgs::msg::BoundingBox2D::_size_y_type arg)
  {
    msg_.size_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_msgs::msg::BoundingBox2D msg_;
};

class Init_BoundingBox2D_size_x
{
public:
  explicit Init_BoundingBox2D_size_x(::robocup_msgs::msg::BoundingBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingBox2D_size_y size_x(::robocup_msgs::msg::BoundingBox2D::_size_x_type arg)
  {
    msg_.size_x = std::move(arg);
    return Init_BoundingBox2D_size_y(msg_);
  }

private:
  ::robocup_msgs::msg::BoundingBox2D msg_;
};

class Init_BoundingBox2D_center
{
public:
  Init_BoundingBox2D_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox2D_size_x center(::robocup_msgs::msg::BoundingBox2D::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_BoundingBox2D_size_x(msg_);
  }

private:
  ::robocup_msgs::msg::BoundingBox2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_msgs::msg::BoundingBox2D>()
{
  return robocup_msgs::msg::builder::Init_BoundingBox2D_center();
}

}  // namespace robocup_msgs

#endif  // ROBOCUP_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__BUILDER_HPP_
