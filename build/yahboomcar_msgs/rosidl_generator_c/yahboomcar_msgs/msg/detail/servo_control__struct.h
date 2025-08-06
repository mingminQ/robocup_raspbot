// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yahboomcar_msgs:msg/ServoControl.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__MSG__DETAIL__SERVO_CONTROL__STRUCT_H_
#define YAHBOOMCAR_MSGS__MSG__DETAIL__SERVO_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ServoControl in the package yahboomcar_msgs.
typedef struct yahboomcar_msgs__msg__ServoControl
{
  int32_t servo_s1;
  int32_t servo_s2;
} yahboomcar_msgs__msg__ServoControl;

// Struct for a sequence of yahboomcar_msgs__msg__ServoControl.
typedef struct yahboomcar_msgs__msg__ServoControl__Sequence
{
  yahboomcar_msgs__msg__ServoControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboomcar_msgs__msg__ServoControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YAHBOOMCAR_MSGS__MSG__DETAIL__SERVO_CONTROL__STRUCT_H_
