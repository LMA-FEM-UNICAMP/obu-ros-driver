// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LongitudinalLanePosition.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LONGITUDINAL_LANE_POSITION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LONGITUDINAL_LANE_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'longitudinal_lane_position_value'
#include "v2x_msgs/msg/detail/longitudinal_lane_position_value__struct.h"
// Member 'longitudinal_lane_position_confidence'
#include "v2x_msgs/msg/detail/longitudinal_lane_position_confidence__struct.h"

/// Struct defined in msg/LongitudinalLanePosition in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LongitudinalLanePosition
{
  v2x_msgs__msg__LongitudinalLanePositionValue longitudinal_lane_position_value;
  v2x_msgs__msg__LongitudinalLanePositionConfidence longitudinal_lane_position_confidence;
} v2x_msgs__msg__LongitudinalLanePosition;

// Struct for a sequence of v2x_msgs__msg__LongitudinalLanePosition.
typedef struct v2x_msgs__msg__LongitudinalLanePosition__Sequence
{
  v2x_msgs__msg__LongitudinalLanePosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LongitudinalLanePosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LONGITUDINAL_LANE_POSITION__STRUCT_H_
