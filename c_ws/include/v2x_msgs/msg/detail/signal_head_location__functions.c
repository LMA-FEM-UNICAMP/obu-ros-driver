// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SignalHeadLocation.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/signal_head_location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_xy`
#include "v2x_msgs/msg/detail/node_offset_point_xy__functions.h"
// Member `node_z`
#include "v2x_msgs/msg/detail/delta_altitude__functions.h"
// Member `signal_group_id`
#include "v2x_msgs/msg/detail/signal_group_id__functions.h"

bool
v2x_msgs__msg__SignalHeadLocation__init(v2x_msgs__msg__SignalHeadLocation * msg)
{
  if (!msg) {
    return false;
  }
  // node_xy
  if (!v2x_msgs__msg__NodeOffsetPointXY__init(&msg->node_xy)) {
    v2x_msgs__msg__SignalHeadLocation__fini(msg);
    return false;
  }
  // node_z
  if (!v2x_msgs__msg__DeltaAltitude__init(&msg->node_z)) {
    v2x_msgs__msg__SignalHeadLocation__fini(msg);
    return false;
  }
  // signal_group_id
  if (!v2x_msgs__msg__SignalGroupID__init(&msg->signal_group_id)) {
    v2x_msgs__msg__SignalHeadLocation__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SignalHeadLocation__fini(v2x_msgs__msg__SignalHeadLocation * msg)
{
  if (!msg) {
    return;
  }
  // node_xy
  v2x_msgs__msg__NodeOffsetPointXY__fini(&msg->node_xy);
  // node_z
  v2x_msgs__msg__DeltaAltitude__fini(&msg->node_z);
  // signal_group_id
  v2x_msgs__msg__SignalGroupID__fini(&msg->signal_group_id);
}

bool
v2x_msgs__msg__SignalHeadLocation__are_equal(const v2x_msgs__msg__SignalHeadLocation * lhs, const v2x_msgs__msg__SignalHeadLocation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_xy
  if (!v2x_msgs__msg__NodeOffsetPointXY__are_equal(
      &(lhs->node_xy), &(rhs->node_xy)))
  {
    return false;
  }
  // node_z
  if (!v2x_msgs__msg__DeltaAltitude__are_equal(
      &(lhs->node_z), &(rhs->node_z)))
  {
    return false;
  }
  // signal_group_id
  if (!v2x_msgs__msg__SignalGroupID__are_equal(
      &(lhs->signal_group_id), &(rhs->signal_group_id)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__SignalHeadLocation__copy(
  const v2x_msgs__msg__SignalHeadLocation * input,
  v2x_msgs__msg__SignalHeadLocation * output)
{
  if (!input || !output) {
    return false;
  }
  // node_xy
  if (!v2x_msgs__msg__NodeOffsetPointXY__copy(
      &(input->node_xy), &(output->node_xy)))
  {
    return false;
  }
  // node_z
  if (!v2x_msgs__msg__DeltaAltitude__copy(
      &(input->node_z), &(output->node_z)))
  {
    return false;
  }
  // signal_group_id
  if (!v2x_msgs__msg__SignalGroupID__copy(
      &(input->signal_group_id), &(output->signal_group_id)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__SignalHeadLocation *
v2x_msgs__msg__SignalHeadLocation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalHeadLocation * msg = (v2x_msgs__msg__SignalHeadLocation *)allocator.allocate(sizeof(v2x_msgs__msg__SignalHeadLocation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SignalHeadLocation));
  bool success = v2x_msgs__msg__SignalHeadLocation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SignalHeadLocation__destroy(v2x_msgs__msg__SignalHeadLocation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SignalHeadLocation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SignalHeadLocation__Sequence__init(v2x_msgs__msg__SignalHeadLocation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalHeadLocation * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SignalHeadLocation *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SignalHeadLocation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SignalHeadLocation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SignalHeadLocation__fini(&data[i - 1]);
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
v2x_msgs__msg__SignalHeadLocation__Sequence__fini(v2x_msgs__msg__SignalHeadLocation__Sequence * array)
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
      v2x_msgs__msg__SignalHeadLocation__fini(&array->data[i]);
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

v2x_msgs__msg__SignalHeadLocation__Sequence *
v2x_msgs__msg__SignalHeadLocation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalHeadLocation__Sequence * array = (v2x_msgs__msg__SignalHeadLocation__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SignalHeadLocation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SignalHeadLocation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SignalHeadLocation__Sequence__destroy(v2x_msgs__msg__SignalHeadLocation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SignalHeadLocation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SignalHeadLocation__Sequence__are_equal(const v2x_msgs__msg__SignalHeadLocation__Sequence * lhs, const v2x_msgs__msg__SignalHeadLocation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SignalHeadLocation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SignalHeadLocation__Sequence__copy(
  const v2x_msgs__msg__SignalHeadLocation__Sequence * input,
  v2x_msgs__msg__SignalHeadLocation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SignalHeadLocation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SignalHeadLocation * data =
      (v2x_msgs__msg__SignalHeadLocation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SignalHeadLocation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SignalHeadLocation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SignalHeadLocation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
