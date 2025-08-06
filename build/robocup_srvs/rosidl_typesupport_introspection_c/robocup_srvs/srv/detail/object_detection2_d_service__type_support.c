// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_srvs:srv/ObjectDetection2DService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_srvs/srv/detail/object_detection2_d_service__rosidl_typesupport_introspection_c.h"
#include "robocup_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_srvs/srv/detail/object_detection2_d_service__functions.h"
#include "robocup_srvs/srv/detail/object_detection2_d_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robocup_srvs__srv__ObjectDetection2DService_Request__rosidl_typesupport_introspection_c__ObjectDetection2DService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_srvs__srv__ObjectDetection2DService_Request__init(message_memory);
}

void robocup_srvs__srv__ObjectDetection2DService_Request__rosidl_typesupport_introspection_c__ObjectDetection2DService_Request_fini_function(void * message_memory)
{
  robocup_srvs__srv__ObjectDetection2DService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robocup_srvs__srv__ObjectDetection2DService_Request__rosidl_typesupport_introspection_c__ObjectDetection2DService_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_srvs__srv__ObjectDetection2DService_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robocup_srvs__srv__ObjectDetection2DService_Request__rosidl_typesupport_introspection_c__ObjectDetection2DService_Request_message_members = {
  "robocup_srvs__srv",  // message namespace
  "ObjectDetection2DService_Request",  // message name
  1,  // number of fields
  sizeof(robocup_srvs__srv__ObjectDetection2DService_Request),
  robocup_srvs__srv__ObjectDetection2DService_Request__rosidl_typesupport_introspection_c__ObjectDetection2DService_Request_message_member_array,  // message members
  robocup_srvs__srv__ObjectDetection2DService_Request__rosidl_typesupport_introspection_c__ObjectDetection2DService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robocup_srvs__srv__ObjectDetection2DService_Request__rosidl_typesupport_introspection_c__ObjectDetection2DService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robocup_srvs__srv__ObjectDetection2DService_Request__rosidl_typesupport_introspection_c__ObjectDetection2DService_Request_message_type_support_handle = {
  0,
  &robocup_srvs__srv__ObjectDetection2DService_Request__rosidl_typesupport_introspection_c__ObjectDetection2DService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_srvs, srv, ObjectDetection2DService_Request)() {
  if (!robocup_srvs__srv__ObjectDetection2DService_Request__rosidl_typesupport_introspection_c__ObjectDetection2DService_Request_message_type_support_handle.typesupport_identifier) {
    robocup_srvs__srv__ObjectDetection2DService_Request__rosidl_typesupport_introspection_c__ObjectDetection2DService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robocup_srvs__srv__ObjectDetection2DService_Request__rosidl_typesupport_introspection_c__ObjectDetection2DService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robocup_srvs/srv/detail/object_detection2_d_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robocup_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robocup_srvs/srv/detail/object_detection2_d_service__functions.h"
// already included above
// #include "robocup_srvs/srv/detail/object_detection2_d_service__struct.h"


// Include directives for member types
// Member `detections`
#include "robocup_msgs/msg/object_detection2_d_array.h"
// Member `detections`
#include "robocup_msgs/msg/detail/object_detection2_d_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_srvs__srv__ObjectDetection2DService_Response__init(message_memory);
}

void robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_fini_function(void * message_memory)
{
  robocup_srvs__srv__ObjectDetection2DService_Response__fini(message_memory);
}

size_t robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__size_function__ObjectDetection2DService_Response__detections(
  const void * untyped_member)
{
  const robocup_msgs__msg__ObjectDetection2DArray__Sequence * member =
    (const robocup_msgs__msg__ObjectDetection2DArray__Sequence *)(untyped_member);
  return member->size;
}

const void * robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__get_const_function__ObjectDetection2DService_Response__detections(
  const void * untyped_member, size_t index)
{
  const robocup_msgs__msg__ObjectDetection2DArray__Sequence * member =
    (const robocup_msgs__msg__ObjectDetection2DArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__get_function__ObjectDetection2DService_Response__detections(
  void * untyped_member, size_t index)
{
  robocup_msgs__msg__ObjectDetection2DArray__Sequence * member =
    (robocup_msgs__msg__ObjectDetection2DArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__fetch_function__ObjectDetection2DService_Response__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robocup_msgs__msg__ObjectDetection2DArray * item =
    ((const robocup_msgs__msg__ObjectDetection2DArray *)
    robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__get_const_function__ObjectDetection2DService_Response__detections(untyped_member, index));
  robocup_msgs__msg__ObjectDetection2DArray * value =
    (robocup_msgs__msg__ObjectDetection2DArray *)(untyped_value);
  *value = *item;
}

void robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__assign_function__ObjectDetection2DService_Response__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robocup_msgs__msg__ObjectDetection2DArray * item =
    ((robocup_msgs__msg__ObjectDetection2DArray *)
    robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__get_function__ObjectDetection2DService_Response__detections(untyped_member, index));
  const robocup_msgs__msg__ObjectDetection2DArray * value =
    (const robocup_msgs__msg__ObjectDetection2DArray *)(untyped_value);
  *item = *value;
}

bool robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__resize_function__ObjectDetection2DService_Response__detections(
  void * untyped_member, size_t size)
{
  robocup_msgs__msg__ObjectDetection2DArray__Sequence * member =
    (robocup_msgs__msg__ObjectDetection2DArray__Sequence *)(untyped_member);
  robocup_msgs__msg__ObjectDetection2DArray__Sequence__fini(member);
  return robocup_msgs__msg__ObjectDetection2DArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_message_member_array[1] = {
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_srvs__srv__ObjectDetection2DService_Response, detections),  // bytes offset in struct
    NULL,  // default value
    robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__size_function__ObjectDetection2DService_Response__detections,  // size() function pointer
    robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__get_const_function__ObjectDetection2DService_Response__detections,  // get_const(index) function pointer
    robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__get_function__ObjectDetection2DService_Response__detections,  // get(index) function pointer
    robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__fetch_function__ObjectDetection2DService_Response__detections,  // fetch(index, &value) function pointer
    robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__assign_function__ObjectDetection2DService_Response__detections,  // assign(index, value) function pointer
    robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__resize_function__ObjectDetection2DService_Response__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_message_members = {
  "robocup_srvs__srv",  // message namespace
  "ObjectDetection2DService_Response",  // message name
  1,  // number of fields
  sizeof(robocup_srvs__srv__ObjectDetection2DService_Response),
  robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_message_member_array,  // message members
  robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_message_type_support_handle = {
  0,
  &robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_srvs, srv, ObjectDetection2DService_Response)() {
  robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_msgs, msg, ObjectDetection2DArray)();
  if (!robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_message_type_support_handle.typesupport_identifier) {
    robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robocup_srvs__srv__ObjectDetection2DService_Response__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robocup_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robocup_srvs/srv/detail/object_detection2_d_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robocup_srvs__srv__detail__object_detection2_d_service__rosidl_typesupport_introspection_c__ObjectDetection2DService_service_members = {
  "robocup_srvs__srv",  // service namespace
  "ObjectDetection2DService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robocup_srvs__srv__detail__object_detection2_d_service__rosidl_typesupport_introspection_c__ObjectDetection2DService_Request_message_type_support_handle,
  NULL  // response message
  // robocup_srvs__srv__detail__object_detection2_d_service__rosidl_typesupport_introspection_c__ObjectDetection2DService_Response_message_type_support_handle
};

static rosidl_service_type_support_t robocup_srvs__srv__detail__object_detection2_d_service__rosidl_typesupport_introspection_c__ObjectDetection2DService_service_type_support_handle = {
  0,
  &robocup_srvs__srv__detail__object_detection2_d_service__rosidl_typesupport_introspection_c__ObjectDetection2DService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_srvs, srv, ObjectDetection2DService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_srvs, srv, ObjectDetection2DService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_srvs, srv, ObjectDetection2DService)() {
  if (!robocup_srvs__srv__detail__object_detection2_d_service__rosidl_typesupport_introspection_c__ObjectDetection2DService_service_type_support_handle.typesupport_identifier) {
    robocup_srvs__srv__detail__object_detection2_d_service__rosidl_typesupport_introspection_c__ObjectDetection2DService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robocup_srvs__srv__detail__object_detection2_d_service__rosidl_typesupport_introspection_c__ObjectDetection2DService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_srvs, srv, ObjectDetection2DService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_srvs, srv, ObjectDetection2DService_Response)()->data;
  }

  return &robocup_srvs__srv__detail__object_detection2_d_service__rosidl_typesupport_introspection_c__ObjectDetection2DService_service_type_support_handle;
}
