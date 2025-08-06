// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yahboomcar_msgs:msg/ServoControl.idl
// generated code does not contain a copyright notice
#include "yahboomcar_msgs/msg/detail/servo_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yahboomcar_msgs__msg__ServoControl__init(yahboomcar_msgs__msg__ServoControl * msg)
{
  if (!msg) {
    return false;
  }
  // servo_s1
  // servo_s2
  return true;
}

void
yahboomcar_msgs__msg__ServoControl__fini(yahboomcar_msgs__msg__ServoControl * msg)
{
  if (!msg) {
    return;
  }
  // servo_s1
  // servo_s2
}

bool
yahboomcar_msgs__msg__ServoControl__are_equal(const yahboomcar_msgs__msg__ServoControl * lhs, const yahboomcar_msgs__msg__ServoControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // servo_s1
  if (lhs->servo_s1 != rhs->servo_s1) {
    return false;
  }
  // servo_s2
  if (lhs->servo_s2 != rhs->servo_s2) {
    return false;
  }
  return true;
}

bool
yahboomcar_msgs__msg__ServoControl__copy(
  const yahboomcar_msgs__msg__ServoControl * input,
  yahboomcar_msgs__msg__ServoControl * output)
{
  if (!input || !output) {
    return false;
  }
  // servo_s1
  output->servo_s1 = input->servo_s1;
  // servo_s2
  output->servo_s2 = input->servo_s2;
  return true;
}

yahboomcar_msgs__msg__ServoControl *
yahboomcar_msgs__msg__ServoControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboomcar_msgs__msg__ServoControl * msg = (yahboomcar_msgs__msg__ServoControl *)allocator.allocate(sizeof(yahboomcar_msgs__msg__ServoControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboomcar_msgs__msg__ServoControl));
  bool success = yahboomcar_msgs__msg__ServoControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboomcar_msgs__msg__ServoControl__destroy(yahboomcar_msgs__msg__ServoControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboomcar_msgs__msg__ServoControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboomcar_msgs__msg__ServoControl__Sequence__init(yahboomcar_msgs__msg__ServoControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboomcar_msgs__msg__ServoControl * data = NULL;

  if (size) {
    data = (yahboomcar_msgs__msg__ServoControl *)allocator.zero_allocate(size, sizeof(yahboomcar_msgs__msg__ServoControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboomcar_msgs__msg__ServoControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboomcar_msgs__msg__ServoControl__fini(&data[i - 1]);
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
yahboomcar_msgs__msg__ServoControl__Sequence__fini(yahboomcar_msgs__msg__ServoControl__Sequence * array)
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
      yahboomcar_msgs__msg__ServoControl__fini(&array->data[i]);
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

yahboomcar_msgs__msg__ServoControl__Sequence *
yahboomcar_msgs__msg__ServoControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboomcar_msgs__msg__ServoControl__Sequence * array = (yahboomcar_msgs__msg__ServoControl__Sequence *)allocator.allocate(sizeof(yahboomcar_msgs__msg__ServoControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboomcar_msgs__msg__ServoControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboomcar_msgs__msg__ServoControl__Sequence__destroy(yahboomcar_msgs__msg__ServoControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboomcar_msgs__msg__ServoControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboomcar_msgs__msg__ServoControl__Sequence__are_equal(const yahboomcar_msgs__msg__ServoControl__Sequence * lhs, const yahboomcar_msgs__msg__ServoControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboomcar_msgs__msg__ServoControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboomcar_msgs__msg__ServoControl__Sequence__copy(
  const yahboomcar_msgs__msg__ServoControl__Sequence * input,
  yahboomcar_msgs__msg__ServoControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboomcar_msgs__msg__ServoControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboomcar_msgs__msg__ServoControl * data =
      (yahboomcar_msgs__msg__ServoControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboomcar_msgs__msg__ServoControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboomcar_msgs__msg__ServoControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboomcar_msgs__msg__ServoControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
