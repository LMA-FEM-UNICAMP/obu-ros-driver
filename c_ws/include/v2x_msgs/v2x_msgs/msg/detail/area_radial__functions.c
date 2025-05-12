// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/AreaRadial.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/area_radial__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `range`
#include "v2x_msgs/msg/detail/range__functions.h"
// Member `stationary_horizontal_opening_angle_start`
// Member `stationary_horizontal_opening_angle_end`
#include "v2x_msgs/msg/detail/wgs84_angle_value__functions.h"
// Member `vertical_opening_angle_start`
// Member `vertical_opening_angle_end`
#include "v2x_msgs/msg/detail/cartesian_angle_value__functions.h"
// Member `sensor_position_offset`
#include "v2x_msgs/msg/detail/offset_point__functions.h"
// Member `sensor_height`
#include "v2x_msgs/msg/detail/sensor_height__functions.h"

bool
v2x_msgs__msg__AreaRadial__init(v2x_msgs__msg__AreaRadial * msg)
{
  if (!msg) {
    return false;
  }
  // range
  if (!v2x_msgs__msg__Range__init(&msg->range)) {
    v2x_msgs__msg__AreaRadial__fini(msg);
    return false;
  }
  // stationary_horizontal_opening_angle_start
  if (!v2x_msgs__msg__WGS84AngleValue__init(&msg->stationary_horizontal_opening_angle_start)) {
    v2x_msgs__msg__AreaRadial__fini(msg);
    return false;
  }
  // stationary_horizontal_opening_angle_end
  if (!v2x_msgs__msg__WGS84AngleValue__init(&msg->stationary_horizontal_opening_angle_end)) {
    v2x_msgs__msg__AreaRadial__fini(msg);
    return false;
  }
  // vertical_opening_angle_start_present
  msg->vertical_opening_angle_start_present = false;
  // vertical_opening_angle_start
  if (!v2x_msgs__msg__CartesianAngleValue__init(&msg->vertical_opening_angle_start)) {
    v2x_msgs__msg__AreaRadial__fini(msg);
    return false;
  }
  // vertical_opening_angle_end_present
  msg->vertical_opening_angle_end_present = false;
  // vertical_opening_angle_end
  if (!v2x_msgs__msg__CartesianAngleValue__init(&msg->vertical_opening_angle_end)) {
    v2x_msgs__msg__AreaRadial__fini(msg);
    return false;
  }
  // sensor_position_offset_present
  msg->sensor_position_offset_present = false;
  // sensor_position_offset
  if (!v2x_msgs__msg__OffsetPoint__init(&msg->sensor_position_offset)) {
    v2x_msgs__msg__AreaRadial__fini(msg);
    return false;
  }
  // sensor_height_present
  msg->sensor_height_present = false;
  // sensor_height
  if (!v2x_msgs__msg__SensorHeight__init(&msg->sensor_height)) {
    v2x_msgs__msg__AreaRadial__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__AreaRadial__fini(v2x_msgs__msg__AreaRadial * msg)
{
  if (!msg) {
    return;
  }
  // range
  v2x_msgs__msg__Range__fini(&msg->range);
  // stationary_horizontal_opening_angle_start
  v2x_msgs__msg__WGS84AngleValue__fini(&msg->stationary_horizontal_opening_angle_start);
  // stationary_horizontal_opening_angle_end
  v2x_msgs__msg__WGS84AngleValue__fini(&msg->stationary_horizontal_opening_angle_end);
  // vertical_opening_angle_start_present
  // vertical_opening_angle_start
  v2x_msgs__msg__CartesianAngleValue__fini(&msg->vertical_opening_angle_start);
  // vertical_opening_angle_end_present
  // vertical_opening_angle_end
  v2x_msgs__msg__CartesianAngleValue__fini(&msg->vertical_opening_angle_end);
  // sensor_position_offset_present
  // sensor_position_offset
  v2x_msgs__msg__OffsetPoint__fini(&msg->sensor_position_offset);
  // sensor_height_present
  // sensor_height
  v2x_msgs__msg__SensorHeight__fini(&msg->sensor_height);
}

bool
v2x_msgs__msg__AreaRadial__are_equal(const v2x_msgs__msg__AreaRadial * lhs, const v2x_msgs__msg__AreaRadial * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // range
  if (!v2x_msgs__msg__Range__are_equal(
      &(lhs->range), &(rhs->range)))
  {
    return false;
  }
  // stationary_horizontal_opening_angle_start
  if (!v2x_msgs__msg__WGS84AngleValue__are_equal(
      &(lhs->stationary_horizontal_opening_angle_start), &(rhs->stationary_horizontal_opening_angle_start)))
  {
    return false;
  }
  // stationary_horizontal_opening_angle_end
  if (!v2x_msgs__msg__WGS84AngleValue__are_equal(
      &(lhs->stationary_horizontal_opening_angle_end), &(rhs->stationary_horizontal_opening_angle_end)))
  {
    return false;
  }
  // vertical_opening_angle_start_present
  if (lhs->vertical_opening_angle_start_present != rhs->vertical_opening_angle_start_present) {
    return false;
  }
  // vertical_opening_angle_start
  if (!v2x_msgs__msg__CartesianAngleValue__are_equal(
      &(lhs->vertical_opening_angle_start), &(rhs->vertical_opening_angle_start)))
  {
    return false;
  }
  // vertical_opening_angle_end_present
  if (lhs->vertical_opening_angle_end_present != rhs->vertical_opening_angle_end_present) {
    return false;
  }
  // vertical_opening_angle_end
  if (!v2x_msgs__msg__CartesianAngleValue__are_equal(
      &(lhs->vertical_opening_angle_end), &(rhs->vertical_opening_angle_end)))
  {
    return false;
  }
  // sensor_position_offset_present
  if (lhs->sensor_position_offset_present != rhs->sensor_position_offset_present) {
    return false;
  }
  // sensor_position_offset
  if (!v2x_msgs__msg__OffsetPoint__are_equal(
      &(lhs->sensor_position_offset), &(rhs->sensor_position_offset)))
  {
    return false;
  }
  // sensor_height_present
  if (lhs->sensor_height_present != rhs->sensor_height_present) {
    return false;
  }
  // sensor_height
  if (!v2x_msgs__msg__SensorHeight__are_equal(
      &(lhs->sensor_height), &(rhs->sensor_height)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__AreaRadial__copy(
  const v2x_msgs__msg__AreaRadial * input,
  v2x_msgs__msg__AreaRadial * output)
{
  if (!input || !output) {
    return false;
  }
  // range
  if (!v2x_msgs__msg__Range__copy(
      &(input->range), &(output->range)))
  {
    return false;
  }
  // stationary_horizontal_opening_angle_start
  if (!v2x_msgs__msg__WGS84AngleValue__copy(
      &(input->stationary_horizontal_opening_angle_start), &(output->stationary_horizontal_opening_angle_start)))
  {
    return false;
  }
  // stationary_horizontal_opening_angle_end
  if (!v2x_msgs__msg__WGS84AngleValue__copy(
      &(input->stationary_horizontal_opening_angle_end), &(output->stationary_horizontal_opening_angle_end)))
  {
    return false;
  }
  // vertical_opening_angle_start_present
  output->vertical_opening_angle_start_present = input->vertical_opening_angle_start_present;
  // vertical_opening_angle_start
  if (!v2x_msgs__msg__CartesianAngleValue__copy(
      &(input->vertical_opening_angle_start), &(output->vertical_opening_angle_start)))
  {
    return false;
  }
  // vertical_opening_angle_end_present
  output->vertical_opening_angle_end_present = input->vertical_opening_angle_end_present;
  // vertical_opening_angle_end
  if (!v2x_msgs__msg__CartesianAngleValue__copy(
      &(input->vertical_opening_angle_end), &(output->vertical_opening_angle_end)))
  {
    return false;
  }
  // sensor_position_offset_present
  output->sensor_position_offset_present = input->sensor_position_offset_present;
  // sensor_position_offset
  if (!v2x_msgs__msg__OffsetPoint__copy(
      &(input->sensor_position_offset), &(output->sensor_position_offset)))
  {
    return false;
  }
  // sensor_height_present
  output->sensor_height_present = input->sensor_height_present;
  // sensor_height
  if (!v2x_msgs__msg__SensorHeight__copy(
      &(input->sensor_height), &(output->sensor_height)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__AreaRadial *
v2x_msgs__msg__AreaRadial__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AreaRadial * msg = (v2x_msgs__msg__AreaRadial *)allocator.allocate(sizeof(v2x_msgs__msg__AreaRadial), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__AreaRadial));
  bool success = v2x_msgs__msg__AreaRadial__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__AreaRadial__destroy(v2x_msgs__msg__AreaRadial * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__AreaRadial__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__AreaRadial__Sequence__init(v2x_msgs__msg__AreaRadial__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AreaRadial * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__AreaRadial *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__AreaRadial), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__AreaRadial__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__AreaRadial__fini(&data[i - 1]);
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
v2x_msgs__msg__AreaRadial__Sequence__fini(v2x_msgs__msg__AreaRadial__Sequence * array)
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
      v2x_msgs__msg__AreaRadial__fini(&array->data[i]);
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

v2x_msgs__msg__AreaRadial__Sequence *
v2x_msgs__msg__AreaRadial__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AreaRadial__Sequence * array = (v2x_msgs__msg__AreaRadial__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__AreaRadial__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__AreaRadial__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__AreaRadial__Sequence__destroy(v2x_msgs__msg__AreaRadial__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__AreaRadial__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__AreaRadial__Sequence__are_equal(const v2x_msgs__msg__AreaRadial__Sequence * lhs, const v2x_msgs__msg__AreaRadial__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__AreaRadial__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__AreaRadial__Sequence__copy(
  const v2x_msgs__msg__AreaRadial__Sequence * input,
  v2x_msgs__msg__AreaRadial__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__AreaRadial);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__AreaRadial * data =
      (v2x_msgs__msg__AreaRadial *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__AreaRadial__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__AreaRadial__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__AreaRadial__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
