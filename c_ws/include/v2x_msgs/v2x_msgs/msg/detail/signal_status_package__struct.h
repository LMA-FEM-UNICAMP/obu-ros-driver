// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SignalStatusPackage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'requester'
#include "v2x_msgs/msg/detail/signal_requester_info__struct.h"
// Member 'inbound_on'
// Member 'outbound_on'
#include "v2x_msgs/msg/detail/intersection_access_point__struct.h"
// Member 'minute'
#include "v2x_msgs/msg/detail/minute_of_the_year__struct.h"
// Member 'second'
// Member 'duration'
#include "v2x_msgs/msg/detail/d_second__struct.h"
// Member 'status'
#include "v2x_msgs/msg/detail/prioritization_response_status__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_signal_status_package__struct.h"

/// Struct defined in msg/SignalStatusPackage in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SignalStatusPackage
{
  /// Optional Field
  bool requester_present;
  v2x_msgs__msg__SignalRequesterInfo requester;
  v2x_msgs__msg__IntersectionAccessPoint inbound_on;
  /// Optional Field
  bool outbound_on_present;
  v2x_msgs__msg__IntersectionAccessPoint outbound_on;
  /// Optional Field
  bool minute_present;
  v2x_msgs__msg__MinuteOfTheYear minute;
  /// Optional Field
  bool second_present;
  v2x_msgs__msg__DSecond second;
  /// Optional Field
  bool duration_present;
  v2x_msgs__msg__DSecond duration;
  v2x_msgs__msg__PrioritizationResponseStatus status;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegSignalStatusPackage__Sequence regional;
} v2x_msgs__msg__SignalStatusPackage;

// Struct for a sequence of v2x_msgs__msg__SignalStatusPackage.
typedef struct v2x_msgs__msg__SignalStatusPackage__Sequence
{
  v2x_msgs__msg__SignalStatusPackage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SignalStatusPackage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__STRUCT_H_
