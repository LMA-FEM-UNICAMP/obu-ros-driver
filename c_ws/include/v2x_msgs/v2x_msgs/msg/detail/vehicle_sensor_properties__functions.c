// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/VehicleSensorProperties.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/vehicle_sensor_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `range`
#include "v2x_msgs/msg/detail/range__functions.h"
// Member `horizontal_opening_angle_start`
// Member `horizontal_opening_angle_end`
// Member `vertical_opening_angle_start`
// Member `vertical_opening_angle_end`
#include "v2x_msgs/msg/detail/cartesian_angle_value__functions.h"

bool
v2x_msgs__msg__VehicleSensorProperties__init(v2x_msgs__msg__VehicleSensorProperties * msg)
{
  if (!msg) {
    return false;
  }
  // range
  if (!v2x_msgs__msg__Range__init(&msg->range)) {
    v2x_msgs__msg__VehicleSensorProperties__fini(msg);
    return false;
  }
  // horizontal_opening_angle_start
  if (!v2x_msgs__msg__CartesianAngleValue__init(&msg->horizontal_opening_angle_start)) {
    v2x_msgs__msg__VehicleSensorProperties__fini(msg);
    return false;
  }
  // horizontal_opening_angle_end
  if (!v2x_msgs__msg__CartesianAngleValue__init(&msg->horizontal_opening_angle_end)) {
    v2x_msgs__msg__VehicleSensorProperties__fini(msg);
    return false;
  }
  // vertical_opening_angle_start_present
  msg->vertical_opening_angle_start_present = false;
  // vertical_opening_angle_start
  if (!v2x_msgs__msg__CartesianAngleValue__init(&msg->vertical_opening_angle_start)) {
    v2x_msgs__msg__VehicleSensorProperties__fini(msg);
    return false;
  }
  // vertical_opening_angle_end_present
  msg->vertical_opening_angle_end_present = false;
  // vertical_opening_angle_end
  if (!v2x_msgs__msg__CartesianAngleValue__init(&msg->vertical_opening_angle_end)) {
    v2x_msgs__msg__VehicleSensorProperties__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__VehicleSensorProperties__fini(v2x_msgs__msg__VehicleSensorProperties * msg)
{
  if (!msg) {
    return;
  }
  // range
  v2x_msgs__msg__Range__fini(&msg->range);
  // horizontal_opening_angle_start
  v2x_msgs__msg__CartesianAngleValue__fini(&msg->horizontal_opening_angle_start);
  // horizontal_opening_angle_end
  v2x_msgs__msg__CartesianAngleValue__fini(&msg->horizontal_opening_angle_end);
  // vertical_opening_angle_start_present
  // vertical_opening_angle_start
  v2x_msgs__msg__CartesianAngleValue__fini(&msg->vertical_opening_angle_start);
  // vertical_opening_angle_end_present
  // vertical_opening_angle_end
  v2x_msgs__msg__CartesianAngleValue__fini(&msg->vertical_opening_angle_end);
}

bool
v2x_msgs__msg__VehicleSensorProperties__are_equal(const v2x_msgs__msg__VehicleSensorProperties * lhs, const v2x_msgs__msg__VehicleSensorProperties * rhs)
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
  // horizontal_opening_angle_start
  if (!v2x_msgs__msg__CartesianAngleValue__are_equal(
      &(lhs->horizontal_opening_angle_start), &(rhs->horizontal_opening_angle_start)))
  {
    return false;
  }
  // horizontal_opening_angle_end
  if (!v2x_msgs__msg__CartesianAngleValue__are_equal(
      &(lhs->horizontal_opening_angle_end), &(rhs->horizontal_opening_angle_end)))
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
  return true;
}

bool
v2x_msgs__msg__VehicleSensorProperties__copy(
  const v2x_msgs__msg__VehicleSensorProperties * input,
  v2x_msgs__msg__VehicleSensorProperties * output)
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
  // horizontal_opening_angle_start
  if (!v2x_msgs__msg__CartesianAngleValue__copy(
      &(input->horizontal_opening_angle_start), &(output->horizontal_opening_angle_start)))
  {
    return false;
  }
  // horizontal_opening_angle_end
  if (!v2x_msgs__msg__CartesianAngleValue__copy(
      &(input->horizontal_opening_angle_end), &(output->horizontal_opening_angle_end)))
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
  return true;
}

v2x_msgs__msg__VehicleSensorProperties *
v2x_msgs__msg__VehicleSensorProperties__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleSensorProperties * msg = (v2x_msgs__msg__VehicleSensorProperties *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleSensorProperties), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__VehicleSensorProperties));
  bool success = v2x_msgs__msg__VehicleSensorProperties__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__VehicleSensorProperties__destroy(v2x_msgs__msg__VehicleSensorProperties * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__VehicleSensorProperties__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__VehicleSensorProperties__Sequence__init(v2x_msgs__msg__VehicleSensorProperties__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleSensorProperties * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__VehicleSensorProperties *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__VehicleSensorProperties), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__VehicleSensorProperties__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__VehicleSensorProperties__fini(&data[i - 1]);
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
v2x_msgs__msg__VehicleSensorProperties__Sequence__fini(v2x_msgs__msg__VehicleSensorProperties__Sequence * array)
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
      v2x_msgs__msg__VehicleSensorProperties__fini(&array->data[i]);
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

v2x_msgs__msg__VehicleSensorProperties__Sequence *
v2x_msgs__msg__VehicleSensorProperties__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleSensorProperties__Sequence * array = (v2x_msgs__msg__VehicleSensorProperties__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleSensorProperties__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__VehicleSensorProperties__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__VehicleSensorProperties__Sequence__destroy(v2x_msgs__msg__VehicleSensorProperties__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__VehicleSensorProperties__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__VehicleSensorProperties__Sequence__are_equal(const v2x_msgs__msg__VehicleSensorProperties__Sequence * lhs, const v2x_msgs__msg__VehicleSensorProperties__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__VehicleSensorProperties__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__VehicleSensorProperties__Sequence__copy(
  const v2x_msgs__msg__VehicleSensorProperties__Sequence * input,
  v2x_msgs__msg__VehicleSensorProperties__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__VehicleSensorProperties);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__VehicleSensorProperties * data =
      (v2x_msgs__msg__VehicleSensorProperties *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__VehicleSensorProperties__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__VehicleSensorProperties__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__VehicleSensorProperties__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
