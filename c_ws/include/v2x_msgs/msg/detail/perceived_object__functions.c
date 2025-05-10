// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/PerceivedObject.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/perceived_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_id`
#include "v2x_msgs/msg/detail/identifier__functions.h"
// Member `sensor_idlist`
#include "v2x_msgs/msg/detail/sensor_id_list__functions.h"
// Member `time_of_measurement`
#include "v2x_msgs/msg/detail/time_of_measurement__functions.h"
// Member `object_age`
#include "v2x_msgs/msg/detail/object_age__functions.h"
// Member `object_confidence`
#include "v2x_msgs/msg/detail/object_confidence__functions.h"
// Member `x_distance`
// Member `y_distance`
// Member `z_distance`
#include "v2x_msgs/msg/detail/object_distance_with_confidence__functions.h"
// Member `x_speed`
// Member `y_speed`
// Member `z_speed`
#include "v2x_msgs/msg/detail/speed_extended__functions.h"
// Member `x_acceleration`
#include "v2x_msgs/msg/detail/longitudinal_acceleration__functions.h"
// Member `y_acceleration`
#include "v2x_msgs/msg/detail/lateral_acceleration__functions.h"
// Member `z_acceleration`
#include "v2x_msgs/msg/detail/vertical_acceleration__functions.h"
// Member `yaw_angle`
#include "v2x_msgs/msg/detail/cartesian_angle__functions.h"
// Member `planar_object_dimension1`
// Member `planar_object_dimension2`
// Member `vertical_object_dimension`
#include "v2x_msgs/msg/detail/object_dimension__functions.h"
// Member `object_ref_point`
#include "v2x_msgs/msg/detail/object_ref_point__functions.h"
// Member `dynamic_status`
#include "v2x_msgs/msg/detail/dynamic_status__functions.h"
// Member `classification`
#include "v2x_msgs/msg/detail/object_class_description__functions.h"
// Member `matched_position`
#include "v2x_msgs/msg/detail/matched_position__functions.h"

