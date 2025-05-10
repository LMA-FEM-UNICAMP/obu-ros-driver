// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/PolygonalLine.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/polygonal_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `delta_positions`
#include "v2x_msgs/msg/detail/delta_positions__functions.h"
// Member `delta_positions_with_altitude`
#include "v2x_msgs/msg/detail/delta_reference_positions__functions.h"
// Member `absolute_positions`
#include "v2x_msgs/msg/detail/absolute_positions__functions.h"
// Member `absolute_positions_with_altitude`
#include "v2x_msgs/msg/detail/absolute_positions_w_altitude__functions.h"

bool
v2x_msgs__msg__PolygonalLine__init(v2x_msgs__msg__PolygonalLine * msg)
{
  if (!msg) {
    return false;
  }
  // polygonal_line_container_select
  msg->polygonal_line_container_select = 0ll;
  // delta_positions
  if (!v2x_msgs__msg__DeltaPositions__init(&msg->delta_positions)) {
    v2x_msgs__msg__PolygonalLine__fini(msg);
    return false;
  }
  // delta_positions_with_altitude
  if (!v2x_msgs__msg__DeltaReferencePositions__init(&msg->delta_positions_with_altitude)) {
    v2x_msgs__msg__PolygonalLine__fini(msg);
    return false;
  }
  // absolute_positions
  if (!v2x_msgs__msg__AbsolutePositions__init(&msg->absolute_positions)) {
    v2x_msgs__msg__PolygonalLine__fini(msg);
    return false;
  }
  // absolute_positions_with_altitude
  if (!v2x_msgs__msg__AbsolutePositionsWAltitude__init(&msg->absolute_positions_with_altitude)) {
    v2x_msgs__msg__PolygonalLine__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__PolygonalLine__fini(v2x_msgs__msg__PolygonalLine * msg)
{
  if (!msg) {
    return;
  }
  // polygonal_line_container_select
  // delta_positions
  v2x_msgs__msg__DeltaPositions__fini(&msg->delta_positions);
  // delta_positions_with_altitude
  v2x_msgs__msg__DeltaReferencePositions__fini(&msg->delta_positions_with_altitude);
  // absolute_positions
  v2x_msgs__msg__AbsolutePositions__fini(&msg->absolute_positions);
  // absolute_positions_with_altitude
  v2x_msgs__msg__AbsolutePositionsWAltitude__fini(&msg->absolute_positions_with_altitude);
}

bool
v2x_msgs__msg__PolygonalLine__are_equal(const v2x_msgs__msg__PolygonalLine * lhs, const v2x_msgs__msg__PolygonalLine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // polygonal_line_container_select
  if (lhs->polygonal_line_container_select != rhs->polygonal_line_container_select) {
    return false;
  }
  // delta_positions
  if (!v2x_msgs__msg__DeltaPositions__are_equal(
      &(lhs->delta_positions), &(rhs->delta_positions)))
  {
    return false;
  }
  // delta_positions_with_altitude
  if (!v2x_msgs__msg__DeltaReferencePositions__are_equal(
      &(lhs->delta_positions_with_altitude), &(rhs->delta_positions_with_altitude)))
  {
    return false;
  }
  // absolute_positions
  if (!v2x_msgs__msg__AbsolutePositions__are_equal(
      &(lhs->absolute_positions), &(rhs->absolute_positions)))
  {
    return false;
  }
  // absolute_positions_with_altitude
  if (!v2x_msgs__msg__AbsolutePositionsWAltitude__are_equal(
      &(lhs->absolute_positions_with_altitude), &(rhs->absolute_positions_with_altitude)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__PolygonalLine__copy(
  const v2x_msgs__msg__PolygonalLine * input,
  v2x_msgs__msg__PolygonalLine * output)
{
  if (!input || !output) {
    return false;
  }
  // polygonal_line_container_select
  output->polygonal_line_container_select = input->polygonal_line_container_select;
  // delta_positions
  if (!v2x_msgs__msg__DeltaPositions__copy(
      &(input->delta_positions), &(output->delta_positions)))
  {
    return false;
  }
  // delta_positions_with_altitude
  if (!v2x_msgs__msg__DeltaReferencePositions__copy(
      &(input->delta_positions_with_altitude), &(output->delta_positions_with_altitude)))
  {
    return false;
  }
  // absolute_positions
  if (!v2x_msgs__msg__AbsolutePositions__copy(
      &(input->absolute_positions), &(output->absolute_positions)))
  {
    return false;
  }
  // absolute_positions_with_altitude
  if (!v2x_msgs__msg__AbsolutePositionsWAltitude__copy(
      &(input->absolute_positions_with_altitude), &(output->absolute_positions_with_altitude)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__PolygonalLine *
v2x_msgs__msg__PolygonalLine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PolygonalLine * msg = (v2x_msgs__msg__PolygonalLine *)allocator.allocate(sizeof(v2x_msgs__msg__PolygonalLine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__PolygonalLine));
  bool success = v2x_msgs__msg__PolygonalLine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__PolygonalLine__destroy(v2x_msgs__msg__PolygonalLine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__PolygonalLine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__PolygonalLine__Sequence__init(v2x_msgs__msg__PolygonalLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PolygonalLine * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__PolygonalLine *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__PolygonalLine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__PolygonalLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__PolygonalLine__fini(&data[i - 1]);
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
v2x_msgs__msg__PolygonalLine__Sequence__fini(v2x_msgs__msg__PolygonalLine__Sequence * array)
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
      v2x_msgs__msg__PolygonalLine__fini(&array->data[i]);
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

v2x_msgs__msg__PolygonalLine__Sequence *
v2x_msgs__msg__PolygonalLine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PolygonalLine__Sequence * array = (v2x_msgs__msg__PolygonalLine__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__PolygonalLine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__PolygonalLine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__PolygonalLine__Sequence__destroy(v2x_msgs__msg__PolygonalLine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__PolygonalLine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__PolygonalLine__Sequence__are_equal(const v2x_msgs__msg__PolygonalLine__Sequence * lhs, const v2x_msgs__msg__PolygonalLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__PolygonalLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__PolygonalLine__Sequence__copy(
  const v2x_msgs__msg__PolygonalLine__Sequence * input,
  v2x_msgs__msg__PolygonalLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__PolygonalLine);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__PolygonalLine * data =
      (v2x_msgs__msg__PolygonalLine *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__PolygonalLine__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__PolygonalLine__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__PolygonalLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
