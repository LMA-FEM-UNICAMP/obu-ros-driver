// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RoadWorksContainerBasic.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ROAD_WORKS_CONTAINER_BASIC__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ROAD_WORKS_CONTAINER_BASIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'roadworks_sub_cause_code'
#include "v2x_msgs/msg/detail/roadworks_sub_cause_code__struct.h"
// Member 'light_bar_siren_in_use'
#include "v2x_msgs/msg/detail/light_bar_siren_in_use__struct.h"
// Member 'closed_lanes'
#include "v2x_msgs/msg/detail/closed_lanes__struct.h"

/// Struct defined in msg/RoadWorksContainerBasic in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RoadWorksContainerBasic
{
  /// Optional Field
  bool roadworks_sub_cause_code_present;
  v2x_msgs__msg__RoadworksSubCauseCode roadworks_sub_cause_code;
  v2x_msgs__msg__LightBarSirenInUse light_bar_siren_in_use;
  /// Optional Field
  bool closed_lanes_present;
  v2x_msgs__msg__ClosedLanes closed_lanes;
} v2x_msgs__msg__RoadWorksContainerBasic;

// Struct for a sequence of v2x_msgs__msg__RoadWorksContainerBasic.
typedef struct v2x_msgs__msg__RoadWorksContainerBasic__Sequence
{
  v2x_msgs__msg__RoadWorksContainerBasic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RoadWorksContainerBasic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ROAD_WORKS_CONTAINER_BASIC__STRUCT_H_
