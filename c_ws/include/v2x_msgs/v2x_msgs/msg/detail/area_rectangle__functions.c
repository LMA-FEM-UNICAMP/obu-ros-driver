// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/AreaRectangle.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/area_rectangle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_center_point`
#include "v2x_msgs/msg/detail/offset_point__functions.h"
// Member `semi_major_range_length`
// Member `semi_minor_range_length`
// Member `semi_height`
#include "v2x_msgs/msg/detail/semi_range_length__functions.h"
// Member `semi_major_range_orientation`
#include "v2x_msgs/msg/detail/wgs84_angle_value__functions.h"

bool
v2x_msgs__msg__AreaRectangle__init(v2x_msgs__msg__AreaRectangle * msg)
{
  if (!msg) {
    return false;
  }
  // node_center_point_present
  msg->node_center_point_present = false;
  // node_center_point
  if (!v2x_msgs__msg__OffsetPoint__init(&msg->node_center_point)) {
    v2x_msgs__msg__AreaRectangle__fini(msg);
    return false;
  }
  // semi_major_range_length
  if (!v2x_msgs__msg__SemiRangeLength__init(&msg->semi_major_range_length)) {
    v2x_msgs__msg__AreaRectangle__fini(msg);
    return false;
  }
  // semi_minor_range_length
  if (!v2x_msgs__msg__SemiRangeLength__init(&msg->semi_minor_range_length)) {
    v2x_msgs__msg__AreaRectangle__fini(msg);
    return false;
  }
  // semi_major_range_orientation
  if (!v2x_msgs__msg__WGS84AngleValue__init(&msg->semi_major_range_orientation)) {
    v2x_msgs__msg__AreaRectangle__fini(msg);
    return false;
  }
  // semi_height_present
  msg->semi_height_present = false;
  // semi_height
  if (!v2x_msgs__msg__SemiRangeLength__init(&msg->semi_height)) {
    v2x_msgs__msg__AreaRectangle__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__AreaRectangle__fini(v2x_msgs__msg__AreaRectangle * msg)
{
  if (!msg) {
    return;
  }
  // node_center_point_present
  // node_center_point
  v2x_msgs__msg__OffsetPoint__fini(&msg->node_center_point);
  // semi_major_range_length
  v2x_msgs__msg__SemiRangeLength__fini(&msg->semi_major_range_length);
  // semi_minor_range_length
  v2x_msgs__msg__SemiRangeLength__fini(&msg->semi_minor_range_length);
  // semi_major_range_orientation
  v2x_msgs__msg__WGS84AngleValue__fini(&msg->semi_major_range_orientation);
  // semi_height_present
  // semi_height
  v2x_msgs__msg__SemiRangeLength__fini(&msg->semi_height);
}

bool
v2x_msgs__msg__AreaRectangle__are_equal(const v2x_msgs__msg__AreaRectangle * lhs, const v2x_msgs__msg__AreaRectangle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_center_point_present
  if (lhs->node_center_point_present != rhs->node_center_point_present) {
    return false;
  }
  // node_center_point
  if (!v2x_msgs__msg__OffsetPoint__are_equal(
      &(lhs->node_center_point), &(rhs->node_center_point)))
  {
    return false;
  }
  // semi_major_range_length
  if (!v2x_msgs__msg__SemiRangeLength__are_equal(
      &(lhs->semi_major_range_length), &(rhs->semi_major_range_length)))
  {
    return false;
  }
  // semi_minor_range_length
  if (!v2x_msgs__msg__SemiRangeLength__are_equal(
      &(lhs->semi_minor_range_length), &(rhs->semi_minor_range_length)))
  {
    return false;
  }
  // semi_major_range_orientation
  if (!v2x_msgs__msg__WGS84AngleValue__are_equal(
      &(lhs->semi_major_range_orientation), &(rhs->semi_major_range_orientation)))
  {
    return false;
  }
  // semi_height_present
  if (lhs->semi_height_present != rhs->semi_height_present) {
    return false;
  }
  // semi_height
  if (!v2x_msgs__msg__SemiRangeLength__are_equal(
      &(lhs->semi_height), &(rhs->semi_height)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__AreaRectangle__copy(
  const v2x_msgs__msg__AreaRectangle * input,
  v2x_msgs__msg__AreaRectangle * output)
{
  if (!input || !output) {
    return false;
  }
  // node_center_point_present
  output->node_center_point_present = input->node_center_point_present;
  // node_center_point
  if (!v2x_msgs__msg__OffsetPoint__copy(
      &(input->node_center_point), &(output->node_center_point)))
  {
    return false;
  }
  // semi_major_range_length
  if (!v2x_msgs__msg__SemiRangeLength__copy(
      &(input->semi_major_range_length), &(output->semi_major_range_length)))
  {
    return false;
  }
  // semi_minor_range_length
  if (!v2x_msgs__msg__SemiRangeLength__copy(
      &(input->semi_minor_range_length), &(output->semi_minor_range_length)))
  {
    return false;
  }
  // semi_major_range_orientation
  if (!v2x_msgs__msg__WGS84AngleValue__copy(
      &(input->semi_major_range_orientation), &(output->semi_major_range_orientation)))
  {
    return false;
  }
  // semi_height_present
  output->semi_height_present = input->semi_height_present;
  // semi_height
  if (!v2x_msgs__msg__SemiRangeLength__copy(
      &(input->semi_height), &(output->semi_height)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__AreaRectangle *
v2x_msgs__msg__AreaRectangle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AreaRectangle * msg = (v2x_msgs__msg__AreaRectangle *)allocator.allocate(sizeof(v2x_msgs__msg__AreaRectangle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__AreaRectangle));
  bool success = v2x_msgs__msg__AreaRectangle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__AreaRectangle__destroy(v2x_msgs__msg__AreaRectangle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__AreaRectangle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__AreaRectangle__Sequence__init(v2x_msgs__msg__AreaRectangle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AreaRectangle * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__AreaRectangle *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__AreaRectangle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__AreaRectangle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__AreaRectangle__fini(&data[i - 1]);
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
v2x_msgs__msg__AreaRectangle__Sequence__fini(v2x_msgs__msg__AreaRectangle__Sequence * array)
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
      v2x_msgs__msg__AreaRectangle__fini(&array->data[i]);
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

v2x_msgs__msg__AreaRectangle__Sequence *
v2x_msgs__msg__AreaRectangle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AreaRectangle__Sequence * array = (v2x_msgs__msg__AreaRectangle__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__AreaRectangle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__AreaRectangle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__AreaRectangle__Sequence__destroy(v2x_msgs__msg__AreaRectangle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__AreaRectangle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__AreaRectangle__Sequence__are_equal(const v2x_msgs__msg__AreaRectangle__Sequence * lhs, const v2x_msgs__msg__AreaRectangle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__AreaRectangle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__AreaRectangle__Sequence__copy(
  const v2x_msgs__msg__AreaRectangle__Sequence * input,
  v2x_msgs__msg__AreaRectangle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__AreaRectangle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__AreaRectangle * data =
      (v2x_msgs__msg__AreaRectangle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__AreaRectangle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__AreaRectangle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__AreaRectangle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
