// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_msgs:msg/ObjectDetection2DArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_msgs/msg/detail/object_detection2_d_array__rosidl_typesupport_introspection_c.h"
#include "robocup_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_msgs/msg/detail/object_detection2_d_array__functions.h"
#include "robocup_msgs/msg/detail/object_detection2_d_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `detections`
#include "robocup_msgs/msg/object_detection2_d.h"
// Member `detections`
#include "robocup_msgs/msg/detail/object_detection2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_msgs__msg__ObjectDetection2DArray__init(message_memory);
}

void robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_fini_function(void * message_memory)
{
  robocup_msgs__msg__ObjectDetection2DArray__fini(message_memory);
}

size_t robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__size_function__ObjectDetection2DArray__detections(
  const void * untyped_member)
{
  const robocup_msgs__msg__ObjectDetection2D__Sequence * member =
    (const robocup_msgs__msg__ObjectDetection2D__Sequence *)(untyped_member);
  return member->size;
}

const void * robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__get_const_function__ObjectDetection2DArray__detections(
  const void * untyped_member, size_t index)
{
  const robocup_msgs__msg__ObjectDetection2D__Sequence * member =
    (const robocup_msgs__msg__ObjectDetection2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__get_function__ObjectDetection2DArray__detections(
  void * untyped_member, size_t index)
{
  robocup_msgs__msg__ObjectDetection2D__Sequence * member =
    (robocup_msgs__msg__ObjectDetection2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__fetch_function__ObjectDetection2DArray__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robocup_msgs__msg__ObjectDetection2D * item =
    ((const robocup_msgs__msg__ObjectDetection2D *)
    robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__get_const_function__ObjectDetection2DArray__detections(untyped_member, index));
  robocup_msgs__msg__ObjectDetection2D * value =
    (robocup_msgs__msg__ObjectDetection2D *)(untyped_value);
  *value = *item;
}

void robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__assign_function__ObjectDetection2DArray__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robocup_msgs__msg__ObjectDetection2D * item =
    ((robocup_msgs__msg__ObjectDetection2D *)
    robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__get_function__ObjectDetection2DArray__detections(untyped_member, index));
  const robocup_msgs__msg__ObjectDetection2D * value =
    (const robocup_msgs__msg__ObjectDetection2D *)(untyped_value);
  *item = *value;
}

bool robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__resize_function__ObjectDetection2DArray__detections(
  void * untyped_member, size_t size)
{
  robocup_msgs__msg__ObjectDetection2D__Sequence * member =
    (robocup_msgs__msg__ObjectDetection2D__Sequence *)(untyped_member);
  robocup_msgs__msg__ObjectDetection2D__Sequence__fini(member);
  return robocup_msgs__msg__ObjectDetection2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_msgs__msg__ObjectDetection2DArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_msgs__msg__ObjectDetection2DArray, detections),  // bytes offset in struct
    NULL,  // default value
    robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__size_function__ObjectDetection2DArray__detections,  // size() function pointer
    robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__get_const_function__ObjectDetection2DArray__detections,  // get_const(index) function pointer
    robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__get_function__ObjectDetection2DArray__detections,  // get(index) function pointer
    robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__fetch_function__ObjectDetection2DArray__detections,  // fetch(index, &value) function pointer
    robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__assign_function__ObjectDetection2DArray__detections,  // assign(index, value) function pointer
    robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__resize_function__ObjectDetection2DArray__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_message_members = {
  "robocup_msgs__msg",  // message namespace
  "ObjectDetection2DArray",  // message name
  2,  // number of fields
  sizeof(robocup_msgs__msg__ObjectDetection2DArray),
  robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_message_member_array,  // message members
  robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_message_type_support_handle = {
  0,
  &robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_msgs, msg, ObjectDetection2DArray)() {
  robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_msgs, msg, ObjectDetection2D)();
  if (!robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_message_type_support_handle.typesupport_identifier) {
    robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robocup_msgs__msg__ObjectDetection2DArray__rosidl_typesupport_introspection_c__ObjectDetection2DArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
