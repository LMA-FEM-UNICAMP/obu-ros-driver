// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/OriginatingVehicleContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/originating_vehicle_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `heading`
#include "v2x_msgs/msg/detail/heading__functions.h"
// Member `speed`
#include "v2x_msgs/msg/detail/speed__functions.h"
// Member `vehicle_orientation_angle`
#include "v2x_msgs/msg/detail/wgs84_angle__functions.h"
// Member `drive_direction`
#include "v2x_msgs/msg/detail/drive_direction__functions.h"
// Member `longitudinal_acceleration`
#include "v2x_msgs/msg/detail/longitudinal_acceleration__functions.h"
// Member `lateral_acceleration`
#include "v2x_msgs/msg/detail/lateral_acceleration__functions.h"
// Member `vertical_acceleration`
#include "v2x_msgs/msg/detail/vertical_acceleration__functions.h"
// Member `yaw_rate`
#include "v2x_msgs/msg/detail/yaw_rate__functions.h"
// Member `pitch_angle`
// Member `roll_angle`
#include "v2x_msgs/msg/detail/cartesian_angle__functions.h"
// Member `vehicle_length`
#include "v2x_msgs/msg/detail/vehicle_length__functions.h"
// Member `vehicle_width`
#include "v2x_msgs/msg/detail/vehicle_width__functions.h"
// Member `vehicle_height`
#include "v2x_msgs/msg/detail/vehicle_height__functions.h"
// Member `trailer_data_container`
#include "v2x_msgs/msg/detail/trailer_data_container__functions.h"

