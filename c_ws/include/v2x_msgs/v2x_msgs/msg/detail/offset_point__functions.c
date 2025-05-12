// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/OffsetPoint.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/offset_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_offset_pointxy`
#include "v2x_msgs/msg/detail/node_offset_point_xy__functions.h"
// Member `node_offset_point_z`
#include "v2x_msgs/msg/detail/node_offset_point_z__functions.h"

bool
v2x_msgs__msg__OffsetPoint__init(v2x_msgs__msg__OffsetPoint * msg)
{
  if (!msg) {
    return false;
  }
  // node_offset_pointxy
  if (!v2x_msgs__msg__NodeOffsetPointXY__init(&msg->node_offset_pointxy)) {
    v2x_msgs__msg__OffsetPoint__fini(msg);
    return false;
  }
  // node_offset_point_z_present
  msg->node_offset_point_z_present = false;
  // node_offset_point_z
  if (!v2x_msgs__msg__NodeOffsetPointZ__init(&msg->node_offset_point_z)) {
    v2x_msgs__msg__OffsetPoint__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__OffsetPoint__fini(v2x_msgs__msg__OffsetPoint * msg)
{
  if (!msg) {
    return;
  }
  // node_offset_pointxy
  v2x_msgs__msg__NodeOffsetPointXY__fini(&msg->node_offset_pointxy);
  // node_offset_point_z_present
  // node_offset_point_z
  v2x_msgs__msg__NodeOffsetPointZ__fini(&msg->node_offset_point_z);
}

bool
v2x_msgs__msg__OffsetPoint__are_equal(const v2x_msgs__msg__OffsetPoint * lhs, const v2x_msgs__msg__OffsetPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_offset_pointxy
  if (!v2x_msgs__msg__NodeOffsetPointXY__are_equal(
      &(lhs->node_offset_pointxy), &(rhs->node_offset_pointxy)))
  {
    return false;
  }
  // node_offset_point_z_present
  if (lhs->node_offset_point_z_present != rhs->node_offset_point_z_present) {
    return false;
  }
  // node_offset_point_z
  if (!v2x_msgs__msg__NodeOffsetPointZ__are_equal(
      &(lhs->node_offset_point_z), &(rhs->node_offset_point_z)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__OffsetPoint__copy(
  const v2x_msgs__msg__OffsetPoint * input,
  v2x_msgs__msg__OffsetPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // node_offset_pointxy
  if (!v2x_msgs__msg__NodeOffsetPointXY__copy(
      &(input->node_offset_pointxy), &(output->node_offset_pointxy)))
  {
    return false;
  }
  // node_offset_point_z_present
  output->node_offset_point_z_present = input->node_offset_point_z_present;
  // node_offset_point_z
  if (!v2x_msgs__msg__NodeOffsetPointZ__copy(
      &(input->node_offset_point_z), &(output->node_offset_point_z)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__OffsetPoint *
v2x_msgs__msg__OffsetPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__OffsetPoint * msg = (v2x_msgs__msg__OffsetPoint *)allocator.allocate(sizeof(v2x_msgs__msg__OffsetPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__OffsetPoint));
  bool success = v2x_msgs__msg__OffsetPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__OffsetPoint__destroy(v2x_msgs__msg__OffsetPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__OffsetPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__OffsetPoint__Sequence__init(v2x_msgs__msg__OffsetPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__OffsetPoint * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__OffsetPoint *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__OffsetPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__OffsetPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__OffsetPoint__fini(&data[i - 1]);
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
v2x_msgs__msg__OffsetPoint__Sequence__fini(v2x_msgs__msg__OffsetPoint__Sequence * array)
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
      v2x_msgs__msg__OffsetPoint__fini(&array->data[i]);
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

v2x_msgs__msg__OffsetPoint__Sequence *
v2x_msgs__msg__OffsetPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__OffsetPoint__Sequence * array = (v2x_msgs__msg__OffsetPoint__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__OffsetPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__OffsetPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__OffsetPoint__Sequence__destroy(v2x_msgs__msg__OffsetPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__OffsetPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__OffsetPoint__Sequence__are_equal(const v2x_msgs__msg__OffsetPoint__Sequence * lhs, const v2x_msgs__msg__OffsetPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__OffsetPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__OffsetPoint__Sequence__copy(
  const v2x_msgs__msg__OffsetPoint__Sequence * input,
  v2x_msgs__msg__OffsetPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__OffsetPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__OffsetPoint * data =
      (v2x_msgs__msg__OffsetPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__OffsetPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__OffsetPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__OffsetPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
