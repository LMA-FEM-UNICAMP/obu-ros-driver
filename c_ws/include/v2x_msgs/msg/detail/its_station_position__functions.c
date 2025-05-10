// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ItsStationPosition.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/its_station_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `station_id`
#include "v2x_msgs/msg/detail/station_id__functions.h"
// Member `lane_id`
#include "v2x_msgs/msg/detail/lane_id__functions.h"
// Member `node_xy`
#include "v2x_msgs/msg/detail/node_offset_point_xy__functions.h"
// Member `time_reference`
#include "v2x_msgs/msg/detail/time_reference__functions.h"

bool
v2x_msgs__msg__ItsStationPosition__init(v2x_msgs__msg__ItsStationPosition * msg)
{
  if (!msg) {
    return false;
  }
  // station_id
  if (!v2x_msgs__msg__StationID__init(&msg->station_id)) {
    v2x_msgs__msg__ItsStationPosition__fini(msg);
    return false;
  }
  // lane_id_present
  msg->lane_id_present = false;
  // lane_id
  if (!v2x_msgs__msg__LaneID__init(&msg->lane_id)) {
    v2x_msgs__msg__ItsStationPosition__fini(msg);
    return false;
  }
  // node_xy_present
  msg->node_xy_present = false;
  // node_xy
  if (!v2x_msgs__msg__NodeOffsetPointXY__init(&msg->node_xy)) {
    v2x_msgs__msg__ItsStationPosition__fini(msg);
    return false;
  }
  // time_reference_present
  msg->time_reference_present = false;
  // time_reference
  if (!v2x_msgs__msg__TimeReference__init(&msg->time_reference)) {
    v2x_msgs__msg__ItsStationPosition__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ItsStationPosition__fini(v2x_msgs__msg__ItsStationPosition * msg)
{
  if (!msg) {
    return;
  }
  // station_id
  v2x_msgs__msg__StationID__fini(&msg->station_id);
  // lane_id_present
  // lane_id
  v2x_msgs__msg__LaneID__fini(&msg->lane_id);
  // node_xy_present
  // node_xy
  v2x_msgs__msg__NodeOffsetPointXY__fini(&msg->node_xy);
  // time_reference_present
  // time_reference
  v2x_msgs__msg__TimeReference__fini(&msg->time_reference);
}

bool
v2x_msgs__msg__ItsStationPosition__are_equal(const v2x_msgs__msg__ItsStationPosition * lhs, const v2x_msgs__msg__ItsStationPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // station_id
  if (!v2x_msgs__msg__StationID__are_equal(
      &(lhs->station_id), &(rhs->station_id)))
  {
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
  // node_xy_present
  if (lhs->node_xy_present != rhs->node_xy_present) {
    return false;
  }
  // node_xy
  if (!v2x_msgs__msg__NodeOffsetPointXY__are_equal(
      &(lhs->node_xy), &(rhs->node_xy)))
  {
    return false;
  }
  // time_reference_present
  if (lhs->time_reference_present != rhs->time_reference_present) {
    return false;
  }
  // time_reference
  if (!v2x_msgs__msg__TimeReference__are_equal(
      &(lhs->time_reference), &(rhs->time_reference)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ItsStationPosition__copy(
  const v2x_msgs__msg__ItsStationPosition * input,
  v2x_msgs__msg__ItsStationPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // station_id
  if (!v2x_msgs__msg__StationID__copy(
      &(input->station_id), &(output->station_id)))
  {
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
  // node_xy_present
  output->node_xy_present = input->node_xy_present;
  // node_xy
  if (!v2x_msgs__msg__NodeOffsetPointXY__copy(
      &(input->node_xy), &(output->node_xy)))
  {
    return false;
  }
  // time_reference_present
  output->time_reference_present = input->time_reference_present;
  // time_reference
  if (!v2x_msgs__msg__TimeReference__copy(
      &(input->time_reference), &(output->time_reference)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ItsStationPosition *
v2x_msgs__msg__ItsStationPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ItsStationPosition * msg = (v2x_msgs__msg__ItsStationPosition *)allocator.allocate(sizeof(v2x_msgs__msg__ItsStationPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ItsStationPosition));
  bool success = v2x_msgs__msg__ItsStationPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ItsStationPosition__destroy(v2x_msgs__msg__ItsStationPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ItsStationPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ItsStationPosition__Sequence__init(v2x_msgs__msg__ItsStationPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ItsStationPosition * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ItsStationPosition *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ItsStationPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ItsStationPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ItsStationPosition__fini(&data[i - 1]);
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
v2x_msgs__msg__ItsStationPosition__Sequence__fini(v2x_msgs__msg__ItsStationPosition__Sequence * array)
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
      v2x_msgs__msg__ItsStationPosition__fini(&array->data[i]);
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

v2x_msgs__msg__ItsStationPosition__Sequence *
v2x_msgs__msg__ItsStationPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ItsStationPosition__Sequence * array = (v2x_msgs__msg__ItsStationPosition__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ItsStationPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ItsStationPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ItsStationPosition__Sequence__destroy(v2x_msgs__msg__ItsStationPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ItsStationPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ItsStationPosition__Sequence__are_equal(const v2x_msgs__msg__ItsStationPosition__Sequence * lhs, const v2x_msgs__msg__ItsStationPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ItsStationPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ItsStationPosition__Sequence__copy(
  const v2x_msgs__msg__ItsStationPosition__Sequence * input,
  v2x_msgs__msg__ItsStationPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ItsStationPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ItsStationPosition * data =
      (v2x_msgs__msg__ItsStationPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ItsStationPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ItsStationPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ItsStationPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
