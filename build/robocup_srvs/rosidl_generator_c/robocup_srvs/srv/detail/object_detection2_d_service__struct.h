// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_srvs:srv/ObjectDetection2DService.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SRVS__SRV__DETAIL__OBJECT_DETECTION2_D_SERVICE__STRUCT_H_
#define ROBOCUP_SRVS__SRV__DETAIL__OBJECT_DETECTION2_D_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ObjectDetection2DService in the package robocup_srvs.
typedef struct robocup_srvs__srv__ObjectDetection2DService_Request
{
  uint8_t structure_needs_at_least_one_member;
} robocup_srvs__srv__ObjectDetection2DService_Request;

// Struct for a sequence of robocup_srvs__srv__ObjectDetection2DService_Request.
typedef struct robocup_srvs__srv__ObjectDetection2DService_Request__Sequence
{
  robocup_srvs__srv__ObjectDetection2DService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_srvs__srv__ObjectDetection2DService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'detections'
#include "robocup_msgs/msg/detail/object_detection2_d_array__struct.h"

/// Struct defined in srv/ObjectDetection2DService in the package robocup_srvs.
typedef struct robocup_srvs__srv__ObjectDetection2DService_Response
{
  robocup_msgs__msg__ObjectDetection2DArray__Sequence detections;
} robocup_srvs__srv__ObjectDetection2DService_Response;

// Struct for a sequence of robocup_srvs__srv__ObjectDetection2DService_Response.
typedef struct robocup_srvs__srv__ObjectDetection2DService_Response__Sequence
{
  robocup_srvs__srv__ObjectDetection2DService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_srvs__srv__ObjectDetection2DService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SRVS__SRV__DETAIL__OBJECT_DETECTION2_D_SERVICE__STRUCT_H_
