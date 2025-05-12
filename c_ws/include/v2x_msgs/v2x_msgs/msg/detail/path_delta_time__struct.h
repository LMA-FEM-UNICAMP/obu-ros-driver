// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PathDeltaTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PATH_DELTA_TIME__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PATH_DELTA_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PATH_DELTA_TIME_RANGE_MIN'.
enum
{
  v2x_msgs__msg__PathDeltaTime__PATH_DELTA_TIME_RANGE_MIN = 1ll
};

/// Constant 'PATH_DELTA_TIME_RANGE_MAX'.
enum
{
  v2x_msgs__msg__PathDeltaTime__PATH_DELTA_TIME_RANGE_MAX = 65535ll
};

/// Constant 'PATH_DELTA_TIME_TEN_MILLI_SECONDS_IN_PAST'.
enum
{
  v2x_msgs__msg__PathDeltaTime__PATH_DELTA_TIME_TEN_MILLI_SECONDS_IN_PAST = 1ll
};

/// Struct defined in msg/PathDeltaTime in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PathDeltaTime
{
  int64_t path_delta_time;
} v2x_msgs__msg__PathDeltaTime;

// Struct for a sequence of v2x_msgs__msg__PathDeltaTime.
typedef struct v2x_msgs__msg__PathDeltaTime__Sequence
{
  v2x_msgs__msg__PathDeltaTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PathDeltaTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PATH_DELTA_TIME__STRUCT_H_
