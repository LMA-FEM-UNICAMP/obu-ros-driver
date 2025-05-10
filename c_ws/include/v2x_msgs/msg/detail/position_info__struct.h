// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PositionInfo.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__POSITION_INFO__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__POSITION_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LATITUDE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__PositionInfo__LATITUDE_RANGE_MIN = -2147483648ll
};

/// Constant 'LATITUDE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__PositionInfo__LATITUDE_RANGE_MAX = 2147483647ll
};

/// Constant 'LONGITUDE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__PositionInfo__LONGITUDE_RANGE_MIN = -2147483648ll
};

/// Constant 'LONGITUDE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__PositionInfo__LONGITUDE_RANGE_MAX = 2147483647ll
};

/// Struct defined in msg/PositionInfo in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PositionInfo
{
  int64_t latitude;
  int64_t longitude;
} v2x_msgs__msg__PositionInfo;

// Struct for a sequence of v2x_msgs__msg__PositionInfo.
typedef struct v2x_msgs__msg__PositionInfo__Sequence
{
  v2x_msgs__msg__PositionInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PositionInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__POSITION_INFO__STRUCT_H_