bool
v2x_msgs__msg__OriginatingVehicleContainer__init(v2x_msgs__msg__OriginatingVehicleContainer * msg)
{
  if (!msg) {
    return false;
  }
  // heading
  if (!v2x_msgs__msg__Heading__init(&msg->heading)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // speed
  if (!v2x_msgs__msg__Speed__init(&msg->speed)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // vehicle_orientation_angle_present
  msg->vehicle_orientation_angle_present = false;
  // vehicle_orientation_angle
  if (!v2x_msgs__msg__WGS84Angle__init(&msg->vehicle_orientation_angle)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // drive_direction_present
  msg->drive_direction_present = false;
  // drive_direction
  if (!v2x_msgs__msg__DriveDirection__init(&msg->drive_direction)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // longitudinal_acceleration_present
  msg->longitudinal_acceleration_present = false;
  // longitudinal_acceleration
  if (!v2x_msgs__msg__LongitudinalAcceleration__init(&msg->longitudinal_acceleration)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // lateral_acceleration_present
  msg->lateral_acceleration_present = false;
  // lateral_acceleration
  if (!v2x_msgs__msg__LateralAcceleration__init(&msg->lateral_acceleration)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // vertical_acceleration_present
  msg->vertical_acceleration_present = false;
  // vertical_acceleration
  if (!v2x_msgs__msg__VerticalAcceleration__init(&msg->vertical_acceleration)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // yaw_rate_present
  msg->yaw_rate_present = false;
  // yaw_rate
  if (!v2x_msgs__msg__YawRate__init(&msg->yaw_rate)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // pitch_angle_present
  msg->pitch_angle_present = false;
  // pitch_angle
  if (!v2x_msgs__msg__CartesianAngle__init(&msg->pitch_angle)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // roll_angle_present
  msg->roll_angle_present = false;
  // roll_angle
  if (!v2x_msgs__msg__CartesianAngle__init(&msg->roll_angle)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // vehicle_length_present
  msg->vehicle_length_present = false;
  // vehicle_length
  if (!v2x_msgs__msg__VehicleLength__init(&msg->vehicle_length)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // vehicle_width_present
  msg->vehicle_width_present = false;
  // vehicle_width
  if (!v2x_msgs__msg__VehicleWidth__init(&msg->vehicle_width)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // vehicle_height_present
  msg->vehicle_height_present = false;
  // vehicle_height
  if (!v2x_msgs__msg__VehicleHeight__init(&msg->vehicle_height)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // trailer_data_container_present
  msg->trailer_data_container_present = false;
  // trailer_data_container
  if (!v2x_msgs__msg__TrailerDataContainer__init(&msg->trailer_data_container)) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__OriginatingVehicleContainer__fini(v2x_msgs__msg__OriginatingVehicleContainer * msg)
{
  if (!msg) {
    return;
  }
  // heading
  v2x_msgs__msg__Heading__fini(&msg->heading);
  // speed
  v2x_msgs__msg__Speed__fini(&msg->speed);
  // vehicle_orientation_angle_present
  // vehicle_orientation_angle
  v2x_msgs__msg__WGS84Angle__fini(&msg->vehicle_orientation_angle);
  // drive_direction_present
  // drive_direction
  v2x_msgs__msg__DriveDirection__fini(&msg->drive_direction);
  // longitudinal_acceleration_present
  // longitudinal_acceleration
  v2x_msgs__msg__LongitudinalAcceleration__fini(&msg->longitudinal_acceleration);
  // lateral_acceleration_present
  // lateral_acceleration
  v2x_msgs__msg__LateralAcceleration__fini(&msg->lateral_acceleration);
  // vertical_acceleration_present
  // vertical_acceleration
  v2x_msgs__msg__VerticalAcceleration__fini(&msg->vertical_acceleration);
  // yaw_rate_present
  // yaw_rate
  v2x_msgs__msg__YawRate__fini(&msg->yaw_rate);
  // pitch_angle_present
  // pitch_angle
  v2x_msgs__msg__CartesianAngle__fini(&msg->pitch_angle);
  // roll_angle_present
  // roll_angle
  v2x_msgs__msg__CartesianAngle__fini(&msg->roll_angle);
  // vehicle_length_present
  // vehicle_length
  v2x_msgs__msg__VehicleLength__fini(&msg->vehicle_length);
  // vehicle_width_present
  // vehicle_width
  v2x_msgs__msg__VehicleWidth__fini(&msg->vehicle_width);
  // vehicle_height_present
  // vehicle_height
  v2x_msgs__msg__VehicleHeight__fini(&msg->vehicle_height);
  // trailer_data_container_present
  // trailer_data_container
  v2x_msgs__msg__TrailerDataContainer__fini(&msg->trailer_data_container);
}

bool
v2x_msgs__msg__OriginatingVehicleContainer__are_equal(const v2x_msgs__msg__OriginatingVehicleContainer * lhs, const v2x_msgs__msg__OriginatingVehicleContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // heading
  if (!v2x_msgs__msg__Heading__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  // speed
  if (!v2x_msgs__msg__Speed__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // vehicle_orientation_angle_present
  if (lhs->vehicle_orientation_angle_present != rhs->vehicle_orientation_angle_present) {
    return false;
  }
  // vehicle_orientation_angle
  if (!v2x_msgs__msg__WGS84Angle__are_equal(
      &(lhs->vehicle_orientation_angle), &(rhs->vehicle_orientation_angle)))
  {
    return false;
  }
  // drive_direction_present
  if (lhs->drive_direction_present != rhs->drive_direction_present) {
    return false;
  }
  // drive_direction
  if (!v2x_msgs__msg__DriveDirection__are_equal(
      &(lhs->drive_direction), &(rhs->drive_direction)))
  {
    return false;
  }
  // longitudinal_acceleration_present
  if (lhs->longitudinal_acceleration_present != rhs->longitudinal_acceleration_present) {
    return false;
  }
  // longitudinal_acceleration
  if (!v2x_msgs__msg__LongitudinalAcceleration__are_equal(
      &(lhs->longitudinal_acceleration), &(rhs->longitudinal_acceleration)))
  {
    return false;
  }
  // lateral_acceleration_present
  if (lhs->lateral_acceleration_present != rhs->lateral_acceleration_present) {
    return false;
  }
  // lateral_acceleration
  if (!v2x_msgs__msg__LateralAcceleration__are_equal(
      &(lhs->lateral_acceleration), &(rhs->lateral_acceleration)))
  {
    return false;
  }
  // vertical_acceleration_present
  if (lhs->vertical_acceleration_present != rhs->vertical_acceleration_present) {
    return false;
  }
  // vertical_acceleration
  if (!v2x_msgs__msg__VerticalAcceleration__are_equal(
      &(lhs->vertical_acceleration), &(rhs->vertical_acceleration)))
  {
    return false;
  }
  // yaw_rate_present
  if (lhs->yaw_rate_present != rhs->yaw_rate_present) {
    return false;
  }
  // yaw_rate
  if (!v2x_msgs__msg__YawRate__are_equal(
      &(lhs->yaw_rate), &(rhs->yaw_rate)))
  {
    return false;
  }
  // pitch_angle_present
  if (lhs->pitch_angle_present != rhs->pitch_angle_present) {
    return false;
  }
  // pitch_angle
  if (!v2x_msgs__msg__CartesianAngle__are_equal(
      &(lhs->pitch_angle), &(rhs->pitch_angle)))
  {
    return false;
  }
  // roll_angle_present
  if (lhs->roll_angle_present != rhs->roll_angle_present) {
    return false;
  }
  // roll_angle
  if (!v2x_msgs__msg__CartesianAngle__are_equal(
      &(lhs->roll_angle), &(rhs->roll_angle)))
  {
    return false;
  }
  // vehicle_length_present
  if (lhs->vehicle_length_present != rhs->vehicle_length_present) {
    return false;
  }
  // vehicle_length
  if (!v2x_msgs__msg__VehicleLength__are_equal(
      &(lhs->vehicle_length), &(rhs->vehicle_length)))
  {
    return false;
  }
  // vehicle_width_present
  if (lhs->vehicle_width_present != rhs->vehicle_width_present) {
    return false;
  }
  // vehicle_width
  if (!v2x_msgs__msg__VehicleWidth__are_equal(
      &(lhs->vehicle_width), &(rhs->vehicle_width)))
  {
    return false;
  }
  // vehicle_height_present
  if (lhs->vehicle_height_present != rhs->vehicle_height_present) {
    return false;
  }
  // vehicle_height
  if (!v2x_msgs__msg__VehicleHeight__are_equal(
      &(lhs->vehicle_height), &(rhs->vehicle_height)))
  {
    return false;
  }
  // trailer_data_container_present
  if (lhs->trailer_data_container_present != rhs->trailer_data_container_present) {
    return false;
  }
  // trailer_data_container
  if (!v2x_msgs__msg__TrailerDataContainer__are_equal(
      &(lhs->trailer_data_container), &(rhs->trailer_data_container)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__OriginatingVehicleContainer__copy(
  const v2x_msgs__msg__OriginatingVehicleContainer * input,
  v2x_msgs__msg__OriginatingVehicleContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // heading
  if (!v2x_msgs__msg__Heading__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  // speed
  if (!v2x_msgs__msg__Speed__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // vehicle_orientation_angle_present
  output->vehicle_orientation_angle_present = input->vehicle_orientation_angle_present;
  // vehicle_orientation_angle
  if (!v2x_msgs__msg__WGS84Angle__copy(
      &(input->vehicle_orientation_angle), &(output->vehicle_orientation_angle)))
  {
    return false;
  }
  // drive_direction_present
  output->drive_direction_present = input->drive_direction_present;
  // drive_direction
  if (!v2x_msgs__msg__DriveDirection__copy(
      &(input->drive_direction), &(output->drive_direction)))
  {
    return false;
  }
  // longitudinal_acceleration_present
  output->longitudinal_acceleration_present = input->longitudinal_acceleration_present;
  // longitudinal_acceleration
  if (!v2x_msgs__msg__LongitudinalAcceleration__copy(
      &(input->longitudinal_acceleration), &(output->longitudinal_acceleration)))
  {
    return false;
  }
  // lateral_acceleration_present
  output->lateral_acceleration_present = input->lateral_acceleration_present;
  // lateral_acceleration
  if (!v2x_msgs__msg__LateralAcceleration__copy(
      &(input->lateral_acceleration), &(output->lateral_acceleration)))
  {
    return false;
  }
  // vertical_acceleration_present
  output->vertical_acceleration_present = input->vertical_acceleration_present;
  // vertical_acceleration
  if (!v2x_msgs__msg__VerticalAcceleration__copy(
      &(input->vertical_acceleration), &(output->vertical_acceleration)))
  {
    return false;
  }
  // yaw_rate_present
  output->yaw_rate_present = input->yaw_rate_present;
  // yaw_rate
  if (!v2x_msgs__msg__YawRate__copy(
      &(input->yaw_rate), &(output->yaw_rate)))
  {
    return false;
  }
  // pitch_angle_present
  output->pitch_angle_present = input->pitch_angle_present;
  // pitch_angle
  if (!v2x_msgs__msg__CartesianAngle__copy(
      &(input->pitch_angle), &(output->pitch_angle)))
  {
    return false;
  }
  // roll_angle_present
  output->roll_angle_present = input->roll_angle_present;
  // roll_angle
  if (!v2x_msgs__msg__CartesianAngle__copy(
      &(input->roll_angle), &(output->roll_angle)))
  {
    return false;
  }
  // vehicle_length_present
  output->vehicle_length_present = input->vehicle_length_present;
  // vehicle_length
  if (!v2x_msgs__msg__VehicleLength__copy(
      &(input->vehicle_length), &(output->vehicle_length)))
  {
    return false;
  }
  // vehicle_width_present
  output->vehicle_width_present = input->vehicle_width_present;
  // vehicle_width
  if (!v2x_msgs__msg__VehicleWidth__copy(
      &(input->vehicle_width), &(output->vehicle_width)))
  {
    return false;
  }
  // vehicle_height_present
  output->vehicle_height_present = input->vehicle_height_present;
  // vehicle_height
  if (!v2x_msgs__msg__VehicleHeight__copy(
      &(input->vehicle_height), &(output->vehicle_height)))
  {
    return false;
  }
  // trailer_data_container_present
  output->trailer_data_container_present = input->trailer_data_container_present;
  // trailer_data_container
  if (!v2x_msgs__msg__TrailerDataContainer__copy(
      &(input->trailer_data_container), &(output->trailer_data_container)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__OriginatingVehicleContainer *
v2x_msgs__msg__OriginatingVehicleContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__OriginatingVehicleContainer * msg = (v2x_msgs__msg__OriginatingVehicleContainer *)allocator.allocate(sizeof(v2x_msgs__msg__OriginatingVehicleContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__OriginatingVehicleContainer));
  bool success = v2x_msgs__msg__OriginatingVehicleContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__OriginatingVehicleContainer__destroy(v2x_msgs__msg__OriginatingVehicleContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__OriginatingVehicleContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__OriginatingVehicleContainer__Sequence__init(v2x_msgs__msg__OriginatingVehicleContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__OriginatingVehicleContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__OriginatingVehicleContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__OriginatingVehicleContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__OriginatingVehicleContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__OriginatingVehicleContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__OriginatingVehicleContainer__Sequence__fini(v2x_msgs__msg__OriginatingVehicleContainer__Sequence * array)
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
      v2x_msgs__msg__OriginatingVehicleContainer__fini(&array->data[i]);
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

v2x_msgs__msg__OriginatingVehicleContainer__Sequence *
v2x_msgs__msg__OriginatingVehicleContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__OriginatingVehicleContainer__Sequence * array = (v2x_msgs__msg__OriginatingVehicleContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__OriginatingVehicleContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__OriginatingVehicleContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__OriginatingVehicleContainer__Sequence__destroy(v2x_msgs__msg__OriginatingVehicleContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__OriginatingVehicleContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__OriginatingVehicleContainer__Sequence__are_equal(const v2x_msgs__msg__OriginatingVehicleContainer__Sequence * lhs, const v2x_msgs__msg__OriginatingVehicleContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__OriginatingVehicleContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__OriginatingVehicleContainer__Sequence__copy(
  const v2x_msgs__msg__OriginatingVehicleContainer__Sequence * input,
  v2x_msgs__msg__OriginatingVehicleContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__OriginatingVehicleContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__OriginatingVehicleContainer * data =
      (v2x_msgs__msg__OriginatingVehicleContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__OriginatingVehicleContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__OriginatingVehicleContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__OriginatingVehicleContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
