// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PayUnit.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PAY_UNIT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PAY_UNIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pay_unit'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PayUnit in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PayUnit
{
  /// size(1..2)
  rosidl_runtime_c__int64__Sequence pay_unit;
} v2x_msgs__msg__PayUnit;

// Struct for a sequence of v2x_msgs__msg__PayUnit.
typedef struct v2x_msgs__msg__PayUnit__Sequence
{
  v2x_msgs__msg__PayUnit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PayUnit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PAY_UNIT__STRUCT_H_
