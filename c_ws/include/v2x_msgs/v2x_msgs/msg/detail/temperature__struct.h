// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TEMPERATURE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__Temperature__TEMPERATURE_RANGE_MIN = -60ll
};

/// Constant 'TEMPERATURE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__Temperature__TEMPERATURE_RANGE_MAX = 67ll
};

/// Constant 'TEMPERATURE_EQUAL_OR_SMALLER_THAN_MINUS60DEG'.
enum
{
  v2x_msgs__msg__Temperature__TEMPERATURE_EQUAL_OR_SMALLER_THAN_MINUS60DEG = -60ll
};

/// Constant 'TEMPERATURE_ONE_DEGREE_CELSIUS'.
enum
{
  v2x_msgs__msg__Temperature__TEMPERATURE_ONE_DEGREE_CELSIUS = 1ll
};

/// Constant 'TEMPERATURE_EQUAL_OR_GREATER_THAN67DEG'.
enum
{
  v2x_msgs__msg__Temperature__TEMPERATURE_EQUAL_OR_GREATER_THAN67DEG = 67ll
};

/// Struct defined in msg/Temperature in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Temperature
{
  int64_t temperature;
} v2x_msgs__msg__Temperature;

// Struct for a sequence of v2x_msgs__msg__Temperature.
typedef struct v2x_msgs__msg__Temperature__Sequence
{
  v2x_msgs__msg__Temperature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Temperature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_
