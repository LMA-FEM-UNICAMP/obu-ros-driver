// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RegGenericLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REG_GENERIC_LANE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__REG_GENERIC_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'region_id'
#include "v2x_msgs/msg/detail/region_id__struct.h"
// Member 'reg_ext_value'
#include "v2x_msgs/msg/detail/connection_trajectory_add_grp_c__struct.h"

/// Struct defined in msg/RegGenericLane in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RegGenericLane
{
  v2x_msgs__msg__RegionId region_id;
  v2x_msgs__msg__ConnectionTrajectoryAddGrpC reg_ext_value;
} v2x_msgs__msg__RegGenericLane;

// Struct for a sequence of v2x_msgs__msg__RegGenericLane.
typedef struct v2x_msgs__msg__RegGenericLane__Sequence
{
  v2x_msgs__msg__RegGenericLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RegGenericLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REG_GENERIC_LANE__STRUCT_H_
