// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/LateralAcceleration.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/lateral_acceleration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lateral_acceleration_value`
#include "v2x_msgs/msg/detail/lateral_acceleration_value__functions.h"
// Member `lateral_acceleration_confidence`
#include "v2x_msgs/msg/detail/acceleration_confidence__functions.h"

bool
v2x_msgs__msg__LateralAcceleration__init(v2x_msgs__msg__LateralAcceleration * msg)
{
  if (!msg) {
    return false;
  }
  // lateral_acceleration_value
  if (!v2x_msgs__msg__LateralAccelerationValue__init(&msg->lateral_acceleration_value)) {
    v2x_msgs__msg__LateralAcceleration__fini(msg);
    return false;
  }
  // lateral_acceleration_confidence
  if (!v2x_msgs__msg__AccelerationConfidence__init(&msg->lateral_acceleration_confidence)) {
    v2x_msgs__msg__LateralAcceleration__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__LateralAcceleration__fini(v2x_msgs__msg__LateralAcceleration * msg)
{
  if (!msg) {
    return;
  }
  // lateral_acceleration_value
  v2x_msgs__msg__LateralAccelerationValue__fini(&msg->lateral_acceleration_value);
  // lateral_acceleration_confidence
  v2x_msgs__msg__AccelerationConfidence__fini(&msg->lateral_acceleration_confidence);
}

bool
v2x_msgs__msg__LateralAcceleration__are_equal(const v2x_msgs__msg__LateralAcceleration * lhs, const v2x_msgs__msg__LateralAcceleration * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lateral_acceleration_value
  if (!v2x_msgs__msg__LateralAccelerationValue__are_equal(
      &(lhs->lateral_acceleration_value), &(rhs->lateral_acceleration_value)))
  {
    return false;
  }
  // lateral_acceleration_confidence
  if (!v2x_msgs__msg__AccelerationConfidence__are_equal(
      &(lhs->lateral_acceleration_confidence), &(rhs->lateral_acceleration_confidence)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__LateralAcceleration__copy(
  const v2x_msgs__msg__LateralAcceleration * input,
  v2x_msgs__msg__LateralAcceleration * output)
{
  if (!input || !output) {
    return false;
  }
  // lateral_acceleration_value
  if (!v2x_msgs__msg__LateralAccelerationValue__copy(
      &(input->lateral_acceleration_value), &(output->lateral_acceleration_value)))
  {
    return false;
  }
  // lateral_acceleration_confidence
  if (!v2x_msgs__msg__AccelerationConfidence__copy(
      &(input->lateral_acceleration_confidence), &(output->lateral_acceleration_confidence)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__LateralAcceleration *
v2x_msgs__msg__LateralAcceleration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LateralAcceleration * msg = (v2x_msgs__msg__LateralAcceleration *)allocator.allocate(sizeof(v2x_msgs__msg__LateralAcceleration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__LateralAcceleration));
  bool success = v2x_msgs__msg__LateralAcceleration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__LateralAcceleration__destroy(v2x_msgs__msg__LateralAcceleration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__LateralAcceleration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__LateralAcceleration__Sequence__init(v2x_msgs__msg__LateralAcceleration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LateralAcceleration * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__LateralAcceleration *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__LateralAcceleration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__LateralAcceleration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__LateralAcceleration__fini(&data[i - 1]);
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
v2x_msgs__msg__LateralAcceleration__Sequence__fini(v2x_msgs__msg__LateralAcceleration__Sequence * array)
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
      v2x_msgs__msg__LateralAcceleration__fini(&array->data[i]);
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

v2x_msgs__msg__LateralAcceleration__Sequence *
v2x_msgs__msg__LateralAcceleration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LateralAcceleration__Sequence * array = (v2x_msgs__msg__LateralAcceleration__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__LateralAcceleration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__LateralAcceleration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__LateralAcceleration__Sequence__destroy(v2x_msgs__msg__LateralAcceleration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__LateralAcceleration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__LateralAcceleration__Sequence__are_equal(const v2x_msgs__msg__LateralAcceleration__Sequence * lhs, const v2x_msgs__msg__LateralAcceleration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__LateralAcceleration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__LateralAcceleration__Sequence__copy(
  const v2x_msgs__msg__LateralAcceleration__Sequence * input,
  v2x_msgs__msg__LateralAcceleration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__LateralAcceleration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__LateralAcceleration * data =
      (v2x_msgs__msg__LateralAcceleration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__LateralAcceleration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__LateralAcceleration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__LateralAcceleration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
