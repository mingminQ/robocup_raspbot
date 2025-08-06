// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_msgs:msg/ObjectDetection2D.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__STRUCT_HPP_
#define ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__STRUCT_HPP_

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
// Member 'bounding_box'
#include "robocup_msgs/msg/detail/bounding_box2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_msgs__msg__ObjectDetection2D __attribute__((deprecated))
#else
# define DEPRECATED__robocup_msgs__msg__ObjectDetection2D __declspec(deprecated)
#endif

namespace robocup_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectDetection2D_
{
  using Type = ObjectDetection2D_<ContainerAllocator>;

  explicit ObjectDetection2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    bounding_box(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->score = 0.0;
    }
  }

  explicit ObjectDetection2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    label(_alloc),
    bounding_box(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->score = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _score_type =
    double;
  _score_type score;
  using _bounding_box_type =
    robocup_msgs::msg::BoundingBox2D_<ContainerAllocator>;
  _bounding_box_type bounding_box;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__bounding_box(
    const robocup_msgs::msg::BoundingBox2D_<ContainerAllocator> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_msgs__msg__ObjectDetection2D
    std::shared_ptr<robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_msgs__msg__ObjectDetection2D
    std::shared_ptr<robocup_msgs::msg::ObjectDetection2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDetection2D_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDetection2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDetection2D_

// alias to use template instance with default allocator
using ObjectDetection2D =
  robocup_msgs::msg::ObjectDetection2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_msgs

#endif  // ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__STRUCT_HPP_
