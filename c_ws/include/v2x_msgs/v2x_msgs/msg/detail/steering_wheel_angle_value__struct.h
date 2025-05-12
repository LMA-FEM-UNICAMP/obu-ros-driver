// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SteeringWheelAngleValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__STEERING_WHEEL_ANGLE_VALUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__STEERING_WHEEL_ANGLE_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STEERING_WHEEL_ANGLE_VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SteeringWheelAngleValue__STEERING_WHEEL_ANGLE_VALUE_RANGE_MIN = -511ll
};

/// Constant 'STEERING_WHEEL_ANGLE_VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SteeringWheelAngleValue__STEERING_WHEEL_ANGLE_VALUE_RANGE_MAX = 512ll
};

/// Constant 'STEERING_WHEEL_ANGLE_VALUE_STRAIGHT'.
enum
{
  v2x_msgs__msg__SteeringWheelAngleValue__STEERING_WHEEL_ANGLE_VALUE_STRAIGHT = 0ll
};

/// Constant 'STEERING_WHEEL_ANGLE_VALUE_ONE_POINT_FIVE_DEGREES_TO_RIGHT'.
enum
{
  v2x_msgs__msg__SteeringWheelAngleValue__STEERING_WHEEL_ANGLE_VALUE_ONE_POINT_FIVE_DEGREES_TO_RIGHT = -1ll
};

/// Constant 'STEERING_WHEEL_ANGLE_VALUE_ONE_POINT_FIVE_DEGREES_TO_LEFT'.
enum
{
  v2x_msgs__msg__SteeringWheelAngleValue__STEERING_WHEEL_ANGLE_VALUE_ONE_POINT_FIVE_DEGREES_TO_LEFT = 1ll
};

/// Constant 'STEERING_WHEEL_ANGLE_VALUE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__SteeringWheelAngleValue__STEERING_WHEEL_ANGLE_VALUE_UNAVAILABLE = 512ll
};

/// Struct defined in msg/SteeringWheelAngleValue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SteeringWheelAngleValue
{
  int64_t steering_wheel_angle_value;
} v2x_msgs__msg__SteeringWheelAngleValue;

// Struct for a sequence of v2x_msgs__msg__SteeringWheelAngleValue.
typedef struct v2x_msgs__msg__SteeringWheelAngleValue__Sequence
{
  v2x_msgs__msg__SteeringWheelAngleValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SteeringWheelAngleValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__STEERING_WHEEL_ANGLE_VALUE__STRUCT_H_
