// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/GenerationDeltaTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__GENERATION_DELTA_TIME__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__GENERATION_DELTA_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GENERATION_DELTA_TIME_RANGE_MIN'.
enum
{
  v2x_msgs__msg__GenerationDeltaTime__GENERATION_DELTA_TIME_RANGE_MIN = 0ll
};

/// Constant 'GENERATION_DELTA_TIME_RANGE_MAX'.
enum
{
  v2x_msgs__msg__GenerationDeltaTime__GENERATION_DELTA_TIME_RANGE_MAX = 65535ll
};

/// Constant 'GENERATION_DELTA_TIME_ONE_MILLI_SEC'.
enum
{
  v2x_msgs__msg__GenerationDeltaTime__GENERATION_DELTA_TIME_ONE_MILLI_SEC = 1ll
};

/// Struct defined in msg/GenerationDeltaTime in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__GenerationDeltaTime
{
  int64_t generation_delta_time;
} v2x_msgs__msg__GenerationDeltaTime;

// Struct for a sequence of v2x_msgs__msg__GenerationDeltaTime.
typedef struct v2x_msgs__msg__GenerationDeltaTime__Sequence
{
  v2x_msgs__msg__GenerationDeltaTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__GenerationDeltaTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__GENERATION_DELTA_TIME__STRUCT_H_
