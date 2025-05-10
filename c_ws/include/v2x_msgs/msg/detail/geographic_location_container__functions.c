// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/GeographicLocationContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/geographic_location_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reference_position`
#include "v2x_msgs/msg/detail/reference_position__functions.h"
// Member `reference_position_time`
#include "v2x_msgs/msg/detail/timestamp_its__functions.h"
// Member `reference_position_heading`
#include "v2x_msgs/msg/detail/heading__functions.h"
// Member `reference_position_speed`
#include "v2x_msgs/msg/detail/speed__functions.h"
// Member `parts`
#include "v2x_msgs/msg/detail/glc_parts__functions.h"

bool
v2x_msgs__msg__GeographicLocationContainer__init(v2x_msgs__msg__GeographicLocationContainer * msg)
{
  if (!msg) {
    return false;
  }
  // reference_position
  if (!v2x_msgs__msg__ReferencePosition__init(&msg->reference_position)) {
    v2x_msgs__msg__GeographicLocationContainer__fini(msg);
    return false;
  }
  // reference_position_time_present
  msg->reference_position_time_present = false;
  // reference_position_time
  if (!v2x_msgs__msg__TimestampIts__init(&msg->reference_position_time)) {
    v2x_msgs__msg__GeographicLocationContainer__fini(msg);
    return false;
  }
  // reference_position_heading_present
  msg->reference_position_heading_present = false;
  // reference_position_heading
  if (!v2x_msgs__msg__Heading__init(&msg->reference_position_heading)) {
    v2x_msgs__msg__GeographicLocationContainer__fini(msg);
    return false;
  }
  // reference_position_speed_present
  msg->reference_position_speed_present = false;
  // reference_position_speed
  if (!v2x_msgs__msg__Speed__init(&msg->reference_position_speed)) {
    v2x_msgs__msg__GeographicLocationContainer__fini(msg);
    return false;
  }
  // parts
  if (!v2x_msgs__msg__GlcParts__init(&msg->parts)) {
    v2x_msgs__msg__GeographicLocationContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__GeographicLocationContainer__fini(v2x_msgs__msg__GeographicLocationContainer * msg)
{
  if (!msg) {
    return;
  }
  // reference_position
  v2x_msgs__msg__ReferencePosition__fini(&msg->reference_position);
  // reference_position_time_present
  // reference_position_time
  v2x_msgs__msg__TimestampIts__fini(&msg->reference_position_time);
  // reference_position_heading_present
  // reference_position_heading
  v2x_msgs__msg__Heading__fini(&msg->reference_position_heading);
  // reference_position_speed_present
  // reference_position_speed
  v2x_msgs__msg__Speed__fini(&msg->reference_position_speed);
  // parts
  v2x_msgs__msg__GlcParts__fini(&msg->parts);
}

bool
v2x_msgs__msg__GeographicLocationContainer__are_equal(const v2x_msgs__msg__GeographicLocationContainer * lhs, const v2x_msgs__msg__GeographicLocationContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reference_position
  if (!v2x_msgs__msg__ReferencePosition__are_equal(
      &(lhs->reference_position), &(rhs->reference_position)))
  {
    return false;
  }
  // reference_position_time_present
  if (lhs->reference_position_time_present != rhs->reference_position_time_present) {
    return false;
  }
  // reference_position_time
  if (!v2x_msgs__msg__TimestampIts__are_equal(
      &(lhs->reference_position_time), &(rhs->reference_position_time)))
  {
    return false;
  }
  // reference_position_heading_present
  if (lhs->reference_position_heading_present != rhs->reference_position_heading_present) {
    return false;
  }
  // reference_position_heading
  if (!v2x_msgs__msg__Heading__are_equal(
      &(lhs->reference_position_heading), &(rhs->reference_position_heading)))
  {
    return false;
  }
  // reference_position_speed_present
  if (lhs->reference_position_speed_present != rhs->reference_position_speed_present) {
    return false;
  }
  // reference_position_speed
  if (!v2x_msgs__msg__Speed__are_equal(
      &(lhs->reference_position_speed), &(rhs->reference_position_speed)))
  {
    return false;
  }
  // parts
  if (!v2x_msgs__msg__GlcParts__are_equal(
      &(lhs->parts), &(rhs->parts)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__GeographicLocationContainer__copy(
  const v2x_msgs__msg__GeographicLocationContainer * input,
  v2x_msgs__msg__GeographicLocationContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // reference_position
  if (!v2x_msgs__msg__ReferencePosition__copy(
      &(input->reference_position), &(output->reference_position)))
  {
    return false;
  }
  // reference_position_time_present
  output->reference_position_time_present = input->reference_position_time_present;
  // reference_position_time
  if (!v2x_msgs__msg__TimestampIts__copy(
      &(input->reference_position_time), &(output->reference_position_time)))
  {
    return false;
  }
  // reference_position_heading_present
  output->reference_position_heading_present = input->reference_position_heading_present;
  // reference_position_heading
  if (!v2x_msgs__msg__Heading__copy(
      &(input->reference_position_heading), &(output->reference_position_heading)))
  {
    return false;
  }
  // reference_position_speed_present
  output->reference_position_speed_present = input->reference_position_speed_present;
  // reference_position_speed
  if (!v2x_msgs__msg__Speed__copy(
      &(input->reference_position_speed), &(output->reference_position_speed)))
  {
    return false;
  }
  // parts
  if (!v2x_msgs__msg__GlcParts__copy(
      &(input->parts), &(output->parts)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__GeographicLocationContainer *
v2x_msgs__msg__GeographicLocationContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__GeographicLocationContainer * msg = (v2x_msgs__msg__GeographicLocationContainer *)allocator.allocate(sizeof(v2x_msgs__msg__GeographicLocationContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__GeographicLocationContainer));
  bool success = v2x_msgs__msg__GeographicLocationContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__GeographicLocationContainer__destroy(v2x_msgs__msg__GeographicLocationContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__GeographicLocationContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__GeographicLocationContainer__Sequence__init(v2x_msgs__msg__GeographicLocationContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__GeographicLocationContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__GeographicLocationContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__GeographicLocationContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__GeographicLocationContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__GeographicLocationContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__GeographicLocationContainer__Sequence__fini(v2x_msgs__msg__GeographicLocationContainer__Sequence * array)
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
      v2x_msgs__msg__GeographicLocationContainer__fini(&array->data[i]);
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

v2x_msgs__msg__GeographicLocationContainer__Sequence *
v2x_msgs__msg__GeographicLocationContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__GeographicLocationContainer__Sequence * array = (v2x_msgs__msg__GeographicLocationContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__GeographicLocationContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__GeographicLocationContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__GeographicLocationContainer__Sequence__destroy(v2x_msgs__msg__GeographicLocationContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__GeographicLocationContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__GeographicLocationContainer__Sequence__are_equal(const v2x_msgs__msg__GeographicLocationContainer__Sequence * lhs, const v2x_msgs__msg__GeographicLocationContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__GeographicLocationContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__GeographicLocationContainer__Sequence__copy(
  const v2x_msgs__msg__GeographicLocationContainer__Sequence * input,
  v2x_msgs__msg__GeographicLocationContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__GeographicLocationContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__GeographicLocationContainer * data =
      (v2x_msgs__msg__GeographicLocationContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__GeographicLocationContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__GeographicLocationContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__GeographicLocationContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
