// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/FutureCharacteristics.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__FUTURE_CHARACTERISTICS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__FUTURE_CHARACTERISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FUTURE_CHARACTERISTICS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__FutureCharacteristics__FUTURE_CHARACTERISTICS_RANGE_MIN = 0ll
};

/// Constant 'FUTURE_CHARACTERISTICS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__FutureCharacteristics__FUTURE_CHARACTERISTICS_RANGE_MAX = 255ll
};

/// Constant 'FUTURE_CHARACTERISTICS_NO_ENTRY'.
enum
{
  v2x_msgs__msg__FutureCharacteristics__FUTURE_CHARACTERISTICS_NO_ENTRY = 0ll
};

/// Constant 'FUTURE_CHARACTERISTICS_AIR_SUSPENSION'.
enum
{
  v2x_msgs__msg__FutureCharacteristics__FUTURE_CHARACTERISTICS_AIR_SUSPENSION = 1ll
};

/// Struct defined in msg/FutureCharacteristics in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__FutureCharacteristics
{
  int64_t future_characteristics;
} v2x_msgs__msg__FutureCharacteristics;

// Struct for a sequence of v2x_msgs__msg__FutureCharacteristics.
typedef struct v2x_msgs__msg__FutureCharacteristics__Sequence
{
  v2x_msgs__msg__FutureCharacteristics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__FutureCharacteristics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__FUTURE_CHARACTERISTICS__STRUCT_H_
