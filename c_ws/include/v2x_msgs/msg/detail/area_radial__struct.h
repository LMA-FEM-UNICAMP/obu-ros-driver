// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AreaRadial.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__AREA_RADIAL__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__AREA_RADIAL__STRUCT_H_

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
// Member 'stationary_horizontal_opening_angle_start'
// Member 'stationary_horizontal_opening_angle_end'
#include "v2x_msgs/msg/detail/wgs84_angle_value__struct.h"
// Member 'vertical_opening_angle_start'
// Member 'vertical_opening_angle_end'
#include "v2x_msgs/msg/detail/cartesian_angle_value__struct.h"
// Member 'sensor_position_offset'
#include "v2x_msgs/msg/detail/offset_point__struct.h"
// Member 'sensor_height'
#include "v2x_msgs/msg/detail/sensor_height__struct.h"

/// Struct defined in msg/AreaRadial in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AreaRadial
{
  v2x_msgs__msg__Range range;
  v2x_msgs__msg__WGS84AngleValue stationary_horizontal_opening_angle_start;
  v2x_msgs__msg__WGS84AngleValue stationary_horizontal_opening_angle_end;
  /// Optional Field
  bool vertical_opening_angle_start_present;
  v2x_msgs__msg__CartesianAngleValue vertical_opening_angle_start;
  /// Optional Field
  bool vertical_opening_angle_end_present;
  v2x_msgs__msg__CartesianAngleValue vertical_opening_angle_end;
  /// Optional Field
  bool sensor_position_offset_present;
  v2x_msgs__msg__OffsetPoint sensor_position_offset;
  /// Optional Field
  bool sensor_height_present;
  v2x_msgs__msg__SensorHeight sensor_height;
} v2x_msgs__msg__AreaRadial;

// Struct for a sequence of v2x_msgs__msg__AreaRadial.
typedef struct v2x_msgs__msg__AreaRadial__Sequence
{
  v2x_msgs__msg__AreaRadial * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AreaRadial__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__AREA_RADIAL__STRUCT_H_
