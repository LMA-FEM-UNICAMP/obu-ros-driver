// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ComputedSegment.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/computed_segment__functions.h"

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
// Member `lane_width`
#include "v2x_msgs/msg/detail/ivi_lane_width__functions.h"
// Member `offset_position`
#include "v2x_msgs/msg/detail/delta_reference_position__functions.h"

bool
v2x_msgs__msg__ComputedSegment__init(v2x_msgs__msg__ComputedSegment * msg)
{
  if (!msg) {
    return false;
  }
  // zone_id
  if (!v2x_msgs__msg__Zid__init(&msg->zone_id)) {
    v2x_msgs__msg__ComputedSegment__fini(msg);
    return false;
  }
  // lane_number
  if (!v2x_msgs__msg__LanePosition__init(&msg->lane_number)) {
    v2x_msgs__msg__ComputedSegment__fini(msg);
    return false;
  }
  // lane_width
  if (!v2x_msgs__msg__IviLaneWidth__init(&msg->lane_width)) {
    v2x_msgs__msg__ComputedSegment__fini(msg);
    return false;
  }
  // offset_distance_present
  msg->offset_distance_present = false;
  // offset_distance
  // offset_position_present
  msg->offset_position_present = false;
  // offset_position
  if (!v2x_msgs__msg__DeltaReferencePosition__init(&msg->offset_position)) {
    v2x_msgs__msg__ComputedSegment__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ComputedSegment__fini(v2x_msgs__msg__ComputedSegment * msg)
{
  if (!msg) {
    return;
  }
  // zone_id
  v2x_msgs__msg__Zid__fini(&msg->zone_id);
  // lane_number
  v2x_msgs__msg__LanePosition__fini(&msg->lane_number);
  // lane_width
  v2x_msgs__msg__IviLaneWidth__fini(&msg->lane_width);
  // offset_distance_present
  // offset_distance
  // offset_position_present
  // offset_position
  v2x_msgs__msg__DeltaReferencePosition__fini(&msg->offset_position);
}

bool
v2x_msgs__msg__ComputedSegment__are_equal(const v2x_msgs__msg__ComputedSegment * lhs, const v2x_msgs__msg__ComputedSegment * rhs)
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
  // lane_number
  if (!v2x_msgs__msg__LanePosition__are_equal(
      &(lhs->lane_number), &(rhs->lane_number)))
  {
    return false;
  }
  // lane_width
  if (!v2x_msgs__msg__IviLaneWidth__are_equal(
      &(lhs->lane_width), &(rhs->lane_width)))
  {
    return false;
  }
  // offset_distance_present
  if (lhs->offset_distance_present != rhs->offset_distance_present) {
    return false;
  }
  // offset_distance
  if (lhs->offset_distance != rhs->offset_distance) {
    return false;
  }
  // offset_position_present
  if (lhs->offset_position_present != rhs->offset_position_present) {
    return false;
  }
  // offset_position
  if (!v2x_msgs__msg__DeltaReferencePosition__are_equal(
      &(lhs->offset_position), &(rhs->offset_position)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ComputedSegment__copy(
  const v2x_msgs__msg__ComputedSegment * input,
  v2x_msgs__msg__ComputedSegment * output)
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
  // lane_number
  if (!v2x_msgs__msg__LanePosition__copy(
      &(input->lane_number), &(output->lane_number)))
  {
    return false;
  }
  // lane_width
  if (!v2x_msgs__msg__IviLaneWidth__copy(
      &(input->lane_width), &(output->lane_width)))
  {
    return false;
  }
  // offset_distance_present
  output->offset_distance_present = input->offset_distance_present;
  // offset_distance
  output->offset_distance = input->offset_distance;
  // offset_position_present
  output->offset_position_present = input->offset_position_present;
  // offset_position
  if (!v2x_msgs__msg__DeltaReferencePosition__copy(
      &(input->offset_position), &(output->offset_position)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ComputedSegment *
v2x_msgs__msg__ComputedSegment__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ComputedSegment * msg = (v2x_msgs__msg__ComputedSegment *)allocator.allocate(sizeof(v2x_msgs__msg__ComputedSegment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ComputedSegment));
  bool success = v2x_msgs__msg__ComputedSegment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ComputedSegment__destroy(v2x_msgs__msg__ComputedSegment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ComputedSegment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ComputedSegment__Sequence__init(v2x_msgs__msg__ComputedSegment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ComputedSegment * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ComputedSegment *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ComputedSegment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ComputedSegment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ComputedSegment__fini(&data[i - 1]);
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
v2x_msgs__msg__ComputedSegment__Sequence__fini(v2x_msgs__msg__ComputedSegment__Sequence * array)
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
      v2x_msgs__msg__ComputedSegment__fini(&array->data[i]);
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

v2x_msgs__msg__ComputedSegment__Sequence *
v2x_msgs__msg__ComputedSegment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ComputedSegment__Sequence * array = (v2x_msgs__msg__ComputedSegment__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ComputedSegment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ComputedSegment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ComputedSegment__Sequence__destroy(v2x_msgs__msg__ComputedSegment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ComputedSegment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ComputedSegment__Sequence__are_equal(const v2x_msgs__msg__ComputedSegment__Sequence * lhs, const v2x_msgs__msg__ComputedSegment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ComputedSegment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ComputedSegment__Sequence__copy(
  const v2x_msgs__msg__ComputedSegment__Sequence * input,
  v2x_msgs__msg__ComputedSegment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ComputedSegment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ComputedSegment * data =
      (v2x_msgs__msg__ComputedSegment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ComputedSegment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ComputedSegment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ComputedSegment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
