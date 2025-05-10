// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TurningRadius.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TURNING_RADIUS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TURNING_RADIUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TURNING_RADIUS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TurningRadius__TURNING_RADIUS_RANGE_MIN = 1ll
};

/// Constant 'TURNING_RADIUS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TurningRadius__TURNING_RADIUS_RANGE_MAX = 255ll
};

/// Constant 'TURNING_RADIUS_POINT4METERS'.
enum
{
  v2x_msgs__msg__TurningRadius__TURNING_RADIUS_POINT4METERS = 1ll
};

/// Constant 'TURNING_RADIUS_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__TurningRadius__TURNING_RADIUS_UNAVAILABLE = 255ll
};

/// Struct defined in msg/TurningRadius in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TurningRadius
{
  int64_t turning_radius;
} v2x_msgs__msg__TurningRadius;

// Struct for a sequence of v2x_msgs__msg__TurningRadius.
typedef struct v2x_msgs__msg__TurningRadius__Sequence
{
  v2x_msgs__msg__TurningRadius * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TurningRadius__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TURNING_RADIUS__STRUCT_H_
