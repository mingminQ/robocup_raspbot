// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yahboomcar_msgs:msg/ServoControl.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__MSG__DETAIL__SERVO_CONTROL__STRUCT_HPP_
#define YAHBOOMCAR_MSGS__MSG__DETAIL__SERVO_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yahboomcar_msgs__msg__ServoControl __attribute__((deprecated))
#else
# define DEPRECATED__yahboomcar_msgs__msg__ServoControl __declspec(deprecated)
#endif

namespace yahboomcar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoControl_
{
  using Type = ServoControl_<ContainerAllocator>;

  explicit ServoControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_s1 = 0l;
      this->servo_s2 = 0l;
    }
  }

  explicit ServoControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_s1 = 0l;
      this->servo_s2 = 0l;
    }
  }

  // field types and members
  using _servo_s1_type =
    int32_t;
  _servo_s1_type servo_s1;
  using _servo_s2_type =
    int32_t;
  _servo_s2_type servo_s2;

  // setters for named parameter idiom
  Type & set__servo_s1(
    const int32_t & _arg)
  {
    this->servo_s1 = _arg;
    return *this;
  }
  Type & set__servo_s2(
    const int32_t & _arg)
  {
    this->servo_s2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yahboomcar_msgs::msg::ServoControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const yahboomcar_msgs::msg::ServoControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yahboomcar_msgs::msg::ServoControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yahboomcar_msgs::msg::ServoControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yahboomcar_msgs::msg::ServoControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yahboomcar_msgs::msg::ServoControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yahboomcar_msgs::msg::ServoControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yahboomcar_msgs::msg::ServoControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yahboomcar_msgs::msg::ServoControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yahboomcar_msgs::msg::ServoControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yahboomcar_msgs__msg__ServoControl
    std::shared_ptr<yahboomcar_msgs::msg::ServoControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yahboomcar_msgs__msg__ServoControl
    std::shared_ptr<yahboomcar_msgs::msg::ServoControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoControl_ & other) const
  {
    if (this->servo_s1 != other.servo_s1) {
      return false;
    }
    if (this->servo_s2 != other.servo_s2) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoControl_

// alias to use template instance with default allocator
using ServoControl =
  yahboomcar_msgs::msg::ServoControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yahboomcar_msgs

#endif  // YAHBOOMCAR_MSGS__MSG__DETAIL__SERVO_CONTROL__STRUCT_HPP_
