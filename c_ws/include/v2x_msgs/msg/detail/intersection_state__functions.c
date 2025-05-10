// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/intersection_state__functions.h"

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
// Member `status`
#include "v2x_msgs/msg/detail/intersection_status_object__functions.h"
// Member `moy`
#include "v2x_msgs/msg/detail/minute_of_the_year__functions.h"
// Member `time_stamp`
#include "v2x_msgs/msg/detail/d_second__functions.h"
// Member `enabled_lanes`
#include "v2x_msgs/msg/detail/enabled_lane_list__functions.h"
// Member `states`
#include "v2x_msgs/msg/detail/movement_list__functions.h"
// Member `maneuver_assist_list`
#include "v2x_msgs/msg/detail/maneuver_assist_list__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_intersection_state__functions.h"

bool
v2x_msgs__msg__IntersectionState__init(v2x_msgs__msg__IntersectionState * msg)
{
  if (!msg) {
    return false;
  }
  // name_present
  msg->name_present = false;
  // name
  if (!v2x_msgs__msg__DescriptiveName__init(&msg->name)) {
    v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // id
  if (!v2x_msgs__msg__IntersectionReferenceID__init(&msg->id)) {
    v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // revision
  if (!v2x_msgs__msg__MsgCount__init(&msg->revision)) {
    v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // status
  if (!v2x_msgs__msg__IntersectionStatusObject__init(&msg->status)) {
    v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // moy_present
  msg->moy_present = false;
  // moy
  if (!v2x_msgs__msg__MinuteOfTheYear__init(&msg->moy)) {
    v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // time_stamp_present
  msg->time_stamp_present = false;
  // time_stamp
  if (!v2x_msgs__msg__DSecond__init(&msg->time_stamp)) {
    v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // enabled_lanes_present
  msg->enabled_lanes_present = false;
  // enabled_lanes
  if (!v2x_msgs__msg__EnabledLaneList__init(&msg->enabled_lanes)) {
    v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // states
  if (!v2x_msgs__msg__MovementList__init(&msg->states)) {
    v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // maneuver_assist_list_present
  msg->maneuver_assist_list_present = false;
  // maneuver_assist_list
  if (!v2x_msgs__msg__ManeuverAssistList__init(&msg->maneuver_assist_list)) {
    v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegIntersectionState__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__IntersectionState__fini(v2x_msgs__msg__IntersectionState * msg)
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
  // status
  v2x_msgs__msg__IntersectionStatusObject__fini(&msg->status);
  // moy_present
  // moy
  v2x_msgs__msg__MinuteOfTheYear__fini(&msg->moy);
  // time_stamp_present
  // time_stamp
  v2x_msgs__msg__DSecond__fini(&msg->time_stamp);
  // enabled_lanes_present
  // enabled_lanes
  v2x_msgs__msg__EnabledLaneList__fini(&msg->enabled_lanes);
  // states
  v2x_msgs__msg__MovementList__fini(&msg->states);
  // maneuver_assist_list_present
  // maneuver_assist_list
  v2x_msgs__msg__ManeuverAssistList__fini(&msg->maneuver_assist_list);
  // regional_present
  // regional
  v2x_msgs__msg__RegIntersectionState__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__IntersectionState__are_equal(const v2x_msgs__msg__IntersectionState * lhs, const v2x_msgs__msg__IntersectionState * rhs)
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
  // status
  if (!v2x_msgs__msg__IntersectionStatusObject__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // moy_present
  if (lhs->moy_present != rhs->moy_present) {
    return false;
  }
  // moy
  if (!v2x_msgs__msg__MinuteOfTheYear__are_equal(
      &(lhs->moy), &(rhs->moy)))
  {
    return false;
  }
  // time_stamp_present
  if (lhs->time_stamp_present != rhs->time_stamp_present) {
    return false;
  }
  // time_stamp
  if (!v2x_msgs__msg__DSecond__are_equal(
      &(lhs->time_stamp), &(rhs->time_stamp)))
  {
    return false;
  }
  // enabled_lanes_present
  if (lhs->enabled_lanes_present != rhs->enabled_lanes_present) {
    return false;
  }
  // enabled_lanes
  if (!v2x_msgs__msg__EnabledLaneList__are_equal(
      &(lhs->enabled_lanes), &(rhs->enabled_lanes)))
  {
    return false;
  }
  // states
  if (!v2x_msgs__msg__MovementList__are_equal(
      &(lhs->states), &(rhs->states)))
  {
    return false;
  }
  // maneuver_assist_list_present
  if (lhs->maneuver_assist_list_present != rhs->maneuver_assist_list_present) {
    return false;
  }
  // maneuver_assist_list
  if (!v2x_msgs__msg__ManeuverAssistList__are_equal(
      &(lhs->maneuver_assist_list), &(rhs->maneuver_assist_list)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegIntersectionState__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__IntersectionState__copy(
  const v2x_msgs__msg__IntersectionState * input,
  v2x_msgs__msg__IntersectionState * output)
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
  // status
  if (!v2x_msgs__msg__IntersectionStatusObject__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // moy_present
  output->moy_present = input->moy_present;
  // moy
  if (!v2x_msgs__msg__MinuteOfTheYear__copy(
      &(input->moy), &(output->moy)))
  {
    return false;
  }
  // time_stamp_present
  output->time_stamp_present = input->time_stamp_present;
  // time_stamp
  if (!v2x_msgs__msg__DSecond__copy(
      &(input->time_stamp), &(output->time_stamp)))
  {
    return false;
  }
  // enabled_lanes_present
  output->enabled_lanes_present = input->enabled_lanes_present;
  // enabled_lanes
  if (!v2x_msgs__msg__EnabledLaneList__copy(
      &(input->enabled_lanes), &(output->enabled_lanes)))
  {
    return false;
  }
  // states
  if (!v2x_msgs__msg__MovementList__copy(
      &(input->states), &(output->states)))
  {
    return false;
  }
  // maneuver_assist_list_present
  output->maneuver_assist_list_present = input->maneuver_assist_list_present;
  // maneuver_assist_list
  if (!v2x_msgs__msg__ManeuverAssistList__copy(
      &(input->maneuver_assist_list), &(output->maneuver_assist_list)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegIntersectionState__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__IntersectionState *
v2x_msgs__msg__IntersectionState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IntersectionState * msg = (v2x_msgs__msg__IntersectionState *)allocator.allocate(sizeof(v2x_msgs__msg__IntersectionState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__IntersectionState));
  bool success = v2x_msgs__msg__IntersectionState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__IntersectionState__destroy(v2x_msgs__msg__IntersectionState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__IntersectionState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__IntersectionState__Sequence__init(v2x_msgs__msg__IntersectionState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IntersectionState * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__IntersectionState *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__IntersectionState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__IntersectionState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__IntersectionState__fini(&data[i - 1]);
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
v2x_msgs__msg__IntersectionState__Sequence__fini(v2x_msgs__msg__IntersectionState__Sequence * array)
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
      v2x_msgs__msg__IntersectionState__fini(&array->data[i]);
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

v2x_msgs__msg__IntersectionState__Sequence *
v2x_msgs__msg__IntersectionState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IntersectionState__Sequence * array = (v2x_msgs__msg__IntersectionState__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__IntersectionState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__IntersectionState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__IntersectionState__Sequence__destroy(v2x_msgs__msg__IntersectionState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__IntersectionState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__IntersectionState__Sequence__are_equal(const v2x_msgs__msg__IntersectionState__Sequence * lhs, const v2x_msgs__msg__IntersectionState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__IntersectionState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__IntersectionState__Sequence__copy(
  const v2x_msgs__msg__IntersectionState__Sequence * input,
  v2x_msgs__msg__IntersectionState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__IntersectionState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__IntersectionState * data =
      (v2x_msgs__msg__IntersectionState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__IntersectionState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__IntersectionState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__IntersectionState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
