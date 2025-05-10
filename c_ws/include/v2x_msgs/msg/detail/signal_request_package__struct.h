// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SignalRequestPackage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "v2x_msgs/msg/detail/signal_request__struct.h"
// Member 'minute'
#include "v2x_msgs/msg/detail/minute_of_the_year__struct.h"
// Member 'second'
// Member 'duration'
#include "v2x_msgs/msg/detail/d_second__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_signal_request_package__struct.h"

/// Struct defined in msg/SignalRequestPackage in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SignalRequestPackage
{
  v2x_msgs__msg__SignalRequest request;
  /// Optional Field
  bool minute_present;
  v2x_msgs__msg__MinuteOfTheYear minute;
  /// Optional Field
  bool second_present;
  v2x_msgs__msg__DSecond second;
  /// Optional Field
  bool duration_present;
  v2x_msgs__msg__DSecond duration;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegSignalRequestPackage__Sequence regional;
} v2x_msgs__msg__SignalRequestPackage;

// Struct for a sequence of v2x_msgs__msg__SignalRequestPackage.
typedef struct v2x_msgs__msg__SignalRequestPackage__Sequence
{
  v2x_msgs__msg__SignalRequestPackage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SignalRequestPackage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__STRUCT_H_
