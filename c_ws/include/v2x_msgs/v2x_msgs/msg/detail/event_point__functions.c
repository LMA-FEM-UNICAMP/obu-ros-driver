// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/EventPoint.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/event_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `event_position`
#include "v2x_msgs/msg/detail/delta_reference_position__functions.h"
// Member `event_delta_time`
#include "v2x_msgs/msg/detail/path_delta_time__functions.h"
// Member `information_quality`
#include "v2x_msgs/msg/detail/information_quality__functions.h"

bool
v2x_msgs__msg__EventPoint__init(v2x_msgs__msg__EventPoint * msg)
{
  if (!msg) {
    return false;
  }
  // event_position
  if (!v2x_msgs__msg__DeltaReferencePosition__init(&msg->event_position)) {
    v2x_msgs__msg__EventPoint__fini(msg);
    return false;
  }
  // event_delta_time_present
  msg->event_delta_time_present = false;
  // event_delta_time
  if (!v2x_msgs__msg__PathDeltaTime__init(&msg->event_delta_time)) {
    v2x_msgs__msg__EventPoint__fini(msg);
    return false;
  }
  // information_quality
  if (!v2x_msgs__msg__InformationQuality__init(&msg->information_quality)) {
    v2x_msgs__msg__EventPoint__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__EventPoint__fini(v2x_msgs__msg__EventPoint * msg)
{
  if (!msg) {
    return;
  }
  // event_position
  v2x_msgs__msg__DeltaReferencePosition__fini(&msg->event_position);
  // event_delta_time_present
  // event_delta_time
  v2x_msgs__msg__PathDeltaTime__fini(&msg->event_delta_time);
  // information_quality
  v2x_msgs__msg__InformationQuality__fini(&msg->information_quality);
}

bool
v2x_msgs__msg__EventPoint__are_equal(const v2x_msgs__msg__EventPoint * lhs, const v2x_msgs__msg__EventPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // event_position
  if (!v2x_msgs__msg__DeltaReferencePosition__are_equal(
      &(lhs->event_position), &(rhs->event_position)))
  {
    return false;
  }
  // event_delta_time_present
  if (lhs->event_delta_time_present != rhs->event_delta_time_present) {
    return false;
  }
  // event_delta_time
  if (!v2x_msgs__msg__PathDeltaTime__are_equal(
      &(lhs->event_delta_time), &(rhs->event_delta_time)))
  {
    return false;
  }
  // information_quality
  if (!v2x_msgs__msg__InformationQuality__are_equal(
      &(lhs->information_quality), &(rhs->information_quality)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__EventPoint__copy(
  const v2x_msgs__msg__EventPoint * input,
  v2x_msgs__msg__EventPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // event_position
  if (!v2x_msgs__msg__DeltaReferencePosition__copy(
      &(input->event_position), &(output->event_position)))
  {
    return false;
  }
  // event_delta_time_present
  output->event_delta_time_present = input->event_delta_time_present;
  // event_delta_time
  if (!v2x_msgs__msg__PathDeltaTime__copy(
      &(input->event_delta_time), &(output->event_delta_time)))
  {
    return false;
  }
  // information_quality
  if (!v2x_msgs__msg__InformationQuality__copy(
      &(input->information_quality), &(output->information_quality)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__EventPoint *
v2x_msgs__msg__EventPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__EventPoint * msg = (v2x_msgs__msg__EventPoint *)allocator.allocate(sizeof(v2x_msgs__msg__EventPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__EventPoint));
  bool success = v2x_msgs__msg__EventPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__EventPoint__destroy(v2x_msgs__msg__EventPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__EventPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__EventPoint__Sequence__init(v2x_msgs__msg__EventPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__EventPoint * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__EventPoint *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__EventPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__EventPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__EventPoint__fini(&data[i - 1]);
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
v2x_msgs__msg__EventPoint__Sequence__fini(v2x_msgs__msg__EventPoint__Sequence * array)
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
      v2x_msgs__msg__EventPoint__fini(&array->data[i]);
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

v2x_msgs__msg__EventPoint__Sequence *
v2x_msgs__msg__EventPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__EventPoint__Sequence * array = (v2x_msgs__msg__EventPoint__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__EventPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__EventPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__EventPoint__Sequence__destroy(v2x_msgs__msg__EventPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__EventPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__EventPoint__Sequence__are_equal(const v2x_msgs__msg__EventPoint__Sequence * lhs, const v2x_msgs__msg__EventPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__EventPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__EventPoint__Sequence__copy(
  const v2x_msgs__msg__EventPoint__Sequence * input,
  v2x_msgs__msg__EventPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__EventPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__EventPoint * data =
      (v2x_msgs__msg__EventPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__EventPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__EventPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__EventPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
