// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneAttributesBike.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BIKE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BIKE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_ATTRIBUTESBIKE_BIKE_REVOCABLE_LANE'.
enum
{
  v2x_msgs__msg__LaneAttributesBike__LANE_ATTRIBUTESBIKE_BIKE_REVOCABLE_LANE = 0ll
};

/// Constant 'LANE_ATTRIBUTESBIKE_PEDESTRIAN_USE_ALLOWED'.
enum
{
  v2x_msgs__msg__LaneAttributesBike__LANE_ATTRIBUTESBIKE_PEDESTRIAN_USE_ALLOWED = 1ll
};

/// Constant 'LANE_ATTRIBUTESBIKE_IS_BIKE_FLY_OVER_LANE'.
enum
{
  v2x_msgs__msg__LaneAttributesBike__LANE_ATTRIBUTESBIKE_IS_BIKE_FLY_OVER_LANE = 2ll
};

/// Constant 'LANE_ATTRIBUTESBIKE_FIXED_CYCLE_TIME'.
enum
{
  v2x_msgs__msg__LaneAttributesBike__LANE_ATTRIBUTESBIKE_FIXED_CYCLE_TIME = 3ll
};

/// Constant 'LANE_ATTRIBUTESBIKE_BI_DIRECTIONAL_CYCLE_TIMES'.
enum
{
  v2x_msgs__msg__LaneAttributesBike__LANE_ATTRIBUTESBIKE_BI_DIRECTIONAL_CYCLE_TIMES = 4ll
};

/// Constant 'LANE_ATTRIBUTESBIKE_ISOLATED_BY_BARRIER'.
enum
{
  v2x_msgs__msg__LaneAttributesBike__LANE_ATTRIBUTESBIKE_ISOLATED_BY_BARRIER = 5ll
};

/// Constant 'LANE_ATTRIBUTESBIKE_UNSIGNALIZED_SEGMENTS_PRESENT'.
enum
{
  v2x_msgs__msg__LaneAttributesBike__LANE_ATTRIBUTESBIKE_UNSIGNALIZED_SEGMENTS_PRESENT = 6ll
};

/// Struct defined in msg/LaneAttributesBike in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneAttributesBike
{
  int64_t lane_attributes_bike;
} v2x_msgs__msg__LaneAttributesBike;

// Struct for a sequence of v2x_msgs__msg__LaneAttributesBike.
typedef struct v2x_msgs__msg__LaneAttributesBike__Sequence
{
  v2x_msgs__msg__LaneAttributesBike * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneAttributesBike__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BIKE__STRUCT_H_
