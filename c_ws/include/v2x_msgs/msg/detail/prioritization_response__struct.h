// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PrioritizationResponse.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PRIORITIZATION_RESPONSE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PRIORITIZATION_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'station_id'
#include "v2x_msgs/msg/detail/station_id__struct.h"
// Member 'prior_state'
#include "v2x_msgs/msg/detail/prioritization_response_status__struct.h"
// Member 'signal_group'
#include "v2x_msgs/msg/detail/signal_group_id__struct.h"

/// Struct defined in msg/PrioritizationResponse in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PrioritizationResponse
{
  v2x_msgs__msg__StationID station_id;
  v2x_msgs__msg__PrioritizationResponseStatus prior_state;
  v2x_msgs__msg__SignalGroupID signal_group;
} v2x_msgs__msg__PrioritizationResponse;

// Struct for a sequence of v2x_msgs__msg__PrioritizationResponse.
typedef struct v2x_msgs__msg__PrioritizationResponse__Sequence
{
  v2x_msgs__msg__PrioritizationResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PrioritizationResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PRIORITIZATION_RESPONSE__STRUCT_H_
