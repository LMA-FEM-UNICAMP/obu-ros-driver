// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `heading`
#include "v2x_msgs/msg/detail/heading_confidence_dsrc__functions.h"
// Member `speed`
#include "v2x_msgs/msg/detail/speed_confidence_dsrc__functions.h"
// Member `throttle`
#include "v2x_msgs/msg/detail/throttle_confidence__functions.h"

bool
v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__init(v2x_msgs__msg__SpeedandHeadingandThrottleConfidence * msg)
{
  if (!msg) {
    return false;
  }
  // heading
  if (!v2x_msgs__msg__HeadingConfidenceDSRC__init(&msg->heading)) {
    v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__fini(msg);
    return false;
  }
  // speed
  if (!v2x_msgs__msg__SpeedConfidenceDSRC__init(&msg->speed)) {
    v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__fini(msg);
    return false;
  }
  // throttle
  if (!v2x_msgs__msg__ThrottleConfidence__init(&msg->throttle)) {
    v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__fini(v2x_msgs__msg__SpeedandHeadingandThrottleConfidence * msg)
{
  if (!msg) {
    return;
  }
  // heading
  v2x_msgs__msg__HeadingConfidenceDSRC__fini(&msg->heading);
  // speed
  v2x_msgs__msg__SpeedConfidenceDSRC__fini(&msg->speed);
  // throttle
  v2x_msgs__msg__ThrottleConfidence__fini(&msg->throttle);
}

bool
v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__are_equal(const v2x_msgs__msg__SpeedandHeadingandThrottleConfidence * lhs, const v2x_msgs__msg__SpeedandHeadingandThrottleConfidence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // heading
  if (!v2x_msgs__msg__HeadingConfidenceDSRC__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  // speed
  if (!v2x_msgs__msg__SpeedConfidenceDSRC__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // throttle
  if (!v2x_msgs__msg__ThrottleConfidence__are_equal(
      &(lhs->throttle), &(rhs->throttle)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__copy(
  const v2x_msgs__msg__SpeedandHeadingandThrottleConfidence * input,
  v2x_msgs__msg__SpeedandHeadingandThrottleConfidence * output)
{
  if (!input || !output) {
    return false;
  }
  // heading
  if (!v2x_msgs__msg__HeadingConfidenceDSRC__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  // speed
  if (!v2x_msgs__msg__SpeedConfidenceDSRC__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // throttle
  if (!v2x_msgs__msg__ThrottleConfidence__copy(
      &(input->throttle), &(output->throttle)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__SpeedandHeadingandThrottleConfidence *
v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SpeedandHeadingandThrottleConfidence * msg = (v2x_msgs__msg__SpeedandHeadingandThrottleConfidence *)allocator.allocate(sizeof(v2x_msgs__msg__SpeedandHeadingandThrottleConfidence), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SpeedandHeadingandThrottleConfidence));
  bool success = v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__destroy(v2x_msgs__msg__SpeedandHeadingandThrottleConfidence * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence__init(v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SpeedandHeadingandThrottleConfidence * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SpeedandHeadingandThrottleConfidence *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SpeedandHeadingandThrottleConfidence), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__fini(&data[i - 1]);
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
v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence__fini(v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence * array)
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
      v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__fini(&array->data[i]);
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

v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence *
v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence * array = (v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence__destroy(v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence__are_equal(const v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence * lhs, const v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence__copy(
  const v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence * input,
  v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SpeedandHeadingandThrottleConfidence);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SpeedandHeadingandThrottleConfidence * data =
      (v2x_msgs__msg__SpeedandHeadingandThrottleConfidence *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
