// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_msgs:msg/ObjectDetection2DArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D_ARRAY__STRUCT_HPP_
#define ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'detections'
#include "robocup_msgs/msg/detail/object_detection2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_msgs__msg__ObjectDetection2DArray __attribute__((deprecated))
#else
# define DEPRECATED__robocup_msgs__msg__ObjectDetection2DArray __declspec(deprecated)
#endif

namespace robocup_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectDetection2DArray_
{
  using Type = ObjectDetection2DArray_<ContainerAllocator>;

  explicit ObjectDetection2DArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ObjectDetection2DArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _detections_type =
    std::vector<robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator>>>;
  _detections_type detections;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__detections(
    const std::vector<robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator>>> & _arg)
  {
    this->detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_msgs__msg__ObjectDetection2DArray
    std::shared_ptr<robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_msgs__msg__ObjectDetection2DArray
    std::shared_ptr<robocup_msgs::msg::ObjectDetection2DArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDetection2DArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->detections != other.detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDetection2DArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDetection2DArray_

// alias to use template instance with default allocator
using ObjectDetection2DArray =
  robocup_msgs::msg::ObjectDetection2DArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_msgs

#endif  // ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D_ARRAY__STRUCT_HPP_
