// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/TractorCharacteristics.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/tractor_characteristics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `equal_to`
// Member `not_equal_to`
#include "v2x_msgs/msg/detail/vehicle_characteristics_fix_values_list__functions.h"
// Member `ranges`
#include "v2x_msgs/msg/detail/vehicle_characteristics_ranges_list__functions.h"

bool
v2x_msgs__msg__TractorCharacteristics__init(v2x_msgs__msg__TractorCharacteristics * msg)
{
  if (!msg) {
    return false;
  }
  // equal_to_present
  msg->equal_to_present = false;
  // equal_to
  if (!v2x_msgs__msg__VehicleCharacteristicsFixValuesList__init(&msg->equal_to)) {
    v2x_msgs__msg__TractorCharacteristics__fini(msg);
    return false;
  }
  // not_equal_to_present
  msg->not_equal_to_present = false;
  // not_equal_to
  if (!v2x_msgs__msg__VehicleCharacteristicsFixValuesList__init(&msg->not_equal_to)) {
    v2x_msgs__msg__TractorCharacteristics__fini(msg);
    return false;
  }
  // ranges_present
  msg->ranges_present = false;
  // ranges
  if (!v2x_msgs__msg__VehicleCharacteristicsRangesList__init(&msg->ranges)) {
    v2x_msgs__msg__TractorCharacteristics__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__TractorCharacteristics__fini(v2x_msgs__msg__TractorCharacteristics * msg)
{
  if (!msg) {
    return;
  }
  // equal_to_present
  // equal_to
  v2x_msgs__msg__VehicleCharacteristicsFixValuesList__fini(&msg->equal_to);
  // not_equal_to_present
  // not_equal_to
  v2x_msgs__msg__VehicleCharacteristicsFixValuesList__fini(&msg->not_equal_to);
  // ranges_present
  // ranges
  v2x_msgs__msg__VehicleCharacteristicsRangesList__fini(&msg->ranges);
}

bool
v2x_msgs__msg__TractorCharacteristics__are_equal(const v2x_msgs__msg__TractorCharacteristics * lhs, const v2x_msgs__msg__TractorCharacteristics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // equal_to_present
  if (lhs->equal_to_present != rhs->equal_to_present) {
    return false;
  }
  // equal_to
  if (!v2x_msgs__msg__VehicleCharacteristicsFixValuesList__are_equal(
      &(lhs->equal_to), &(rhs->equal_to)))
  {
    return false;
  }
  // not_equal_to_present
  if (lhs->not_equal_to_present != rhs->not_equal_to_present) {
    return false;
  }
  // not_equal_to
  if (!v2x_msgs__msg__VehicleCharacteristicsFixValuesList__are_equal(
      &(lhs->not_equal_to), &(rhs->not_equal_to)))
  {
    return false;
  }
  // ranges_present
  if (lhs->ranges_present != rhs->ranges_present) {
    return false;
  }
  // ranges
  if (!v2x_msgs__msg__VehicleCharacteristicsRangesList__are_equal(
      &(lhs->ranges), &(rhs->ranges)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__TractorCharacteristics__copy(
  const v2x_msgs__msg__TractorCharacteristics * input,
  v2x_msgs__msg__TractorCharacteristics * output)
{
  if (!input || !output) {
    return false;
  }
  // equal_to_present
  output->equal_to_present = input->equal_to_present;
  // equal_to
  if (!v2x_msgs__msg__VehicleCharacteristicsFixValuesList__copy(
      &(input->equal_to), &(output->equal_to)))
  {
    return false;
  }
  // not_equal_to_present
  output->not_equal_to_present = input->not_equal_to_present;
  // not_equal_to
  if (!v2x_msgs__msg__VehicleCharacteristicsFixValuesList__copy(
      &(input->not_equal_to), &(output->not_equal_to)))
  {
    return false;
  }
  // ranges_present
  output->ranges_present = input->ranges_present;
  // ranges
  if (!v2x_msgs__msg__VehicleCharacteristicsRangesList__copy(
      &(input->ranges), &(output->ranges)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__TractorCharacteristics *
v2x_msgs__msg__TractorCharacteristics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TractorCharacteristics * msg = (v2x_msgs__msg__TractorCharacteristics *)allocator.allocate(sizeof(v2x_msgs__msg__TractorCharacteristics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__TractorCharacteristics));
  bool success = v2x_msgs__msg__TractorCharacteristics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__TractorCharacteristics__destroy(v2x_msgs__msg__TractorCharacteristics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__TractorCharacteristics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__TractorCharacteristics__Sequence__init(v2x_msgs__msg__TractorCharacteristics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TractorCharacteristics * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__TractorCharacteristics *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__TractorCharacteristics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__TractorCharacteristics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__TractorCharacteristics__fini(&data[i - 1]);
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
v2x_msgs__msg__TractorCharacteristics__Sequence__fini(v2x_msgs__msg__TractorCharacteristics__Sequence * array)
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
      v2x_msgs__msg__TractorCharacteristics__fini(&array->data[i]);
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

v2x_msgs__msg__TractorCharacteristics__Sequence *
v2x_msgs__msg__TractorCharacteristics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TractorCharacteristics__Sequence * array = (v2x_msgs__msg__TractorCharacteristics__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__TractorCharacteristics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__TractorCharacteristics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__TractorCharacteristics__Sequence__destroy(v2x_msgs__msg__TractorCharacteristics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__TractorCharacteristics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__TractorCharacteristics__Sequence__are_equal(const v2x_msgs__msg__TractorCharacteristics__Sequence * lhs, const v2x_msgs__msg__TractorCharacteristics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__TractorCharacteristics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__TractorCharacteristics__Sequence__copy(
  const v2x_msgs__msg__TractorCharacteristics__Sequence * input,
  v2x_msgs__msg__TractorCharacteristics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__TractorCharacteristics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__TractorCharacteristics * data =
      (v2x_msgs__msg__TractorCharacteristics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__TractorCharacteristics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__TractorCharacteristics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__TractorCharacteristics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
