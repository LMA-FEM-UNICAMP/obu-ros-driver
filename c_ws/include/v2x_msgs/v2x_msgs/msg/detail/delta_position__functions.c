// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/DeltaPosition.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/delta_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `delta_latitude`
#include "v2x_msgs/msg/detail/delta_latitude__functions.h"
// Member `delta_longitude`
#include "v2x_msgs/msg/detail/delta_longitude__functions.h"

bool
v2x_msgs__msg__DeltaPosition__init(v2x_msgs__msg__DeltaPosition * msg)
{
  if (!msg) {
    return false;
  }
  // delta_latitude
  if (!v2x_msgs__msg__DeltaLatitude__init(&msg->delta_latitude)) {
    v2x_msgs__msg__DeltaPosition__fini(msg);
    return false;
  }
  // delta_longitude
  if (!v2x_msgs__msg__DeltaLongitude__init(&msg->delta_longitude)) {
    v2x_msgs__msg__DeltaPosition__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__DeltaPosition__fini(v2x_msgs__msg__DeltaPosition * msg)
{
  if (!msg) {
    return;
  }
  // delta_latitude
  v2x_msgs__msg__DeltaLatitude__fini(&msg->delta_latitude);
  // delta_longitude
  v2x_msgs__msg__DeltaLongitude__fini(&msg->delta_longitude);
}

bool
v2x_msgs__msg__DeltaPosition__are_equal(const v2x_msgs__msg__DeltaPosition * lhs, const v2x_msgs__msg__DeltaPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // delta_latitude
  if (!v2x_msgs__msg__DeltaLatitude__are_equal(
      &(lhs->delta_latitude), &(rhs->delta_latitude)))
  {
    return false;
  }
  // delta_longitude
  if (!v2x_msgs__msg__DeltaLongitude__are_equal(
      &(lhs->delta_longitude), &(rhs->delta_longitude)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__DeltaPosition__copy(
  const v2x_msgs__msg__DeltaPosition * input,
  v2x_msgs__msg__DeltaPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // delta_latitude
  if (!v2x_msgs__msg__DeltaLatitude__copy(
      &(input->delta_latitude), &(output->delta_latitude)))
  {
    return false;
  }
  // delta_longitude
  if (!v2x_msgs__msg__DeltaLongitude__copy(
      &(input->delta_longitude), &(output->delta_longitude)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__DeltaPosition *
v2x_msgs__msg__DeltaPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DeltaPosition * msg = (v2x_msgs__msg__DeltaPosition *)allocator.allocate(sizeof(v2x_msgs__msg__DeltaPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__DeltaPosition));
  bool success = v2x_msgs__msg__DeltaPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__DeltaPosition__destroy(v2x_msgs__msg__DeltaPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__DeltaPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__DeltaPosition__Sequence__init(v2x_msgs__msg__DeltaPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DeltaPosition * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__DeltaPosition *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__DeltaPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__DeltaPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__DeltaPosition__fini(&data[i - 1]);
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
v2x_msgs__msg__DeltaPosition__Sequence__fini(v2x_msgs__msg__DeltaPosition__Sequence * array)
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
      v2x_msgs__msg__DeltaPosition__fini(&array->data[i]);
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

v2x_msgs__msg__DeltaPosition__Sequence *
v2x_msgs__msg__DeltaPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DeltaPosition__Sequence * array = (v2x_msgs__msg__DeltaPosition__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__DeltaPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__DeltaPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__DeltaPosition__Sequence__destroy(v2x_msgs__msg__DeltaPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__DeltaPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__DeltaPosition__Sequence__are_equal(const v2x_msgs__msg__DeltaPosition__Sequence * lhs, const v2x_msgs__msg__DeltaPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__DeltaPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__DeltaPosition__Sequence__copy(
  const v2x_msgs__msg__DeltaPosition__Sequence * input,
  v2x_msgs__msg__DeltaPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__DeltaPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__DeltaPosition * data =
      (v2x_msgs__msg__DeltaPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__DeltaPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__DeltaPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__DeltaPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
