// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SpeedAdvice.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SPEED_ADVICE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SPEED_ADVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPEED_ADVICE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SpeedAdvice__SPEED_ADVICE_RANGE_MIN = 0ll
};

/// Constant 'SPEED_ADVICE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SpeedAdvice__SPEED_ADVICE_RANGE_MAX = 500ll
};

/// Struct defined in msg/SpeedAdvice in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SpeedAdvice
{
  int64_t speed_advice;
} v2x_msgs__msg__SpeedAdvice;

// Struct for a sequence of v2x_msgs__msg__SpeedAdvice.
typedef struct v2x_msgs__msg__SpeedAdvice__Sequence
{
  v2x_msgs__msg__SpeedAdvice * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SpeedAdvice__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SPEED_ADVICE__STRUCT_H_
