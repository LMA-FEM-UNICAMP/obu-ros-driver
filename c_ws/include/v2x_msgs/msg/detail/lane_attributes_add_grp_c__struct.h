// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneAttributesAddGrpC.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_ADD_GRP_C__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_ADD_GRP_C__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'max_vehicle_height'
#include "v2x_msgs/msg/detail/vehicle_height__struct.h"
// Member 'max_vehicle_weight'
#include "v2x_msgs/msg/detail/vehicle_mass__struct.h"

/// Struct defined in msg/LaneAttributesAddGrpC in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneAttributesAddGrpC
{
  /// Optional Field
  bool max_vehicle_height_present;
  v2x_msgs__msg__VehicleHeight max_vehicle_height;
  /// Optional Field
  bool max_vehicle_weight_present;
  v2x_msgs__msg__VehicleMass max_vehicle_weight;
} v2x_msgs__msg__LaneAttributesAddGrpC;

// Struct for a sequence of v2x_msgs__msg__LaneAttributesAddGrpC.
typedef struct v2x_msgs__msg__LaneAttributesAddGrpC__Sequence
{
  v2x_msgs__msg__LaneAttributesAddGrpC * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneAttributesAddGrpC__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_ADD_GRP_C__STRUCT_H_
