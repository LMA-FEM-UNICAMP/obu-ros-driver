// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/TrailerCharacteristics.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/trailer_characteristics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `equal_to`
// Member `not_equal_to`
#include "v2x_msgs/msg/detail/trailer_characteristics_fix_values_list__functions.h"
// Member `ranges`
#include "v2x_msgs/msg/detail/trailer_characteristics_ranges_list__functions.h"

bool
v2x_msgs__msg__TrailerCharacteristics__init(v2x_msgs__msg__TrailerCharacteristics * msg)
{
  if (!msg) {
    return false;
  }
  // equal_to_present
  msg->equal_to_present = false;
  // equal_to
  if (!v2x_msgs__msg__TrailerCharacteristicsFixValuesList__init(&msg->equal_to)) {
    v2x_msgs__msg__TrailerCharacteristics__fini(msg);
    return false;
  }
  // not_equal_to_present
  msg->not_equal_to_present = false;
  // not_equal_to
  if (!v2x_msgs__msg__TrailerCharacteristicsFixValuesList__init(&msg->not_equal_to)) {
    v2x_msgs__msg__TrailerCharacteristics__fini(msg);
    return false;
  }
  // ranges_present
  msg->ranges_present = false;
  // ranges
  if (!v2x_msgs__msg__TrailerCharacteristicsRangesList__init(&msg->ranges)) {
    v2x_msgs__msg__TrailerCharacteristics__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__TrailerCharacteristics__fini(v2x_msgs__msg__TrailerCharacteristics * msg)
{
  if (!msg) {
    return;
  }
  // equal_to_present
  // equal_to
  v2x_msgs__msg__TrailerCharacteristicsFixValuesList__fini(&msg->equal_to);
  // not_equal_to_present
  // not_equal_to
  v2x_msgs__msg__TrailerCharacteristicsFixValuesList__fini(&msg->not_equal_to);
  // ranges_present
  // ranges
  v2x_msgs__msg__TrailerCharacteristicsRangesList__fini(&msg->ranges);
}

bool
v2x_msgs__msg__TrailerCharacteristics__are_equal(const v2x_msgs__msg__TrailerCharacteristics * lhs, const v2x_msgs__msg__TrailerCharacteristics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // equal_to_present
  if (lhs->equal_to_present != rhs->equal_to_present) {
    return false;
  }
  // equal_to
  if (!v2x_msgs__msg__TrailerCharacteristicsFixValuesList__are_equal(
      &(lhs->equal_to), &(rhs->equal_to)))
  {
    return false;
  }
  // not_equal_to_present
  if (lhs->not_equal_to_present != rhs->not_equal_to_present) {
    return false;
  }
  // not_equal_to
  if (!v2x_msgs__msg__TrailerCharacteristicsFixValuesList__are_equal(
      &(lhs->not_equal_to), &(rhs->not_equal_to)))
  {
    return false;
  }
  // ranges_present
  if (lhs->ranges_present != rhs->ranges_present) {
    return false;
  }
  // ranges
  if (!v2x_msgs__msg__TrailerCharacteristicsRangesList__are_equal(
      &(lhs->ranges), &(rhs->ranges)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__TrailerCharacteristics__copy(
  const v2x_msgs__msg__TrailerCharacteristics * input,
  v2x_msgs__msg__TrailerCharacteristics * output)
{
  if (!input || !output) {
    return false;
  }
  // equal_to_present
  output->equal_to_present = input->equal_to_present;
  // equal_to
  if (!v2x_msgs__msg__TrailerCharacteristicsFixValuesList__copy(
      &(input->equal_to), &(output->equal_to)))
  {
    return false;
  }
  // not_equal_to_present
  output->not_equal_to_present = input->not_equal_to_present;
  // not_equal_to
  if (!v2x_msgs__msg__TrailerCharacteristicsFixValuesList__copy(
      &(input->not_equal_to), &(output->not_equal_to)))
  {
    return false;
  }
  // ranges_present
  output->ranges_present = input->ranges_present;
  // ranges
  if (!v2x_msgs__msg__TrailerCharacteristicsRangesList__copy(
      &(input->ranges), &(output->ranges)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__TrailerCharacteristics *
v2x_msgs__msg__TrailerCharacteristics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TrailerCharacteristics * msg = (v2x_msgs__msg__TrailerCharacteristics *)allocator.allocate(sizeof(v2x_msgs__msg__TrailerCharacteristics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__TrailerCharacteristics));
  bool success = v2x_msgs__msg__TrailerCharacteristics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__TrailerCharacteristics__destroy(v2x_msgs__msg__TrailerCharacteristics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__TrailerCharacteristics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__TrailerCharacteristics__Sequence__init(v2x_msgs__msg__TrailerCharacteristics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TrailerCharacteristics * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__TrailerCharacteristics *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__TrailerCharacteristics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__TrailerCharacteristics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__TrailerCharacteristics__fini(&data[i - 1]);
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
v2x_msgs__msg__TrailerCharacteristics__Sequence__fini(v2x_msgs__msg__TrailerCharacteristics__Sequence * array)
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
      v2x_msgs__msg__TrailerCharacteristics__fini(&array->data[i]);
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

v2x_msgs__msg__TrailerCharacteristics__Sequence *
v2x_msgs__msg__TrailerCharacteristics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TrailerCharacteristics__Sequence * array = (v2x_msgs__msg__TrailerCharacteristics__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__TrailerCharacteristics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__TrailerCharacteristics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__TrailerCharacteristics__Sequence__destroy(v2x_msgs__msg__TrailerCharacteristics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__TrailerCharacteristics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__TrailerCharacteristics__Sequence__are_equal(const v2x_msgs__msg__TrailerCharacteristics__Sequence * lhs, const v2x_msgs__msg__TrailerCharacteristics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__TrailerCharacteristics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__TrailerCharacteristics__Sequence__copy(
  const v2x_msgs__msg__TrailerCharacteristics__Sequence * input,
  v2x_msgs__msg__TrailerCharacteristics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__TrailerCharacteristics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__TrailerCharacteristics * data =
      (v2x_msgs__msg__TrailerCharacteristics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__TrailerCharacteristics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__TrailerCharacteristics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__TrailerCharacteristics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
