// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_msgs:msg/ObjectDetection2D.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__STRUCT_H_
#define ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__STRUCT_H_

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
// Member 'label'
#include "rosidl_runtime_c/string.h"
// Member 'bounding_box'
#include "robocup_msgs/msg/detail/bounding_box2_d__struct.h"

/// Struct defined in msg/ObjectDetection2D in the package robocup_msgs.
/**
  * ObjectDetection2D.msg
 */
typedef struct robocup_msgs__msg__ObjectDetection2D
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String label;
  double score;
  robocup_msgs__msg__BoundingBox2D bounding_box;
} robocup_msgs__msg__ObjectDetection2D;

// Struct for a sequence of robocup_msgs__msg__ObjectDetection2D.
typedef struct robocup_msgs__msg__ObjectDetection2D__Sequence
{
  robocup_msgs__msg__ObjectDetection2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_msgs__msg__ObjectDetection2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__STRUCT_H_
