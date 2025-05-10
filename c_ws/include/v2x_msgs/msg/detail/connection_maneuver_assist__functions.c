// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `connection_id`
#include "v2x_msgs/msg/detail/lane_connection_id__functions.h"
// Member `queue_length`
// Member `available_storage_length`
#include "v2x_msgs/msg/detail/zone_length__functions.h"
// Member `wait_on_stop`
#include "v2x_msgs/msg/detail/wait_on_stopline__functions.h"
// Member `ped_bicycle_detect`
#include "v2x_msgs/msg/detail/pedestrian_bicycle_detect__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/connection__functions.h"

bool
v2x_msgs__msg__ConnectionManeuverAssist__init(v2x_msgs__msg__ConnectionManeuverAssist * msg)
{
  if (!msg) {
    return false;
  }
  // connection_id
  if (!v2x_msgs__msg__LaneConnectionID__init(&msg->connection_id)) {
    v2x_msgs__msg__ConnectionManeuverAssist__fini(msg);
    return false;
  }
  // queue_length_present
  msg->queue_length_present = false;
  // queue_length
  if (!v2x_msgs__msg__ZoneLength__init(&msg->queue_length)) {
    v2x_msgs__msg__ConnectionManeuverAssist__fini(msg);
    return false;
  }
  // available_storage_length_present
  msg->available_storage_length_present = false;
  // available_storage_length
  if (!v2x_msgs__msg__ZoneLength__init(&msg->available_storage_length)) {
    v2x_msgs__msg__ConnectionManeuverAssist__fini(msg);
    return false;
  }
  // wait_on_stop_present
  msg->wait_on_stop_present = false;
  // wait_on_stop
  if (!v2x_msgs__msg__WaitOnStopline__init(&msg->wait_on_stop)) {
    v2x_msgs__msg__ConnectionManeuverAssist__fini(msg);
    return false;
  }
  // ped_bicycle_detect_present
  msg->ped_bicycle_detect_present = false;
  // ped_bicycle_detect
  if (!v2x_msgs__msg__PedestrianBicycleDetect__init(&msg->ped_bicycle_detect)) {
    v2x_msgs__msg__ConnectionManeuverAssist__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__Connection__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__ConnectionManeuverAssist__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ConnectionManeuverAssist__fini(v2x_msgs__msg__ConnectionManeuverAssist * msg)
{
  if (!msg) {
    return;
  }
  // connection_id
  v2x_msgs__msg__LaneConnectionID__fini(&msg->connection_id);
  // queue_length_present
  // queue_length
  v2x_msgs__msg__ZoneLength__fini(&msg->queue_length);
  // available_storage_length_present
  // available_storage_length
  v2x_msgs__msg__ZoneLength__fini(&msg->available_storage_length);
  // wait_on_stop_present
  // wait_on_stop
  v2x_msgs__msg__WaitOnStopline__fini(&msg->wait_on_stop);
  // ped_bicycle_detect_present
  // ped_bicycle_detect
  v2x_msgs__msg__PedestrianBicycleDetect__fini(&msg->ped_bicycle_detect);
  // regional_present
  // regional
  v2x_msgs__msg__Connection__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__ConnectionManeuverAssist__are_equal(const v2x_msgs__msg__ConnectionManeuverAssist * lhs, const v2x_msgs__msg__ConnectionManeuverAssist * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connection_id
  if (!v2x_msgs__msg__LaneConnectionID__are_equal(
      &(lhs->connection_id), &(rhs->connection_id)))
  {
    return false;
  }
  // queue_length_present
  if (lhs->queue_length_present != rhs->queue_length_present) {
    return false;
  }
  // queue_length
  if (!v2x_msgs__msg__ZoneLength__are_equal(
      &(lhs->queue_length), &(rhs->queue_length)))
  {
    return false;
  }
  // available_storage_length_present
  if (lhs->available_storage_length_present != rhs->available_storage_length_present) {
    return false;
  }
  // available_storage_length
  if (!v2x_msgs__msg__ZoneLength__are_equal(
      &(lhs->available_storage_length), &(rhs->available_storage_length)))
  {
    return false;
  }
  // wait_on_stop_present
  if (lhs->wait_on_stop_present != rhs->wait_on_stop_present) {
    return false;
  }
  // wait_on_stop
  if (!v2x_msgs__msg__WaitOnStopline__are_equal(
      &(lhs->wait_on_stop), &(rhs->wait_on_stop)))
  {
    return false;
  }
  // ped_bicycle_detect_present
  if (lhs->ped_bicycle_detect_present != rhs->ped_bicycle_detect_present) {
    return false;
  }
  // ped_bicycle_detect
  if (!v2x_msgs__msg__PedestrianBicycleDetect__are_equal(
      &(lhs->ped_bicycle_detect), &(rhs->ped_bicycle_detect)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__Connection__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ConnectionManeuverAssist__copy(
  const v2x_msgs__msg__ConnectionManeuverAssist * input,
  v2x_msgs__msg__ConnectionManeuverAssist * output)
{
  if (!input || !output) {
    return false;
  }
  // connection_id
  if (!v2x_msgs__msg__LaneConnectionID__copy(
      &(input->connection_id), &(output->connection_id)))
  {
    return false;
  }
  // queue_length_present
  output->queue_length_present = input->queue_length_present;
  // queue_length
  if (!v2x_msgs__msg__ZoneLength__copy(
      &(input->queue_length), &(output->queue_length)))
  {
    return false;
  }
  // available_storage_length_present
  output->available_storage_length_present = input->available_storage_length_present;
  // available_storage_length
  if (!v2x_msgs__msg__ZoneLength__copy(
      &(input->available_storage_length), &(output->available_storage_length)))
  {
    return false;
  }
  // wait_on_stop_present
  output->wait_on_stop_present = input->wait_on_stop_present;
  // wait_on_stop
  if (!v2x_msgs__msg__WaitOnStopline__copy(
      &(input->wait_on_stop), &(output->wait_on_stop)))
  {
    return false;
  }
  // ped_bicycle_detect_present
  output->ped_bicycle_detect_present = input->ped_bicycle_detect_present;
  // ped_bicycle_detect
  if (!v2x_msgs__msg__PedestrianBicycleDetect__copy(
      &(input->ped_bicycle_detect), &(output->ped_bicycle_detect)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__Connection__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ConnectionManeuverAssist *
v2x_msgs__msg__ConnectionManeuverAssist__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ConnectionManeuverAssist * msg = (v2x_msgs__msg__ConnectionManeuverAssist *)allocator.allocate(sizeof(v2x_msgs__msg__ConnectionManeuverAssist), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ConnectionManeuverAssist));
  bool success = v2x_msgs__msg__ConnectionManeuverAssist__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ConnectionManeuverAssist__destroy(v2x_msgs__msg__ConnectionManeuverAssist * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ConnectionManeuverAssist__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ConnectionManeuverAssist__Sequence__init(v2x_msgs__msg__ConnectionManeuverAssist__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ConnectionManeuverAssist * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ConnectionManeuverAssist *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ConnectionManeuverAssist), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ConnectionManeuverAssist__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ConnectionManeuverAssist__fini(&data[i - 1]);
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
v2x_msgs__msg__ConnectionManeuverAssist__Sequence__fini(v2x_msgs__msg__ConnectionManeuverAssist__Sequence * array)
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
      v2x_msgs__msg__ConnectionManeuverAssist__fini(&array->data[i]);
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

v2x_msgs__msg__ConnectionManeuverAssist__Sequence *
v2x_msgs__msg__ConnectionManeuverAssist__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ConnectionManeuverAssist__Sequence * array = (v2x_msgs__msg__ConnectionManeuverAssist__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ConnectionManeuverAssist__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ConnectionManeuverAssist__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ConnectionManeuverAssist__Sequence__destroy(v2x_msgs__msg__ConnectionManeuverAssist__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ConnectionManeuverAssist__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ConnectionManeuverAssist__Sequence__are_equal(const v2x_msgs__msg__ConnectionManeuverAssist__Sequence * lhs, const v2x_msgs__msg__ConnectionManeuverAssist__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ConnectionManeuverAssist__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ConnectionManeuverAssist__Sequence__copy(
  const v2x_msgs__msg__ConnectionManeuverAssist__Sequence * input,
  v2x_msgs__msg__ConnectionManeuverAssist__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ConnectionManeuverAssist);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ConnectionManeuverAssist * data =
      (v2x_msgs__msg__ConnectionManeuverAssist *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ConnectionManeuverAssist__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ConnectionManeuverAssist__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ConnectionManeuverAssist__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
