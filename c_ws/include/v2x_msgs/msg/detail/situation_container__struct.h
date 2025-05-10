// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SituationContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SITUATION_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SITUATION_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'information_quality'
#include "v2x_msgs/msg/detail/information_quality__struct.h"
// Member 'event_type'
// Member 'linked_cause'
#include "v2x_msgs/msg/detail/cause_code__struct.h"
// Member 'event_history'
#include "v2x_msgs/msg/detail/event_history__struct.h"

/// Struct defined in msg/SituationContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SituationContainer
{
  v2x_msgs__msg__InformationQuality information_quality;
  v2x_msgs__msg__CauseCode event_type;
  /// Optional Field
  bool linked_cause_present;
  v2x_msgs__msg__CauseCode linked_cause;
  /// Optional Field
  bool event_history_present;
  v2x_msgs__msg__EventHistory event_history;
} v2x_msgs__msg__SituationContainer;

// Struct for a sequence of v2x_msgs__msg__SituationContainer.
typedef struct v2x_msgs__msg__SituationContainer__Sequence
{
  v2x_msgs__msg__SituationContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SituationContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SITUATION_CONTAINER__STRUCT_H_
