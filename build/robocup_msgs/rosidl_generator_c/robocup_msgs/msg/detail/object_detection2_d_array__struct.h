// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_msgs:msg/ObjectDetection2DArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D_ARRAY__STRUCT_H_
#define ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'detections'
#include "robocup_msgs/msg/detail/object_detection2_d__struct.h"

/// Struct defined in msg/ObjectDetection2DArray in the package robocup_msgs.
/**
  * ObjectDetection2DArray.msg
 */
typedef struct robocup_msgs__msg__ObjectDetection2DArray
{
  std_msgs__msg__Header header;
  robocup_msgs__msg__ObjectDetection2D__Sequence detections;
} robocup_msgs__msg__ObjectDetection2DArray;

// Struct for a sequence of robocup_msgs__msg__ObjectDetection2DArray.
typedef struct robocup_msgs__msg__ObjectDetection2DArray__Sequence
{
  robocup_msgs__msg__ObjectDetection2DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_msgs__msg__ObjectDetection2DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D_ARRAY__STRUCT_H_
