// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'event_state'
#include "v2x_msgs/msg/detail/movement_phase_state__struct.h"
// Member 'timing'
#include "v2x_msgs/msg/detail/time_change_details__struct.h"
// Member 'speeds'
#include "v2x_msgs/msg/detail/advisory_speed_list__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_movement_event__struct.h"

/// Struct defined in msg/MovementEvent in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MovementEvent
{
  v2x_msgs__msg__MovementPhaseState event_state;
  /// Optional Field
  bool timing_present;
  v2x_msgs__msg__TimeChangeDetails timing;
  /// Optional Field
  bool speeds_present;
  v2x_msgs__msg__AdvisorySpeedList speeds;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegMovementEvent__Sequence regional;
} v2x_msgs__msg__MovementEvent;

// Struct for a sequence of v2x_msgs__msg__MovementEvent.
typedef struct v2x_msgs__msg__MovementEvent__Sequence
{
  v2x_msgs__msg__MovementEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MovementEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_H_
