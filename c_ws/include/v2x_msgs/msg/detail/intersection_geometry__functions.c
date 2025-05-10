// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/intersection_geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "v2x_msgs/msg/detail/descriptive_name__functions.h"
// Member `id`
#include "v2x_msgs/msg/detail/intersection_reference_id__functions.h"
// Member `revision`
#include "v2x_msgs/msg/detail/msg_count__functions.h"
// Member `ref_point`
#include "v2x_msgs/msg/detail/position3_d__functions.h"
// Member `lane_width`
#include "v2x_msgs/msg/detail/lane_width__functions.h"
// Member `speed_limits`
#include "v2x_msgs/msg/detail/speed_limit_list__functions.h"
// Member `lane_set`
#include "v2x_msgs/msg/detail/lane_list__functions.h"
// Member `preempt_priority_data`
#include "v2x_msgs/msg/detail/preempt_priority_list__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_intersection_geometry__functions.h"

bool
v2x_msgs__msg__IntersectionGeometry__init(v2x_msgs__msg__IntersectionGeometry * msg)
{
  if (!msg) {
    return false;
  }
  // name_present
  msg->name_present = false;
  // name
  if (!v2x_msgs__msg__DescriptiveName__init(&msg->name)) {
    v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // id
  if (!v2x_msgs__msg__IntersectionReferenceID__init(&msg->id)) {
    v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // revision
  if (!v2x_msgs__msg__MsgCount__init(&msg->revision)) {
    v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // ref_point
  if (!v2x_msgs__msg__Position3D__init(&msg->ref_point)) {
    v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // lane_width_present
  msg->lane_width_present = false;
  // lane_width
  if (!v2x_msgs__msg__LaneWidth__init(&msg->lane_width)) {
    v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // speed_limits_present
  msg->speed_limits_present = false;
  // speed_limits
  if (!v2x_msgs__msg__SpeedLimitList__init(&msg->speed_limits)) {
    v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // lane_set
  if (!v2x_msgs__msg__LaneList__init(&msg->lane_set)) {
    v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // preempt_priority_data_present
  msg->preempt_priority_data_present = false;
  // preempt_priority_data
  if (!v2x_msgs__msg__PreemptPriorityList__init(&msg->preempt_priority_data)) {
    v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegIntersectionGeometry__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__IntersectionGeometry__fini(v2x_msgs__msg__IntersectionGeometry * msg)
{
  if (!msg) {
    return;
  }
  // name_present
  // name
  v2x_msgs__msg__DescriptiveName__fini(&msg->name);
  // id
  v2x_msgs__msg__IntersectionReferenceID__fini(&msg->id);
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
  // lane_set
  v2x_msgs__msg__LaneList__fini(&msg->lane_set);
  // preempt_priority_data_present
  // preempt_priority_data
  v2x_msgs__msg__PreemptPriorityList__fini(&msg->preempt_priority_data);
  // regional_present
  // regional
  v2x_msgs__msg__RegIntersectionGeometry__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__IntersectionGeometry__are_equal(const v2x_msgs__msg__IntersectionGeometry * lhs, const v2x_msgs__msg__IntersectionGeometry * rhs)
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
  if (!v2x_msgs__msg__IntersectionReferenceID__are_equal(
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
  // lane_set
  if (!v2x_msgs__msg__LaneList__are_equal(
      &(lhs->lane_set), &(rhs->lane_set)))
  {
    return false;
  }
  // preempt_priority_data_present
  if (lhs->preempt_priority_data_present != rhs->preempt_priority_data_present) {
    return false;
  }
  // preempt_priority_data
  if (!v2x_msgs__msg__PreemptPriorityList__are_equal(
      &(lhs->preempt_priority_data), &(rhs->preempt_priority_data)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegIntersectionGeometry__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__IntersectionGeometry__copy(
  const v2x_msgs__msg__IntersectionGeometry * input,
  v2x_msgs__msg__IntersectionGeometry * output)
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
  if (!v2x_msgs__msg__IntersectionReferenceID__copy(
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
  // lane_set
  if (!v2x_msgs__msg__LaneList__copy(
      &(input->lane_set), &(output->lane_set)))
  {
    return false;
  }
  // preempt_priority_data_present
  output->preempt_priority_data_present = input->preempt_priority_data_present;
  // preempt_priority_data
  if (!v2x_msgs__msg__PreemptPriorityList__copy(
      &(input->preempt_priority_data), &(output->preempt_priority_data)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegIntersectionGeometry__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__IntersectionGeometry *
v2x_msgs__msg__IntersectionGeometry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IntersectionGeometry * msg = (v2x_msgs__msg__IntersectionGeometry *)allocator.allocate(sizeof(v2x_msgs__msg__IntersectionGeometry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__IntersectionGeometry));
  bool success = v2x_msgs__msg__IntersectionGeometry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__IntersectionGeometry__destroy(v2x_msgs__msg__IntersectionGeometry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__IntersectionGeometry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__IntersectionGeometry__Sequence__init(v2x_msgs__msg__IntersectionGeometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IntersectionGeometry * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__IntersectionGeometry *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__IntersectionGeometry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__IntersectionGeometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__IntersectionGeometry__fini(&data[i - 1]);
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
v2x_msgs__msg__IntersectionGeometry__Sequence__fini(v2x_msgs__msg__IntersectionGeometry__Sequence * array)
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
      v2x_msgs__msg__IntersectionGeometry__fini(&array->data[i]);
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

v2x_msgs__msg__IntersectionGeometry__Sequence *
v2x_msgs__msg__IntersectionGeometry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IntersectionGeometry__Sequence * array = (v2x_msgs__msg__IntersectionGeometry__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__IntersectionGeometry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__IntersectionGeometry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__IntersectionGeometry__Sequence__destroy(v2x_msgs__msg__IntersectionGeometry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__IntersectionGeometry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__IntersectionGeometry__Sequence__are_equal(const v2x_msgs__msg__IntersectionGeometry__Sequence * lhs, const v2x_msgs__msg__IntersectionGeometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__IntersectionGeometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__IntersectionGeometry__Sequence__copy(
  const v2x_msgs__msg__IntersectionGeometry__Sequence * input,
  v2x_msgs__msg__IntersectionGeometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__IntersectionGeometry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__IntersectionGeometry * data =
      (v2x_msgs__msg__IntersectionGeometry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__IntersectionGeometry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__IntersectionGeometry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__IntersectionGeometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
