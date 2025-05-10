// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DistanceValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DISTANCE_VALUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DISTANCE_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DISTANCE_VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DistanceValue__DISTANCE_VALUE_RANGE_MIN = -132768ll
};

/// Constant 'DISTANCE_VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DistanceValue__DISTANCE_VALUE_RANGE_MAX = 132767ll
};

/// Constant 'DISTANCE_VALUE_ZERO_POINT_ZERO_ONE_METER'.
enum
{
  v2x_msgs__msg__DistanceValue__DISTANCE_VALUE_ZERO_POINT_ZERO_ONE_METER = 1ll
};

/// Constant 'DISTANCE_VALUE_ONE_METER'.
enum
{
  v2x_msgs__msg__DistanceValue__DISTANCE_VALUE_ONE_METER = 100ll
};

/// Struct defined in msg/DistanceValue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DistanceValue
{
  int64_t distance_value;
} v2x_msgs__msg__DistanceValue;

// Struct for a sequence of v2x_msgs__msg__DistanceValue.
typedef struct v2x_msgs__msg__DistanceValue__Sequence
{
  v2x_msgs__msg__DistanceValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DistanceValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DISTANCE_VALUE__STRUCT_H_
