// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/VehicleSensor.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/vehicle_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ref_point_id`
#include "v2x_msgs/msg/detail/ref_point_id__functions.h"
// Member `x_sensor_offset`
#include "v2x_msgs/msg/detail/x_sensor_offset__functions.h"
// Member `y_sensor_offset`
#include "v2x_msgs/msg/detail/y_sensor_offset__functions.h"
// Member `z_sensor_offset`
#include "v2x_msgs/msg/detail/z_sensor_offset__functions.h"
// Member `vehicle_sensor_property_list`
#include "v2x_msgs/msg/detail/vehicle_sensor_property_list__functions.h"

bool
v2x_msgs__msg__VehicleSensor__init(v2x_msgs__msg__VehicleSensor * msg)
{
  if (!msg) {
    return false;
  }
  // ref_point_id_present
  msg->ref_point_id_present = false;
  // ref_point_id
  if (!v2x_msgs__msg__RefPointId__init(&msg->ref_point_id)) {
    v2x_msgs__msg__VehicleSensor__fini(msg);
    return false;
  }
  // x_sensor_offset
  if (!v2x_msgs__msg__XSensorOffset__init(&msg->x_sensor_offset)) {
    v2x_msgs__msg__VehicleSensor__fini(msg);
    return false;
  }
  // y_sensor_offset
  if (!v2x_msgs__msg__YSensorOffset__init(&msg->y_sensor_offset)) {
    v2x_msgs__msg__VehicleSensor__fini(msg);
    return false;
  }
  // z_sensor_offset_present
  msg->z_sensor_offset_present = false;
  // z_sensor_offset
  if (!v2x_msgs__msg__ZSensorOffset__init(&msg->z_sensor_offset)) {
    v2x_msgs__msg__VehicleSensor__fini(msg);
    return false;
  }
  // vehicle_sensor_property_list
  if (!v2x_msgs__msg__VehicleSensorPropertyList__init(&msg->vehicle_sensor_property_list)) {
    v2x_msgs__msg__VehicleSensor__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__VehicleSensor__fini(v2x_msgs__msg__VehicleSensor * msg)
{
  if (!msg) {
    return;
  }
  // ref_point_id_present
  // ref_point_id
  v2x_msgs__msg__RefPointId__fini(&msg->ref_point_id);
  // x_sensor_offset
  v2x_msgs__msg__XSensorOffset__fini(&msg->x_sensor_offset);
  // y_sensor_offset
  v2x_msgs__msg__YSensorOffset__fini(&msg->y_sensor_offset);
  // z_sensor_offset_present
  // z_sensor_offset
  v2x_msgs__msg__ZSensorOffset__fini(&msg->z_sensor_offset);
  // vehicle_sensor_property_list
  v2x_msgs__msg__VehicleSensorPropertyList__fini(&msg->vehicle_sensor_property_list);
}

bool
v2x_msgs__msg__VehicleSensor__are_equal(const v2x_msgs__msg__VehicleSensor * lhs, const v2x_msgs__msg__VehicleSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ref_point_id_present
  if (lhs->ref_point_id_present != rhs->ref_point_id_present) {
    return false;
  }
  // ref_point_id
  if (!v2x_msgs__msg__RefPointId__are_equal(
      &(lhs->ref_point_id), &(rhs->ref_point_id)))
  {
    return false;
  }
  // x_sensor_offset
  if (!v2x_msgs__msg__XSensorOffset__are_equal(
      &(lhs->x_sensor_offset), &(rhs->x_sensor_offset)))
  {
    return false;
  }
  // y_sensor_offset
  if (!v2x_msgs__msg__YSensorOffset__are_equal(
      &(lhs->y_sensor_offset), &(rhs->y_sensor_offset)))
  {
    return false;
  }
  // z_sensor_offset_present
  if (lhs->z_sensor_offset_present != rhs->z_sensor_offset_present) {
    return false;
  }
  // z_sensor_offset
  if (!v2x_msgs__msg__ZSensorOffset__are_equal(
      &(lhs->z_sensor_offset), &(rhs->z_sensor_offset)))
  {
    return false;
  }
  // vehicle_sensor_property_list
  if (!v2x_msgs__msg__VehicleSensorPropertyList__are_equal(
      &(lhs->vehicle_sensor_property_list), &(rhs->vehicle_sensor_property_list)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__VehicleSensor__copy(
  const v2x_msgs__msg__VehicleSensor * input,
  v2x_msgs__msg__VehicleSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // ref_point_id_present
  output->ref_point_id_present = input->ref_point_id_present;
  // ref_point_id
  if (!v2x_msgs__msg__RefPointId__copy(
      &(input->ref_point_id), &(output->ref_point_id)))
  {
    return false;
  }
  // x_sensor_offset
  if (!v2x_msgs__msg__XSensorOffset__copy(
      &(input->x_sensor_offset), &(output->x_sensor_offset)))
  {
    return false;
  }
  // y_sensor_offset
  if (!v2x_msgs__msg__YSensorOffset__copy(
      &(input->y_sensor_offset), &(output->y_sensor_offset)))
  {
    return false;
  }
  // z_sensor_offset_present
  output->z_sensor_offset_present = input->z_sensor_offset_present;
  // z_sensor_offset
  if (!v2x_msgs__msg__ZSensorOffset__copy(
      &(input->z_sensor_offset), &(output->z_sensor_offset)))
  {
    return false;
  }
  // vehicle_sensor_property_list
  if (!v2x_msgs__msg__VehicleSensorPropertyList__copy(
      &(input->vehicle_sensor_property_list), &(output->vehicle_sensor_property_list)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__VehicleSensor *
v2x_msgs__msg__VehicleSensor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleSensor * msg = (v2x_msgs__msg__VehicleSensor *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__VehicleSensor));
  bool success = v2x_msgs__msg__VehicleSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__VehicleSensor__destroy(v2x_msgs__msg__VehicleSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__VehicleSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__VehicleSensor__Sequence__init(v2x_msgs__msg__VehicleSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleSensor * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__VehicleSensor *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__VehicleSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__VehicleSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__VehicleSensor__fini(&data[i - 1]);
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
v2x_msgs__msg__VehicleSensor__Sequence__fini(v2x_msgs__msg__VehicleSensor__Sequence * array)
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
      v2x_msgs__msg__VehicleSensor__fini(&array->data[i]);
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

v2x_msgs__msg__VehicleSensor__Sequence *
v2x_msgs__msg__VehicleSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleSensor__Sequence * array = (v2x_msgs__msg__VehicleSensor__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__VehicleSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__VehicleSensor__Sequence__destroy(v2x_msgs__msg__VehicleSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__VehicleSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__VehicleSensor__Sequence__are_equal(const v2x_msgs__msg__VehicleSensor__Sequence * lhs, const v2x_msgs__msg__VehicleSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__VehicleSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__VehicleSensor__Sequence__copy(
  const v2x_msgs__msg__VehicleSensor__Sequence * input,
  v2x_msgs__msg__VehicleSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__VehicleSensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__VehicleSensor * data =
      (v2x_msgs__msg__VehicleSensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__VehicleSensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__VehicleSensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__VehicleSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
