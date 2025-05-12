// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneAttributesStriping.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_STRIPING__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_STRIPING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_ATTRIBUTESSTRIPING_STRIPE_TO_CONNECTING_LANES_REVOCABLE_LANE'.
enum
{
  v2x_msgs__msg__LaneAttributesStriping__LANE_ATTRIBUTESSTRIPING_STRIPE_TO_CONNECTING_LANES_REVOCABLE_LANE = 0ll
};

/// Constant 'LANE_ATTRIBUTESSTRIPING_STRIPE_DRAW_ON_LEFT'.
enum
{
  v2x_msgs__msg__LaneAttributesStriping__LANE_ATTRIBUTESSTRIPING_STRIPE_DRAW_ON_LEFT = 1ll
};

/// Constant 'LANE_ATTRIBUTESSTRIPING_STRIPE_DRAW_ON_RIGHT'.
enum
{
  v2x_msgs__msg__LaneAttributesStriping__LANE_ATTRIBUTESSTRIPING_STRIPE_DRAW_ON_RIGHT = 2ll
};

/// Constant 'LANE_ATTRIBUTESSTRIPING_STRIPE_TO_CONNECTING_LANES_LEFT'.
enum
{
  v2x_msgs__msg__LaneAttributesStriping__LANE_ATTRIBUTESSTRIPING_STRIPE_TO_CONNECTING_LANES_LEFT = 3ll
};

/// Constant 'LANE_ATTRIBUTESSTRIPING_STRIPE_TO_CONNECTING_LANES_RIGHT'.
enum
{
  v2x_msgs__msg__LaneAttributesStriping__LANE_ATTRIBUTESSTRIPING_STRIPE_TO_CONNECTING_LANES_RIGHT = 4ll
};

/// Constant 'LANE_ATTRIBUTESSTRIPING_STRIPE_TO_CONNECTING_LANES_AHEAD'.
enum
{
  v2x_msgs__msg__LaneAttributesStriping__LANE_ATTRIBUTESSTRIPING_STRIPE_TO_CONNECTING_LANES_AHEAD = 5ll
};

/// Struct defined in msg/LaneAttributesStriping in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneAttributesStriping
{
  int64_t lane_attributes_striping;
} v2x_msgs__msg__LaneAttributesStriping;

// Struct for a sequence of v2x_msgs__msg__LaneAttributesStriping.
typedef struct v2x_msgs__msg__LaneAttributesStriping__Sequence
{
  v2x_msgs__msg__LaneAttributesStriping * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneAttributesStriping__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_STRIPING__STRUCT_H_
