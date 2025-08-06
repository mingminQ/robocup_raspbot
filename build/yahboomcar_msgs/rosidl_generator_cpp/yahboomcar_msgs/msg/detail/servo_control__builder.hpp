// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yahboomcar_msgs:msg/ServoControl.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__MSG__DETAIL__SERVO_CONTROL__BUILDER_HPP_
#define YAHBOOMCAR_MSGS__MSG__DETAIL__SERVO_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yahboomcar_msgs/msg/detail/servo_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yahboomcar_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoControl_servo_s2
{
public:
  explicit Init_ServoControl_servo_s2(::yahboomcar_msgs::msg::ServoControl & msg)
  : msg_(msg)
  {}
  ::yahboomcar_msgs::msg::ServoControl servo_s2(::yahboomcar_msgs::msg::ServoControl::_servo_s2_type arg)
  {
    msg_.servo_s2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboomcar_msgs::msg::ServoControl msg_;
};

class Init_ServoControl_servo_s1
{
public:
  Init_ServoControl_servo_s1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoControl_servo_s2 servo_s1(::yahboomcar_msgs::msg::ServoControl::_servo_s1_type arg)
  {
    msg_.servo_s1 = std::move(arg);
    return Init_ServoControl_servo_s2(msg_);
  }

private:
  ::yahboomcar_msgs::msg::ServoControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboomcar_msgs::msg::ServoControl>()
{
  return yahboomcar_msgs::msg::builder::Init_ServoControl_servo_s1();
}

}  // namespace yahboomcar_msgs

#endif  // YAHBOOMCAR_MSGS__MSG__DETAIL__SERVO_CONTROL__BUILDER_HPP_
