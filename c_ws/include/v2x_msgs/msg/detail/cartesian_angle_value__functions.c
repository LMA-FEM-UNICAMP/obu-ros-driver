// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/CartesianAngleValue.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/cartesian_angle_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
v2x_msgs__msg__CartesianAngleValue__init(v2x_msgs__msg__CartesianAngleValue * msg)
{
  if (!msg) {
    return false;
  }
  // cartesian_angle_value
  return true;
}

void
v2x_msgs__msg__CartesianAngleValue__fini(v2x_msgs__msg__CartesianAngleValue * msg)
{
  if (!msg) {
    return;
  }
  // cartesian_angle_value
}

bool
v2x_msgs__msg__CartesianAngleValue__are_equal(const v2x_msgs__msg__CartesianAngleValue * lhs, const v2x_msgs__msg__CartesianAngleValue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cartesian_angle_value
  if (lhs->cartesian_angle_value != rhs->cartesian_angle_value) {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__CartesianAngleValue__copy(
  const v2x_msgs__msg__CartesianAngleValue * input,
  v2x_msgs__msg__CartesianAngleValue * output)
{
  if (!input || !output) {
    return false;
  }
  // cartesian_angle_value
  output->cartesian_angle_value = input->cartesian_angle_value;
  return true;
}

v2x_msgs__msg__CartesianAngleValue *
v2x_msgs__msg__CartesianAngleValue__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CartesianAngleValue * msg = (v2x_msgs__msg__CartesianAngleValue *)allocator.allocate(sizeof(v2x_msgs__msg__CartesianAngleValue), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__CartesianAngleValue));
  bool success = v2x_msgs__msg__CartesianAngleValue__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__CartesianAngleValue__destroy(v2x_msgs__msg__CartesianAngleValue * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__CartesianAngleValue__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__CartesianAngleValue__Sequence__init(v2x_msgs__msg__CartesianAngleValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CartesianAngleValue * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__CartesianAngleValue *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__CartesianAngleValue), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__CartesianAngleValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__CartesianAngleValue__fini(&data[i - 1]);
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
v2x_msgs__msg__CartesianAngleValue__Sequence__fini(v2x_msgs__msg__CartesianAngleValue__Sequence * array)
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
      v2x_msgs__msg__CartesianAngleValue__fini(&array->data[i]);
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

v2x_msgs__msg__CartesianAngleValue__Sequence *
v2x_msgs__msg__CartesianAngleValue__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CartesianAngleValue__Sequence * array = (v2x_msgs__msg__CartesianAngleValue__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__CartesianAngleValue__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__CartesianAngleValue__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__CartesianAngleValue__Sequence__destroy(v2x_msgs__msg__CartesianAngleValue__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__CartesianAngleValue__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__CartesianAngleValue__Sequence__are_equal(const v2x_msgs__msg__CartesianAngleValue__Sequence * lhs, const v2x_msgs__msg__CartesianAngleValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__CartesianAngleValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__CartesianAngleValue__Sequence__copy(
  const v2x_msgs__msg__CartesianAngleValue__Sequence * input,
  v2x_msgs__msg__CartesianAngleValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__CartesianAngleValue);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__CartesianAngleValue * data =
      (v2x_msgs__msg__CartesianAngleValue *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__CartesianAngleValue__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__CartesianAngleValue__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__CartesianAngleValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
