// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/BasicVehicleContainerHighFrequency.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/basic_vehicle_container_high_frequency__functions.h"

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
// Member `drive_direction`
#include "v2x_msgs/msg/detail/drive_direction__functions.h"
// Member `vehicle_length`
#include "v2x_msgs/msg/detail/vehicle_length__functions.h"
// Member `vehicle_width`
#include "v2x_msgs/msg/detail/vehicle_width__functions.h"
// Member `longitudinal_acceleration`
#include "v2x_msgs/msg/detail/longitudinal_acceleration__functions.h"
// Member `curvature`
#include "v2x_msgs/msg/detail/curvature__functions.h"
// Member `curvature_calculation_mode`
#include "v2x_msgs/msg/detail/curvature_calculation_mode__functions.h"
// Member `yaw_rate`
#include "v2x_msgs/msg/detail/yaw_rate__functions.h"
// Member `acceleration_control`
#include "v2x_msgs/msg/detail/acceleration_control__functions.h"
// Member `lane_position`
#include "v2x_msgs/msg/detail/lane_position__functions.h"
// Member `steering_wheel_angle`
#include "v2x_msgs/msg/detail/steering_wheel_angle__functions.h"
// Member `lateral_acceleration`
#include "v2x_msgs/msg/detail/lateral_acceleration__functions.h"
// Member `vertical_acceleration`
#include "v2x_msgs/msg/detail/vertical_acceleration__functions.h"
// Member `performance_class`
#include "v2x_msgs/msg/detail/performance_class__functions.h"
// Member `cen_dsrc_tolling_zone`
#include "v2x_msgs/msg/detail/cen_dsrc_tolling_zone__functions.h"

