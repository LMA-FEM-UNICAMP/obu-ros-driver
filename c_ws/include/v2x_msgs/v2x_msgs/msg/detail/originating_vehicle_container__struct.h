// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/OriginatingVehicleContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'heading'
#include "v2x_msgs/msg/detail/heading__struct.h"
// Member 'speed'
#include "v2x_msgs/msg/detail/speed__struct.h"
// Member 'vehicle_orientation_angle'
#include "v2x_msgs/msg/detail/wgs84_angle__struct.h"
// Member 'drive_direction'
#include "v2x_msgs/msg/detail/drive_direction__struct.h"
// Member 'longitudinal_acceleration'
#include "v2x_msgs/msg/detail/longitudinal_acceleration__struct.h"
// Member 'lateral_acceleration'
#include "v2x_msgs/msg/detail/lateral_acceleration__struct.h"
// Member 'vertical_acceleration'
#include "v2x_msgs/msg/detail/vertical_acceleration__struct.h"
// Member 'yaw_rate'
#include "v2x_msgs/msg/detail/yaw_rate__struct.h"
// Member 'pitch_angle'
// Member 'roll_angle'
#include "v2x_msgs/msg/detail/cartesian_angle__struct.h"
// Member 'vehicle_length'
#include "v2x_msgs/msg/detail/vehicle_length__struct.h"
// Member 'vehicle_width'
#include "v2x_msgs/msg/detail/vehicle_width__struct.h"
// Member 'vehicle_height'
#include "v2x_msgs/msg/detail/vehicle_height__struct.h"
// Member 'trailer_data_container'
#include "v2x_msgs/msg/detail/trailer_data_container__struct.h"

/// Struct defined in msg/OriginatingVehicleContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__OriginatingVehicleContainer
{
  v2x_msgs__msg__Heading heading;
  v2x_msgs__msg__Speed speed;
  /// Optional Field
  bool vehicle_orientation_angle_present;
  v2x_msgs__msg__WGS84Angle vehicle_orientation_angle;
  /// Optional Field
  bool drive_direction_present;
  v2x_msgs__msg__DriveDirection drive_direction;
  /// Optional Field
  bool longitudinal_acceleration_present;
  v2x_msgs__msg__LongitudinalAcceleration longitudinal_acceleration;
  /// Optional Field
  bool lateral_acceleration_present;
  v2x_msgs__msg__LateralAcceleration lateral_acceleration;
  /// Optional Field
  bool vertical_acceleration_present;
  v2x_msgs__msg__VerticalAcceleration vertical_acceleration;
  /// Optional Field
  bool yaw_rate_present;
  v2x_msgs__msg__YawRate yaw_rate;
  /// Optional Field
  bool pitch_angle_present;
  v2x_msgs__msg__CartesianAngle pitch_angle;
  /// Optional Field
  bool roll_angle_present;
  v2x_msgs__msg__CartesianAngle roll_angle;
  /// Optional Field
  bool vehicle_length_present;
  v2x_msgs__msg__VehicleLength vehicle_length;
  /// Optional Field
  bool vehicle_width_present;
  v2x_msgs__msg__VehicleWidth vehicle_width;
  /// Optional Field
  bool vehicle_height_present;
  v2x_msgs__msg__VehicleHeight vehicle_height;
  /// Optional Field
  bool trailer_data_container_present;
  v2x_msgs__msg__TrailerDataContainer trailer_data_container;
} v2x_msgs__msg__OriginatingVehicleContainer;

// Struct for a sequence of v2x_msgs__msg__OriginatingVehicleContainer.
typedef struct v2x_msgs__msg__OriginatingVehicleContainer__Sequence
{
  v2x_msgs__msg__OriginatingVehicleContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__OriginatingVehicleContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__STRUCT_H_
