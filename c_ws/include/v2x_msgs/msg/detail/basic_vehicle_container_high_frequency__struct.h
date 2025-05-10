// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/BasicVehicleContainerHighFrequency.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__STRUCT_H_

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
// Member 'drive_direction'
#include "v2x_msgs/msg/detail/drive_direction__struct.h"
// Member 'vehicle_length'
#include "v2x_msgs/msg/detail/vehicle_length__struct.h"
// Member 'vehicle_width'
#include "v2x_msgs/msg/detail/vehicle_width__struct.h"
// Member 'longitudinal_acceleration'
#include "v2x_msgs/msg/detail/longitudinal_acceleration__struct.h"
// Member 'curvature'
#include "v2x_msgs/msg/detail/curvature__struct.h"
// Member 'curvature_calculation_mode'
#include "v2x_msgs/msg/detail/curvature_calculation_mode__struct.h"
// Member 'yaw_rate'
#include "v2x_msgs/msg/detail/yaw_rate__struct.h"
// Member 'acceleration_control'
#include "v2x_msgs/msg/detail/acceleration_control__struct.h"
// Member 'lane_position'
#include "v2x_msgs/msg/detail/lane_position__struct.h"
// Member 'steering_wheel_angle'
#include "v2x_msgs/msg/detail/steering_wheel_angle__struct.h"
// Member 'lateral_acceleration'
#include "v2x_msgs/msg/detail/lateral_acceleration__struct.h"
// Member 'vertical_acceleration'
#include "v2x_msgs/msg/detail/vertical_acceleration__struct.h"
// Member 'performance_class'
#include "v2x_msgs/msg/detail/performance_class__struct.h"
// Member 'cen_dsrc_tolling_zone'
#include "v2x_msgs/msg/detail/cen_dsrc_tolling_zone__struct.h"

/// Struct defined in msg/BasicVehicleContainerHighFrequency in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__BasicVehicleContainerHighFrequency
{
  v2x_msgs__msg__Heading heading;
  v2x_msgs__msg__Speed speed;
  v2x_msgs__msg__DriveDirection drive_direction;
  v2x_msgs__msg__VehicleLength vehicle_length;
  v2x_msgs__msg__VehicleWidth vehicle_width;
  v2x_msgs__msg__LongitudinalAcceleration longitudinal_acceleration;
  v2x_msgs__msg__Curvature curvature;
  v2x_msgs__msg__CurvatureCalculationMode curvature_calculation_mode;
  v2x_msgs__msg__YawRate yaw_rate;
  /// Optional Field
  bool acceleration_control_present;
  v2x_msgs__msg__AccelerationControl acceleration_control;
  /// Optional Field
  bool lane_position_present;
  v2x_msgs__msg__LanePosition lane_position;
  /// Optional Field
  bool steering_wheel_angle_present;
  v2x_msgs__msg__SteeringWheelAngle steering_wheel_angle;
  /// Optional Field
  bool lateral_acceleration_present;
  v2x_msgs__msg__LateralAcceleration lateral_acceleration;
  /// Optional Field
  bool vertical_acceleration_present;
  v2x_msgs__msg__VerticalAcceleration vertical_acceleration;
  /// Optional Field
  bool performance_class_present;
  v2x_msgs__msg__PerformanceClass performance_class;
  /// Optional Field
  bool cen_dsrc_tolling_zone_present;
  v2x_msgs__msg__CenDsrcTollingZone cen_dsrc_tolling_zone;
} v2x_msgs__msg__BasicVehicleContainerHighFrequency;

// Struct for a sequence of v2x_msgs__msg__BasicVehicleContainerHighFrequency.
typedef struct v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence
{
  v2x_msgs__msg__BasicVehicleContainerHighFrequency * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__BasicVehicleContainerHighFrequency__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__STRUCT_H_
