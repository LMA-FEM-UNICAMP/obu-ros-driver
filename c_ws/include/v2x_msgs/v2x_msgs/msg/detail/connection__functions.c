// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/Connection.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/connection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `connecting_lane`
#include "v2x_msgs/msg/detail/connecting_lane__functions.h"
// Member `remote_intersection`
#include "v2x_msgs/msg/detail/intersection_reference_id__functions.h"
// Member `signal_group`
#include "v2x_msgs/msg/detail/signal_group_id__functions.h"
// Member `user_class`
#include "v2x_msgs/msg/detail/restriction_class_id__functions.h"
// Member `connection_id`
#include "v2x_msgs/msg/detail/lane_connection_id__functions.h"

bool
v2x_msgs__msg__Connection__init(v2x_msgs__msg__Connection * msg)
{
  if (!msg) {
    return false;
  }
  // connecting_lane
  if (!v2x_msgs__msg__ConnectingLane__init(&msg->connecting_lane)) {
    v2x_msgs__msg__Connection__fini(msg);
    return false;
  }
  // remote_intersection_present
  msg->remote_intersection_present = false;
  // remote_intersection
  if (!v2x_msgs__msg__IntersectionReferenceID__init(&msg->remote_intersection)) {
    v2x_msgs__msg__Connection__fini(msg);
    return false;
  }
  // signal_group_present
  msg->signal_group_present = false;
  // signal_group
  if (!v2x_msgs__msg__SignalGroupID__init(&msg->signal_group)) {
    v2x_msgs__msg__Connection__fini(msg);
    return false;
  }
  // user_class_present
  msg->user_class_present = false;
  // user_class
  if (!v2x_msgs__msg__RestrictionClassID__init(&msg->user_class)) {
    v2x_msgs__msg__Connection__fini(msg);
    return false;
  }
  // connection_id_present
  msg->connection_id_present = false;
  // connection_id
  if (!v2x_msgs__msg__LaneConnectionID__init(&msg->connection_id)) {
    v2x_msgs__msg__Connection__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__Connection__fini(v2x_msgs__msg__Connection * msg)
{
  if (!msg) {
    return;
  }
  // connecting_lane
  v2x_msgs__msg__ConnectingLane__fini(&msg->connecting_lane);
  // remote_intersection_present
  // remote_intersection
  v2x_msgs__msg__IntersectionReferenceID__fini(&msg->remote_intersection);
  // signal_group_present
  // signal_group
  v2x_msgs__msg__SignalGroupID__fini(&msg->signal_group);
  // user_class_present
  // user_class
  v2x_msgs__msg__RestrictionClassID__fini(&msg->user_class);
  // connection_id_present
  // connection_id
  v2x_msgs__msg__LaneConnectionID__fini(&msg->connection_id);
}

bool
v2x_msgs__msg__Connection__are_equal(const v2x_msgs__msg__Connection * lhs, const v2x_msgs__msg__Connection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connecting_lane
  if (!v2x_msgs__msg__ConnectingLane__are_equal(
      &(lhs->connecting_lane), &(rhs->connecting_lane)))
  {
    return false;
  }
  // remote_intersection_present
  if (lhs->remote_intersection_present != rhs->remote_intersection_present) {
    return false;
  }
  // remote_intersection
  if (!v2x_msgs__msg__IntersectionReferenceID__are_equal(
      &(lhs->remote_intersection), &(rhs->remote_intersection)))
  {
    return false;
  }
  // signal_group_present
  if (lhs->signal_group_present != rhs->signal_group_present) {
    return false;
  }
  // signal_group
  if (!v2x_msgs__msg__SignalGroupID__are_equal(
      &(lhs->signal_group), &(rhs->signal_group)))
  {
    return false;
  }
  // user_class_present
  if (lhs->user_class_present != rhs->user_class_present) {
    return false;
  }
  // user_class
  if (!v2x_msgs__msg__RestrictionClassID__are_equal(
      &(lhs->user_class), &(rhs->user_class)))
  {
    return false;
  }
  // connection_id_present
  if (lhs->connection_id_present != rhs->connection_id_present) {
    return false;
  }
  // connection_id
  if (!v2x_msgs__msg__LaneConnectionID__are_equal(
      &(lhs->connection_id), &(rhs->connection_id)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__Connection__copy(
  const v2x_msgs__msg__Connection * input,
  v2x_msgs__msg__Connection * output)
{
  if (!input || !output) {
    return false;
  }
  // connecting_lane
  if (!v2x_msgs__msg__ConnectingLane__copy(
      &(input->connecting_lane), &(output->connecting_lane)))
  {
    return false;
  }
  // remote_intersection_present
  output->remote_intersection_present = input->remote_intersection_present;
  // remote_intersection
  if (!v2x_msgs__msg__IntersectionReferenceID__copy(
      &(input->remote_intersection), &(output->remote_intersection)))
  {
    return false;
  }
  // signal_group_present
  output->signal_group_present = input->signal_group_present;
  // signal_group
  if (!v2x_msgs__msg__SignalGroupID__copy(
      &(input->signal_group), &(output->signal_group)))
  {
    return false;
  }
  // user_class_present
  output->user_class_present = input->user_class_present;
  // user_class
  if (!v2x_msgs__msg__RestrictionClassID__copy(
      &(input->user_class), &(output->user_class)))
  {
    return false;
  }
  // connection_id_present
  output->connection_id_present = input->connection_id_present;
  // connection_id
  if (!v2x_msgs__msg__LaneConnectionID__copy(
      &(input->connection_id), &(output->connection_id)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__Connection *
v2x_msgs__msg__Connection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Connection * msg = (v2x_msgs__msg__Connection *)allocator.allocate(sizeof(v2x_msgs__msg__Connection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__Connection));
  bool success = v2x_msgs__msg__Connection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__Connection__destroy(v2x_msgs__msg__Connection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__Connection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__Connection__Sequence__init(v2x_msgs__msg__Connection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Connection * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__Connection *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__Connection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__Connection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__Connection__fini(&data[i - 1]);
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
v2x_msgs__msg__Connection__Sequence__fini(v2x_msgs__msg__Connection__Sequence * array)
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
      v2x_msgs__msg__Connection__fini(&array->data[i]);
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

v2x_msgs__msg__Connection__Sequence *
v2x_msgs__msg__Connection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Connection__Sequence * array = (v2x_msgs__msg__Connection__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__Connection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__Connection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__Connection__Sequence__destroy(v2x_msgs__msg__Connection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__Connection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__Connection__Sequence__are_equal(const v2x_msgs__msg__Connection__Sequence * lhs, const v2x_msgs__msg__Connection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__Connection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__Connection__Sequence__copy(
  const v2x_msgs__msg__Connection__Sequence * input,
  v2x_msgs__msg__Connection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__Connection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__Connection * data =
      (v2x_msgs__msg__Connection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__Connection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__Connection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__Connection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
