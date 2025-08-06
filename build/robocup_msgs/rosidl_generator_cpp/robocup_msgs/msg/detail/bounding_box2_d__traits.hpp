// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robocup_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_
#define ROBOCUP_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robocup_msgs/msg/detail/bounding_box2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace robocup_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundingBox2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: size_x
  {
    out << "size_x: ";
    rosidl_generator_traits::value_to_yaml(msg.size_x, out);
    out << ", ";
  }

  // member: size_y
  {
    out << "size_y: ";
    rosidl_generator_traits::value_to_yaml(msg.size_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundingBox2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: size_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size_x: ";
    rosidl_generator_traits::value_to_yaml(msg.size_x, out);
    out << "\n";
  }

  // member: size_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size_y: ";
    rosidl_generator_traits::value_to_yaml(msg.size_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingBox2D & msg, bool use_flow_style = false)
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

}  // namespace robocup_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robocup_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robocup_msgs::msg::BoundingBox2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  robocup_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robocup_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robocup_msgs::msg::BoundingBox2D & msg)
{
  return robocup_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robocup_msgs::msg::BoundingBox2D>()
{
  return "robocup_msgs::msg::BoundingBox2D";
}

template<>
inline const char * name<robocup_msgs::msg::BoundingBox2D>()
{
  return "robocup_msgs/msg/BoundingBox2D";
}

template<>
struct has_fixed_size<robocup_msgs::msg::BoundingBox2D>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct has_bounded_size<robocup_msgs::msg::BoundingBox2D>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct is_message<robocup_msgs::msg::BoundingBox2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOCUP_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_
