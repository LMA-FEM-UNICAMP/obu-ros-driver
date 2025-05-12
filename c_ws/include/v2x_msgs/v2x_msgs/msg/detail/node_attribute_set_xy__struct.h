// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'local_node'
#include "v2x_msgs/msg/detail/node_attribute_xy_list__struct.h"
// Member 'disabled'
// Member 'enabled'
#include "v2x_msgs/msg/detail/segment_attribute_xy_list__struct.h"
// Member 'data'
#include "v2x_msgs/msg/detail/lane_data_attribute_list__struct.h"
// Member 'd_width'
// Member 'd_elevation'
#include "v2x_msgs/msg/detail/offset_b10__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_node_attribute_set_xy__struct.h"

/// Struct defined in msg/NodeAttributeSetXY in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__NodeAttributeSetXY
{
  /// Optional Field
  bool local_node_present;
  v2x_msgs__msg__NodeAttributeXYList local_node;
  /// Optional Field
  bool disabled_present;
  v2x_msgs__msg__SegmentAttributeXYList disabled;
  /// Optional Field
  bool enabled_present;
  v2x_msgs__msg__SegmentAttributeXYList enabled;
  /// Optional Field
  bool data_present;
  v2x_msgs__msg__LaneDataAttributeList data;
  /// Optional Field
  bool d_width_present;
  v2x_msgs__msg__OffsetB10 d_width;
  /// Optional Field
  bool d_elevation_present;
  v2x_msgs__msg__OffsetB10 d_elevation;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegNodeAttributeSetXY__Sequence regional;
} v2x_msgs__msg__NodeAttributeSetXY;

// Struct for a sequence of v2x_msgs__msg__NodeAttributeSetXY.
typedef struct v2x_msgs__msg__NodeAttributeSetXY__Sequence
{
  v2x_msgs__msg__NodeAttributeSetXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__NodeAttributeSetXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_H_
