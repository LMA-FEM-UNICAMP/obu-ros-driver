// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PositionConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POSITION_CONFIDENCE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_UNAVAILABLE = 0ll
};

/// Constant 'POSITION_CONFIDENCE_A500M'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A500M = 1ll
};

/// Constant 'POSITION_CONFIDENCE_A200M'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A200M = 2ll
};

/// Constant 'POSITION_CONFIDENCE_A100M'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A100M = 3ll
};

/// Constant 'POSITION_CONFIDENCE_A50M'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A50M = 4ll
};

/// Constant 'POSITION_CONFIDENCE_A20M'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A20M = 5ll
};

/// Constant 'POSITION_CONFIDENCE_A10M'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A10M = 6ll
};

/// Constant 'POSITION_CONFIDENCE_A5M'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A5M = 7ll
};

/// Constant 'POSITION_CONFIDENCE_A2M'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A2M = 8ll
};

/// Constant 'POSITION_CONFIDENCE_A1M'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A1M = 9ll
};

/// Constant 'POSITION_CONFIDENCE_A50CM'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A50CM = 10ll
};

/// Constant 'POSITION_CONFIDENCE_A20CM'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A20CM = 11ll
};

/// Constant 'POSITION_CONFIDENCE_A10CM'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A10CM = 12ll
};

/// Constant 'POSITION_CONFIDENCE_A5CM'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A5CM = 13ll
};

/// Constant 'POSITION_CONFIDENCE_A2CM'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A2CM = 14ll
};

/// Constant 'POSITION_CONFIDENCE_A1CM'.
enum
{
  v2x_msgs__msg__PositionConfidence__POSITION_CONFIDENCE_A1CM = 15ll
};

/// Struct defined in msg/PositionConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PositionConfidence
{
  int64_t position_confidence;
} v2x_msgs__msg__PositionConfidence;

// Struct for a sequence of v2x_msgs__msg__PositionConfidence.
typedef struct v2x_msgs__msg__PositionConfidence__Sequence
{
  v2x_msgs__msg__PositionConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PositionConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE__STRUCT_H_
