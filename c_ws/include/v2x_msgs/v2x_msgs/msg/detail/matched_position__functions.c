// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/MatchedPosition.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/matched_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane_id`
#include "v2x_msgs/msg/detail/lane_id__functions.h"
// Member `longitudinal_lane_position`
#include "v2x_msgs/msg/detail/longitudinal_lane_position__functions.h"

bool
v2x_msgs__msg__MatchedPosition__init(v2x_msgs__msg__MatchedPosition * msg)
{
  if (!msg) {
    return false;
  }
  // lane_id_present
  msg->lane_id_present = false;
  // lane_id
  if (!v2x_msgs__msg__LaneID__init(&msg->lane_id)) {
    v2x_msgs__msg__MatchedPosition__fini(msg);
    return false;
  }
  // longitudinal_lane_position_present
  msg->longitudinal_lane_position_present = false;
  // longitudinal_lane_position
  if (!v2x_msgs__msg__LongitudinalLanePosition__init(&msg->longitudinal_lane_position)) {
    v2x_msgs__msg__MatchedPosition__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__MatchedPosition__fini(v2x_msgs__msg__MatchedPosition * msg)
{
  if (!msg) {
    return;
  }
  // lane_id_present
  // lane_id
  v2x_msgs__msg__LaneID__fini(&msg->lane_id);
  // longitudinal_lane_position_present
  // longitudinal_lane_position
  v2x_msgs__msg__LongitudinalLanePosition__fini(&msg->longitudinal_lane_position);
}

bool
v2x_msgs__msg__MatchedPosition__are_equal(const v2x_msgs__msg__MatchedPosition * lhs, const v2x_msgs__msg__MatchedPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_id_present
  if (lhs->lane_id_present != rhs->lane_id_present) {
    return false;
  }
  // lane_id
  if (!v2x_msgs__msg__LaneID__are_equal(
      &(lhs->lane_id), &(rhs->lane_id)))
  {
    return false;
  }
  // longitudinal_lane_position_present
  if (lhs->longitudinal_lane_position_present != rhs->longitudinal_lane_position_present) {
    return false;
  }
  // longitudinal_lane_position
  if (!v2x_msgs__msg__LongitudinalLanePosition__are_equal(
      &(lhs->longitudinal_lane_position), &(rhs->longitudinal_lane_position)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__MatchedPosition__copy(
  const v2x_msgs__msg__MatchedPosition * input,
  v2x_msgs__msg__MatchedPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_id_present
  output->lane_id_present = input->lane_id_present;
  // lane_id
  if (!v2x_msgs__msg__LaneID__copy(
      &(input->lane_id), &(output->lane_id)))
  {
    return false;
  }
  // longitudinal_lane_position_present
  output->longitudinal_lane_position_present = input->longitudinal_lane_position_present;
  // longitudinal_lane_position
  if (!v2x_msgs__msg__LongitudinalLanePosition__copy(
      &(input->longitudinal_lane_position), &(output->longitudinal_lane_position)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__MatchedPosition *
v2x_msgs__msg__MatchedPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__MatchedPosition * msg = (v2x_msgs__msg__MatchedPosition *)allocator.allocate(sizeof(v2x_msgs__msg__MatchedPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__MatchedPosition));
  bool success = v2x_msgs__msg__MatchedPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__MatchedPosition__destroy(v2x_msgs__msg__MatchedPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__MatchedPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__MatchedPosition__Sequence__init(v2x_msgs__msg__MatchedPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__MatchedPosition * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__MatchedPosition *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__MatchedPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__MatchedPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__MatchedPosition__fini(&data[i - 1]);
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
v2x_msgs__msg__MatchedPosition__Sequence__fini(v2x_msgs__msg__MatchedPosition__Sequence * array)
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
      v2x_msgs__msg__MatchedPosition__fini(&array->data[i]);
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

v2x_msgs__msg__MatchedPosition__Sequence *
v2x_msgs__msg__MatchedPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__MatchedPosition__Sequence * array = (v2x_msgs__msg__MatchedPosition__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__MatchedPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__MatchedPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__MatchedPosition__Sequence__destroy(v2x_msgs__msg__MatchedPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__MatchedPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__MatchedPosition__Sequence__are_equal(const v2x_msgs__msg__MatchedPosition__Sequence * lhs, const v2x_msgs__msg__MatchedPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__MatchedPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__MatchedPosition__Sequence__copy(
  const v2x_msgs__msg__MatchedPosition__Sequence * input,
  v2x_msgs__msg__MatchedPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__MatchedPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__MatchedPosition * data =
      (v2x_msgs__msg__MatchedPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__MatchedPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__MatchedPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__MatchedPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
