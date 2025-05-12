// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/GlcPart.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/glc_part__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `zone_id`
#include "v2x_msgs/msg/detail/zid__functions.h"
// Member `lane_number`
#include "v2x_msgs/msg/detail/lane_position__functions.h"
// Member `zone_heading`
#include "v2x_msgs/msg/detail/heading_value__functions.h"
// Member `zone`
#include "v2x_msgs/msg/detail/zone__functions.h"

bool
v2x_msgs__msg__GlcPart__init(v2x_msgs__msg__GlcPart * msg)
{
  if (!msg) {
    return false;
  }
  // zone_id
  if (!v2x_msgs__msg__Zid__init(&msg->zone_id)) {
    v2x_msgs__msg__GlcPart__fini(msg);
    return false;
  }
  // lane_number_present
  msg->lane_number_present = false;
  // lane_number
  if (!v2x_msgs__msg__LanePosition__init(&msg->lane_number)) {
    v2x_msgs__msg__GlcPart__fini(msg);
    return false;
  }
  // zone_extension_present
  msg->zone_extension_present = false;
  // zone_extension
  // zone_heading_present
  msg->zone_heading_present = false;
  // zone_heading
  if (!v2x_msgs__msg__HeadingValue__init(&msg->zone_heading)) {
    v2x_msgs__msg__GlcPart__fini(msg);
    return false;
  }
  // zone_present
  msg->zone_present = false;
  // zone
  if (!v2x_msgs__msg__Zone__init(&msg->zone)) {
    v2x_msgs__msg__GlcPart__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__GlcPart__fini(v2x_msgs__msg__GlcPart * msg)
{
  if (!msg) {
    return;
  }
  // zone_id
  v2x_msgs__msg__Zid__fini(&msg->zone_id);
  // lane_number_present
  // lane_number
  v2x_msgs__msg__LanePosition__fini(&msg->lane_number);
  // zone_extension_present
  // zone_extension
  // zone_heading_present
  // zone_heading
  v2x_msgs__msg__HeadingValue__fini(&msg->zone_heading);
  // zone_present
  // zone
  v2x_msgs__msg__Zone__fini(&msg->zone);
}

bool
v2x_msgs__msg__GlcPart__are_equal(const v2x_msgs__msg__GlcPart * lhs, const v2x_msgs__msg__GlcPart * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // zone_id
  if (!v2x_msgs__msg__Zid__are_equal(
      &(lhs->zone_id), &(rhs->zone_id)))
  {
    return false;
  }
  // lane_number_present
  if (lhs->lane_number_present != rhs->lane_number_present) {
    return false;
  }
  // lane_number
  if (!v2x_msgs__msg__LanePosition__are_equal(
      &(lhs->lane_number), &(rhs->lane_number)))
  {
    return false;
  }
  // zone_extension_present
  if (lhs->zone_extension_present != rhs->zone_extension_present) {
    return false;
  }
  // zone_extension
  if (lhs->zone_extension != rhs->zone_extension) {
    return false;
  }
  // zone_heading_present
  if (lhs->zone_heading_present != rhs->zone_heading_present) {
    return false;
  }
  // zone_heading
  if (!v2x_msgs__msg__HeadingValue__are_equal(
      &(lhs->zone_heading), &(rhs->zone_heading)))
  {
    return false;
  }
  // zone_present
  if (lhs->zone_present != rhs->zone_present) {
    return false;
  }
  // zone
  if (!v2x_msgs__msg__Zone__are_equal(
      &(lhs->zone), &(rhs->zone)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__GlcPart__copy(
  const v2x_msgs__msg__GlcPart * input,
  v2x_msgs__msg__GlcPart * output)
{
  if (!input || !output) {
    return false;
  }
  // zone_id
  if (!v2x_msgs__msg__Zid__copy(
      &(input->zone_id), &(output->zone_id)))
  {
    return false;
  }
  // lane_number_present
  output->lane_number_present = input->lane_number_present;
  // lane_number
  if (!v2x_msgs__msg__LanePosition__copy(
      &(input->lane_number), &(output->lane_number)))
  {
    return false;
  }
  // zone_extension_present
  output->zone_extension_present = input->zone_extension_present;
  // zone_extension
  output->zone_extension = input->zone_extension;
  // zone_heading_present
  output->zone_heading_present = input->zone_heading_present;
  // zone_heading
  if (!v2x_msgs__msg__HeadingValue__copy(
      &(input->zone_heading), &(output->zone_heading)))
  {
    return false;
  }
  // zone_present
  output->zone_present = input->zone_present;
  // zone
  if (!v2x_msgs__msg__Zone__copy(
      &(input->zone), &(output->zone)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__GlcPart *
v2x_msgs__msg__GlcPart__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__GlcPart * msg = (v2x_msgs__msg__GlcPart *)allocator.allocate(sizeof(v2x_msgs__msg__GlcPart), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__GlcPart));
  bool success = v2x_msgs__msg__GlcPart__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__GlcPart__destroy(v2x_msgs__msg__GlcPart * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__GlcPart__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__GlcPart__Sequence__init(v2x_msgs__msg__GlcPart__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__GlcPart * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__GlcPart *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__GlcPart), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__GlcPart__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__GlcPart__fini(&data[i - 1]);
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
v2x_msgs__msg__GlcPart__Sequence__fini(v2x_msgs__msg__GlcPart__Sequence * array)
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
      v2x_msgs__msg__GlcPart__fini(&array->data[i]);
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

v2x_msgs__msg__GlcPart__Sequence *
v2x_msgs__msg__GlcPart__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__GlcPart__Sequence * array = (v2x_msgs__msg__GlcPart__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__GlcPart__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__GlcPart__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__GlcPart__Sequence__destroy(v2x_msgs__msg__GlcPart__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__GlcPart__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__GlcPart__Sequence__are_equal(const v2x_msgs__msg__GlcPart__Sequence * lhs, const v2x_msgs__msg__GlcPart__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__GlcPart__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__GlcPart__Sequence__copy(
  const v2x_msgs__msg__GlcPart__Sequence * input,
  v2x_msgs__msg__GlcPart__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__GlcPart);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__GlcPart * data =
      (v2x_msgs__msg__GlcPart *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__GlcPart__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__GlcPart__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__GlcPart__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
