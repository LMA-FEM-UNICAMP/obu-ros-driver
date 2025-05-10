// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/InternationalSignSpeedLimits.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/international_sign_speed_limits__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `unit`
#include "v2x_msgs/msg/detail/code_units__functions.h"

bool
v2x_msgs__msg__InternationalSignSpeedLimits__init(v2x_msgs__msg__InternationalSignSpeedLimits * msg)
{
  if (!msg) {
    return false;
  }
  // speed_limit_max_present
  msg->speed_limit_max_present = false;
  // speed_limit_max
  // speed_limit_min_present
  msg->speed_limit_min_present = false;
  // speed_limit_min
  // unit
  if (!v2x_msgs__msg__CodeUnits__init(&msg->unit)) {
    v2x_msgs__msg__InternationalSignSpeedLimits__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__InternationalSignSpeedLimits__fini(v2x_msgs__msg__InternationalSignSpeedLimits * msg)
{
  if (!msg) {
    return;
  }
  // speed_limit_max_present
  // speed_limit_max
  // speed_limit_min_present
  // speed_limit_min
  // unit
  v2x_msgs__msg__CodeUnits__fini(&msg->unit);
}

bool
v2x_msgs__msg__InternationalSignSpeedLimits__are_equal(const v2x_msgs__msg__InternationalSignSpeedLimits * lhs, const v2x_msgs__msg__InternationalSignSpeedLimits * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed_limit_max_present
  if (lhs->speed_limit_max_present != rhs->speed_limit_max_present) {
    return false;
  }
  // speed_limit_max
  if (lhs->speed_limit_max != rhs->speed_limit_max) {
    return false;
  }
  // speed_limit_min_present
  if (lhs->speed_limit_min_present != rhs->speed_limit_min_present) {
    return false;
  }
  // speed_limit_min
  if (lhs->speed_limit_min != rhs->speed_limit_min) {
    return false;
  }
  // unit
  if (!v2x_msgs__msg__CodeUnits__are_equal(
      &(lhs->unit), &(rhs->unit)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__InternationalSignSpeedLimits__copy(
  const v2x_msgs__msg__InternationalSignSpeedLimits * input,
  v2x_msgs__msg__InternationalSignSpeedLimits * output)
{
  if (!input || !output) {
    return false;
  }
  // speed_limit_max_present
  output->speed_limit_max_present = input->speed_limit_max_present;
  // speed_limit_max
  output->speed_limit_max = input->speed_limit_max;
  // speed_limit_min_present
  output->speed_limit_min_present = input->speed_limit_min_present;
  // speed_limit_min
  output->speed_limit_min = input->speed_limit_min;
  // unit
  if (!v2x_msgs__msg__CodeUnits__copy(
      &(input->unit), &(output->unit)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__InternationalSignSpeedLimits *
v2x_msgs__msg__InternationalSignSpeedLimits__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__InternationalSignSpeedLimits * msg = (v2x_msgs__msg__InternationalSignSpeedLimits *)allocator.allocate(sizeof(v2x_msgs__msg__InternationalSignSpeedLimits), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__InternationalSignSpeedLimits));
  bool success = v2x_msgs__msg__InternationalSignSpeedLimits__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__InternationalSignSpeedLimits__destroy(v2x_msgs__msg__InternationalSignSpeedLimits * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__InternationalSignSpeedLimits__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__InternationalSignSpeedLimits__Sequence__init(v2x_msgs__msg__InternationalSignSpeedLimits__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__InternationalSignSpeedLimits * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__InternationalSignSpeedLimits *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__InternationalSignSpeedLimits), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__InternationalSignSpeedLimits__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__InternationalSignSpeedLimits__fini(&data[i - 1]);
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
v2x_msgs__msg__InternationalSignSpeedLimits__Sequence__fini(v2x_msgs__msg__InternationalSignSpeedLimits__Sequence * array)
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
      v2x_msgs__msg__InternationalSignSpeedLimits__fini(&array->data[i]);
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

v2x_msgs__msg__InternationalSignSpeedLimits__Sequence *
v2x_msgs__msg__InternationalSignSpeedLimits__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__InternationalSignSpeedLimits__Sequence * array = (v2x_msgs__msg__InternationalSignSpeedLimits__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__InternationalSignSpeedLimits__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__InternationalSignSpeedLimits__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__InternationalSignSpeedLimits__Sequence__destroy(v2x_msgs__msg__InternationalSignSpeedLimits__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__InternationalSignSpeedLimits__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__InternationalSignSpeedLimits__Sequence__are_equal(const v2x_msgs__msg__InternationalSignSpeedLimits__Sequence * lhs, const v2x_msgs__msg__InternationalSignSpeedLimits__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__InternationalSignSpeedLimits__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__InternationalSignSpeedLimits__Sequence__copy(
  const v2x_msgs__msg__InternationalSignSpeedLimits__Sequence * input,
  v2x_msgs__msg__InternationalSignSpeedLimits__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__InternationalSignSpeedLimits);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__InternationalSignSpeedLimits * data =
      (v2x_msgs__msg__InternationalSignSpeedLimits *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__InternationalSignSpeedLimits__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__InternationalSignSpeedLimits__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__InternationalSignSpeedLimits__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
