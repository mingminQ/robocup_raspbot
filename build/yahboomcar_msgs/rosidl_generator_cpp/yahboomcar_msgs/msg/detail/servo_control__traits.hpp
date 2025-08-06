// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yahboomcar_msgs:msg/ServoControl.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__MSG__DETAIL__SERVO_CONTROL__TRAITS_HPP_
#define YAHBOOMCAR_MSGS__MSG__DETAIL__SERVO_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yahboomcar_msgs/msg/detail/servo_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yahboomcar_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: servo_s1
  {
    out << "servo_s1: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_s1, out);
    out << ", ";
  }

  // member: servo_s2
  {
    out << "servo_s2: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_s2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: servo_s1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_s1: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_s1, out);
    out << "\n";
  }

  // member: servo_s2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_s2: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_s2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace yahboomcar_msgs

namespace rosidl_generator_traits
{

[[deprecated("use yahboomcar_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yahboomcar_msgs::msg::ServoControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  yahboomcar_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yahboomcar_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const yahboomcar_msgs::msg::ServoControl & msg)
{
  return yahboomcar_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yahboomcar_msgs::msg::ServoControl>()
{
  return "yahboomcar_msgs::msg::ServoControl";
}

template<>
inline const char * name<yahboomcar_msgs::msg::ServoControl>()
{
  return "yahboomcar_msgs/msg/ServoControl";
}

template<>
struct has_fixed_size<yahboomcar_msgs::msg::ServoControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yahboomcar_msgs::msg::ServoControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yahboomcar_msgs::msg::ServoControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YAHBOOMCAR_MSGS__MSG__DETAIL__SERVO_CONTROL__TRAITS_HPP_
