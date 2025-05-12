// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ObjectConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__OBJECT_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__OBJECT_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OBJECT_CONFIDENCE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ObjectConfidence__OBJECT_CONFIDENCE_RANGE_MIN = 0ll
};

/// Constant 'OBJECT_CONFIDENCE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ObjectConfidence__OBJECT_CONFIDENCE_RANGE_MAX = 101ll
};

/// Constant 'OBJECT_CONFIDENCE_UNKNOWN'.
enum
{
  v2x_msgs__msg__ObjectConfidence__OBJECT_CONFIDENCE_UNKNOWN = 0ll
};

/// Constant 'OBJECT_CONFIDENCE_ONE_PERCENT'.
enum
{
  v2x_msgs__msg__ObjectConfidence__OBJECT_CONFIDENCE_ONE_PERCENT = 1ll
};

/// Constant 'OBJECT_CONFIDENCE_ONE_HUNDRED_PERCENT'.
enum
{
  v2x_msgs__msg__ObjectConfidence__OBJECT_CONFIDENCE_ONE_HUNDRED_PERCENT = 100ll
};

/// Constant 'OBJECT_CONFIDENCE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__ObjectConfidence__OBJECT_CONFIDENCE_UNAVAILABLE = 101ll
};

/// Struct defined in msg/ObjectConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ObjectConfidence
{
  int64_t object_confidence;
} v2x_msgs__msg__ObjectConfidence;

// Struct for a sequence of v2x_msgs__msg__ObjectConfidence.
typedef struct v2x_msgs__msg__ObjectConfidence__Sequence
{
  v2x_msgs__msg__ObjectConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ObjectConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__OBJECT_CONFIDENCE__STRUCT_H_
