// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RoadSegment.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/road_segment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "v2x_msgs/msg/detail/descriptive_name__functions.h"
// Member `id`
#include "v2x_msgs/msg/detail/road_segment_reference_id__functions.h"
// Member `revision`
#include "v2x_msgs/msg/detail/msg_count__functions.h"
// Member `ref_point`
#include "v2x_msgs/msg/detail/position3_d__functions.h"
// Member `lane_width`
#include "v2x_msgs/msg/detail/lane_width__functions.h"
// Member `speed_limits`
#include "v2x_msgs/msg/detail/speed_limit_list__functions.h"
// Member `road_lane_set`
#include "v2x_msgs/msg/detail/road_lane_set_list__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_road_segment__functions.h"

bool
v2x_msgs__msg__RoadSegment__init(v2x_msgs__msg__RoadSegment * msg)
{
  if (!msg) {
    return false;
  }
  // name_present
  msg->name_present = false;
  // name
  if (!v2x_msgs__msg__DescriptiveName__init(&msg->name)) {
    v2x_msgs__msg__RoadSegment__fini(msg);
    return false;
  }
  // id
  if (!v2x_msgs__msg__RoadSegmentReferenceID__init(&msg->id)) {
    v2x_msgs__msg__RoadSegment__fini(msg);
    return false;
  }
  // revision
  if (!v2x_msgs__msg__MsgCount__init(&msg->revision)) {
    v2x_msgs__msg__RoadSegment__fini(msg);
    return false;
  }
  // ref_point
  if (!v2x_msgs__msg__Position3D__init(&msg->ref_point)) {
    v2x_msgs__msg__RoadSegment__fini(msg);
    return false;
  }
  // lane_width_present
  msg->lane_width_present = false;
  // lane_width
  if (!v2x_msgs__msg__LaneWidth__init(&msg->lane_width)) {
    v2x_msgs__msg__RoadSegment__fini(msg);
    return false;
  }
  // speed_limits_present
  msg->speed_limits_present = false;
  // speed_limits
  if (!v2x_msgs__msg__SpeedLimitList__init(&msg->speed_limits)) {
    v2x_msgs__msg__RoadSegment__fini(msg);
    return false;
  }
  // road_lane_set
  if (!v2x_msgs__msg__RoadLaneSetList__init(&msg->road_lane_set)) {
    v2x_msgs__msg__RoadSegment__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegRoadSegment__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__RoadSegment__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RoadSegment__fini(v2x_msgs__msg__RoadSegment * msg)
{
  if (!msg) {
    return;
  }
  // name_present
  // name
  v2x_msgs__msg__DescriptiveName__fini(&msg->name);
  // id
  v2x_msgs__msg__RoadSegmentReferenceID__fini(&msg->id);
  // revision
  v2x_msgs__msg__MsgCount__fini(&msg->revision);
  // ref_point
  v2x_msgs__msg__Position3D__fini(&msg->ref_point);
  // lane_width_present
  // lane_width
  v2x_msgs__msg__LaneWidth__fini(&msg->lane_width);
  // speed_limits_present
  // speed_limits
  v2x_msgs__msg__SpeedLimitList__fini(&msg->speed_limits);
  // road_lane_set
  v2x_msgs__msg__RoadLaneSetList__fini(&msg->road_lane_set);
  // regional_present
  // regional
  v2x_msgs__msg__RegRoadSegment__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__RoadSegment__are_equal(const v2x_msgs__msg__RoadSegment * lhs, const v2x_msgs__msg__RoadSegment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name_present
  if (lhs->name_present != rhs->name_present) {
    return false;
  }
  // name
  if (!v2x_msgs__msg__DescriptiveName__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // id
  if (!v2x_msgs__msg__RoadSegmentReferenceID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // revision
  if (!v2x_msgs__msg__MsgCount__are_equal(
      &(lhs->revision), &(rhs->revision)))
  {
    return false;
  }
  // ref_point
  if (!v2x_msgs__msg__Position3D__are_equal(
      &(lhs->ref_point), &(rhs->ref_point)))
  {
    return false;
  }
  // lane_width_present
  if (lhs->lane_width_present != rhs->lane_width_present) {
    return false;
  }
  // lane_width
  if (!v2x_msgs__msg__LaneWidth__are_equal(
      &(lhs->lane_width), &(rhs->lane_width)))
  {
    return false;
  }
  // speed_limits_present
  if (lhs->speed_limits_present != rhs->speed_limits_present) {
    return false;
  }
  // speed_limits
  if (!v2x_msgs__msg__SpeedLimitList__are_equal(
      &(lhs->speed_limits), &(rhs->speed_limits)))
  {
    return false;
  }
  // road_lane_set
  if (!v2x_msgs__msg__RoadLaneSetList__are_equal(
      &(lhs->road_lane_set), &(rhs->road_lane_set)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegRoadSegment__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RoadSegment__copy(
  const v2x_msgs__msg__RoadSegment * input,
  v2x_msgs__msg__RoadSegment * output)
{
  if (!input || !output) {
    return false;
  }
  // name_present
  output->name_present = input->name_present;
  // name
  if (!v2x_msgs__msg__DescriptiveName__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // id
  if (!v2x_msgs__msg__RoadSegmentReferenceID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // revision
  if (!v2x_msgs__msg__MsgCount__copy(
      &(input->revision), &(output->revision)))
  {
    return false;
  }
  // ref_point
  if (!v2x_msgs__msg__Position3D__copy(
      &(input->ref_point), &(output->ref_point)))
  {
    return false;
  }
  // lane_width_present
  output->lane_width_present = input->lane_width_present;
  // lane_width
  if (!v2x_msgs__msg__LaneWidth__copy(
      &(input->lane_width), &(output->lane_width)))
  {
    return false;
  }
  // speed_limits_present
  output->speed_limits_present = input->speed_limits_present;
  // speed_limits
  if (!v2x_msgs__msg__SpeedLimitList__copy(
      &(input->speed_limits), &(output->speed_limits)))
  {
    return false;
  }
  // road_lane_set
  if (!v2x_msgs__msg__RoadLaneSetList__copy(
      &(input->road_lane_set), &(output->road_lane_set)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegRoadSegment__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RoadSegment *
v2x_msgs__msg__RoadSegment__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadSegment * msg = (v2x_msgs__msg__RoadSegment *)allocator.allocate(sizeof(v2x_msgs__msg__RoadSegment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RoadSegment));
  bool success = v2x_msgs__msg__RoadSegment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RoadSegment__destroy(v2x_msgs__msg__RoadSegment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RoadSegment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RoadSegment__Sequence__init(v2x_msgs__msg__RoadSegment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadSegment * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RoadSegment *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RoadSegment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RoadSegment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RoadSegment__fini(&data[i - 1]);
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
v2x_msgs__msg__RoadSegment__Sequence__fini(v2x_msgs__msg__RoadSegment__Sequence * array)
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
      v2x_msgs__msg__RoadSegment__fini(&array->data[i]);
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

v2x_msgs__msg__RoadSegment__Sequence *
v2x_msgs__msg__RoadSegment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadSegment__Sequence * array = (v2x_msgs__msg__RoadSegment__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RoadSegment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RoadSegment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RoadSegment__Sequence__destroy(v2x_msgs__msg__RoadSegment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RoadSegment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RoadSegment__Sequence__are_equal(const v2x_msgs__msg__RoadSegment__Sequence * lhs, const v2x_msgs__msg__RoadSegment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RoadSegment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RoadSegment__Sequence__copy(
  const v2x_msgs__msg__RoadSegment__Sequence * input,
  v2x_msgs__msg__RoadSegment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RoadSegment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RoadSegment * data =
      (v2x_msgs__msg__RoadSegment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RoadSegment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RoadSegment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RoadSegment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
