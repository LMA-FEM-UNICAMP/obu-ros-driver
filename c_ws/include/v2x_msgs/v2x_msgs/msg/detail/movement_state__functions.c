// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/movement_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `movement_name`
#include "v2x_msgs/msg/detail/descriptive_name__functions.h"
// Member `signal_group`
#include "v2x_msgs/msg/detail/signal_group_id__functions.h"
// Member `state_time_speed`
#include "v2x_msgs/msg/detail/movement_event_list__functions.h"
// Member `maneuver_assist_list`
#include "v2x_msgs/msg/detail/maneuver_assist_list__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_movement_state__functions.h"

bool
v2x_msgs__msg__MovementState__init(v2x_msgs__msg__MovementState * msg)
{
  if (!msg) {
    return false;
  }
  // movement_name_present
  msg->movement_name_present = false;
  // movement_name
  if (!v2x_msgs__msg__DescriptiveName__init(&msg->movement_name)) {
    v2x_msgs__msg__MovementState__fini(msg);
    return false;
  }
  // signal_group
  if (!v2x_msgs__msg__SignalGroupID__init(&msg->signal_group)) {
    v2x_msgs__msg__MovementState__fini(msg);
    return false;
  }
  // state_time_speed
  if (!v2x_msgs__msg__MovementEventList__init(&msg->state_time_speed)) {
    v2x_msgs__msg__MovementState__fini(msg);
    return false;
  }
  // maneuver_assist_list_present
  msg->maneuver_assist_list_present = false;
  // maneuver_assist_list
  if (!v2x_msgs__msg__ManeuverAssistList__init(&msg->maneuver_assist_list)) {
    v2x_msgs__msg__MovementState__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegMovementState__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__MovementState__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__MovementState__fini(v2x_msgs__msg__MovementState * msg)
{
  if (!msg) {
    return;
  }
  // movement_name_present
  // movement_name
  v2x_msgs__msg__DescriptiveName__fini(&msg->movement_name);
  // signal_group
  v2x_msgs__msg__SignalGroupID__fini(&msg->signal_group);
  // state_time_speed
  v2x_msgs__msg__MovementEventList__fini(&msg->state_time_speed);
  // maneuver_assist_list_present
  // maneuver_assist_list
  v2x_msgs__msg__ManeuverAssistList__fini(&msg->maneuver_assist_list);
  // regional_present
  // regional
  v2x_msgs__msg__RegMovementState__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__MovementState__are_equal(const v2x_msgs__msg__MovementState * lhs, const v2x_msgs__msg__MovementState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // movement_name_present
  if (lhs->movement_name_present != rhs->movement_name_present) {
    return false;
  }
  // movement_name
  if (!v2x_msgs__msg__DescriptiveName__are_equal(
      &(lhs->movement_name), &(rhs->movement_name)))
  {
    return false;
  }
  // signal_group
  if (!v2x_msgs__msg__SignalGroupID__are_equal(
      &(lhs->signal_group), &(rhs->signal_group)))
  {
    return false;
  }
  // state_time_speed
  if (!v2x_msgs__msg__MovementEventList__are_equal(
      &(lhs->state_time_speed), &(rhs->state_time_speed)))
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
  if (!v2x_msgs__msg__RegMovementState__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__MovementState__copy(
  const v2x_msgs__msg__MovementState * input,
  v2x_msgs__msg__MovementState * output)
{
  if (!input || !output) {
    return false;
  }
  // movement_name_present
  output->movement_name_present = input->movement_name_present;
  // movement_name
  if (!v2x_msgs__msg__DescriptiveName__copy(
      &(input->movement_name), &(output->movement_name)))
  {
    return false;
  }
  // signal_group
  if (!v2x_msgs__msg__SignalGroupID__copy(
      &(input->signal_group), &(output->signal_group)))
  {
    return false;
  }
  // state_time_speed
  if (!v2x_msgs__msg__MovementEventList__copy(
      &(input->state_time_speed), &(output->state_time_speed)))
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
  if (!v2x_msgs__msg__RegMovementState__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__MovementState *
v2x_msgs__msg__MovementState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__MovementState * msg = (v2x_msgs__msg__MovementState *)allocator.allocate(sizeof(v2x_msgs__msg__MovementState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__MovementState));
  bool success = v2x_msgs__msg__MovementState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__MovementState__destroy(v2x_msgs__msg__MovementState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__MovementState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__MovementState__Sequence__init(v2x_msgs__msg__MovementState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__MovementState * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__MovementState *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__MovementState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__MovementState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__MovementState__fini(&data[i - 1]);
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
v2x_msgs__msg__MovementState__Sequence__fini(v2x_msgs__msg__MovementState__Sequence * array)
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
      v2x_msgs__msg__MovementState__fini(&array->data[i]);
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

v2x_msgs__msg__MovementState__Sequence *
v2x_msgs__msg__MovementState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__MovementState__Sequence * array = (v2x_msgs__msg__MovementState__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__MovementState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__MovementState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__MovementState__Sequence__destroy(v2x_msgs__msg__MovementState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__MovementState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__MovementState__Sequence__are_equal(const v2x_msgs__msg__MovementState__Sequence * lhs, const v2x_msgs__msg__MovementState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__MovementState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__MovementState__Sequence__copy(
  const v2x_msgs__msg__MovementState__Sequence * input,
  v2x_msgs__msg__MovementState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__MovementState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__MovementState * data =
      (v2x_msgs__msg__MovementState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__MovementState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__MovementState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__MovementState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
