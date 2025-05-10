// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneAttributesCrosswalk.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_CROSSWALK__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_CROSSWALK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_ATTRIBUTESCROSSWALK_CROSSWALK_REVOCABLE_LANE'.
enum
{
  v2x_msgs__msg__LaneAttributesCrosswalk__LANE_ATTRIBUTESCROSSWALK_CROSSWALK_REVOCABLE_LANE = 0ll
};

/// Constant 'LANE_ATTRIBUTESCROSSWALK_BICYLE_USE_ALLOWED'.
enum
{
  v2x_msgs__msg__LaneAttributesCrosswalk__LANE_ATTRIBUTESCROSSWALK_BICYLE_USE_ALLOWED = 1ll
};

/// Constant 'LANE_ATTRIBUTESCROSSWALK_IS_XWALK_FLY_OVER_LANE'.
enum
{
  v2x_msgs__msg__LaneAttributesCrosswalk__LANE_ATTRIBUTESCROSSWALK_IS_XWALK_FLY_OVER_LANE = 2ll
};

/// Constant 'LANE_ATTRIBUTESCROSSWALK_FIXED_CYCLE_TIME'.
enum
{
  v2x_msgs__msg__LaneAttributesCrosswalk__LANE_ATTRIBUTESCROSSWALK_FIXED_CYCLE_TIME = 3ll
};

/// Constant 'LANE_ATTRIBUTESCROSSWALK_BI_DIRECTIONAL_CYCLE_TIMES'.
enum
{
  v2x_msgs__msg__LaneAttributesCrosswalk__LANE_ATTRIBUTESCROSSWALK_BI_DIRECTIONAL_CYCLE_TIMES = 4ll
};

/// Constant 'LANE_ATTRIBUTESCROSSWALK_HAS_PUSH_TO_WALK_BUTTON'.
enum
{
  v2x_msgs__msg__LaneAttributesCrosswalk__LANE_ATTRIBUTESCROSSWALK_HAS_PUSH_TO_WALK_BUTTON = 5ll
};

/// Constant 'LANE_ATTRIBUTESCROSSWALK_AUDIO_SUPPORT'.
enum
{
  v2x_msgs__msg__LaneAttributesCrosswalk__LANE_ATTRIBUTESCROSSWALK_AUDIO_SUPPORT = 6ll
};

/// Constant 'LANE_ATTRIBUTESCROSSWALK_RF_SIGNAL_REQUEST_PRESENT'.
enum
{
  v2x_msgs__msg__LaneAttributesCrosswalk__LANE_ATTRIBUTESCROSSWALK_RF_SIGNAL_REQUEST_PRESENT = 7ll
};

/// Constant 'LANE_ATTRIBUTESCROSSWALK_UNSIGNALIZED_SEGMENTS_PRESENT'.
enum
{
  v2x_msgs__msg__LaneAttributesCrosswalk__LANE_ATTRIBUTESCROSSWALK_UNSIGNALIZED_SEGMENTS_PRESENT = 8ll
};

/// Struct defined in msg/LaneAttributesCrosswalk in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneAttributesCrosswalk
{
  int64_t lane_attributes_crosswalk;
} v2x_msgs__msg__LaneAttributesCrosswalk;

// Struct for a sequence of v2x_msgs__msg__LaneAttributesCrosswalk.
typedef struct v2x_msgs__msg__LaneAttributesCrosswalk__Sequence
{
  v2x_msgs__msg__LaneAttributesCrosswalk * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneAttributesCrosswalk__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_CROSSWALK__STRUCT_H_
