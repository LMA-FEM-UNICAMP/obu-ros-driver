// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Condition.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CONDITION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CONDITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONDITION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__Condition__CONDITION_RANGE_MIN = 0ll
};

/// Constant 'CONDITION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__Condition__CONDITION_RANGE_MAX = 15ll
};

/// Constant 'CONDITION_DRY'.
enum
{
  v2x_msgs__msg__Condition__CONDITION_DRY = 0ll
};

/// Constant 'CONDITION_MOIST'.
enum
{
  v2x_msgs__msg__Condition__CONDITION_MOIST = 1ll
};

/// Constant 'CONDITION_WET'.
enum
{
  v2x_msgs__msg__Condition__CONDITION_WET = 2ll
};

/// Constant 'CONDITION_STANDING_WATER'.
enum
{
  v2x_msgs__msg__Condition__CONDITION_STANDING_WATER = 3ll
};

/// Constant 'CONDITION_FROST'.
enum
{
  v2x_msgs__msg__Condition__CONDITION_FROST = 4ll
};

/// Constant 'CONDITION_ICE'.
enum
{
  v2x_msgs__msg__Condition__CONDITION_ICE = 5ll
};

/// Constant 'CONDITION_SNOW'.
enum
{
  v2x_msgs__msg__Condition__CONDITION_SNOW = 6ll
};

/// Constant 'CONDITION_SLUSH'.
enum
{
  v2x_msgs__msg__Condition__CONDITION_SLUSH = 7ll
};

/// Constant 'CONDITION_UNVAILABLE'.
enum
{
  v2x_msgs__msg__Condition__CONDITION_UNVAILABLE = 8ll
};

/// Struct defined in msg/Condition in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Condition
{
  int64_t condition;
} v2x_msgs__msg__Condition;

// Struct for a sequence of v2x_msgs__msg__Condition.
typedef struct v2x_msgs__msg__Condition__Sequence
{
  v2x_msgs__msg__Condition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Condition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CONDITION__STRUCT_H_
