// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/path_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `path_position`
#include "v2x_msgs/msg/detail/delta_reference_position__functions.h"
// Member `path_delta_time`
#include "v2x_msgs/msg/detail/path_delta_time__functions.h"

bool
v2x_msgs__msg__PathPoint__init(v2x_msgs__msg__PathPoint * msg)
{
  if (!msg) {
    return false;
  }
  // path_position
  if (!v2x_msgs__msg__DeltaReferencePosition__init(&msg->path_position)) {
    v2x_msgs__msg__PathPoint__fini(msg);
    return false;
  }
  // path_delta_time_present
  msg->path_delta_time_present = false;
  // path_delta_time
  if (!v2x_msgs__msg__PathDeltaTime__init(&msg->path_delta_time)) {
    v2x_msgs__msg__PathPoint__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__PathPoint__fini(v2x_msgs__msg__PathPoint * msg)
{
  if (!msg) {
    return;
  }
  // path_position
  v2x_msgs__msg__DeltaReferencePosition__fini(&msg->path_position);
  // path_delta_time_present
  // path_delta_time
  v2x_msgs__msg__PathDeltaTime__fini(&msg->path_delta_time);
}

bool
v2x_msgs__msg__PathPoint__are_equal(const v2x_msgs__msg__PathPoint * lhs, const v2x_msgs__msg__PathPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path_position
  if (!v2x_msgs__msg__DeltaReferencePosition__are_equal(
      &(lhs->path_position), &(rhs->path_position)))
  {
    return false;
  }
  // path_delta_time_present
  if (lhs->path_delta_time_present != rhs->path_delta_time_present) {
    return false;
  }
  // path_delta_time
  if (!v2x_msgs__msg__PathDeltaTime__are_equal(
      &(lhs->path_delta_time), &(rhs->path_delta_time)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__PathPoint__copy(
  const v2x_msgs__msg__PathPoint * input,
  v2x_msgs__msg__PathPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // path_position
  if (!v2x_msgs__msg__DeltaReferencePosition__copy(
      &(input->path_position), &(output->path_position)))
  {
    return false;
  }
  // path_delta_time_present
  output->path_delta_time_present = input->path_delta_time_present;
  // path_delta_time
  if (!v2x_msgs__msg__PathDeltaTime__copy(
      &(input->path_delta_time), &(output->path_delta_time)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__PathPoint *
v2x_msgs__msg__PathPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PathPoint * msg = (v2x_msgs__msg__PathPoint *)allocator.allocate(sizeof(v2x_msgs__msg__PathPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__PathPoint));
  bool success = v2x_msgs__msg__PathPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__PathPoint__destroy(v2x_msgs__msg__PathPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__PathPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__PathPoint__Sequence__init(v2x_msgs__msg__PathPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PathPoint * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__PathPoint *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__PathPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__PathPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__PathPoint__fini(&data[i - 1]);
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
v2x_msgs__msg__PathPoint__Sequence__fini(v2x_msgs__msg__PathPoint__Sequence * array)
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
      v2x_msgs__msg__PathPoint__fini(&array->data[i]);
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

v2x_msgs__msg__PathPoint__Sequence *
v2x_msgs__msg__PathPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PathPoint__Sequence * array = (v2x_msgs__msg__PathPoint__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__PathPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__PathPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__PathPoint__Sequence__destroy(v2x_msgs__msg__PathPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__PathPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__PathPoint__Sequence__are_equal(const v2x_msgs__msg__PathPoint__Sequence * lhs, const v2x_msgs__msg__PathPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__PathPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__PathPoint__Sequence__copy(
  const v2x_msgs__msg__PathPoint__Sequence * input,
  v2x_msgs__msg__PathPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__PathPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__PathPoint * data =
      (v2x_msgs__msg__PathPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__PathPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__PathPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__PathPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
