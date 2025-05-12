// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/WearLevel.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__WEAR_LEVEL__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__WEAR_LEVEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WEAR_LEVEL_RANGE_MIN'.
enum
{
  v2x_msgs__msg__WearLevel__WEAR_LEVEL_RANGE_MIN = 0ll
};

/// Constant 'WEAR_LEVEL_RANGE_MAX'.
enum
{
  v2x_msgs__msg__WearLevel__WEAR_LEVEL_RANGE_MAX = 7ll
};

/// Constant 'WEAR_LEVEL_NEW'.
enum
{
  v2x_msgs__msg__WearLevel__WEAR_LEVEL_NEW = 0ll
};

/// Constant 'WEAR_LEVEL_GOOD'.
enum
{
  v2x_msgs__msg__WearLevel__WEAR_LEVEL_GOOD = 1ll
};

/// Constant 'WEAR_LEVEL_BAD'.
enum
{
  v2x_msgs__msg__WearLevel__WEAR_LEVEL_BAD = 2ll
};

/// Constant 'WEAR_LEVEL_HAS_POTHOLES'.
enum
{
  v2x_msgs__msg__WearLevel__WEAR_LEVEL_HAS_POTHOLES = 3ll
};

/// Constant 'WEAR_LEVEL_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__WearLevel__WEAR_LEVEL_UNAVAILABLE = 7ll
};

/// Struct defined in msg/WearLevel in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__WearLevel
{
  int64_t wear_level;
} v2x_msgs__msg__WearLevel;

// Struct for a sequence of v2x_msgs__msg__WearLevel.
typedef struct v2x_msgs__msg__WearLevel__Sequence
{
  v2x_msgs__msg__WearLevel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__WearLevel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__WEAR_LEVEL__STRUCT_H_
