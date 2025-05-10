// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/AbsolutePositionWAltitude.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/absolute_position_w_altitude__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `latitude`
#include "v2x_msgs/msg/detail/latitude__functions.h"
// Member `longitude`
#include "v2x_msgs/msg/detail/longitude__functions.h"
// Member `altitude`
#include "v2x_msgs/msg/detail/altitude__functions.h"

bool
v2x_msgs__msg__AbsolutePositionWAltitude__init(v2x_msgs__msg__AbsolutePositionWAltitude * msg)
{
  if (!msg) {
    return false;
  }
  // latitude
  if (!v2x_msgs__msg__Latitude__init(&msg->latitude)) {
    v2x_msgs__msg__AbsolutePositionWAltitude__fini(msg);
    return false;
  }
  // longitude
  if (!v2x_msgs__msg__Longitude__init(&msg->longitude)) {
    v2x_msgs__msg__AbsolutePositionWAltitude__fini(msg);
    return false;
  }
  // altitude
  if (!v2x_msgs__msg__Altitude__init(&msg->altitude)) {
    v2x_msgs__msg__AbsolutePositionWAltitude__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__AbsolutePositionWAltitude__fini(v2x_msgs__msg__AbsolutePositionWAltitude * msg)
{
  if (!msg) {
    return;
  }
  // latitude
  v2x_msgs__msg__Latitude__fini(&msg->latitude);
  // longitude
  v2x_msgs__msg__Longitude__fini(&msg->longitude);
  // altitude
  v2x_msgs__msg__Altitude__fini(&msg->altitude);
}

bool
v2x_msgs__msg__AbsolutePositionWAltitude__are_equal(const v2x_msgs__msg__AbsolutePositionWAltitude * lhs, const v2x_msgs__msg__AbsolutePositionWAltitude * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // latitude
  if (!v2x_msgs__msg__Latitude__are_equal(
      &(lhs->latitude), &(rhs->latitude)))
  {
    return false;
  }
  // longitude
  if (!v2x_msgs__msg__Longitude__are_equal(
      &(lhs->longitude), &(rhs->longitude)))
  {
    return false;
  }
  // altitude
  if (!v2x_msgs__msg__Altitude__are_equal(
      &(lhs->altitude), &(rhs->altitude)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__AbsolutePositionWAltitude__copy(
  const v2x_msgs__msg__AbsolutePositionWAltitude * input,
  v2x_msgs__msg__AbsolutePositionWAltitude * output)
{
  if (!input || !output) {
    return false;
  }
  // latitude
  if (!v2x_msgs__msg__Latitude__copy(
      &(input->latitude), &(output->latitude)))
  {
    return false;
  }
  // longitude
  if (!v2x_msgs__msg__Longitude__copy(
      &(input->longitude), &(output->longitude)))
  {
    return false;
  }
  // altitude
  if (!v2x_msgs__msg__Altitude__copy(
      &(input->altitude), &(output->altitude)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__AbsolutePositionWAltitude *
v2x_msgs__msg__AbsolutePositionWAltitude__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AbsolutePositionWAltitude * msg = (v2x_msgs__msg__AbsolutePositionWAltitude *)allocator.allocate(sizeof(v2x_msgs__msg__AbsolutePositionWAltitude), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__AbsolutePositionWAltitude));
  bool success = v2x_msgs__msg__AbsolutePositionWAltitude__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__AbsolutePositionWAltitude__destroy(v2x_msgs__msg__AbsolutePositionWAltitude * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__AbsolutePositionWAltitude__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__AbsolutePositionWAltitude__Sequence__init(v2x_msgs__msg__AbsolutePositionWAltitude__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AbsolutePositionWAltitude * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__AbsolutePositionWAltitude *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__AbsolutePositionWAltitude), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__AbsolutePositionWAltitude__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__AbsolutePositionWAltitude__fini(&data[i - 1]);
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
v2x_msgs__msg__AbsolutePositionWAltitude__Sequence__fini(v2x_msgs__msg__AbsolutePositionWAltitude__Sequence * array)
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
      v2x_msgs__msg__AbsolutePositionWAltitude__fini(&array->data[i]);
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

v2x_msgs__msg__AbsolutePositionWAltitude__Sequence *
v2x_msgs__msg__AbsolutePositionWAltitude__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AbsolutePositionWAltitude__Sequence * array = (v2x_msgs__msg__AbsolutePositionWAltitude__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__AbsolutePositionWAltitude__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__AbsolutePositionWAltitude__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__AbsolutePositionWAltitude__Sequence__destroy(v2x_msgs__msg__AbsolutePositionWAltitude__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__AbsolutePositionWAltitude__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__AbsolutePositionWAltitude__Sequence__are_equal(const v2x_msgs__msg__AbsolutePositionWAltitude__Sequence * lhs, const v2x_msgs__msg__AbsolutePositionWAltitude__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__AbsolutePositionWAltitude__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__AbsolutePositionWAltitude__Sequence__copy(
  const v2x_msgs__msg__AbsolutePositionWAltitude__Sequence * input,
  v2x_msgs__msg__AbsolutePositionWAltitude__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__AbsolutePositionWAltitude);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__AbsolutePositionWAltitude * data =
      (v2x_msgs__msg__AbsolutePositionWAltitude *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__AbsolutePositionWAltitude__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__AbsolutePositionWAltitude__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__AbsolutePositionWAltitude__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
