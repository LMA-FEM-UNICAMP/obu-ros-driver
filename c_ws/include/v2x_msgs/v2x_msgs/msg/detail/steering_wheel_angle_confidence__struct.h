// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SteeringWheelAngleConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__STEERING_WHEEL_ANGLE_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__STEERING_WHEEL_ANGLE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STEERING_WHEEL_ANGLE_CONFIDENCE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SteeringWheelAngleConfidence__STEERING_WHEEL_ANGLE_CONFIDENCE_RANGE_MIN = 1ll
};

/// Constant 'STEERING_WHEEL_ANGLE_CONFIDENCE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SteeringWheelAngleConfidence__STEERING_WHEEL_ANGLE_CONFIDENCE_RANGE_MAX = 127ll
};

/// Constant 'STEERING_WHEEL_ANGLE_CONFIDENCE_EQUAL_OR_WITHIN_ONE_POINT_FIVE_DEGREE'.
enum
{
  v2x_msgs__msg__SteeringWheelAngleConfidence__STEERING_WHEEL_ANGLE_CONFIDENCE_EQUAL_OR_WITHIN_ONE_POINT_FIVE_DEGREE = 1ll
};

/// Constant 'STEERING_WHEEL_ANGLE_CONFIDENCE_OUT_OF_RANGE'.
enum
{
  v2x_msgs__msg__SteeringWheelAngleConfidence__STEERING_WHEEL_ANGLE_CONFIDENCE_OUT_OF_RANGE = 126ll
};

/// Constant 'STEERING_WHEEL_ANGLE_CONFIDENCE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__SteeringWheelAngleConfidence__STEERING_WHEEL_ANGLE_CONFIDENCE_UNAVAILABLE = 127ll
};

/// Struct defined in msg/SteeringWheelAngleConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SteeringWheelAngleConfidence
{
  int64_t steering_wheel_angle_confidence;
} v2x_msgs__msg__SteeringWheelAngleConfidence;

// Struct for a sequence of v2x_msgs__msg__SteeringWheelAngleConfidence.
typedef struct v2x_msgs__msg__SteeringWheelAngleConfidence__Sequence
{
  v2x_msgs__msg__SteeringWheelAngleConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SteeringWheelAngleConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__STEERING_WHEEL_ANGLE_CONFIDENCE__STRUCT_H_
