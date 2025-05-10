// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CartesianAngleValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CARTESIAN_ANGLE_VALUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CARTESIAN_ANGLE_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CARTESIAN_ANGLE_VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__CartesianAngleValue__CARTESIAN_ANGLE_VALUE_RANGE_MIN = 0ll
};

/// Constant 'CARTESIAN_ANGLE_VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__CartesianAngleValue__CARTESIAN_ANGLE_VALUE_RANGE_MAX = 3601ll
};

/// Constant 'CARTESIAN_ANGLE_VALUE_ZERO_POINT_ONE_DEGREE'.
enum
{
  v2x_msgs__msg__CartesianAngleValue__CARTESIAN_ANGLE_VALUE_ZERO_POINT_ONE_DEGREE = 1ll
};

/// Constant 'CARTESIAN_ANGLE_VALUE_ONE_DEGREE'.
enum
{
  v2x_msgs__msg__CartesianAngleValue__CARTESIAN_ANGLE_VALUE_ONE_DEGREE = 10ll
};

/// Constant 'CARTESIAN_ANGLE_VALUE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__CartesianAngleValue__CARTESIAN_ANGLE_VALUE_UNAVAILABLE = 3601ll
};

/// Struct defined in msg/CartesianAngleValue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CartesianAngleValue
{
  int64_t cartesian_angle_value;
} v2x_msgs__msg__CartesianAngleValue;

// Struct for a sequence of v2x_msgs__msg__CartesianAngleValue.
typedef struct v2x_msgs__msg__CartesianAngleValue__Sequence
{
  v2x_msgs__msg__CartesianAngleValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CartesianAngleValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CARTESIAN_ANGLE_VALUE__STRUCT_H_
