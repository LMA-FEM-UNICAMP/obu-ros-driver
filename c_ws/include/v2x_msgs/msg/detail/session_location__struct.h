// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SessionLocation.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SESSION_LOCATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SESSION_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_CODE_NUMBER_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SessionLocation__LANE_CODE_NUMBER_RANGE_MIN = 0ll
};

/// Constant 'LANE_CODE_NUMBER_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SessionLocation__LANE_CODE_NUMBER_RANGE_MAX = 127ll
};

/// Struct defined in msg/SessionLocation in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SessionLocation
{
  bool ascending_kilometrage;
  int64_t lane_code_number;
} v2x_msgs__msg__SessionLocation;

// Struct for a sequence of v2x_msgs__msg__SessionLocation.
typedef struct v2x_msgs__msg__SessionLocation__Sequence
{
  v2x_msgs__msg__SessionLocation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SessionLocation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SESSION_LOCATION__STRUCT_H_
