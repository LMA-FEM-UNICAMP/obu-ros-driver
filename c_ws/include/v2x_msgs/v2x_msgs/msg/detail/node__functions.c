// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/Node.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane`
#include "v2x_msgs/msg/detail/lane_id__functions.h"
// Member `connection_id`
#include "v2x_msgs/msg/detail/lane_connection_id__functions.h"
// Member `intersection_id`
#include "v2x_msgs/msg/detail/intersection_id__functions.h"

bool
v2x_msgs__msg__Node__init(v2x_msgs__msg__Node * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // lane_present
  msg->lane_present = false;
  // lane
  if (!v2x_msgs__msg__LaneID__init(&msg->lane)) {
    v2x_msgs__msg__Node__fini(msg);
    return false;
  }
  // connection_id_present
  msg->connection_id_present = false;
  // connection_id
  if (!v2x_msgs__msg__LaneConnectionID__init(&msg->connection_id)) {
    v2x_msgs__msg__Node__fini(msg);
    return false;
  }
  // intersection_id_present
  msg->intersection_id_present = false;
  // intersection_id
  if (!v2x_msgs__msg__IntersectionID__init(&msg->intersection_id)) {
    v2x_msgs__msg__Node__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__Node__fini(v2x_msgs__msg__Node * msg)
{
  if (!msg) {
    return;
  }
  // id
  // lane_present
  // lane
  v2x_msgs__msg__LaneID__fini(&msg->lane);
  // connection_id_present
  // connection_id
  v2x_msgs__msg__LaneConnectionID__fini(&msg->connection_id);
  // intersection_id_present
  // intersection_id
  v2x_msgs__msg__IntersectionID__fini(&msg->intersection_id);
}

bool
v2x_msgs__msg__Node__are_equal(const v2x_msgs__msg__Node * lhs, const v2x_msgs__msg__Node * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // lane_present
  if (lhs->lane_present != rhs->lane_present) {
    return false;
  }
  // lane
  if (!v2x_msgs__msg__LaneID__are_equal(
      &(lhs->lane), &(rhs->lane)))
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
  // intersection_id_present
  if (lhs->intersection_id_present != rhs->intersection_id_present) {
    return false;
  }
  // intersection_id
  if (!v2x_msgs__msg__IntersectionID__are_equal(
      &(lhs->intersection_id), &(rhs->intersection_id)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__Node__copy(
  const v2x_msgs__msg__Node * input,
  v2x_msgs__msg__Node * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // lane_present
  output->lane_present = input->lane_present;
  // lane
  if (!v2x_msgs__msg__LaneID__copy(
      &(input->lane), &(output->lane)))
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
  // intersection_id_present
  output->intersection_id_present = input->intersection_id_present;
  // intersection_id
  if (!v2x_msgs__msg__IntersectionID__copy(
      &(input->intersection_id), &(output->intersection_id)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__Node *
v2x_msgs__msg__Node__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Node * msg = (v2x_msgs__msg__Node *)allocator.allocate(sizeof(v2x_msgs__msg__Node), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__Node));
  bool success = v2x_msgs__msg__Node__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__Node__destroy(v2x_msgs__msg__Node * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__Node__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__Node__Sequence__init(v2x_msgs__msg__Node__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Node * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__Node *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__Node), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__Node__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__Node__fini(&data[i - 1]);
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
v2x_msgs__msg__Node__Sequence__fini(v2x_msgs__msg__Node__Sequence * array)
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
      v2x_msgs__msg__Node__fini(&array->data[i]);
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

v2x_msgs__msg__Node__Sequence *
v2x_msgs__msg__Node__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Node__Sequence * array = (v2x_msgs__msg__Node__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__Node__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__Node__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__Node__Sequence__destroy(v2x_msgs__msg__Node__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__Node__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__Node__Sequence__are_equal(const v2x_msgs__msg__Node__Sequence * lhs, const v2x_msgs__msg__Node__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__Node__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__Node__Sequence__copy(
  const v2x_msgs__msg__Node__Sequence * input,
  v2x_msgs__msg__Node__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__Node);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__Node * data =
      (v2x_msgs__msg__Node *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__Node__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__Node__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__Node__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
