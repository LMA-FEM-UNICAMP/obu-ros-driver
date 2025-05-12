// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TrailerAxles.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TRAILER_AXLES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TRAILER_AXLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TRAILER_AXLES_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TrailerAxles__TRAILER_AXLES_RANGE_MIN = 0ll
};

/// Constant 'TRAILER_AXLES_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TrailerAxles__TRAILER_AXLES_RANGE_MAX = 7ll
};

/// Struct defined in msg/TrailerAxles in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TrailerAxles
{
  int64_t trailer_axles;
} v2x_msgs__msg__TrailerAxles;

// Struct for a sequence of v2x_msgs__msg__TrailerAxles.
typedef struct v2x_msgs__msg__TrailerAxles__Sequence
{
  v2x_msgs__msg__TrailerAxles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TrailerAxles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TRAILER_AXLES__STRUCT_H_
