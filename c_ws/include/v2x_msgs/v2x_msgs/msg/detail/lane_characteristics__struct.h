// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneCharacteristics.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_CHARACTERISTICS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_CHARACTERISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'zone_definition_accuracy'
#include "v2x_msgs/msg/detail/definition_accuracy__struct.h"
// Member 'existinglane_marking_status'
#include "v2x_msgs/msg/detail/lane_marking_status__struct.h"
// Member 'newlane_marking_colour'
#include "v2x_msgs/msg/detail/marking_colour__struct.h"
// Member 'lane_delimitation_left'
// Member 'lane_delimitation_right'
#include "v2x_msgs/msg/detail/lane_delimitation__struct.h"
// Member 'merging_with'
#include "v2x_msgs/msg/detail/zid__struct.h"

/// Struct defined in msg/LaneCharacteristics in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneCharacteristics
{
  v2x_msgs__msg__DefinitionAccuracy zone_definition_accuracy;
  v2x_msgs__msg__LaneMarkingStatus existinglane_marking_status;
  v2x_msgs__msg__MarkingColour newlane_marking_colour;
  v2x_msgs__msg__LaneDelimitation lane_delimitation_left;
  v2x_msgs__msg__LaneDelimitation lane_delimitation_right;
  v2x_msgs__msg__Zid merging_with;
} v2x_msgs__msg__LaneCharacteristics;

// Struct for a sequence of v2x_msgs__msg__LaneCharacteristics.
typedef struct v2x_msgs__msg__LaneCharacteristics__Sequence
{
  v2x_msgs__msg__LaneCharacteristics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneCharacteristics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_CHARACTERISTICS__STRUCT_H_
