// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MatchedPosition.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MATCHED_POSITION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MATCHED_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lane_id'
#include "v2x_msgs/msg/detail/lane_id__struct.h"
// Member 'longitudinal_lane_position'
#include "v2x_msgs/msg/detail/longitudinal_lane_position__struct.h"

/// Struct defined in msg/MatchedPosition in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MatchedPosition
{
  /// Optional Field
  bool lane_id_present;
  v2x_msgs__msg__LaneID lane_id;
  /// Optional Field
  bool longitudinal_lane_position_present;
  v2x_msgs__msg__LongitudinalLanePosition longitudinal_lane_position;
} v2x_msgs__msg__MatchedPosition;

// Struct for a sequence of v2x_msgs__msg__MatchedPosition.
typedef struct v2x_msgs__msg__MatchedPosition__Sequence
{
  v2x_msgs__msg__MatchedPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MatchedPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MATCHED_POSITION__STRUCT_H_
