// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/LocationContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/location_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `event_speed`
#include "v2x_msgs/msg/detail/speed__functions.h"
// Member `event_position_heading`
#include "v2x_msgs/msg/detail/heading__functions.h"
// Member `traces`
#include "v2x_msgs/msg/detail/traces__functions.h"
// Member `road_type`
#include "v2x_msgs/msg/detail/road_type__functions.h"

bool
v2x_msgs__msg__LocationContainer__init(v2x_msgs__msg__LocationContainer * msg)
{
  if (!msg) {
    return false;
  }
  // event_speed_present
  msg->event_speed_present = false;
  // event_speed
  if (!v2x_msgs__msg__Speed__init(&msg->event_speed)) {
    v2x_msgs__msg__LocationContainer__fini(msg);
    return false;
  }
  // event_position_heading_present
  msg->event_position_heading_present = false;
  // event_position_heading
  if (!v2x_msgs__msg__Heading__init(&msg->event_position_heading)) {
    v2x_msgs__msg__LocationContainer__fini(msg);
    return false;
  }
  // traces
  if (!v2x_msgs__msg__Traces__init(&msg->traces)) {
    v2x_msgs__msg__LocationContainer__fini(msg);
    return false;
  }
  // road_type_present
  msg->road_type_present = false;
  // road_type
  if (!v2x_msgs__msg__RoadType__init(&msg->road_type)) {
    v2x_msgs__msg__LocationContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__LocationContainer__fini(v2x_msgs__msg__LocationContainer * msg)
{
  if (!msg) {
    return;
  }
  // event_speed_present
  // event_speed
  v2x_msgs__msg__Speed__fini(&msg->event_speed);
  // event_position_heading_present
  // event_position_heading
  v2x_msgs__msg__Heading__fini(&msg->event_position_heading);
  // traces
  v2x_msgs__msg__Traces__fini(&msg->traces);
  // road_type_present
  // road_type
  v2x_msgs__msg__RoadType__fini(&msg->road_type);
}

bool
v2x_msgs__msg__LocationContainer__are_equal(const v2x_msgs__msg__LocationContainer * lhs, const v2x_msgs__msg__LocationContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // event_speed_present
  if (lhs->event_speed_present != rhs->event_speed_present) {
    return false;
  }
  // event_speed
  if (!v2x_msgs__msg__Speed__are_equal(
      &(lhs->event_speed), &(rhs->event_speed)))
  {
    return false;
  }
  // event_position_heading_present
  if (lhs->event_position_heading_present != rhs->event_position_heading_present) {
    return false;
  }
  // event_position_heading
  if (!v2x_msgs__msg__Heading__are_equal(
      &(lhs->event_position_heading), &(rhs->event_position_heading)))
  {
    return false;
  }
  // traces
  if (!v2x_msgs__msg__Traces__are_equal(
      &(lhs->traces), &(rhs->traces)))
  {
    return false;
  }
  // road_type_present
  if (lhs->road_type_present != rhs->road_type_present) {
    return false;
  }
  // road_type
  if (!v2x_msgs__msg__RoadType__are_equal(
      &(lhs->road_type), &(rhs->road_type)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__LocationContainer__copy(
  const v2x_msgs__msg__LocationContainer * input,
  v2x_msgs__msg__LocationContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // event_speed_present
  output->event_speed_present = input->event_speed_present;
  // event_speed
  if (!v2x_msgs__msg__Speed__copy(
      &(input->event_speed), &(output->event_speed)))
  {
    return false;
  }
  // event_position_heading_present
  output->event_position_heading_present = input->event_position_heading_present;
  // event_position_heading
  if (!v2x_msgs__msg__Heading__copy(
      &(input->event_position_heading), &(output->event_position_heading)))
  {
    return false;
  }
  // traces
  if (!v2x_msgs__msg__Traces__copy(
      &(input->traces), &(output->traces)))
  {
    return false;
  }
  // road_type_present
  output->road_type_present = input->road_type_present;
  // road_type
  if (!v2x_msgs__msg__RoadType__copy(
      &(input->road_type), &(output->road_type)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__LocationContainer *
v2x_msgs__msg__LocationContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LocationContainer * msg = (v2x_msgs__msg__LocationContainer *)allocator.allocate(sizeof(v2x_msgs__msg__LocationContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__LocationContainer));
  bool success = v2x_msgs__msg__LocationContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__LocationContainer__destroy(v2x_msgs__msg__LocationContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__LocationContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__LocationContainer__Sequence__init(v2x_msgs__msg__LocationContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LocationContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__LocationContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__LocationContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__LocationContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__LocationContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__LocationContainer__Sequence__fini(v2x_msgs__msg__LocationContainer__Sequence * array)
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
      v2x_msgs__msg__LocationContainer__fini(&array->data[i]);
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

v2x_msgs__msg__LocationContainer__Sequence *
v2x_msgs__msg__LocationContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LocationContainer__Sequence * array = (v2x_msgs__msg__LocationContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__LocationContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__LocationContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__LocationContainer__Sequence__destroy(v2x_msgs__msg__LocationContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__LocationContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__LocationContainer__Sequence__are_equal(const v2x_msgs__msg__LocationContainer__Sequence * lhs, const v2x_msgs__msg__LocationContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__LocationContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__LocationContainer__Sequence__copy(
  const v2x_msgs__msg__LocationContainer__Sequence * input,
  v2x_msgs__msg__LocationContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__LocationContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__LocationContainer * data =
      (v2x_msgs__msg__LocationContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__LocationContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__LocationContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__LocationContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
