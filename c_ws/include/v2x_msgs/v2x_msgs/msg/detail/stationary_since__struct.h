// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/StationarySince.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__STATIONARY_SINCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__STATIONARY_SINCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATIONARY_SINCE_LESS_THAN1MINUTE'.
enum
{
  v2x_msgs__msg__StationarySince__STATIONARY_SINCE_LESS_THAN1MINUTE = 0ll
};

/// Constant 'STATIONARY_SINCE_LESS_THAN2MINUTES'.
enum
{
  v2x_msgs__msg__StationarySince__STATIONARY_SINCE_LESS_THAN2MINUTES = 1ll
};

/// Constant 'STATIONARY_SINCE_LESS_THAN15MINUTES'.
enum
{
  v2x_msgs__msg__StationarySince__STATIONARY_SINCE_LESS_THAN15MINUTES = 2ll
};

/// Constant 'STATIONARY_SINCE_EQUAL_OR_GREATER15MINUTES'.
enum
{
  v2x_msgs__msg__StationarySince__STATIONARY_SINCE_EQUAL_OR_GREATER15MINUTES = 3ll
};

/// Struct defined in msg/StationarySince in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__StationarySince
{
  int64_t stationary_since;
} v2x_msgs__msg__StationarySince;

// Struct for a sequence of v2x_msgs__msg__StationarySince.
typedef struct v2x_msgs__msg__StationarySince__Sequence
{
  v2x_msgs__msg__StationarySince * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__StationarySince__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__STATIONARY_SINCE__STRUCT_H_
