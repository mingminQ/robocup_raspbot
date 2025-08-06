// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robocup_srvs:srv/ObjectDetection2DService.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SRVS__SRV__DETAIL__OBJECT_DETECTION2_D_SERVICE__TRAITS_HPP_
#define ROBOCUP_SRVS__SRV__DETAIL__OBJECT_DETECTION2_D_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robocup_srvs/srv/detail/object_detection2_d_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robocup_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ObjectDetection2DService_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectDetection2DService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectDetection2DService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robocup_srvs

namespace rosidl_generator_traits
{

[[deprecated("use robocup_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robocup_srvs::srv::ObjectDetection2DService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robocup_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robocup_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robocup_srvs::srv::ObjectDetection2DService_Request & msg)
{
  return robocup_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robocup_srvs::srv::ObjectDetection2DService_Request>()
{
  return "robocup_srvs::srv::ObjectDetection2DService_Request";
}

template<>
inline const char * name<robocup_srvs::srv::ObjectDetection2DService_Request>()
{
  return "robocup_srvs/srv/ObjectDetection2DService_Request";
}

template<>
struct has_fixed_size<robocup_srvs::srv::ObjectDetection2DService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robocup_srvs::srv::ObjectDetection2DService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robocup_srvs::srv::ObjectDetection2DService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'detections'
#include "robocup_msgs/msg/detail/object_detection2_d_array__traits.hpp"

namespace robocup_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ObjectDetection2DService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: detections
  {
    if (msg.detections.size() == 0) {
      out << "detections: []";
    } else {
      out << "detections: [";
      size_t pending_items = msg.detections.size();
      for (auto item : msg.detections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectDetection2DService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectDetection2DService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robocup_srvs

namespace rosidl_generator_traits
{

[[deprecated("use robocup_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robocup_srvs::srv::ObjectDetection2DService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robocup_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robocup_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robocup_srvs::srv::ObjectDetection2DService_Response & msg)
{
  return robocup_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robocup_srvs::srv::ObjectDetection2DService_Response>()
{
  return "robocup_srvs::srv::ObjectDetection2DService_Response";
}

template<>
inline const char * name<robocup_srvs::srv::ObjectDetection2DService_Response>()
{
  return "robocup_srvs/srv/ObjectDetection2DService_Response";
}

template<>
struct has_fixed_size<robocup_srvs::srv::ObjectDetection2DService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robocup_srvs::srv::ObjectDetection2DService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robocup_srvs::srv::ObjectDetection2DService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robocup_srvs::srv::ObjectDetection2DService>()
{
  return "robocup_srvs::srv::ObjectDetection2DService";
}

template<>
inline const char * name<robocup_srvs::srv::ObjectDetection2DService>()
{
  return "robocup_srvs/srv/ObjectDetection2DService";
}

template<>
struct has_fixed_size<robocup_srvs::srv::ObjectDetection2DService>
  : std::integral_constant<
    bool,
    has_fixed_size<robocup_srvs::srv::ObjectDetection2DService_Request>::value &&
    has_fixed_size<robocup_srvs::srv::ObjectDetection2DService_Response>::value
  >
{
};

template<>
struct has_bounded_size<robocup_srvs::srv::ObjectDetection2DService>
  : std::integral_constant<
    bool,
    has_bounded_size<robocup_srvs::srv::ObjectDetection2DService_Request>::value &&
    has_bounded_size<robocup_srvs::srv::ObjectDetection2DService_Response>::value
  >
{
};

template<>
struct is_service<robocup_srvs::srv::ObjectDetection2DService>
  : std::true_type
{
};

template<>
struct is_service_request<robocup_srvs::srv::ObjectDetection2DService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robocup_srvs::srv::ObjectDetection2DService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOCUP_SRVS__SRV__DETAIL__OBJECT_DETECTION2_D_SERVICE__TRAITS_HPP_
