// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/HeadingValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__HEADING_VALUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__HEADING_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HEADING_VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__HeadingValue__HEADING_VALUE_RANGE_MIN = 0ll
};

/// Constant 'HEADING_VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__HeadingValue__HEADING_VALUE_RANGE_MAX = 3601ll
};

/// Constant 'HEADING_VALUE_WGS84NORTH'.
enum
{
  v2x_msgs__msg__HeadingValue__HEADING_VALUE_WGS84NORTH = 0ll
};

/// Constant 'HEADING_VALUE_WGS84EAST'.
enum
{
  v2x_msgs__msg__HeadingValue__HEADING_VALUE_WGS84EAST = 900ll
};

/// Constant 'HEADING_VALUE_WGS84SOUTH'.
enum
{
  v2x_msgs__msg__HeadingValue__HEADING_VALUE_WGS84SOUTH = 1800ll
};

/// Constant 'HEADING_VALUE_WGS84WEST'.
enum
{
  v2x_msgs__msg__HeadingValue__HEADING_VALUE_WGS84WEST = 2700ll
};

/// Constant 'HEADING_VALUE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__HeadingValue__HEADING_VALUE_UNAVAILABLE = 3601ll
};

/// Struct defined in msg/HeadingValue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__HeadingValue
{
  int64_t heading_value;
} v2x_msgs__msg__HeadingValue;

// Struct for a sequence of v2x_msgs__msg__HeadingValue.
typedef struct v2x_msgs__msg__HeadingValue__Sequence
{
  v2x_msgs__msg__HeadingValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__HeadingValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__HEADING_VALUE__STRUCT_H_
