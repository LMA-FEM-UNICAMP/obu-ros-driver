// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ManagementContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action_id'
#include "v2x_msgs/msg/detail/action_id__struct.h"
// Member 'detection_time'
// Member 'reference_time'
#include "v2x_msgs/msg/detail/timestamp_its__struct.h"
// Member 'termination'
#include "v2x_msgs/msg/detail/termination__struct.h"
// Member 'event_position'
#include "v2x_msgs/msg/detail/reference_position__struct.h"
// Member 'relevance_distance'
#include "v2x_msgs/msg/detail/relevance_distance__struct.h"
// Member 'relevance_traffic_direction'
#include "v2x_msgs/msg/detail/relevance_traffic_direction__struct.h"
// Member 'validity_duration'
#include "v2x_msgs/msg/detail/validity_duration__struct.h"
// Member 'transmission_interval'
#include "v2x_msgs/msg/detail/transmission_interval__struct.h"
// Member 'station_type'
#include "v2x_msgs/msg/detail/station_type__struct.h"

/// Struct defined in msg/ManagementContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ManagementContainer
{
  v2x_msgs__msg__ActionID action_id;
  v2x_msgs__msg__TimestampIts detection_time;
  v2x_msgs__msg__TimestampIts reference_time;
  /// Optional Field
  bool termination_present;
  v2x_msgs__msg__Termination termination;
  v2x_msgs__msg__ReferencePosition event_position;
  /// Optional Field
  bool relevance_distance_present;
  v2x_msgs__msg__RelevanceDistance relevance_distance;
  /// Optional Field
  bool relevance_traffic_direction_present;
  v2x_msgs__msg__RelevanceTrafficDirection relevance_traffic_direction;
  /// Optional Field
  bool validity_duration_present;
  v2x_msgs__msg__ValidityDuration validity_duration;
  /// Optional Field
  bool transmission_interval_present;
  v2x_msgs__msg__TransmissionInterval transmission_interval;
  v2x_msgs__msg__StationType station_type;
} v2x_msgs__msg__ManagementContainer;

// Struct for a sequence of v2x_msgs__msg__ManagementContainer.
typedef struct v2x_msgs__msg__ManagementContainer__Sequence
{
  v2x_msgs__msg__ManagementContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ManagementContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__STRUCT_H_
