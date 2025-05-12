// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LongitudinalLanePositionValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LONGITUDINAL_LANE_POSITION_VALUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LONGITUDINAL_LANE_POSITION_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LONGITUDINAL_LANE_POSITION_VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LongitudinalLanePositionValue__LONGITUDINAL_LANE_POSITION_VALUE_RANGE_MIN = 0ll
};

/// Constant 'LONGITUDINAL_LANE_POSITION_VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LongitudinalLanePositionValue__LONGITUDINAL_LANE_POSITION_VALUE_RANGE_MAX = 32767ll
};

/// Constant 'LONGITUDINAL_LANE_POSITION_VALUE_ZERO_POINT_ONE_METER'.
enum
{
  v2x_msgs__msg__LongitudinalLanePositionValue__LONGITUDINAL_LANE_POSITION_VALUE_ZERO_POINT_ONE_METER = 1ll
};

/// Struct defined in msg/LongitudinalLanePositionValue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LongitudinalLanePositionValue
{
  int64_t longitudinal_lane_position_value;
} v2x_msgs__msg__LongitudinalLanePositionValue;

// Struct for a sequence of v2x_msgs__msg__LongitudinalLanePositionValue.
typedef struct v2x_msgs__msg__LongitudinalLanePositionValue__Sequence
{
  v2x_msgs__msg__LongitudinalLanePositionValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LongitudinalLanePositionValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LONGITUDINAL_LANE_POSITION_VALUE__STRUCT_H_