bool
v2x_msgs__msg__PerceivedObject__init(v2x_msgs__msg__PerceivedObject * msg)
{
  if (!msg) {
    return false;
  }
  // object_id
  if (!v2x_msgs__msg__Identifier__init(&msg->object_id)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // sensor_idlist_present
  msg->sensor_idlist_present = false;
  // sensor_idlist
  if (!v2x_msgs__msg__SensorIdList__init(&msg->sensor_idlist)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // time_of_measurement
  if (!v2x_msgs__msg__TimeOfMeasurement__init(&msg->time_of_measurement)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // object_age_present
  msg->object_age_present = false;
  // object_age
  if (!v2x_msgs__msg__ObjectAge__init(&msg->object_age)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // object_confidence_present
  msg->object_confidence_present = false;
  // object_confidence
  if (!v2x_msgs__msg__ObjectConfidence__init(&msg->object_confidence)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // x_distance
  if (!v2x_msgs__msg__ObjectDistanceWithConfidence__init(&msg->x_distance)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // y_distance
  if (!v2x_msgs__msg__ObjectDistanceWithConfidence__init(&msg->y_distance)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // z_distance_present
  msg->z_distance_present = false;
  // z_distance
  if (!v2x_msgs__msg__ObjectDistanceWithConfidence__init(&msg->z_distance)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // x_speed
  if (!v2x_msgs__msg__SpeedExtended__init(&msg->x_speed)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // y_speed
  if (!v2x_msgs__msg__SpeedExtended__init(&msg->y_speed)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // z_speed_present
  msg->z_speed_present = false;
  // z_speed
  if (!v2x_msgs__msg__SpeedExtended__init(&msg->z_speed)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // x_acceleration_present
  msg->x_acceleration_present = false;
  // x_acceleration
  if (!v2x_msgs__msg__LongitudinalAcceleration__init(&msg->x_acceleration)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // y_acceleration_present
  msg->y_acceleration_present = false;
  // y_acceleration
  if (!v2x_msgs__msg__LateralAcceleration__init(&msg->y_acceleration)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // z_acceleration_present
  msg->z_acceleration_present = false;
  // z_acceleration
  if (!v2x_msgs__msg__VerticalAcceleration__init(&msg->z_acceleration)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // yaw_angle_present
  msg->yaw_angle_present = false;
  // yaw_angle
  if (!v2x_msgs__msg__CartesianAngle__init(&msg->yaw_angle)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // planar_object_dimension1_present
  msg->planar_object_dimension1_present = false;
  // planar_object_dimension1
  if (!v2x_msgs__msg__ObjectDimension__init(&msg->planar_object_dimension1)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // planar_object_dimension2_present
  msg->planar_object_dimension2_present = false;
  // planar_object_dimension2
  if (!v2x_msgs__msg__ObjectDimension__init(&msg->planar_object_dimension2)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // vertical_object_dimension_present
  msg->vertical_object_dimension_present = false;
  // vertical_object_dimension
  if (!v2x_msgs__msg__ObjectDimension__init(&msg->vertical_object_dimension)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // object_ref_point_present
  msg->object_ref_point_present = false;
  // object_ref_point
  if (!v2x_msgs__msg__ObjectRefPoint__init(&msg->object_ref_point)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // dynamic_status_present
  msg->dynamic_status_present = false;
  // dynamic_status
  if (!v2x_msgs__msg__DynamicStatus__init(&msg->dynamic_status)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // classification_present
  msg->classification_present = false;
  // classification
  if (!v2x_msgs__msg__ObjectClassDescription__init(&msg->classification)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  // matched_position_present
  msg->matched_position_present = false;
  // matched_position
  if (!v2x_msgs__msg__MatchedPosition__init(&msg->matched_position)) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__PerceivedObject__fini(v2x_msgs__msg__PerceivedObject * msg)
{
  if (!msg) {
    return;
  }
  // object_id
  v2x_msgs__msg__Identifier__fini(&msg->object_id);
  // sensor_idlist_present
  // sensor_idlist
  v2x_msgs__msg__SensorIdList__fini(&msg->sensor_idlist);
  // time_of_measurement
  v2x_msgs__msg__TimeOfMeasurement__fini(&msg->time_of_measurement);
  // object_age_present
  // object_age
  v2x_msgs__msg__ObjectAge__fini(&msg->object_age);
  // object_confidence_present
  // object_confidence
  v2x_msgs__msg__ObjectConfidence__fini(&msg->object_confidence);
  // x_distance
  v2x_msgs__msg__ObjectDistanceWithConfidence__fini(&msg->x_distance);
  // y_distance
  v2x_msgs__msg__ObjectDistanceWithConfidence__fini(&msg->y_distance);
  // z_distance_present
  // z_distance
  v2x_msgs__msg__ObjectDistanceWithConfidence__fini(&msg->z_distance);
  // x_speed
  v2x_msgs__msg__SpeedExtended__fini(&msg->x_speed);
  // y_speed
  v2x_msgs__msg__SpeedExtended__fini(&msg->y_speed);
  // z_speed_present
  // z_speed
  v2x_msgs__msg__SpeedExtended__fini(&msg->z_speed);
  // x_acceleration_present
  // x_acceleration
  v2x_msgs__msg__LongitudinalAcceleration__fini(&msg->x_acceleration);
  // y_acceleration_present
  // y_acceleration
  v2x_msgs__msg__LateralAcceleration__fini(&msg->y_acceleration);
  // z_acceleration_present
  // z_acceleration
  v2x_msgs__msg__VerticalAcceleration__fini(&msg->z_acceleration);
  // yaw_angle_present
  // yaw_angle
  v2x_msgs__msg__CartesianAngle__fini(&msg->yaw_angle);
  // planar_object_dimension1_present
  // planar_object_dimension1
  v2x_msgs__msg__ObjectDimension__fini(&msg->planar_object_dimension1);
  // planar_object_dimension2_present
  // planar_object_dimension2
  v2x_msgs__msg__ObjectDimension__fini(&msg->planar_object_dimension2);
  // vertical_object_dimension_present
  // vertical_object_dimension
  v2x_msgs__msg__ObjectDimension__fini(&msg->vertical_object_dimension);
  // object_ref_point_present
  // object_ref_point
  v2x_msgs__msg__ObjectRefPoint__fini(&msg->object_ref_point);
  // dynamic_status_present
  // dynamic_status
  v2x_msgs__msg__DynamicStatus__fini(&msg->dynamic_status);
  // classification_present
  // classification
  v2x_msgs__msg__ObjectClassDescription__fini(&msg->classification);
  // matched_position_present
  // matched_position
  v2x_msgs__msg__MatchedPosition__fini(&msg->matched_position);
}

bool
v2x_msgs__msg__PerceivedObject__are_equal(const v2x_msgs__msg__PerceivedObject * lhs, const v2x_msgs__msg__PerceivedObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_id
  if (!v2x_msgs__msg__Identifier__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // sensor_idlist_present
  if (lhs->sensor_idlist_present != rhs->sensor_idlist_present) {
    return false;
  }
  // sensor_idlist
  if (!v2x_msgs__msg__SensorIdList__are_equal(
      &(lhs->sensor_idlist), &(rhs->sensor_idlist)))
  {
    return false;
  }
  // time_of_measurement
  if (!v2x_msgs__msg__TimeOfMeasurement__are_equal(
      &(lhs->time_of_measurement), &(rhs->time_of_measurement)))
  {
    return false;
  }
  // object_age_present
  if (lhs->object_age_present != rhs->object_age_present) {
    return false;
  }
  // object_age
  if (!v2x_msgs__msg__ObjectAge__are_equal(
      &(lhs->object_age), &(rhs->object_age)))
  {
    return false;
  }
  // object_confidence_present
  if (lhs->object_confidence_present != rhs->object_confidence_present) {
    return false;
  }
  // object_confidence
  if (!v2x_msgs__msg__ObjectConfidence__are_equal(
      &(lhs->object_confidence), &(rhs->object_confidence)))
  {
    return false;
  }
  // x_distance
  if (!v2x_msgs__msg__ObjectDistanceWithConfidence__are_equal(
      &(lhs->x_distance), &(rhs->x_distance)))
  {
    return false;
  }
  // y_distance
  if (!v2x_msgs__msg__ObjectDistanceWithConfidence__are_equal(
      &(lhs->y_distance), &(rhs->y_distance)))
  {
    return false;
  }
  // z_distance_present
  if (lhs->z_distance_present != rhs->z_distance_present) {
    return false;
  }
  // z_distance
  if (!v2x_msgs__msg__ObjectDistanceWithConfidence__are_equal(
      &(lhs->z_distance), &(rhs->z_distance)))
  {
    return false;
  }
  // x_speed
  if (!v2x_msgs__msg__SpeedExtended__are_equal(
      &(lhs->x_speed), &(rhs->x_speed)))
  {
    return false;
  }
  // y_speed
  if (!v2x_msgs__msg__SpeedExtended__are_equal(
      &(lhs->y_speed), &(rhs->y_speed)))
  {
    return false;
  }
  // z_speed_present
  if (lhs->z_speed_present != rhs->z_speed_present) {
    return false;
  }
  // z_speed
  if (!v2x_msgs__msg__SpeedExtended__are_equal(
      &(lhs->z_speed), &(rhs->z_speed)))
  {
    return false;
  }
  // x_acceleration_present
  if (lhs->x_acceleration_present != rhs->x_acceleration_present) {
    return false;
  }
  // x_acceleration
  if (!v2x_msgs__msg__LongitudinalAcceleration__are_equal(
      &(lhs->x_acceleration), &(rhs->x_acceleration)))
  {
    return false;
  }
  // y_acceleration_present
  if (lhs->y_acceleration_present != rhs->y_acceleration_present) {
    return false;
  }
  // y_acceleration
  if (!v2x_msgs__msg__LateralAcceleration__are_equal(
      &(lhs->y_acceleration), &(rhs->y_acceleration)))
  {
    return false;
  }
  // z_acceleration_present
  if (lhs->z_acceleration_present != rhs->z_acceleration_present) {
    return false;
  }
  // z_acceleration
  if (!v2x_msgs__msg__VerticalAcceleration__are_equal(
      &(lhs->z_acceleration), &(rhs->z_acceleration)))
  {
    return false;
  }
  // yaw_angle_present
  if (lhs->yaw_angle_present != rhs->yaw_angle_present) {
    return false;
  }
  // yaw_angle
  if (!v2x_msgs__msg__CartesianAngle__are_equal(
      &(lhs->yaw_angle), &(rhs->yaw_angle)))
  {
    return false;
  }
  // planar_object_dimension1_present
  if (lhs->planar_object_dimension1_present != rhs->planar_object_dimension1_present) {
    return false;
  }
  // planar_object_dimension1
  if (!v2x_msgs__msg__ObjectDimension__are_equal(
      &(lhs->planar_object_dimension1), &(rhs->planar_object_dimension1)))
  {
    return false;
  }
  // planar_object_dimension2_present
  if (lhs->planar_object_dimension2_present != rhs->planar_object_dimension2_present) {
    return false;
  }
  // planar_object_dimension2
  if (!v2x_msgs__msg__ObjectDimension__are_equal(
      &(lhs->planar_object_dimension2), &(rhs->planar_object_dimension2)))
  {
    return false;
  }
  // vertical_object_dimension_present
  if (lhs->vertical_object_dimension_present != rhs->vertical_object_dimension_present) {
    return false;
  }
  // vertical_object_dimension
  if (!v2x_msgs__msg__ObjectDimension__are_equal(
      &(lhs->vertical_object_dimension), &(rhs->vertical_object_dimension)))
  {
    return false;
  }
  // object_ref_point_present
  if (lhs->object_ref_point_present != rhs->object_ref_point_present) {
    return false;
  }
  // object_ref_point
  if (!v2x_msgs__msg__ObjectRefPoint__are_equal(
      &(lhs->object_ref_point), &(rhs->object_ref_point)))
  {
    return false;
  }
  // dynamic_status_present
  if (lhs->dynamic_status_present != rhs->dynamic_status_present) {
    return false;
  }
  // dynamic_status
  if (!v2x_msgs__msg__DynamicStatus__are_equal(
      &(lhs->dynamic_status), &(rhs->dynamic_status)))
  {
    return false;
  }
  // classification_present
  if (lhs->classification_present != rhs->classification_present) {
    return false;
  }
  // classification
  if (!v2x_msgs__msg__ObjectClassDescription__are_equal(
      &(lhs->classification), &(rhs->classification)))
  {
    return false;
  }
  // matched_position_present
  if (lhs->matched_position_present != rhs->matched_position_present) {
    return false;
  }
  // matched_position
  if (!v2x_msgs__msg__MatchedPosition__are_equal(
      &(lhs->matched_position), &(rhs->matched_position)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__PerceivedObject__copy(
  const v2x_msgs__msg__PerceivedObject * input,
  v2x_msgs__msg__PerceivedObject * output)
{
  if (!input || !output) {
    return false;
  }
  // object_id
  if (!v2x_msgs__msg__Identifier__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // sensor_idlist_present
  output->sensor_idlist_present = input->sensor_idlist_present;
  // sensor_idlist
  if (!v2x_msgs__msg__SensorIdList__copy(
      &(input->sensor_idlist), &(output->sensor_idlist)))
  {
    return false;
  }
  // time_of_measurement
  if (!v2x_msgs__msg__TimeOfMeasurement__copy(
      &(input->time_of_measurement), &(output->time_of_measurement)))
  {
    return false;
  }
  // object_age_present
  output->object_age_present = input->object_age_present;
  // object_age
  if (!v2x_msgs__msg__ObjectAge__copy(
      &(input->object_age), &(output->object_age)))
  {
    return false;
  }
  // object_confidence_present
  output->object_confidence_present = input->object_confidence_present;
  // object_confidence
  if (!v2x_msgs__msg__ObjectConfidence__copy(
      &(input->object_confidence), &(output->object_confidence)))
  {
    return false;
  }
  // x_distance
  if (!v2x_msgs__msg__ObjectDistanceWithConfidence__copy(
      &(input->x_distance), &(output->x_distance)))
  {
    return false;
  }
  // y_distance
  if (!v2x_msgs__msg__ObjectDistanceWithConfidence__copy(
      &(input->y_distance), &(output->y_distance)))
  {
    return false;
  }
  // z_distance_present
  output->z_distance_present = input->z_distance_present;
  // z_distance
  if (!v2x_msgs__msg__ObjectDistanceWithConfidence__copy(
      &(input->z_distance), &(output->z_distance)))
  {
    return false;
  }
  // x_speed
  if (!v2x_msgs__msg__SpeedExtended__copy(
      &(input->x_speed), &(output->x_speed)))
  {
    return false;
  }
  // y_speed
  if (!v2x_msgs__msg__SpeedExtended__copy(
      &(input->y_speed), &(output->y_speed)))
  {
    return false;
  }
  // z_speed_present
  output->z_speed_present = input->z_speed_present;
  // z_speed
  if (!v2x_msgs__msg__SpeedExtended__copy(
      &(input->z_speed), &(output->z_speed)))
  {
    return false;
  }
  // x_acceleration_present
  output->x_acceleration_present = input->x_acceleration_present;
  // x_acceleration
  if (!v2x_msgs__msg__LongitudinalAcceleration__copy(
      &(input->x_acceleration), &(output->x_acceleration)))
  {
    return false;
  }
  // y_acceleration_present
  output->y_acceleration_present = input->y_acceleration_present;
  // y_acceleration
  if (!v2x_msgs__msg__LateralAcceleration__copy(
      &(input->y_acceleration), &(output->y_acceleration)))
  {
    return false;
  }
  // z_acceleration_present
  output->z_acceleration_present = input->z_acceleration_present;
  // z_acceleration
  if (!v2x_msgs__msg__VerticalAcceleration__copy(
      &(input->z_acceleration), &(output->z_acceleration)))
  {
    return false;
  }
  // yaw_angle_present
  output->yaw_angle_present = input->yaw_angle_present;
  // yaw_angle
  if (!v2x_msgs__msg__CartesianAngle__copy(
      &(input->yaw_angle), &(output->yaw_angle)))
  {
    return false;
  }
  // planar_object_dimension1_present
  output->planar_object_dimension1_present = input->planar_object_dimension1_present;
  // planar_object_dimension1
  if (!v2x_msgs__msg__ObjectDimension__copy(
      &(input->planar_object_dimension1), &(output->planar_object_dimension1)))
  {
    return false;
  }
  // planar_object_dimension2_present
  output->planar_object_dimension2_present = input->planar_object_dimension2_present;
  // planar_object_dimension2
  if (!v2x_msgs__msg__ObjectDimension__copy(
      &(input->planar_object_dimension2), &(output->planar_object_dimension2)))
  {
    return false;
  }
  // vertical_object_dimension_present
  output->vertical_object_dimension_present = input->vertical_object_dimension_present;
  // vertical_object_dimension
  if (!v2x_msgs__msg__ObjectDimension__copy(
      &(input->vertical_object_dimension), &(output->vertical_object_dimension)))
  {
    return false;
  }
  // object_ref_point_present
  output->object_ref_point_present = input->object_ref_point_present;
  // object_ref_point
  if (!v2x_msgs__msg__ObjectRefPoint__copy(
      &(input->object_ref_point), &(output->object_ref_point)))
  {
    return false;
  }
  // dynamic_status_present
  output->dynamic_status_present = input->dynamic_status_present;
  // dynamic_status
  if (!v2x_msgs__msg__DynamicStatus__copy(
      &(input->dynamic_status), &(output->dynamic_status)))
  {
    return false;
  }
  // classification_present
  output->classification_present = input->classification_present;
  // classification
  if (!v2x_msgs__msg__ObjectClassDescription__copy(
      &(input->classification), &(output->classification)))
  {
    return false;
  }
  // matched_position_present
  output->matched_position_present = input->matched_position_present;
  // matched_position
  if (!v2x_msgs__msg__MatchedPosition__copy(
      &(input->matched_position), &(output->matched_position)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__PerceivedObject *
v2x_msgs__msg__PerceivedObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PerceivedObject * msg = (v2x_msgs__msg__PerceivedObject *)allocator.allocate(sizeof(v2x_msgs__msg__PerceivedObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__PerceivedObject));
  bool success = v2x_msgs__msg__PerceivedObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__PerceivedObject__destroy(v2x_msgs__msg__PerceivedObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__PerceivedObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__PerceivedObject__Sequence__init(v2x_msgs__msg__PerceivedObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PerceivedObject * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__PerceivedObject *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__PerceivedObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__PerceivedObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__PerceivedObject__fini(&data[i - 1]);
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
v2x_msgs__msg__PerceivedObject__Sequence__fini(v2x_msgs__msg__PerceivedObject__Sequence * array)
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
      v2x_msgs__msg__PerceivedObject__fini(&array->data[i]);
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

v2x_msgs__msg__PerceivedObject__Sequence *
v2x_msgs__msg__PerceivedObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PerceivedObject__Sequence * array = (v2x_msgs__msg__PerceivedObject__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__PerceivedObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__PerceivedObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__PerceivedObject__Sequence__destroy(v2x_msgs__msg__PerceivedObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__PerceivedObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__PerceivedObject__Sequence__are_equal(const v2x_msgs__msg__PerceivedObject__Sequence * lhs, const v2x_msgs__msg__PerceivedObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__PerceivedObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__PerceivedObject__Sequence__copy(
  const v2x_msgs__msg__PerceivedObject__Sequence * input,
  v2x_msgs__msg__PerceivedObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__PerceivedObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__PerceivedObject * data =
      (v2x_msgs__msg__PerceivedObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__PerceivedObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__PerceivedObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__PerceivedObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
