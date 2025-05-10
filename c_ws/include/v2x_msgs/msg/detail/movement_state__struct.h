// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'movement_name'
#include "v2x_msgs/msg/detail/descriptive_name__struct.h"
// Member 'signal_group'
#include "v2x_msgs/msg/detail/signal_group_id__struct.h"
// Member 'state_time_speed'
#include "v2x_msgs/msg/detail/movement_event_list__struct.h"
// Member 'maneuver_assist_list'
#include "v2x_msgs/msg/detail/maneuver_assist_list__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_movement_state__struct.h"

/// Struct defined in msg/MovementState in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MovementState
{
  /// Optional Field
  bool movement_name_present;
  v2x_msgs__msg__DescriptiveName movement_name;
  v2x_msgs__msg__SignalGroupID signal_group;
  v2x_msgs__msg__MovementEventList state_time_speed;
  /// Optional Field
  bool maneuver_assist_list_present;
  v2x_msgs__msg__ManeuverAssistList maneuver_assist_list;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegMovementState__Sequence regional;
} v2x_msgs__msg__MovementState;

// Struct for a sequence of v2x_msgs__msg__MovementState.
typedef struct v2x_msgs__msg__MovementState__Sequence
{
  v2x_msgs__msg__MovementState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MovementState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_
