// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ActionID.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/action_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `originating_station_id`
#include "v2x_msgs/msg/detail/station_id__functions.h"
// Member `sequence_number`
#include "v2x_msgs/msg/detail/sequence_number__functions.h"

bool
v2x_msgs__msg__ActionID__init(v2x_msgs__msg__ActionID * msg)
{
  if (!msg) {
    return false;
  }
  // originating_station_id
  if (!v2x_msgs__msg__StationID__init(&msg->originating_station_id)) {
    v2x_msgs__msg__ActionID__fini(msg);
    return false;
  }
  // sequence_number
  if (!v2x_msgs__msg__SequenceNumber__init(&msg->sequence_number)) {
    v2x_msgs__msg__ActionID__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ActionID__fini(v2x_msgs__msg__ActionID * msg)
{
  if (!msg) {
    return;
  }
  // originating_station_id
  v2x_msgs__msg__StationID__fini(&msg->originating_station_id);
  // sequence_number
  v2x_msgs__msg__SequenceNumber__fini(&msg->sequence_number);
}

bool
v2x_msgs__msg__ActionID__are_equal(const v2x_msgs__msg__ActionID * lhs, const v2x_msgs__msg__ActionID * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // originating_station_id
  if (!v2x_msgs__msg__StationID__are_equal(
      &(lhs->originating_station_id), &(rhs->originating_station_id)))
  {
    return false;
  }
  // sequence_number
  if (!v2x_msgs__msg__SequenceNumber__are_equal(
      &(lhs->sequence_number), &(rhs->sequence_number)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ActionID__copy(
  const v2x_msgs__msg__ActionID * input,
  v2x_msgs__msg__ActionID * output)
{
  if (!input || !output) {
    return false;
  }
  // originating_station_id
  if (!v2x_msgs__msg__StationID__copy(
      &(input->originating_station_id), &(output->originating_station_id)))
  {
    return false;
  }
  // sequence_number
  if (!v2x_msgs__msg__SequenceNumber__copy(
      &(input->sequence_number), &(output->sequence_number)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ActionID *
v2x_msgs__msg__ActionID__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ActionID * msg = (v2x_msgs__msg__ActionID *)allocator.allocate(sizeof(v2x_msgs__msg__ActionID), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ActionID));
  bool success = v2x_msgs__msg__ActionID__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ActionID__destroy(v2x_msgs__msg__ActionID * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ActionID__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ActionID__Sequence__init(v2x_msgs__msg__ActionID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ActionID * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ActionID *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ActionID), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ActionID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ActionID__fini(&data[i - 1]);
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
v2x_msgs__msg__ActionID__Sequence__fini(v2x_msgs__msg__ActionID__Sequence * array)
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
      v2x_msgs__msg__ActionID__fini(&array->data[i]);
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

v2x_msgs__msg__ActionID__Sequence *
v2x_msgs__msg__ActionID__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ActionID__Sequence * array = (v2x_msgs__msg__ActionID__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ActionID__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ActionID__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ActionID__Sequence__destroy(v2x_msgs__msg__ActionID__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ActionID__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ActionID__Sequence__are_equal(const v2x_msgs__msg__ActionID__Sequence * lhs, const v2x_msgs__msg__ActionID__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ActionID__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ActionID__Sequence__copy(
  const v2x_msgs__msg__ActionID__Sequence * input,
  v2x_msgs__msg__ActionID__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ActionID);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ActionID * data =
      (v2x_msgs__msg__ActionID *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ActionID__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ActionID__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ActionID__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
