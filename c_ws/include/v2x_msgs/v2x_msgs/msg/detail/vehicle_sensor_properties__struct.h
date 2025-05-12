// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleSensorProperties.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTIES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'range'
#include "v2x_msgs/msg/detail/range__struct.h"
// Member 'horizontal_opening_angle_start'
// Member 'horizontal_opening_angle_end'
// Member 'vertical_opening_angle_start'
// Member 'vertical_opening_angle_end'
#include "v2x_msgs/msg/detail/cartesian_angle_value__struct.h"

/// Struct defined in msg/VehicleSensorProperties in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleSensorProperties
{
  v2x_msgs__msg__Range range;
  v2x_msgs__msg__CartesianAngleValue horizontal_opening_angle_start;
  v2x_msgs__msg__CartesianAngleValue horizontal_opening_angle_end;
  /// Optional Field
  bool vertical_opening_angle_start_present;
  v2x_msgs__msg__CartesianAngleValue vertical_opening_angle_start;
  /// Optional Field
  bool vertical_opening_angle_end_present;
  v2x_msgs__msg__CartesianAngleValue vertical_opening_angle_end;
} v2x_msgs__msg__VehicleSensorProperties;

// Struct for a sequence of v2x_msgs__msg__VehicleSensorProperties.
typedef struct v2x_msgs__msg__VehicleSensorProperties__Sequence
{
  v2x_msgs__msg__VehicleSensorProperties * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleSensorProperties__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTIES__STRUCT_H_
