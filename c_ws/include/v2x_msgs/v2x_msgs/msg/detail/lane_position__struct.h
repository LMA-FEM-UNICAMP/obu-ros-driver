// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LanePosition.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_POSITION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_POSITION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LanePosition__LANE_POSITION_RANGE_MIN = -1ll
};

/// Constant 'LANE_POSITION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LanePosition__LANE_POSITION_RANGE_MAX = 14ll
};

/// Constant 'LANE_POSITION_OFF_THE_ROAD'.
enum
{
  v2x_msgs__msg__LanePosition__LANE_POSITION_OFF_THE_ROAD = -1ll
};

/// Constant 'LANE_POSITION_INNER_HARD_SHOULDER'.
enum
{
  v2x_msgs__msg__LanePosition__LANE_POSITION_INNER_HARD_SHOULDER = 0ll
};

/// Constant 'LANE_POSITION_INNERMOST_DRIVING_LANE'.
enum
{
  v2x_msgs__msg__LanePosition__LANE_POSITION_INNERMOST_DRIVING_LANE = 1ll
};

/// Constant 'LANE_POSITION_SECOND_LANE_FROM_INSIDE'.
enum
{
  v2x_msgs__msg__LanePosition__LANE_POSITION_SECOND_LANE_FROM_INSIDE = 2ll
};

/// Constant 'LANE_POSITION_OUTER_HARD_SHOULDER'.
enum
{
  v2x_msgs__msg__LanePosition__LANE_POSITION_OUTER_HARD_SHOULDER = 14ll
};

/// Struct defined in msg/LanePosition in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LanePosition
{
  int64_t lane_position;
} v2x_msgs__msg__LanePosition;

// Struct for a sequence of v2x_msgs__msg__LanePosition.
typedef struct v2x_msgs__msg__LanePosition__Sequence
{
  v2x_msgs__msg__LanePosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LanePosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_POSITION__STRUCT_H_
