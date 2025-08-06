// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_msgs:msg/ObjectDetection2D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_msgs/msg/detail/object_detection2_d__rosidl_typesupport_introspection_c.h"
#include "robocup_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_msgs/msg/detail/object_detection2_d__functions.h"
#include "robocup_msgs/msg/detail/object_detection2_d__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `bounding_box`
#include "robocup_msgs/msg/bounding_box2_d.h"
// Member `bounding_box`
#include "robocup_msgs/msg/detail/bounding_box2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_msgs__msg__ObjectDetection2D__init(message_memory);
}

void robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_fini_function(void * message_memory)
{
  robocup_msgs__msg__ObjectDetection2D__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_msgs__msg__ObjectDetection2D, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_msgs__msg__ObjectDetection2D, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_msgs__msg__ObjectDetection2D, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_box",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_msgs__msg__ObjectDetection2D, bounding_box),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_message_members = {
  "robocup_msgs__msg",  // message namespace
  "ObjectDetection2D",  // message name
  4,  // number of fields
  sizeof(robocup_msgs__msg__ObjectDetection2D),
  robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_message_member_array,  // message members
  robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_init_function,  // function to initialize message memory (memory has to be allocated)
  robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_message_type_support_handle = {
  0,
  &robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_msgs, msg, ObjectDetection2D)() {
  robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_msgs, msg, BoundingBox2D)();
  if (!robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_message_type_support_handle.typesupport_identifier) {
    robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robocup_msgs__msg__ObjectDetection2D__rosidl_typesupport_introspection_c__ObjectDetection2D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
