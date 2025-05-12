// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneAttributesSidewalk.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_SIDEWALK__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_SIDEWALK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_ATTRIBUTESSIDEWALK_SIDEWALK_REVOCABLE_LANE'.
enum
{
  v2x_msgs__msg__LaneAttributesSidewalk__LANE_ATTRIBUTESSIDEWALK_SIDEWALK_REVOCABLE_LANE = 0ll
};

/// Constant 'LANE_ATTRIBUTESSIDEWALK_BICYLE_USE_ALLOWED'.
enum
{
  v2x_msgs__msg__LaneAttributesSidewalk__LANE_ATTRIBUTESSIDEWALK_BICYLE_USE_ALLOWED = 1ll
};

/// Constant 'LANE_ATTRIBUTESSIDEWALK_IS_SIDEWALK_FLY_OVER_LANE'.
enum
{
  v2x_msgs__msg__LaneAttributesSidewalk__LANE_ATTRIBUTESSIDEWALK_IS_SIDEWALK_FLY_OVER_LANE = 2ll
};

/// Constant 'LANE_ATTRIBUTESSIDEWALK_WALK_BIKES'.
enum
{
  v2x_msgs__msg__LaneAttributesSidewalk__LANE_ATTRIBUTESSIDEWALK_WALK_BIKES = 3ll
};

/// Struct defined in msg/LaneAttributesSidewalk in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneAttributesSidewalk
{
  int64_t lane_attributes_sidewalk;
} v2x_msgs__msg__LaneAttributesSidewalk;

// Struct for a sequence of v2x_msgs__msg__LaneAttributesSidewalk.
typedef struct v2x_msgs__msg__LaneAttributesSidewalk__Sequence
{
  v2x_msgs__msg__LaneAttributesSidewalk * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneAttributesSidewalk__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_SIDEWALK__STRUCT_H_
