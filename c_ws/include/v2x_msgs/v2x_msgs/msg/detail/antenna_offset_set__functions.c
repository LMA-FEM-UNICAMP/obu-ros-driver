// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/AntennaOffsetSet.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/antenna_offset_set__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ant_offset_x`
#include "v2x_msgs/msg/detail/offset_b12__functions.h"
// Member `ant_offset_y`
#include "v2x_msgs/msg/detail/offset_b09__functions.h"
// Member `ant_offset_z`
#include "v2x_msgs/msg/detail/offset_b10__functions.h"

bool
v2x_msgs__msg__AntennaOffsetSet__init(v2x_msgs__msg__AntennaOffsetSet * msg)
{
  if (!msg) {
    return false;
  }
  // ant_offset_x
  if (!v2x_msgs__msg__OffsetB12__init(&msg->ant_offset_x)) {
    v2x_msgs__msg__AntennaOffsetSet__fini(msg);
    return false;
  }
  // ant_offset_y
  if (!v2x_msgs__msg__OffsetB09__init(&msg->ant_offset_y)) {
    v2x_msgs__msg__AntennaOffsetSet__fini(msg);
    return false;
  }
  // ant_offset_z
  if (!v2x_msgs__msg__OffsetB10__init(&msg->ant_offset_z)) {
    v2x_msgs__msg__AntennaOffsetSet__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__AntennaOffsetSet__fini(v2x_msgs__msg__AntennaOffsetSet * msg)
{
  if (!msg) {
    return;
  }
  // ant_offset_x
  v2x_msgs__msg__OffsetB12__fini(&msg->ant_offset_x);
  // ant_offset_y
  v2x_msgs__msg__OffsetB09__fini(&msg->ant_offset_y);
  // ant_offset_z
  v2x_msgs__msg__OffsetB10__fini(&msg->ant_offset_z);
}

bool
v2x_msgs__msg__AntennaOffsetSet__are_equal(const v2x_msgs__msg__AntennaOffsetSet * lhs, const v2x_msgs__msg__AntennaOffsetSet * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ant_offset_x
  if (!v2x_msgs__msg__OffsetB12__are_equal(
      &(lhs->ant_offset_x), &(rhs->ant_offset_x)))
  {
    return false;
  }
  // ant_offset_y
  if (!v2x_msgs__msg__OffsetB09__are_equal(
      &(lhs->ant_offset_y), &(rhs->ant_offset_y)))
  {
    return false;
  }
  // ant_offset_z
  if (!v2x_msgs__msg__OffsetB10__are_equal(
      &(lhs->ant_offset_z), &(rhs->ant_offset_z)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__AntennaOffsetSet__copy(
  const v2x_msgs__msg__AntennaOffsetSet * input,
  v2x_msgs__msg__AntennaOffsetSet * output)
{
  if (!input || !output) {
    return false;
  }
  // ant_offset_x
  if (!v2x_msgs__msg__OffsetB12__copy(
      &(input->ant_offset_x), &(output->ant_offset_x)))
  {
    return false;
  }
  // ant_offset_y
  if (!v2x_msgs__msg__OffsetB09__copy(
      &(input->ant_offset_y), &(output->ant_offset_y)))
  {
    return false;
  }
  // ant_offset_z
  if (!v2x_msgs__msg__OffsetB10__copy(
      &(input->ant_offset_z), &(output->ant_offset_z)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__AntennaOffsetSet *
v2x_msgs__msg__AntennaOffsetSet__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AntennaOffsetSet * msg = (v2x_msgs__msg__AntennaOffsetSet *)allocator.allocate(sizeof(v2x_msgs__msg__AntennaOffsetSet), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__AntennaOffsetSet));
  bool success = v2x_msgs__msg__AntennaOffsetSet__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__AntennaOffsetSet__destroy(v2x_msgs__msg__AntennaOffsetSet * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__AntennaOffsetSet__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__AntennaOffsetSet__Sequence__init(v2x_msgs__msg__AntennaOffsetSet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AntennaOffsetSet * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__AntennaOffsetSet *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__AntennaOffsetSet), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__AntennaOffsetSet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__AntennaOffsetSet__fini(&data[i - 1]);
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
v2x_msgs__msg__AntennaOffsetSet__Sequence__fini(v2x_msgs__msg__AntennaOffsetSet__Sequence * array)
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
      v2x_msgs__msg__AntennaOffsetSet__fini(&array->data[i]);
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

v2x_msgs__msg__AntennaOffsetSet__Sequence *
v2x_msgs__msg__AntennaOffsetSet__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AntennaOffsetSet__Sequence * array = (v2x_msgs__msg__AntennaOffsetSet__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__AntennaOffsetSet__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__AntennaOffsetSet__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__AntennaOffsetSet__Sequence__destroy(v2x_msgs__msg__AntennaOffsetSet__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__AntennaOffsetSet__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__AntennaOffsetSet__Sequence__are_equal(const v2x_msgs__msg__AntennaOffsetSet__Sequence * lhs, const v2x_msgs__msg__AntennaOffsetSet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__AntennaOffsetSet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__AntennaOffsetSet__Sequence__copy(
  const v2x_msgs__msg__AntennaOffsetSet__Sequence * input,
  v2x_msgs__msg__AntennaOffsetSet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__AntennaOffsetSet);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__AntennaOffsetSet * data =
      (v2x_msgs__msg__AntennaOffsetSet *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__AntennaOffsetSet__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__AntennaOffsetSet__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__AntennaOffsetSet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
