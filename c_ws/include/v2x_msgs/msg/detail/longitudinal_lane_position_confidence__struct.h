// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LongitudinalLanePositionConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LONGITUDINAL_LANE_POSITION_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LONGITUDINAL_LANE_POSITION_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LONGITUDINAL_LANE_POSITION_CONFIDENCE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LongitudinalLanePositionConfidence__LONGITUDINAL_LANE_POSITION_CONFIDENCE_RANGE_MIN = 0ll
};

/// Constant 'LONGITUDINAL_LANE_POSITION_CONFIDENCE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LongitudinalLanePositionConfidence__LONGITUDINAL_LANE_POSITION_CONFIDENCE_RANGE_MAX = 102ll
};

/// Constant 'LONGITUDINAL_LANE_POSITION_CONFIDENCE_ZERO_POINT_ZERO_ONE_METER'.
enum
{
  v2x_msgs__msg__LongitudinalLanePositionConfidence__LONGITUDINAL_LANE_POSITION_CONFIDENCE_ZERO_POINT_ZERO_ONE_METER = 1ll
};

/// Constant 'LONGITUDINAL_LANE_POSITION_CONFIDENCE_ONE_METER'.
enum
{
  v2x_msgs__msg__LongitudinalLanePositionConfidence__LONGITUDINAL_LANE_POSITION_CONFIDENCE_ONE_METER = 100ll
};

/// Constant 'LONGITUDINAL_LANE_POSITION_CONFIDENCE_OUT_OF_RANGE'.
enum
{
  v2x_msgs__msg__LongitudinalLanePositionConfidence__LONGITUDINAL_LANE_POSITION_CONFIDENCE_OUT_OF_RANGE = 101ll
};

/// Constant 'LONGITUDINAL_LANE_POSITION_CONFIDENCE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__LongitudinalLanePositionConfidence__LONGITUDINAL_LANE_POSITION_CONFIDENCE_UNAVAILABLE = 102ll
};

/// Struct defined in msg/LongitudinalLanePositionConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LongitudinalLanePositionConfidence
{
  int64_t longitudinal_lane_position_confidence;
} v2x_msgs__msg__LongitudinalLanePositionConfidence;

// Struct for a sequence of v2x_msgs__msg__LongitudinalLanePositionConfidence.
typedef struct v2x_msgs__msg__LongitudinalLanePositionConfidence__Sequence
{
  v2x_msgs__msg__LongitudinalLanePositionConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LongitudinalLanePositionConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LONGITUDINAL_LANE_POSITION_CONFIDENCE__STRUCT_H_
