// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ComputedLane.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/computed_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reference_lane_id`
#include "v2x_msgs/msg/detail/lane_id__functions.h"
// Member `small_x`
// Member `small_y`
#include "v2x_msgs/msg/detail/driven_line_offset_sm__functions.h"
// Member `large_x`
// Member `large_y`
#include "v2x_msgs/msg/detail/driven_line_offset_lg__functions.h"
// Member `rotate_xy`
#include "v2x_msgs/msg/detail/angle__functions.h"
// Member `scale_xaxis`
// Member `scale_yaxis`
#include "v2x_msgs/msg/detail/scale_b12__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/antenna_offset_set__functions.h"

bool
v2x_msgs__msg__ComputedLane__init(v2x_msgs__msg__ComputedLane * msg)
{
  if (!msg) {
    return false;
  }
  // reference_lane_id
  if (!v2x_msgs__msg__LaneID__init(&msg->reference_lane_id)) {
    v2x_msgs__msg__ComputedLane__fini(msg);
    return false;
  }
  // offset_xaxis_container_select
  msg->offset_xaxis_container_select = 0ll;
  // small_x
  if (!v2x_msgs__msg__DrivenLineOffsetSm__init(&msg->small_x)) {
    v2x_msgs__msg__ComputedLane__fini(msg);
    return false;
  }
  // large_x
  if (!v2x_msgs__msg__DrivenLineOffsetLg__init(&msg->large_x)) {
    v2x_msgs__msg__ComputedLane__fini(msg);
    return false;
  }
  // offset_yaxis_container_select
  msg->offset_yaxis_container_select = 0ll;
  // small_y
  if (!v2x_msgs__msg__DrivenLineOffsetSm__init(&msg->small_y)) {
    v2x_msgs__msg__ComputedLane__fini(msg);
    return false;
  }
  // large_y
  if (!v2x_msgs__msg__DrivenLineOffsetLg__init(&msg->large_y)) {
    v2x_msgs__msg__ComputedLane__fini(msg);
    return false;
  }
  // rotate_xy_present
  msg->rotate_xy_present = false;
  // rotate_xy
  if (!v2x_msgs__msg__Angle__init(&msg->rotate_xy)) {
    v2x_msgs__msg__ComputedLane__fini(msg);
    return false;
  }
  // scale_xaxis_present
  msg->scale_xaxis_present = false;
  // scale_xaxis
  if (!v2x_msgs__msg__ScaleB12__init(&msg->scale_xaxis)) {
    v2x_msgs__msg__ComputedLane__fini(msg);
    return false;
  }
  // scale_yaxis_present
  msg->scale_yaxis_present = false;
  // scale_yaxis
  if (!v2x_msgs__msg__ScaleB12__init(&msg->scale_yaxis)) {
    v2x_msgs__msg__ComputedLane__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__AntennaOffsetSet__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__ComputedLane__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ComputedLane__fini(v2x_msgs__msg__ComputedLane * msg)
{
  if (!msg) {
    return;
  }
  // reference_lane_id
  v2x_msgs__msg__LaneID__fini(&msg->reference_lane_id);
  // offset_xaxis_container_select
  // small_x
  v2x_msgs__msg__DrivenLineOffsetSm__fini(&msg->small_x);
  // large_x
  v2x_msgs__msg__DrivenLineOffsetLg__fini(&msg->large_x);
  // offset_yaxis_container_select
  // small_y
  v2x_msgs__msg__DrivenLineOffsetSm__fini(&msg->small_y);
  // large_y
  v2x_msgs__msg__DrivenLineOffsetLg__fini(&msg->large_y);
  // rotate_xy_present
  // rotate_xy
  v2x_msgs__msg__Angle__fini(&msg->rotate_xy);
  // scale_xaxis_present
  // scale_xaxis
  v2x_msgs__msg__ScaleB12__fini(&msg->scale_xaxis);
  // scale_yaxis_present
  // scale_yaxis
  v2x_msgs__msg__ScaleB12__fini(&msg->scale_yaxis);
  // regional_present
  // regional
  v2x_msgs__msg__AntennaOffsetSet__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__ComputedLane__are_equal(const v2x_msgs__msg__ComputedLane * lhs, const v2x_msgs__msg__ComputedLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reference_lane_id
  if (!v2x_msgs__msg__LaneID__are_equal(
      &(lhs->reference_lane_id), &(rhs->reference_lane_id)))
  {
    return false;
  }
  // offset_xaxis_container_select
  if (lhs->offset_xaxis_container_select != rhs->offset_xaxis_container_select) {
    return false;
  }
  // small_x
  if (!v2x_msgs__msg__DrivenLineOffsetSm__are_equal(
      &(lhs->small_x), &(rhs->small_x)))
  {
    return false;
  }
  // large_x
  if (!v2x_msgs__msg__DrivenLineOffsetLg__are_equal(
      &(lhs->large_x), &(rhs->large_x)))
  {
    return false;
  }
  // offset_yaxis_container_select
  if (lhs->offset_yaxis_container_select != rhs->offset_yaxis_container_select) {
    return false;
  }
  // small_y
  if (!v2x_msgs__msg__DrivenLineOffsetSm__are_equal(
      &(lhs->small_y), &(rhs->small_y)))
  {
    return false;
  }
  // large_y
  if (!v2x_msgs__msg__DrivenLineOffsetLg__are_equal(
      &(lhs->large_y), &(rhs->large_y)))
  {
    return false;
  }
  // rotate_xy_present
  if (lhs->rotate_xy_present != rhs->rotate_xy_present) {
    return false;
  }
  // rotate_xy
  if (!v2x_msgs__msg__Angle__are_equal(
      &(lhs->rotate_xy), &(rhs->rotate_xy)))
  {
    return false;
  }
  // scale_xaxis_present
  if (lhs->scale_xaxis_present != rhs->scale_xaxis_present) {
    return false;
  }
  // scale_xaxis
  if (!v2x_msgs__msg__ScaleB12__are_equal(
      &(lhs->scale_xaxis), &(rhs->scale_xaxis)))
  {
    return false;
  }
  // scale_yaxis_present
  if (lhs->scale_yaxis_present != rhs->scale_yaxis_present) {
    return false;
  }
  // scale_yaxis
  if (!v2x_msgs__msg__ScaleB12__are_equal(
      &(lhs->scale_yaxis), &(rhs->scale_yaxis)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__AntennaOffsetSet__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ComputedLane__copy(
  const v2x_msgs__msg__ComputedLane * input,
  v2x_msgs__msg__ComputedLane * output)
{
  if (!input || !output) {
    return false;
  }
  // reference_lane_id
  if (!v2x_msgs__msg__LaneID__copy(
      &(input->reference_lane_id), &(output->reference_lane_id)))
  {
    return false;
  }
  // offset_xaxis_container_select
  output->offset_xaxis_container_select = input->offset_xaxis_container_select;
  // small_x
  if (!v2x_msgs__msg__DrivenLineOffsetSm__copy(
      &(input->small_x), &(output->small_x)))
  {
    return false;
  }
  // large_x
  if (!v2x_msgs__msg__DrivenLineOffsetLg__copy(
      &(input->large_x), &(output->large_x)))
  {
    return false;
  }
  // offset_yaxis_container_select
  output->offset_yaxis_container_select = input->offset_yaxis_container_select;
  // small_y
  if (!v2x_msgs__msg__DrivenLineOffsetSm__copy(
      &(input->small_y), &(output->small_y)))
  {
    return false;
  }
  // large_y
  if (!v2x_msgs__msg__DrivenLineOffsetLg__copy(
      &(input->large_y), &(output->large_y)))
  {
    return false;
  }
  // rotate_xy_present
  output->rotate_xy_present = input->rotate_xy_present;
  // rotate_xy
  if (!v2x_msgs__msg__Angle__copy(
      &(input->rotate_xy), &(output->rotate_xy)))
  {
    return false;
  }
  // scale_xaxis_present
  output->scale_xaxis_present = input->scale_xaxis_present;
  // scale_xaxis
  if (!v2x_msgs__msg__ScaleB12__copy(
      &(input->scale_xaxis), &(output->scale_xaxis)))
  {
    return false;
  }
  // scale_yaxis_present
  output->scale_yaxis_present = input->scale_yaxis_present;
  // scale_yaxis
  if (!v2x_msgs__msg__ScaleB12__copy(
      &(input->scale_yaxis), &(output->scale_yaxis)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__AntennaOffsetSet__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ComputedLane *
v2x_msgs__msg__ComputedLane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ComputedLane * msg = (v2x_msgs__msg__ComputedLane *)allocator.allocate(sizeof(v2x_msgs__msg__ComputedLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ComputedLane));
  bool success = v2x_msgs__msg__ComputedLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ComputedLane__destroy(v2x_msgs__msg__ComputedLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ComputedLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ComputedLane__Sequence__init(v2x_msgs__msg__ComputedLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ComputedLane * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ComputedLane *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ComputedLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ComputedLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ComputedLane__fini(&data[i - 1]);
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
v2x_msgs__msg__ComputedLane__Sequence__fini(v2x_msgs__msg__ComputedLane__Sequence * array)
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
      v2x_msgs__msg__ComputedLane__fini(&array->data[i]);
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

v2x_msgs__msg__ComputedLane__Sequence *
v2x_msgs__msg__ComputedLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ComputedLane__Sequence * array = (v2x_msgs__msg__ComputedLane__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ComputedLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ComputedLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ComputedLane__Sequence__destroy(v2x_msgs__msg__ComputedLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ComputedLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ComputedLane__Sequence__are_equal(const v2x_msgs__msg__ComputedLane__Sequence * lhs, const v2x_msgs__msg__ComputedLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ComputedLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ComputedLane__Sequence__copy(
  const v2x_msgs__msg__ComputedLane__Sequence * input,
  v2x_msgs__msg__ComputedLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ComputedLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ComputedLane * data =
      (v2x_msgs__msg__ComputedLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ComputedLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ComputedLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ComputedLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
