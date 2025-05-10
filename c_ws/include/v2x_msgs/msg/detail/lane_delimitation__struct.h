// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneDelimitation.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_DELIMITATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_DELIMITATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_DELIMITATION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LaneDelimitation__LANE_DELIMITATION_RANGE_MIN = 0ll
};

/// Constant 'LANE_DELIMITATION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LaneDelimitation__LANE_DELIMITATION_RANGE_MAX = 7ll
};

/// Constant 'LANE_DELIMITATION_NO_DELIMITATION'.
enum
{
  v2x_msgs__msg__LaneDelimitation__LANE_DELIMITATION_NO_DELIMITATION = 0ll
};

/// Constant 'LANE_DELIMITATION_LOW_LANE_SEPARATOR'.
enum
{
  v2x_msgs__msg__LaneDelimitation__LANE_DELIMITATION_LOW_LANE_SEPARATOR = 1ll
};

/// Constant 'LANE_DELIMITATION_HIGH_LANE_SEPARATOR'.
enum
{
  v2x_msgs__msg__LaneDelimitation__LANE_DELIMITATION_HIGH_LANE_SEPARATOR = 2ll
};

/// Constant 'LANE_DELIMITATION_WALL'.
enum
{
  v2x_msgs__msg__LaneDelimitation__LANE_DELIMITATION_WALL = 3ll
};

/// Constant 'LANE_DELIMITATION_CURB'.
enum
{
  v2x_msgs__msg__LaneDelimitation__LANE_DELIMITATION_CURB = 4ll
};

/// Constant 'LANE_DELIMITATION_UNPAVED'.
enum
{
  v2x_msgs__msg__LaneDelimitation__LANE_DELIMITATION_UNPAVED = 5ll
};

/// Constant 'LANE_DELIMITATION_GUARDRAIL'.
enum
{
  v2x_msgs__msg__LaneDelimitation__LANE_DELIMITATION_GUARDRAIL = 6ll
};

/// Struct defined in msg/LaneDelimitation in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneDelimitation
{
  int64_t lane_delimitation;
} v2x_msgs__msg__LaneDelimitation;

// Struct for a sequence of v2x_msgs__msg__LaneDelimitation.
typedef struct v2x_msgs__msg__LaneDelimitation__Sequence
{
  v2x_msgs__msg__LaneDelimitation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneDelimitation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_DELIMITATION__STRUCT_H_
