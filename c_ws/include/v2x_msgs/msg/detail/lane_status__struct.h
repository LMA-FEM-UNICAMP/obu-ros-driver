// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_STATUS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_STATUS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LaneStatus__LANE_STATUS_RANGE_MIN = 0ll
};

/// Constant 'LANE_STATUS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LaneStatus__LANE_STATUS_RANGE_MAX = 7ll
};

/// Constant 'LANE_STATUS_OPEN'.
enum
{
  v2x_msgs__msg__LaneStatus__LANE_STATUS_OPEN = 0ll
};

/// Constant 'LANE_STATUS_CLOSED'.
enum
{
  v2x_msgs__msg__LaneStatus__LANE_STATUS_CLOSED = 1ll
};

/// Constant 'LANE_STATUS_MERGE_R'.
enum
{
  v2x_msgs__msg__LaneStatus__LANE_STATUS_MERGE_R = 2ll
};

/// Constant 'LANE_STATUS_MERGE_L'.
enum
{
  v2x_msgs__msg__LaneStatus__LANE_STATUS_MERGE_L = 3ll
};

/// Constant 'LANE_STATUS_MERGE_LR'.
enum
{
  v2x_msgs__msg__LaneStatus__LANE_STATUS_MERGE_LR = 4ll
};

/// Constant 'LANE_STATUS_PROVISIONALLY_OPEN'.
enum
{
  v2x_msgs__msg__LaneStatus__LANE_STATUS_PROVISIONALLY_OPEN = 5ll
};

/// Constant 'LANE_STATUS_DIVERGING'.
enum
{
  v2x_msgs__msg__LaneStatus__LANE_STATUS_DIVERGING = 6ll
};

/// Struct defined in msg/LaneStatus in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneStatus
{
  int64_t lane_status;
} v2x_msgs__msg__LaneStatus;

// Struct for a sequence of v2x_msgs__msg__LaneStatus.
typedef struct v2x_msgs__msg__LaneStatus__Sequence
{
  v2x_msgs__msg__LaneStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_STATUS__STRUCT_H_
