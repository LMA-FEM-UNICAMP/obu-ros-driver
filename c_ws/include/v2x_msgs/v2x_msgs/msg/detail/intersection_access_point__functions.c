// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/IntersectionAccessPoint.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/intersection_access_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane`
#include "v2x_msgs/msg/detail/lane_id__functions.h"
// Member `approach`
#include "v2x_msgs/msg/detail/approach_id__functions.h"
// Member `connection`
#include "v2x_msgs/msg/detail/lane_connection_id__functions.h"

bool
v2x_msgs__msg__IntersectionAccessPoint__init(v2x_msgs__msg__IntersectionAccessPoint * msg)
{
  if (!msg) {
    return false;
  }
  // intersection_access_point_container_select
  msg->intersection_access_point_container_select = 0ll;
  // lane
  if (!v2x_msgs__msg__LaneID__init(&msg->lane)) {
    v2x_msgs__msg__IntersectionAccessPoint__fini(msg);
    return false;
  }
  // approach
  if (!v2x_msgs__msg__ApproachID__init(&msg->approach)) {
    v2x_msgs__msg__IntersectionAccessPoint__fini(msg);
    return false;
  }
  // connection
  if (!v2x_msgs__msg__LaneConnectionID__init(&msg->connection)) {
    v2x_msgs__msg__IntersectionAccessPoint__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__IntersectionAccessPoint__fini(v2x_msgs__msg__IntersectionAccessPoint * msg)
{
  if (!msg) {
    return;
  }
  // intersection_access_point_container_select
  // lane
  v2x_msgs__msg__LaneID__fini(&msg->lane);
  // approach
  v2x_msgs__msg__ApproachID__fini(&msg->approach);
  // connection
  v2x_msgs__msg__LaneConnectionID__fini(&msg->connection);
}

bool
v2x_msgs__msg__IntersectionAccessPoint__are_equal(const v2x_msgs__msg__IntersectionAccessPoint * lhs, const v2x_msgs__msg__IntersectionAccessPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // intersection_access_point_container_select
  if (lhs->intersection_access_point_container_select != rhs->intersection_access_point_container_select) {
    return false;
  }
  // lane
  if (!v2x_msgs__msg__LaneID__are_equal(
      &(lhs->lane), &(rhs->lane)))
  {
    return false;
  }
  // approach
  if (!v2x_msgs__msg__ApproachID__are_equal(
      &(lhs->approach), &(rhs->approach)))
  {
    return false;
  }
  // connection
  if (!v2x_msgs__msg__LaneConnectionID__are_equal(
      &(lhs->connection), &(rhs->connection)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__IntersectionAccessPoint__copy(
  const v2x_msgs__msg__IntersectionAccessPoint * input,
  v2x_msgs__msg__IntersectionAccessPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // intersection_access_point_container_select
  output->intersection_access_point_container_select = input->intersection_access_point_container_select;
  // lane
  if (!v2x_msgs__msg__LaneID__copy(
      &(input->lane), &(output->lane)))
  {
    return false;
  }
  // approach
  if (!v2x_msgs__msg__ApproachID__copy(
      &(input->approach), &(output->approach)))
  {
    return false;
  }
  // connection
  if (!v2x_msgs__msg__LaneConnectionID__copy(
      &(input->connection), &(output->connection)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__IntersectionAccessPoint *
v2x_msgs__msg__IntersectionAccessPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IntersectionAccessPoint * msg = (v2x_msgs__msg__IntersectionAccessPoint *)allocator.allocate(sizeof(v2x_msgs__msg__IntersectionAccessPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__IntersectionAccessPoint));
  bool success = v2x_msgs__msg__IntersectionAccessPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__IntersectionAccessPoint__destroy(v2x_msgs__msg__IntersectionAccessPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__IntersectionAccessPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__IntersectionAccessPoint__Sequence__init(v2x_msgs__msg__IntersectionAccessPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IntersectionAccessPoint * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__IntersectionAccessPoint *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__IntersectionAccessPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__IntersectionAccessPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__IntersectionAccessPoint__fini(&data[i - 1]);
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
v2x_msgs__msg__IntersectionAccessPoint__Sequence__fini(v2x_msgs__msg__IntersectionAccessPoint__Sequence * array)
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
      v2x_msgs__msg__IntersectionAccessPoint__fini(&array->data[i]);
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

v2x_msgs__msg__IntersectionAccessPoint__Sequence *
v2x_msgs__msg__IntersectionAccessPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IntersectionAccessPoint__Sequence * array = (v2x_msgs__msg__IntersectionAccessPoint__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__IntersectionAccessPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__IntersectionAccessPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__IntersectionAccessPoint__Sequence__destroy(v2x_msgs__msg__IntersectionAccessPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__IntersectionAccessPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__IntersectionAccessPoint__Sequence__are_equal(const v2x_msgs__msg__IntersectionAccessPoint__Sequence * lhs, const v2x_msgs__msg__IntersectionAccessPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__IntersectionAccessPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__IntersectionAccessPoint__Sequence__copy(
  const v2x_msgs__msg__IntersectionAccessPoint__Sequence * input,
  v2x_msgs__msg__IntersectionAccessPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__IntersectionAccessPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__IntersectionAccessPoint * data =
      (v2x_msgs__msg__IntersectionAccessPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__IntersectionAccessPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__IntersectionAccessPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__IntersectionAccessPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