bool
v2x_msgs__msg__BasicVehicleContainerHighFrequency__init(v2x_msgs__msg__BasicVehicleContainerHighFrequency * msg)
{
  if (!msg) {
    return false;
  }
  // heading
  if (!v2x_msgs__msg__Heading__init(&msg->heading)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // speed
  if (!v2x_msgs__msg__Speed__init(&msg->speed)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // drive_direction
  if (!v2x_msgs__msg__DriveDirection__init(&msg->drive_direction)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // vehicle_length
  if (!v2x_msgs__msg__VehicleLength__init(&msg->vehicle_length)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // vehicle_width
  if (!v2x_msgs__msg__VehicleWidth__init(&msg->vehicle_width)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // longitudinal_acceleration
  if (!v2x_msgs__msg__LongitudinalAcceleration__init(&msg->longitudinal_acceleration)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // curvature
  if (!v2x_msgs__msg__Curvature__init(&msg->curvature)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // curvature_calculation_mode
  if (!v2x_msgs__msg__CurvatureCalculationMode__init(&msg->curvature_calculation_mode)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // yaw_rate
  if (!v2x_msgs__msg__YawRate__init(&msg->yaw_rate)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // acceleration_control_present
  msg->acceleration_control_present = false;
  // acceleration_control
  if (!v2x_msgs__msg__AccelerationControl__init(&msg->acceleration_control)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // lane_position_present
  msg->lane_position_present = false;
  // lane_position
  if (!v2x_msgs__msg__LanePosition__init(&msg->lane_position)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // steering_wheel_angle_present
  msg->steering_wheel_angle_present = false;
  // steering_wheel_angle
  if (!v2x_msgs__msg__SteeringWheelAngle__init(&msg->steering_wheel_angle)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // lateral_acceleration_present
  msg->lateral_acceleration_present = false;
  // lateral_acceleration
  if (!v2x_msgs__msg__LateralAcceleration__init(&msg->lateral_acceleration)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // vertical_acceleration_present
  msg->vertical_acceleration_present = false;
  // vertical_acceleration
  if (!v2x_msgs__msg__VerticalAcceleration__init(&msg->vertical_acceleration)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // performance_class_present
  msg->performance_class_present = false;
  // performance_class
  if (!v2x_msgs__msg__PerformanceClass__init(&msg->performance_class)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // cen_dsrc_tolling_zone_present
  msg->cen_dsrc_tolling_zone_present = false;
  // cen_dsrc_tolling_zone
  if (!v2x_msgs__msg__CenDsrcTollingZone__init(&msg->cen_dsrc_tolling_zone)) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(v2x_msgs__msg__BasicVehicleContainerHighFrequency * msg)
{
  if (!msg) {
    return;
  }
  // heading
  v2x_msgs__msg__Heading__fini(&msg->heading);
  // speed
  v2x_msgs__msg__Speed__fini(&msg->speed);
  // drive_direction
  v2x_msgs__msg__DriveDirection__fini(&msg->drive_direction);
  // vehicle_length
  v2x_msgs__msg__VehicleLength__fini(&msg->vehicle_length);
  // vehicle_width
  v2x_msgs__msg__VehicleWidth__fini(&msg->vehicle_width);
  // longitudinal_acceleration
  v2x_msgs__msg__LongitudinalAcceleration__fini(&msg->longitudinal_acceleration);
  // curvature
  v2x_msgs__msg__Curvature__fini(&msg->curvature);
  // curvature_calculation_mode
  v2x_msgs__msg__CurvatureCalculationMode__fini(&msg->curvature_calculation_mode);
  // yaw_rate
  v2x_msgs__msg__YawRate__fini(&msg->yaw_rate);
  // acceleration_control_present
  // acceleration_control
  v2x_msgs__msg__AccelerationControl__fini(&msg->acceleration_control);
  // lane_position_present
  // lane_position
  v2x_msgs__msg__LanePosition__fini(&msg->lane_position);
  // steering_wheel_angle_present
  // steering_wheel_angle
  v2x_msgs__msg__SteeringWheelAngle__fini(&msg->steering_wheel_angle);
  // lateral_acceleration_present
  // lateral_acceleration
  v2x_msgs__msg__LateralAcceleration__fini(&msg->lateral_acceleration);
  // vertical_acceleration_present
  // vertical_acceleration
  v2x_msgs__msg__VerticalAcceleration__fini(&msg->vertical_acceleration);
  // performance_class_present
  // performance_class
  v2x_msgs__msg__PerformanceClass__fini(&msg->performance_class);
  // cen_dsrc_tolling_zone_present
  // cen_dsrc_tolling_zone
  v2x_msgs__msg__CenDsrcTollingZone__fini(&msg->cen_dsrc_tolling_zone);
}

bool
v2x_msgs__msg__BasicVehicleContainerHighFrequency__are_equal(const v2x_msgs__msg__BasicVehicleContainerHighFrequency * lhs, const v2x_msgs__msg__BasicVehicleContainerHighFrequency * rhs)
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
  // drive_direction
  if (!v2x_msgs__msg__DriveDirection__are_equal(
      &(lhs->drive_direction), &(rhs->drive_direction)))
  {
    return false;
  }
  // vehicle_length
  if (!v2x_msgs__msg__VehicleLength__are_equal(
      &(lhs->vehicle_length), &(rhs->vehicle_length)))
  {
    return false;
  }
  // vehicle_width
  if (!v2x_msgs__msg__VehicleWidth__are_equal(
      &(lhs->vehicle_width), &(rhs->vehicle_width)))
  {
    return false;
  }
  // longitudinal_acceleration
  if (!v2x_msgs__msg__LongitudinalAcceleration__are_equal(
      &(lhs->longitudinal_acceleration), &(rhs->longitudinal_acceleration)))
  {
    return false;
  }
  // curvature
  if (!v2x_msgs__msg__Curvature__are_equal(
      &(lhs->curvature), &(rhs->curvature)))
  {
    return false;
  }
  // curvature_calculation_mode
  if (!v2x_msgs__msg__CurvatureCalculationMode__are_equal(
      &(lhs->curvature_calculation_mode), &(rhs->curvature_calculation_mode)))
  {
    return false;
  }
  // yaw_rate
  if (!v2x_msgs__msg__YawRate__are_equal(
      &(lhs->yaw_rate), &(rhs->yaw_rate)))
  {
    return false;
  }
  // acceleration_control_present
  if (lhs->acceleration_control_present != rhs->acceleration_control_present) {
    return false;
  }
  // acceleration_control
  if (!v2x_msgs__msg__AccelerationControl__are_equal(
      &(lhs->acceleration_control), &(rhs->acceleration_control)))
  {
    return false;
  }
  // lane_position_present
  if (lhs->lane_position_present != rhs->lane_position_present) {
    return false;
  }
  // lane_position
  if (!v2x_msgs__msg__LanePosition__are_equal(
      &(lhs->lane_position), &(rhs->lane_position)))
  {
    return false;
  }
  // steering_wheel_angle_present
  if (lhs->steering_wheel_angle_present != rhs->steering_wheel_angle_present) {
    return false;
  }
  // steering_wheel_angle
  if (!v2x_msgs__msg__SteeringWheelAngle__are_equal(
      &(lhs->steering_wheel_angle), &(rhs->steering_wheel_angle)))
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
  // performance_class_present
  if (lhs->performance_class_present != rhs->performance_class_present) {
    return false;
  }
  // performance_class
  if (!v2x_msgs__msg__PerformanceClass__are_equal(
      &(lhs->performance_class), &(rhs->performance_class)))
  {
    return false;
  }
  // cen_dsrc_tolling_zone_present
  if (lhs->cen_dsrc_tolling_zone_present != rhs->cen_dsrc_tolling_zone_present) {
    return false;
  }
  // cen_dsrc_tolling_zone
  if (!v2x_msgs__msg__CenDsrcTollingZone__are_equal(
      &(lhs->cen_dsrc_tolling_zone), &(rhs->cen_dsrc_tolling_zone)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__BasicVehicleContainerHighFrequency__copy(
  const v2x_msgs__msg__BasicVehicleContainerHighFrequency * input,
  v2x_msgs__msg__BasicVehicleContainerHighFrequency * output)
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
  // drive_direction
  if (!v2x_msgs__msg__DriveDirection__copy(
      &(input->drive_direction), &(output->drive_direction)))
  {
    return false;
  }
  // vehicle_length
  if (!v2x_msgs__msg__VehicleLength__copy(
      &(input->vehicle_length), &(output->vehicle_length)))
  {
    return false;
  }
  // vehicle_width
  if (!v2x_msgs__msg__VehicleWidth__copy(
      &(input->vehicle_width), &(output->vehicle_width)))
  {
    return false;
  }
  // longitudinal_acceleration
  if (!v2x_msgs__msg__LongitudinalAcceleration__copy(
      &(input->longitudinal_acceleration), &(output->longitudinal_acceleration)))
  {
    return false;
  }
  // curvature
  if (!v2x_msgs__msg__Curvature__copy(
      &(input->curvature), &(output->curvature)))
  {
    return false;
  }
  // curvature_calculation_mode
  if (!v2x_msgs__msg__CurvatureCalculationMode__copy(
      &(input->curvature_calculation_mode), &(output->curvature_calculation_mode)))
  {
    return false;
  }
  // yaw_rate
  if (!v2x_msgs__msg__YawRate__copy(
      &(input->yaw_rate), &(output->yaw_rate)))
  {
    return false;
  }
  // acceleration_control_present
  output->acceleration_control_present = input->acceleration_control_present;
  // acceleration_control
  if (!v2x_msgs__msg__AccelerationControl__copy(
      &(input->acceleration_control), &(output->acceleration_control)))
  {
    return false;
  }
  // lane_position_present
  output->lane_position_present = input->lane_position_present;
  // lane_position
  if (!v2x_msgs__msg__LanePosition__copy(
      &(input->lane_position), &(output->lane_position)))
  {
    return false;
  }
  // steering_wheel_angle_present
  output->steering_wheel_angle_present = input->steering_wheel_angle_present;
  // steering_wheel_angle
  if (!v2x_msgs__msg__SteeringWheelAngle__copy(
      &(input->steering_wheel_angle), &(output->steering_wheel_angle)))
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
  // performance_class_present
  output->performance_class_present = input->performance_class_present;
  // performance_class
  if (!v2x_msgs__msg__PerformanceClass__copy(
      &(input->performance_class), &(output->performance_class)))
  {
    return false;
  }
  // cen_dsrc_tolling_zone_present
  output->cen_dsrc_tolling_zone_present = input->cen_dsrc_tolling_zone_present;
  // cen_dsrc_tolling_zone
  if (!v2x_msgs__msg__CenDsrcTollingZone__copy(
      &(input->cen_dsrc_tolling_zone), &(output->cen_dsrc_tolling_zone)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__BasicVehicleContainerHighFrequency *
v2x_msgs__msg__BasicVehicleContainerHighFrequency__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency * msg = (v2x_msgs__msg__BasicVehicleContainerHighFrequency *)allocator.allocate(sizeof(v2x_msgs__msg__BasicVehicleContainerHighFrequency), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__BasicVehicleContainerHighFrequency));
  bool success = v2x_msgs__msg__BasicVehicleContainerHighFrequency__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__BasicVehicleContainerHighFrequency__destroy(v2x_msgs__msg__BasicVehicleContainerHighFrequency * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__init(v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__BasicVehicleContainerHighFrequency *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__BasicVehicleContainerHighFrequency), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__BasicVehicleContainerHighFrequency__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(&data[i - 1]);
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
v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__fini(v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * array)
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
      v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(&array->data[i]);
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

v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence *
v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * array = (v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__destroy(v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__are_equal(const v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * lhs, const v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__BasicVehicleContainerHighFrequency__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__copy(
  const v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * input,
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__BasicVehicleContainerHighFrequency);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__BasicVehicleContainerHighFrequency * data =
      (v2x_msgs__msg__BasicVehicleContainerHighFrequency *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__BasicVehicleContainerHighFrequency__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__BasicVehicleContainerHighFrequency__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
