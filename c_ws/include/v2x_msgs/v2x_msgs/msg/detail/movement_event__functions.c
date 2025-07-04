// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/movement_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `event_state`
#include "v2x_msgs/msg/detail/movement_phase_state__functions.h"
// Member `timing`
#include "v2x_msgs/msg/detail/time_change_details__functions.h"
// Member `speeds`
#include "v2x_msgs/msg/detail/advisory_speed_list__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_movement_event__functions.h"

bool
v2x_msgs__msg__MovementEvent__init(v2x_msgs__msg__MovementEvent * msg)
{
  if (!msg) {
    return false;
  }
  // event_state
  if (!v2x_msgs__msg__MovementPhaseState__init(&msg->event_state)) {
    v2x_msgs__msg__MovementEvent__fini(msg);
    return false;
  }
  // timing_present
  msg->timing_present = false;
  // timing
  if (!v2x_msgs__msg__TimeChangeDetails__init(&msg->timing)) {
    v2x_msgs__msg__MovementEvent__fini(msg);
    return false;
  }
  // speeds_present
  msg->speeds_present = false;
  // speeds
  if (!v2x_msgs__msg__AdvisorySpeedList__init(&msg->speeds)) {
    v2x_msgs__msg__MovementEvent__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegMovementEvent__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__MovementEvent__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__MovementEvent__fini(v2x_msgs__msg__MovementEvent * msg)
{
  if (!msg) {
    return;
  }
  // event_state
  v2x_msgs__msg__MovementPhaseState__fini(&msg->event_state);
  // timing_present
  // timing
  v2x_msgs__msg__TimeChangeDetails__fini(&msg->timing);
  // speeds_present
  // speeds
  v2x_msgs__msg__AdvisorySpeedList__fini(&msg->speeds);
  // regional_present
  // regional
  v2x_msgs__msg__RegMovementEvent__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__MovementEvent__are_equal(const v2x_msgs__msg__MovementEvent * lhs, const v2x_msgs__msg__MovementEvent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // event_state
  if (!v2x_msgs__msg__MovementPhaseState__are_equal(
      &(lhs->event_state), &(rhs->event_state)))
  {
    return false;
  }
  // timing_present
  if (lhs->timing_present != rhs->timing_present) {
    return false;
  }
  // timing
  if (!v2x_msgs__msg__TimeChangeDetails__are_equal(
      &(lhs->timing), &(rhs->timing)))
  {
    return false;
  }
  // speeds_present
  if (lhs->speeds_present != rhs->speeds_present) {
    return false;
  }
  // speeds
  if (!v2x_msgs__msg__AdvisorySpeedList__are_equal(
      &(lhs->speeds), &(rhs->speeds)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegMovementEvent__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__MovementEvent__copy(
  const v2x_msgs__msg__MovementEvent * input,
  v2x_msgs__msg__MovementEvent * output)
{
  if (!input || !output) {
    return false;
  }
  // event_state
  if (!v2x_msgs__msg__MovementPhaseState__copy(
      &(input->event_state), &(output->event_state)))
  {
    return false;
  }
  // timing_present
  output->timing_present = input->timing_present;
  // timing
  if (!v2x_msgs__msg__TimeChangeDetails__copy(
      &(input->timing), &(output->timing)))
  {
    return false;
  }
  // speeds_present
  output->speeds_present = input->speeds_present;
  // speeds
  if (!v2x_msgs__msg__AdvisorySpeedList__copy(
      &(input->speeds), &(output->speeds)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegMovementEvent__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__MovementEvent *
v2x_msgs__msg__MovementEvent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__MovementEvent * msg = (v2x_msgs__msg__MovementEvent *)allocator.allocate(sizeof(v2x_msgs__msg__MovementEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__MovementEvent));
  bool success = v2x_msgs__msg__MovementEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__MovementEvent__destroy(v2x_msgs__msg__MovementEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__MovementEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__MovementEvent__Sequence__init(v2x_msgs__msg__MovementEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__MovementEvent * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__MovementEvent *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__MovementEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__MovementEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__MovementEvent__fini(&data[i - 1]);
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
v2x_msgs__msg__MovementEvent__Sequence__fini(v2x_msgs__msg__MovementEvent__Sequence * array)
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
      v2x_msgs__msg__MovementEvent__fini(&array->data[i]);
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

v2x_msgs__msg__MovementEvent__Sequence *
v2x_msgs__msg__MovementEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__MovementEvent__Sequence * array = (v2x_msgs__msg__MovementEvent__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__MovementEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__MovementEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__MovementEvent__Sequence__destroy(v2x_msgs__msg__MovementEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__MovementEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__MovementEvent__Sequence__are_equal(const v2x_msgs__msg__MovementEvent__Sequence * lhs, const v2x_msgs__msg__MovementEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__MovementEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__MovementEvent__Sequence__copy(
  const v2x_msgs__msg__MovementEvent__Sequence * input,
  v2x_msgs__msg__MovementEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__MovementEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__MovementEvent * data =
      (v2x_msgs__msg__MovementEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__MovementEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__MovementEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__MovementEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
