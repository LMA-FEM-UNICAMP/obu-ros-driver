// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_H_

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
// Member 'name'
#include "v2x_msgs/msg/detail/descriptive_name__struct.h"
// Member 'ingress_approach'
// Member 'egress_approach'
#include "v2x_msgs/msg/detail/approach_id__struct.h"
// Member 'lane_attributes'
#include "v2x_msgs/msg/detail/lane_attributes__struct.h"
// Member 'maneuvers'
#include "v2x_msgs/msg/detail/allowed_maneuvers__struct.h"
// Member 'node_list'
#include "v2x_msgs/msg/detail/node_list_xy__struct.h"
// Member 'connects_to'
#include "v2x_msgs/msg/detail/connects_to_list__struct.h"
// Member 'overlays'
#include "v2x_msgs/msg/detail/overlay_lane_list__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_generic_lane__struct.h"

/// Struct defined in msg/GenericLane in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__GenericLane
{
  v2x_msgs__msg__LaneID lane_id;
  /// Optional Field
  bool name_present;
  v2x_msgs__msg__DescriptiveName name;
  /// Optional Field
  bool ingress_approach_present;
  v2x_msgs__msg__ApproachID ingress_approach;
  /// Optional Field
  bool egress_approach_present;
  v2x_msgs__msg__ApproachID egress_approach;
  v2x_msgs__msg__LaneAttributes lane_attributes;
  /// Optional Field
  bool maneuvers_present;
  v2x_msgs__msg__AllowedManeuvers maneuvers;
  v2x_msgs__msg__NodeListXY node_list;
  /// Optional Field
  bool connects_to_present;
  v2x_msgs__msg__ConnectsToList connects_to;
  /// Optional Field
  bool overlays_present;
  v2x_msgs__msg__OverlayLaneList overlays;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegGenericLane__Sequence regional;
} v2x_msgs__msg__GenericLane;

// Struct for a sequence of v2x_msgs__msg__GenericLane.
typedef struct v2x_msgs__msg__GenericLane__Sequence
{
  v2x_msgs__msg__GenericLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__GenericLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_H_
