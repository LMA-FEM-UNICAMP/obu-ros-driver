// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/NodeAttributeSetAddGrpC.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_ADD_GRP_C__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_ADD_GRP_C__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ptv_request'
#include "v2x_msgs/msg/detail/ptv_request_type__struct.h"
// Member 'node_link'
#include "v2x_msgs/msg/detail/node_link__struct.h"
// Member 'node'
#include "v2x_msgs/msg/detail/node__struct.h"

/// Struct defined in msg/NodeAttributeSetAddGrpC in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__NodeAttributeSetAddGrpC
{
  /// Optional Field
  bool ptv_request_present;
  v2x_msgs__msg__PtvRequestType ptv_request;
  /// Optional Field
  bool node_link_present;
  v2x_msgs__msg__NodeLink node_link;
  /// Optional Field
  bool node_present;
  v2x_msgs__msg__Node node;
} v2x_msgs__msg__NodeAttributeSetAddGrpC;

// Struct for a sequence of v2x_msgs__msg__NodeAttributeSetAddGrpC.
typedef struct v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence
{
  v2x_msgs__msg__NodeAttributeSetAddGrpC * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_ADD_GRP_C__STRUCT_H_
