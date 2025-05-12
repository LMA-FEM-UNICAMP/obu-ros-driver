// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DeltaTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DELTA_TIME__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DELTA_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DELTA_TIME_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DeltaTime__DELTA_TIME_RANGE_MIN = -122ll
};

/// Constant 'DELTA_TIME_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DeltaTime__DELTA_TIME_RANGE_MAX = 121ll
};

/// Struct defined in msg/DeltaTime in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DeltaTime
{
  int64_t delta_time;
} v2x_msgs__msg__DeltaTime;

// Struct for a sequence of v2x_msgs__msg__DeltaTime.
typedef struct v2x_msgs__msg__DeltaTime__Sequence
{
  v2x_msgs__msg__DeltaTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DeltaTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DELTA_TIME__STRUCT_H_
