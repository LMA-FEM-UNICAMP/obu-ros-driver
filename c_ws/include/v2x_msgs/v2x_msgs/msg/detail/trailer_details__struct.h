// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TrailerDetails.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TRAILER_DETAILS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TRAILER_DETAILS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TRAILER_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TrailerDetails__TRAILER_TYPE_RANGE_MIN = 0ll
};

/// Constant 'TRAILER_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TrailerDetails__TRAILER_TYPE_RANGE_MAX = 31ll
};

/// Constant 'TRAILER_TYPE_NOT_PRESENT'.
enum
{
  v2x_msgs__msg__TrailerDetails__TRAILER_TYPE_NOT_PRESENT = 0ll
};

/// Constant 'TRAILER_TYPE_TRAILER'.
enum
{
  v2x_msgs__msg__TrailerDetails__TRAILER_TYPE_TRAILER = 1ll
};

/// Constant 'TRAILER_TYPE_SEMITRAILER'.
enum
{
  v2x_msgs__msg__TrailerDetails__TRAILER_TYPE_SEMITRAILER = 2ll
};

// Include directives for member types
// Member 'trailer_axles'
#include "v2x_msgs/msg/detail/trailer_axles__struct.h"

/// Struct defined in msg/TrailerDetails in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TrailerDetails
{
  int64_t trailer_type;
  v2x_msgs__msg__TrailerAxles trailer_axles;
} v2x_msgs__msg__TrailerDetails;

// Struct for a sequence of v2x_msgs__msg__TrailerDetails.
typedef struct v2x_msgs__msg__TrailerDetails__Sequence
{
  v2x_msgs__msg__TrailerDetails * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TrailerDetails__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TRAILER_DETAILS__STRUCT_H_
