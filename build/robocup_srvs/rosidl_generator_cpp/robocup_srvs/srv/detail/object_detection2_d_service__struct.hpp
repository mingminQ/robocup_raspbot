// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_srvs:srv/ObjectDetection2DService.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SRVS__SRV__DETAIL__OBJECT_DETECTION2_D_SERVICE__STRUCT_HPP_
#define ROBOCUP_SRVS__SRV__DETAIL__OBJECT_DETECTION2_D_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robocup_srvs__srv__ObjectDetection2DService_Request __attribute__((deprecated))
#else
# define DEPRECATED__robocup_srvs__srv__ObjectDetection2DService_Request __declspec(deprecated)
#endif

namespace robocup_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ObjectDetection2DService_Request_
{
  using Type = ObjectDetection2DService_Request_<ContainerAllocator>;

  explicit ObjectDetection2DService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ObjectDetection2DService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    robocup_srvs::srv::ObjectDetection2DService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_srvs::srv::ObjectDetection2DService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_srvs::srv::ObjectDetection2DService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_srvs::srv::ObjectDetection2DService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_srvs::srv::ObjectDetection2DService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_srvs::srv::ObjectDetection2DService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_srvs::srv::ObjectDetection2DService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_srvs::srv::ObjectDetection2DService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_srvs::srv::ObjectDetection2DService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_srvs::srv::ObjectDetection2DService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_srvs__srv__ObjectDetection2DService_Request
    std::shared_ptr<robocup_srvs::srv::ObjectDetection2DService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_srvs__srv__ObjectDetection2DService_Request
    std::shared_ptr<robocup_srvs::srv::ObjectDetection2DService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDetection2DService_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDetection2DService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDetection2DService_Request_

// alias to use template instance with default allocator
using ObjectDetection2DService_Request =
  robocup_srvs::srv::ObjectDetection2DService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robocup_srvs


// Include directives for member types
// Member 'detections'
#include "robocup_msgs/msg/detail/object_detection2_d_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_srvs__srv__ObjectDetection2DService_Response __attribute__((deprecated))
#else
# define DEPRECATED__robocup_srvs__srv__ObjectDetection2DService_Response __declspec(deprecated)
#endif

namespace robocup_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ObjectDetection2DService_Response_
{
  using Type = ObjectDetection2DService_Response_<ContainerAllocator>;

  explicit ObjectDetection2DService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ObjectDetection2DService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _detections_type =
    std::vector<robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator>>>;
  _detections_type detections;

  // setters for named parameter idiom
  Type & set__detections(
    const std::vector<robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator>>> & _arg)
  {
    this->detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_srvs::srv::ObjectDetection2DService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_srvs::srv::ObjectDetection2DService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_srvs::srv::ObjectDetection2DService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_srvs::srv::ObjectDetection2DService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_srvs::srv::ObjectDetection2DService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_srvs::srv::ObjectDetection2DService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_srvs::srv::ObjectDetection2DService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_srvs::srv::ObjectDetection2DService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_srvs::srv::ObjectDetection2DService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_srvs::srv::ObjectDetection2DService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_srvs__srv__ObjectDetection2DService_Response
    std::shared_ptr<robocup_srvs::srv::ObjectDetection2DService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_srvs__srv__ObjectDetection2DService_Response
    std::shared_ptr<robocup_srvs::srv::ObjectDetection2DService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDetection2DService_Response_ & other) const
  {
    if (this->detections != other.detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDetection2DService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDetection2DService_Response_

// alias to use template instance with default allocator
using ObjectDetection2DService_Response =
  robocup_srvs::srv::ObjectDetection2DService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robocup_srvs

namespace robocup_srvs
{

namespace srv
{

struct ObjectDetection2DService
{
  using Request = robocup_srvs::srv::ObjectDetection2DService_Request;
  using Response = robocup_srvs::srv::ObjectDetection2DService_Response;
};

}  // namespace srv

}  // namespace robocup_srvs

#endif  // ROBOCUP_SRVS__SRV__DETAIL__OBJECT_DETECTION2_D_SERVICE__STRUCT_HPP_
