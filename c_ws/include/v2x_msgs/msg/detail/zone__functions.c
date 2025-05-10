// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/Zone.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/zone__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `segment`
#include "v2x_msgs/msg/detail/segment__functions.h"
// Member `area`
#include "v2x_msgs/msg/detail/polygonal_line__functions.h"
// Member `computed_segment`
#include "v2x_msgs/msg/detail/computed_segment__functions.h"

bool
v2x_msgs__msg__Zone__init(v2x_msgs__msg__Zone * msg)
{
  if (!msg) {
    return false;
  }
  // zone_container_select
  msg->zone_container_select = 0ll;
  // segment
  if (!v2x_msgs__msg__Segment__init(&msg->segment)) {
    v2x_msgs__msg__Zone__fini(msg);
    return false;
  }
  // area
  if (!v2x_msgs__msg__PolygonalLine__init(&msg->area)) {
    v2x_msgs__msg__Zone__fini(msg);
    return false;
  }
  // computed_segment
  if (!v2x_msgs__msg__ComputedSegment__init(&msg->computed_segment)) {
    v2x_msgs__msg__Zone__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__Zone__fini(v2x_msgs__msg__Zone * msg)
{
  if (!msg) {
    return;
  }
  // zone_container_select
  // segment
  v2x_msgs__msg__Segment__fini(&msg->segment);
  // area
  v2x_msgs__msg__PolygonalLine__fini(&msg->area);
  // computed_segment
  v2x_msgs__msg__ComputedSegment__fini(&msg->computed_segment);
}

bool
v2x_msgs__msg__Zone__are_equal(const v2x_msgs__msg__Zone * lhs, const v2x_msgs__msg__Zone * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // zone_container_select
  if (lhs->zone_container_select != rhs->zone_container_select) {
    return false;
  }
  // segment
  if (!v2x_msgs__msg__Segment__are_equal(
      &(lhs->segment), &(rhs->segment)))
  {
    return false;
  }
  // area
  if (!v2x_msgs__msg__PolygonalLine__are_equal(
      &(lhs->area), &(rhs->area)))
  {
    return false;
  }
  // computed_segment
  if (!v2x_msgs__msg__ComputedSegment__are_equal(
      &(lhs->computed_segment), &(rhs->computed_segment)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__Zone__copy(
  const v2x_msgs__msg__Zone * input,
  v2x_msgs__msg__Zone * output)
{
  if (!input || !output) {
    return false;
  }
  // zone_container_select
  output->zone_container_select = input->zone_container_select;
  // segment
  if (!v2x_msgs__msg__Segment__copy(
      &(input->segment), &(output->segment)))
  {
    return false;
  }
  // area
  if (!v2x_msgs__msg__PolygonalLine__copy(
      &(input->area), &(output->area)))
  {
    return false;
  }
  // computed_segment
  if (!v2x_msgs__msg__ComputedSegment__copy(
      &(input->computed_segment), &(output->computed_segment)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__Zone *
v2x_msgs__msg__Zone__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Zone * msg = (v2x_msgs__msg__Zone *)allocator.allocate(sizeof(v2x_msgs__msg__Zone), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__Zone));
  bool success = v2x_msgs__msg__Zone__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__Zone__destroy(v2x_msgs__msg__Zone * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__Zone__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__Zone__Sequence__init(v2x_msgs__msg__Zone__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Zone * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__Zone *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__Zone), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__Zone__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__Zone__fini(&data[i - 1]);
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
v2x_msgs__msg__Zone__Sequence__fini(v2x_msgs__msg__Zone__Sequence * array)
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
      v2x_msgs__msg__Zone__fini(&array->data[i]);
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

v2x_msgs__msg__Zone__Sequence *
v2x_msgs__msg__Zone__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Zone__Sequence * array = (v2x_msgs__msg__Zone__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__Zone__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__Zone__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__Zone__Sequence__destroy(v2x_msgs__msg__Zone__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__Zone__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__Zone__Sequence__are_equal(const v2x_msgs__msg__Zone__Sequence * lhs, const v2x_msgs__msg__Zone__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__Zone__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__Zone__Sequence__copy(
  const v2x_msgs__msg__Zone__Sequence * input,
  v2x_msgs__msg__Zone__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__Zone);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__Zone * data =
      (v2x_msgs__msg__Zone *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__Zone__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__Zone__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__Zone__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
