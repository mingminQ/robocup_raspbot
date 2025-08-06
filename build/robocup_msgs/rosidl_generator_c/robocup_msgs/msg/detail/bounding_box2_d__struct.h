// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_
#define ROBOCUP_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/BoundingBox2D in the package robocup_msgs.
/**
  * BoundingBox2D.msg
 */
typedef struct robocup_msgs__msg__BoundingBox2D
{
  geometry_msgs__msg__Pose2D center;
  double size_x;
  double size_y;
} robocup_msgs__msg__BoundingBox2D;

// Struct for a sequence of robocup_msgs__msg__BoundingBox2D.
typedef struct robocup_msgs__msg__BoundingBox2D__Sequence
{
  robocup_msgs__msg__BoundingBox2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_msgs__msg__BoundingBox2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_
