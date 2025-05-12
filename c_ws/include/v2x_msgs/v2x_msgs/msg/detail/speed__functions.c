// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/Speed.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `speed_value`
#include "v2x_msgs/msg/detail/speed_value__functions.h"
// Member `speed_confidence`
#include "v2x_msgs/msg/detail/speed_confidence__functions.h"

bool
v2x_msgs__msg__Speed__init(v2x_msgs__msg__Speed * msg)
{
  if (!msg) {
    return false;
  }
  // speed_value
  if (!v2x_msgs__msg__SpeedValue__init(&msg->speed_value)) {
    v2x_msgs__msg__Speed__fini(msg);
    return false;
  }
  // speed_confidence
  if (!v2x_msgs__msg__SpeedConfidence__init(&msg->speed_confidence)) {
    v2x_msgs__msg__Speed__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__Speed__fini(v2x_msgs__msg__Speed * msg)
{
  if (!msg) {
    return;
  }
  // speed_value
  v2x_msgs__msg__SpeedValue__fini(&msg->speed_value);
  // speed_confidence
  v2x_msgs__msg__SpeedConfidence__fini(&msg->speed_confidence);
}

bool
v2x_msgs__msg__Speed__are_equal(const v2x_msgs__msg__Speed * lhs, const v2x_msgs__msg__Speed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed_value
  if (!v2x_msgs__msg__SpeedValue__are_equal(
      &(lhs->speed_value), &(rhs->speed_value)))
  {
    return false;
  }
  // speed_confidence
  if (!v2x_msgs__msg__SpeedConfidence__are_equal(
      &(lhs->speed_confidence), &(rhs->speed_confidence)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__Speed__copy(
  const v2x_msgs__msg__Speed * input,
  v2x_msgs__msg__Speed * output)
{
  if (!input || !output) {
    return false;
  }
  // speed_value
  if (!v2x_msgs__msg__SpeedValue__copy(
      &(input->speed_value), &(output->speed_value)))
  {
    return false;
  }
  // speed_confidence
  if (!v2x_msgs__msg__SpeedConfidence__copy(
      &(input->speed_confidence), &(output->speed_confidence)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__Speed *
v2x_msgs__msg__Speed__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Speed * msg = (v2x_msgs__msg__Speed *)allocator.allocate(sizeof(v2x_msgs__msg__Speed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__Speed));
  bool success = v2x_msgs__msg__Speed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__Speed__destroy(v2x_msgs__msg__Speed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__Speed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__Speed__Sequence__init(v2x_msgs__msg__Speed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Speed * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__Speed *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__Speed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__Speed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__Speed__fini(&data[i - 1]);
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
v2x_msgs__msg__Speed__Sequence__fini(v2x_msgs__msg__Speed__Sequence * array)
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
      v2x_msgs__msg__Speed__fini(&array->data[i]);
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

v2x_msgs__msg__Speed__Sequence *
v2x_msgs__msg__Speed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Speed__Sequence * array = (v2x_msgs__msg__Speed__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__Speed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__Speed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__Speed__Sequence__destroy(v2x_msgs__msg__Speed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__Speed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__Speed__Sequence__are_equal(const v2x_msgs__msg__Speed__Sequence * lhs, const v2x_msgs__msg__Speed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__Speed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__Speed__Sequence__copy(
  const v2x_msgs__msg__Speed__Sequence * input,
  v2x_msgs__msg__Speed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__Speed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__Speed * data =
      (v2x_msgs__msg__Speed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__Speed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__Speed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__Speed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
