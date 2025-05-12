// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DistanceOrDuration.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DISTANCE_OR_DURATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DISTANCE_OR_DURATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DistanceOrDuration__VALUE_RANGE_MIN = 1ll
};

/// Constant 'VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DistanceOrDuration__VALUE_RANGE_MAX = 16384ll
};

/// Constant 'UNIT_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DistanceOrDuration__UNIT_RANGE_MIN = 2ll
};

/// Constant 'UNIT_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DistanceOrDuration__UNIT_RANGE_MAX = 9ll
};

// Include directives for member types
// Member 'unit'
#include "v2x_msgs/msg/detail/code_units__struct.h"

/// Struct defined in msg/DistanceOrDuration in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DistanceOrDuration
{
  int64_t value;
  v2x_msgs__msg__CodeUnits unit;
} v2x_msgs__msg__DistanceOrDuration;

// Struct for a sequence of v2x_msgs__msg__DistanceOrDuration.
typedef struct v2x_msgs__msg__DistanceOrDuration__Sequence
{
  v2x_msgs__msg__DistanceOrDuration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DistanceOrDuration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DISTANCE_OR_DURATION__STRUCT_H_
