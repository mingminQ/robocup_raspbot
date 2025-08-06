// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_srvs:srv/ObjectDetection2DService.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SRVS__SRV__DETAIL__OBJECT_DETECTION2_D_SERVICE__BUILDER_HPP_
#define ROBOCUP_SRVS__SRV__DETAIL__OBJECT_DETECTION2_D_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robocup_srvs/srv/detail/object_detection2_d_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robocup_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_srvs::srv::ObjectDetection2DService_Request>()
{
  return ::robocup_srvs::srv::ObjectDetection2DService_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robocup_srvs


namespace robocup_srvs
{

namespace srv
{

namespace builder
{

class Init_ObjectDetection2DService_Response_detections
{
public:
  Init_ObjectDetection2DService_Response_detections()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robocup_srvs::srv::ObjectDetection2DService_Response detections(::robocup_srvs::srv::ObjectDetection2DService_Response::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_srvs::srv::ObjectDetection2DService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_srvs::srv::ObjectDetection2DService_Response>()
{
  return robocup_srvs::srv::builder::Init_ObjectDetection2DService_Response_detections();
}

}  // namespace robocup_srvs

#endif  // ROBOCUP_SRVS__SRV__DETAIL__OBJECT_DETECTION2_D_SERVICE__BUILDER_HPP_
