// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_msgs:msg/ObjectDetection2D.idl
// generated code does not contain a copyright notice
#include "robocup_msgs/msg/detail/object_detection2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `bounding_box`
#include "robocup_msgs/msg/detail/bounding_box2_d__functions.h"

bool
robocup_msgs__msg__ObjectDetection2D__init(robocup_msgs__msg__ObjectDetection2D * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robocup_msgs__msg__ObjectDetection2D__fini(msg);
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    robocup_msgs__msg__ObjectDetection2D__fini(msg);
    return false;
  }
  // score
  // bounding_box
  if (!robocup_msgs__msg__BoundingBox2D__init(&msg->bounding_box)) {
    robocup_msgs__msg__ObjectDetection2D__fini(msg);
    return false;
  }
  return true;
}

void
robocup_msgs__msg__ObjectDetection2D__fini(robocup_msgs__msg__ObjectDetection2D * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // score
  // bounding_box
  robocup_msgs__msg__BoundingBox2D__fini(&msg->bounding_box);
}

bool
robocup_msgs__msg__ObjectDetection2D__are_equal(const robocup_msgs__msg__ObjectDetection2D * lhs, const robocup_msgs__msg__ObjectDetection2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // bounding_box
  if (!robocup_msgs__msg__BoundingBox2D__are_equal(
      &(lhs->bounding_box), &(rhs->bounding_box)))
  {
    return false;
  }
  return true;
}

bool
robocup_msgs__msg__ObjectDetection2D__copy(
  const robocup_msgs__msg__ObjectDetection2D * input,
  robocup_msgs__msg__ObjectDetection2D * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // score
  output->score = input->score;
  // bounding_box
  if (!robocup_msgs__msg__BoundingBox2D__copy(
      &(input->bounding_box), &(output->bounding_box)))
  {
    return false;
  }
  return true;
}

robocup_msgs__msg__ObjectDetection2D *
robocup_msgs__msg__ObjectDetection2D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_msgs__msg__ObjectDetection2D * msg = (robocup_msgs__msg__ObjectDetection2D *)allocator.allocate(sizeof(robocup_msgs__msg__ObjectDetection2D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_msgs__msg__ObjectDetection2D));
  bool success = robocup_msgs__msg__ObjectDetection2D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_msgs__msg__ObjectDetection2D__destroy(robocup_msgs__msg__ObjectDetection2D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_msgs__msg__ObjectDetection2D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_msgs__msg__ObjectDetection2D__Sequence__init(robocup_msgs__msg__ObjectDetection2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_msgs__msg__ObjectDetection2D * data = NULL;

  if (size) {
    data = (robocup_msgs__msg__ObjectDetection2D *)allocator.zero_allocate(size, sizeof(robocup_msgs__msg__ObjectDetection2D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_msgs__msg__ObjectDetection2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_msgs__msg__ObjectDetection2D__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robocup_msgs__msg__ObjectDetection2D__Sequence__fini(robocup_msgs__msg__ObjectDetection2D__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robocup_msgs__msg__ObjectDetection2D__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robocup_msgs__msg__ObjectDetection2D__Sequence *
robocup_msgs__msg__ObjectDetection2D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_msgs__msg__ObjectDetection2D__Sequence * array = (robocup_msgs__msg__ObjectDetection2D__Sequence *)allocator.allocate(sizeof(robocup_msgs__msg__ObjectDetection2D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_msgs__msg__ObjectDetection2D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_msgs__msg__ObjectDetection2D__Sequence__destroy(robocup_msgs__msg__ObjectDetection2D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_msgs__msg__ObjectDetection2D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_msgs__msg__ObjectDetection2D__Sequence__are_equal(const robocup_msgs__msg__ObjectDetection2D__Sequence * lhs, const robocup_msgs__msg__ObjectDetection2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_msgs__msg__ObjectDetection2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_msgs__msg__ObjectDetection2D__Sequence__copy(
  const robocup_msgs__msg__ObjectDetection2D__Sequence * input,
  robocup_msgs__msg__ObjectDetection2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_msgs__msg__ObjectDetection2D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robocup_msgs__msg__ObjectDetection2D * data =
      (robocup_msgs__msg__ObjectDetection2D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_msgs__msg__ObjectDetection2D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robocup_msgs__msg__ObjectDetection2D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocup_msgs__msg__ObjectDetection2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
