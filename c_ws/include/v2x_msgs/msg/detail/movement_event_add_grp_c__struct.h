// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MovementEventAddGrpC.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT_ADD_GRP_C__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT_ADD_GRP_C__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state_change_reason'
#include "v2x_msgs/msg/detail/exceptional_condition__struct.h"

/// Struct defined in msg/MovementEventAddGrpC in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MovementEventAddGrpC
{
  /// Optional Field
  bool state_change_reason_present;
  v2x_msgs__msg__ExceptionalCondition state_change_reason;
} v2x_msgs__msg__MovementEventAddGrpC;

// Struct for a sequence of v2x_msgs__msg__MovementEventAddGrpC.
typedef struct v2x_msgs__msg__MovementEventAddGrpC__Sequence
{
  v2x_msgs__msg__MovementEventAddGrpC * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MovementEventAddGrpC__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT_ADD_GRP_C__STRUCT_H_
