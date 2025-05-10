// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ClassConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CLASS_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CLASS_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CLASS_CONFIDENCE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ClassConfidence__CLASS_CONFIDENCE_RANGE_MIN = 0ll
};

/// Constant 'CLASS_CONFIDENCE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ClassConfidence__CLASS_CONFIDENCE_RANGE_MAX = 101ll
};

/// Constant 'CLASS_CONFIDENCE_UNKNOWN'.
enum
{
  v2x_msgs__msg__ClassConfidence__CLASS_CONFIDENCE_UNKNOWN = 0ll
};

/// Constant 'CLASS_CONFIDENCE_ONE_PERCENT'.
enum
{
  v2x_msgs__msg__ClassConfidence__CLASS_CONFIDENCE_ONE_PERCENT = 1ll
};

/// Constant 'CLASS_CONFIDENCE_ONE_HUNDRED_PERCENT'.
enum
{
  v2x_msgs__msg__ClassConfidence__CLASS_CONFIDENCE_ONE_HUNDRED_PERCENT = 100ll
};

/// Constant 'CLASS_CONFIDENCE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__ClassConfidence__CLASS_CONFIDENCE_UNAVAILABLE = 101ll
};

/// Struct defined in msg/ClassConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ClassConfidence
{
  int64_t class_confidence;
} v2x_msgs__msg__ClassConfidence;

// Struct for a sequence of v2x_msgs__msg__ClassConfidence.
typedef struct v2x_msgs__msg__ClassConfidence__Sequence
{
  v2x_msgs__msg__ClassConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ClassConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CLASS_CONFIDENCE__STRUCT_H_
