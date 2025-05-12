// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MapDataAddGrpC.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MAP_DATA_ADD_GRP_C__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MAP_DATA_ADD_GRP_C__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'signal_head_locations'
#include "v2x_msgs/msg/detail/signal_head_location_list__struct.h"

/// Struct defined in msg/MapDataAddGrpC in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MapDataAddGrpC
{
  /// Optional Field
  bool signal_head_locations_present;
  v2x_msgs__msg__SignalHeadLocationList signal_head_locations;
} v2x_msgs__msg__MapDataAddGrpC;

// Struct for a sequence of v2x_msgs__msg__MapDataAddGrpC.
typedef struct v2x_msgs__msg__MapDataAddGrpC__Sequence
{
  v2x_msgs__msg__MapDataAddGrpC * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MapDataAddGrpC__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MAP_DATA_ADD_GRP_C__STRUCT_H_
