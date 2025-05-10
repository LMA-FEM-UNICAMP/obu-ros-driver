// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/FreeSpaceConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__FREE_SPACE_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__FREE_SPACE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FREE_SPACE_CONFIDENCE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__FreeSpaceConfidence__FREE_SPACE_CONFIDENCE_RANGE_MIN = 0ll
};

/// Constant 'FREE_SPACE_CONFIDENCE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__FreeSpaceConfidence__FREE_SPACE_CONFIDENCE_RANGE_MAX = 101ll
};

/// Constant 'FREE_SPACE_CONFIDENCE_UNKNOWN'.
enum
{
  v2x_msgs__msg__FreeSpaceConfidence__FREE_SPACE_CONFIDENCE_UNKNOWN = 0ll
};

/// Constant 'FREE_SPACE_CONFIDENCE_ONE_PERCENT'.
enum
{
  v2x_msgs__msg__FreeSpaceConfidence__FREE_SPACE_CONFIDENCE_ONE_PERCENT = 1ll
};

/// Constant 'FREE_SPACE_CONFIDENCE_ONE_HUNDRED_PERCENT'.
enum
{
  v2x_msgs__msg__FreeSpaceConfidence__FREE_SPACE_CONFIDENCE_ONE_HUNDRED_PERCENT = 100ll
};

/// Constant 'FREE_SPACE_CONFIDENCE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__FreeSpaceConfidence__FREE_SPACE_CONFIDENCE_UNAVAILABLE = 101ll
};

/// Struct defined in msg/FreeSpaceConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__FreeSpaceConfidence
{
  int64_t free_space_confidence;
} v2x_msgs__msg__FreeSpaceConfidence;

// Struct for a sequence of v2x_msgs__msg__FreeSpaceConfidence.
typedef struct v2x_msgs__msg__FreeSpaceConfidence__Sequence
{
  v2x_msgs__msg__FreeSpaceConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__FreeSpaceConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__FREE_SPACE_CONFIDENCE__STRUCT_H_
