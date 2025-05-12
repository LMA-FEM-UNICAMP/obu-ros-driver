// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ThrottleConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__THROTTLE_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__THROTTLE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'THROTTLE_CONFIDENCE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__ThrottleConfidence__THROTTLE_CONFIDENCE_UNAVAILABLE = 0ll
};

/// Constant 'THROTTLE_CONFIDENCE_PREC10PERCENT'.
enum
{
  v2x_msgs__msg__ThrottleConfidence__THROTTLE_CONFIDENCE_PREC10PERCENT = 1ll
};

/// Constant 'THROTTLE_CONFIDENCE_PREC1PERCENT'.
enum
{
  v2x_msgs__msg__ThrottleConfidence__THROTTLE_CONFIDENCE_PREC1PERCENT = 2ll
};

/// Constant 'THROTTLE_CONFIDENCE_PREC0_5PERCENT'.
enum
{
  v2x_msgs__msg__ThrottleConfidence__THROTTLE_CONFIDENCE_PREC0_5PERCENT = 3ll
};

/// Struct defined in msg/ThrottleConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ThrottleConfidence
{
  int64_t throttle_confidence;
} v2x_msgs__msg__ThrottleConfidence;

// Struct for a sequence of v2x_msgs__msg__ThrottleConfidence.
typedef struct v2x_msgs__msg__ThrottleConfidence__Sequence
{
  v2x_msgs__msg__ThrottleConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ThrottleConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__THROTTLE_CONFIDENCE__STRUCT_H_
