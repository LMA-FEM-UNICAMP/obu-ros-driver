// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/PurseBalance.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/purse_balance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `purse_value`
#include "v2x_msgs/msg/detail/signed_value__functions.h"
// Member `purse_unit`
#include "v2x_msgs/msg/detail/pay_unit__functions.h"

bool
v2x_msgs__msg__PurseBalance__init(v2x_msgs__msg__PurseBalance * msg)
{
  if (!msg) {
    return false;
  }
  // purse_value
  if (!v2x_msgs__msg__SignedValue__init(&msg->purse_value)) {
    v2x_msgs__msg__PurseBalance__fini(msg);
    return false;
  }
  // purse_unit
  if (!v2x_msgs__msg__PayUnit__init(&msg->purse_unit)) {
    v2x_msgs__msg__PurseBalance__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__PurseBalance__fini(v2x_msgs__msg__PurseBalance * msg)
{
  if (!msg) {
    return;
  }
  // purse_value
  v2x_msgs__msg__SignedValue__fini(&msg->purse_value);
  // purse_unit
  v2x_msgs__msg__PayUnit__fini(&msg->purse_unit);
}

bool
v2x_msgs__msg__PurseBalance__are_equal(const v2x_msgs__msg__PurseBalance * lhs, const v2x_msgs__msg__PurseBalance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // purse_value
  if (!v2x_msgs__msg__SignedValue__are_equal(
      &(lhs->purse_value), &(rhs->purse_value)))
  {
    return false;
  }
  // purse_unit
  if (!v2x_msgs__msg__PayUnit__are_equal(
      &(lhs->purse_unit), &(rhs->purse_unit)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__PurseBalance__copy(
  const v2x_msgs__msg__PurseBalance * input,
  v2x_msgs__msg__PurseBalance * output)
{
  if (!input || !output) {
    return false;
  }
  // purse_value
  if (!v2x_msgs__msg__SignedValue__copy(
      &(input->purse_value), &(output->purse_value)))
  {
    return false;
  }
  // purse_unit
  if (!v2x_msgs__msg__PayUnit__copy(
      &(input->purse_unit), &(output->purse_unit)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__PurseBalance *
v2x_msgs__msg__PurseBalance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PurseBalance * msg = (v2x_msgs__msg__PurseBalance *)allocator.allocate(sizeof(v2x_msgs__msg__PurseBalance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__PurseBalance));
  bool success = v2x_msgs__msg__PurseBalance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__PurseBalance__destroy(v2x_msgs__msg__PurseBalance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__PurseBalance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__PurseBalance__Sequence__init(v2x_msgs__msg__PurseBalance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PurseBalance * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__PurseBalance *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__PurseBalance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__PurseBalance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__PurseBalance__fini(&data[i - 1]);
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
v2x_msgs__msg__PurseBalance__Sequence__fini(v2x_msgs__msg__PurseBalance__Sequence * array)
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
      v2x_msgs__msg__PurseBalance__fini(&array->data[i]);
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

v2x_msgs__msg__PurseBalance__Sequence *
v2x_msgs__msg__PurseBalance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PurseBalance__Sequence * array = (v2x_msgs__msg__PurseBalance__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__PurseBalance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__PurseBalance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__PurseBalance__Sequence__destroy(v2x_msgs__msg__PurseBalance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__PurseBalance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__PurseBalance__Sequence__are_equal(const v2x_msgs__msg__PurseBalance__Sequence * lhs, const v2x_msgs__msg__PurseBalance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__PurseBalance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__PurseBalance__Sequence__copy(
  const v2x_msgs__msg__PurseBalance__Sequence * input,
  v2x_msgs__msg__PurseBalance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__PurseBalance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__PurseBalance * data =
      (v2x_msgs__msg__PurseBalance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__PurseBalance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__PurseBalance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__PurseBalance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
