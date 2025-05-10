// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SpeedValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SPEED_VALUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SPEED_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPEED_VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SpeedValue__SPEED_VALUE_RANGE_MIN = 0ll
};

/// Constant 'SPEED_VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SpeedValue__SPEED_VALUE_RANGE_MAX = 16383ll
};

/// Constant 'SPEED_VALUE_STANDSTILL'.
enum
{
  v2x_msgs__msg__SpeedValue__SPEED_VALUE_STANDSTILL = 0ll
};

/// Constant 'SPEED_VALUE_ONE_CENTIMETER_PER_SEC'.
enum
{
  v2x_msgs__msg__SpeedValue__SPEED_VALUE_ONE_CENTIMETER_PER_SEC = 1ll
};

/// Constant 'SPEED_VALUE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__SpeedValue__SPEED_VALUE_UNAVAILABLE = 16383ll
};

/// Struct defined in msg/SpeedValue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SpeedValue
{
  int64_t speed_value;
} v2x_msgs__msg__SpeedValue;

// Struct for a sequence of v2x_msgs__msg__SpeedValue.
typedef struct v2x_msgs__msg__SpeedValue__Sequence
{
  v2x_msgs__msg__SpeedValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SpeedValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SPEED_VALUE__STRUCT_H_
