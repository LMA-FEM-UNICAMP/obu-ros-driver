// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneAttributes.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'directional_use'
#include "v2x_msgs/msg/detail/lane_direction__struct.h"
// Member 'shared_with'
#include "v2x_msgs/msg/detail/lane_sharing__struct.h"
// Member 'lane_type'
#include "v2x_msgs/msg/detail/lane_type_attributes__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/regional_extension__struct.h"

/// Struct defined in msg/LaneAttributes in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneAttributes
{
  v2x_msgs__msg__LaneDirection directional_use;
  v2x_msgs__msg__LaneSharing shared_with;
  v2x_msgs__msg__LaneTypeAttributes lane_type;
  /// Optional Field
  bool regional_present;
  v2x_msgs__msg__RegionalExtension regional;
} v2x_msgs__msg__LaneAttributes;

// Struct for a sequence of v2x_msgs__msg__LaneAttributes.
typedef struct v2x_msgs__msg__LaneAttributes__Sequence
{
  v2x_msgs__msg__LaneAttributes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneAttributes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_H_
