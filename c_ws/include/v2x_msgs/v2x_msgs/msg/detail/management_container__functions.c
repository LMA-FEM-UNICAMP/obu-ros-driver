// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ManagementContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/management_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `action_id`
#include "v2x_msgs/msg/detail/action_id__functions.h"
// Member `detection_time`
// Member `reference_time`
#include "v2x_msgs/msg/detail/timestamp_its__functions.h"
// Member `termination`
#include "v2x_msgs/msg/detail/termination__functions.h"
// Member `event_position`
#include "v2x_msgs/msg/detail/reference_position__functions.h"
// Member `relevance_distance`
#include "v2x_msgs/msg/detail/relevance_distance__functions.h"
// Member `relevance_traffic_direction`
#include "v2x_msgs/msg/detail/relevance_traffic_direction__functions.h"
// Member `validity_duration`
#include "v2x_msgs/msg/detail/validity_duration__functions.h"
// Member `transmission_interval`
#include "v2x_msgs/msg/detail/transmission_interval__functions.h"
// Member `station_type`
#include "v2x_msgs/msg/detail/station_type__functions.h"

bool
v2x_msgs__msg__ManagementContainer__init(v2x_msgs__msg__ManagementContainer * msg)
{
  if (!msg) {
    return false;
  }
  // action_id
  if (!v2x_msgs__msg__ActionID__init(&msg->action_id)) {
    v2x_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  // detection_time
  if (!v2x_msgs__msg__TimestampIts__init(&msg->detection_time)) {
    v2x_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  // reference_time
  if (!v2x_msgs__msg__TimestampIts__init(&msg->reference_time)) {
    v2x_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  // termination_present
  msg->termination_present = false;
  // termination
  if (!v2x_msgs__msg__Termination__init(&msg->termination)) {
    v2x_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  // event_position
  if (!v2x_msgs__msg__ReferencePosition__init(&msg->event_position)) {
    v2x_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  // relevance_distance_present
  msg->relevance_distance_present = false;
  // relevance_distance
  if (!v2x_msgs__msg__RelevanceDistance__init(&msg->relevance_distance)) {
    v2x_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  // relevance_traffic_direction_present
  msg->relevance_traffic_direction_present = false;
  // relevance_traffic_direction
  if (!v2x_msgs__msg__RelevanceTrafficDirection__init(&msg->relevance_traffic_direction)) {
    v2x_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  // validity_duration_present
  msg->validity_duration_present = false;
  // validity_duration
  if (!v2x_msgs__msg__ValidityDuration__init(&msg->validity_duration)) {
    v2x_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  // transmission_interval_present
  msg->transmission_interval_present = false;
  // transmission_interval
  if (!v2x_msgs__msg__TransmissionInterval__init(&msg->transmission_interval)) {
    v2x_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  // station_type
  if (!v2x_msgs__msg__StationType__init(&msg->station_type)) {
    v2x_msgs__msg__ManagementContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ManagementContainer__fini(v2x_msgs__msg__ManagementContainer * msg)
{
  if (!msg) {
    return;
  }
  // action_id
  v2x_msgs__msg__ActionID__fini(&msg->action_id);
  // detection_time
  v2x_msgs__msg__TimestampIts__fini(&msg->detection_time);
  // reference_time
  v2x_msgs__msg__TimestampIts__fini(&msg->reference_time);
  // termination_present
  // termination
  v2x_msgs__msg__Termination__fini(&msg->termination);
  // event_position
  v2x_msgs__msg__ReferencePosition__fini(&msg->event_position);
  // relevance_distance_present
  // relevance_distance
  v2x_msgs__msg__RelevanceDistance__fini(&msg->relevance_distance);
  // relevance_traffic_direction_present
  // relevance_traffic_direction
  v2x_msgs__msg__RelevanceTrafficDirection__fini(&msg->relevance_traffic_direction);
  // validity_duration_present
  // validity_duration
  v2x_msgs__msg__ValidityDuration__fini(&msg->validity_duration);
  // transmission_interval_present
  // transmission_interval
  v2x_msgs__msg__TransmissionInterval__fini(&msg->transmission_interval);
  // station_type
  v2x_msgs__msg__StationType__fini(&msg->station_type);
}

bool
v2x_msgs__msg__ManagementContainer__are_equal(const v2x_msgs__msg__ManagementContainer * lhs, const v2x_msgs__msg__ManagementContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action_id
  if (!v2x_msgs__msg__ActionID__are_equal(
      &(lhs->action_id), &(rhs->action_id)))
  {
    return false;
  }
  // detection_time
  if (!v2x_msgs__msg__TimestampIts__are_equal(
      &(lhs->detection_time), &(rhs->detection_time)))
  {
    return false;
  }
  // reference_time
  if (!v2x_msgs__msg__TimestampIts__are_equal(
      &(lhs->reference_time), &(rhs->reference_time)))
  {
    return false;
  }
  // termination_present
  if (lhs->termination_present != rhs->termination_present) {
    return false;
  }
  // termination
  if (!v2x_msgs__msg__Termination__are_equal(
      &(lhs->termination), &(rhs->termination)))
  {
    return false;
  }
  // event_position
  if (!v2x_msgs__msg__ReferencePosition__are_equal(
      &(lhs->event_position), &(rhs->event_position)))
  {
    return false;
  }
  // relevance_distance_present
  if (lhs->relevance_distance_present != rhs->relevance_distance_present) {
    return false;
  }
  // relevance_distance
  if (!v2x_msgs__msg__RelevanceDistance__are_equal(
      &(lhs->relevance_distance), &(rhs->relevance_distance)))
  {
    return false;
  }
  // relevance_traffic_direction_present
  if (lhs->relevance_traffic_direction_present != rhs->relevance_traffic_direction_present) {
    return false;
  }
  // relevance_traffic_direction
  if (!v2x_msgs__msg__RelevanceTrafficDirection__are_equal(
      &(lhs->relevance_traffic_direction), &(rhs->relevance_traffic_direction)))
  {
    return false;
  }
  // validity_duration_present
  if (lhs->validity_duration_present != rhs->validity_duration_present) {
    return false;
  }
  // validity_duration
  if (!v2x_msgs__msg__ValidityDuration__are_equal(
      &(lhs->validity_duration), &(rhs->validity_duration)))
  {
    return false;
  }
  // transmission_interval_present
  if (lhs->transmission_interval_present != rhs->transmission_interval_present) {
    return false;
  }
  // transmission_interval
  if (!v2x_msgs__msg__TransmissionInterval__are_equal(
      &(lhs->transmission_interval), &(rhs->transmission_interval)))
  {
    return false;
  }
  // station_type
  if (!v2x_msgs__msg__StationType__are_equal(
      &(lhs->station_type), &(rhs->station_type)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ManagementContainer__copy(
  const v2x_msgs__msg__ManagementContainer * input,
  v2x_msgs__msg__ManagementContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // action_id
  if (!v2x_msgs__msg__ActionID__copy(
      &(input->action_id), &(output->action_id)))
  {
    return false;
  }
  // detection_time
  if (!v2x_msgs__msg__TimestampIts__copy(
      &(input->detection_time), &(output->detection_time)))
  {
    return false;
  }
  // reference_time
  if (!v2x_msgs__msg__TimestampIts__copy(
      &(input->reference_time), &(output->reference_time)))
  {
    return false;
  }
  // termination_present
  output->termination_present = input->termination_present;
  // termination
  if (!v2x_msgs__msg__Termination__copy(
      &(input->termination), &(output->termination)))
  {
    return false;
  }
  // event_position
  if (!v2x_msgs__msg__ReferencePosition__copy(
      &(input->event_position), &(output->event_position)))
  {
    return false;
  }
  // relevance_distance_present
  output->relevance_distance_present = input->relevance_distance_present;
  // relevance_distance
  if (!v2x_msgs__msg__RelevanceDistance__copy(
      &(input->relevance_distance), &(output->relevance_distance)))
  {
    return false;
  }
  // relevance_traffic_direction_present
  output->relevance_traffic_direction_present = input->relevance_traffic_direction_present;
  // relevance_traffic_direction
  if (!v2x_msgs__msg__RelevanceTrafficDirection__copy(
      &(input->relevance_traffic_direction), &(output->relevance_traffic_direction)))
  {
    return false;
  }
  // validity_duration_present
  output->validity_duration_present = input->validity_duration_present;
  // validity_duration
  if (!v2x_msgs__msg__ValidityDuration__copy(
      &(input->validity_duration), &(output->validity_duration)))
  {
    return false;
  }
  // transmission_interval_present
  output->transmission_interval_present = input->transmission_interval_present;
  // transmission_interval
  if (!v2x_msgs__msg__TransmissionInterval__copy(
      &(input->transmission_interval), &(output->transmission_interval)))
  {
    return false;
  }
  // station_type
  if (!v2x_msgs__msg__StationType__copy(
      &(input->station_type), &(output->station_type)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ManagementContainer *
v2x_msgs__msg__ManagementContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ManagementContainer * msg = (v2x_msgs__msg__ManagementContainer *)allocator.allocate(sizeof(v2x_msgs__msg__ManagementContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ManagementContainer));
  bool success = v2x_msgs__msg__ManagementContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ManagementContainer__destroy(v2x_msgs__msg__ManagementContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ManagementContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ManagementContainer__Sequence__init(v2x_msgs__msg__ManagementContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ManagementContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ManagementContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ManagementContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ManagementContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ManagementContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__ManagementContainer__Sequence__fini(v2x_msgs__msg__ManagementContainer__Sequence * array)
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
      v2x_msgs__msg__ManagementContainer__fini(&array->data[i]);
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

v2x_msgs__msg__ManagementContainer__Sequence *
v2x_msgs__msg__ManagementContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ManagementContainer__Sequence * array = (v2x_msgs__msg__ManagementContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ManagementContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ManagementContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ManagementContainer__Sequence__destroy(v2x_msgs__msg__ManagementContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ManagementContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ManagementContainer__Sequence__are_equal(const v2x_msgs__msg__ManagementContainer__Sequence * lhs, const v2x_msgs__msg__ManagementContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ManagementContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ManagementContainer__Sequence__copy(
  const v2x_msgs__msg__ManagementContainer__Sequence * input,
  v2x_msgs__msg__ManagementContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ManagementContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ManagementContainer * data =
      (v2x_msgs__msg__ManagementContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ManagementContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ManagementContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ManagementContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
