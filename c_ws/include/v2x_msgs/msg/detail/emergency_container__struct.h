// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EmergencyContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EMERGENCY_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EMERGENCY_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'light_bar_siren_in_use'
#include "v2x_msgs/msg/detail/light_bar_siren_in_use__struct.h"
// Member 'incident_indication'
#include "v2x_msgs/msg/detail/cause_code__struct.h"
// Member 'emergency_priority'
#include "v2x_msgs/msg/detail/emergency_priority__struct.h"

/// Struct defined in msg/EmergencyContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EmergencyContainer
{
  v2x_msgs__msg__LightBarSirenInUse light_bar_siren_in_use;
  /// Optional Field
  bool incident_indication_present;
  v2x_msgs__msg__CauseCode incident_indication;
  /// Optional Field
  bool emergency_priority_present;
  v2x_msgs__msg__EmergencyPriority emergency_priority;
} v2x_msgs__msg__EmergencyContainer;

// Struct for a sequence of v2x_msgs__msg__EmergencyContainer.
typedef struct v2x_msgs__msg__EmergencyContainer__Sequence
{
  v2x_msgs__msg__EmergencyContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EmergencyContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EMERGENCY_CONTAINER__STRUCT_H_
