// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SignalRequestMessage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SIGNAL_REQUEST_MESSAGE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SIGNAL_REQUEST_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time_stamp'
#include "v2x_msgs/msg/detail/minute_of_the_year__struct.h"
// Member 'second'
#include "v2x_msgs/msg/detail/d_second__struct.h"
// Member 'sequence_number'
#include "v2x_msgs/msg/detail/msg_count__struct.h"
// Member 'requests'
#include "v2x_msgs/msg/detail/signal_request_list__struct.h"
// Member 'requestor'
#include "v2x_msgs/msg/detail/requestor_description__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_signal_request_message__struct.h"

/// Struct defined in msg/SignalRequestMessage in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SignalRequestMessage
{
  /// Optional Field
  bool time_stamp_present;
  v2x_msgs__msg__MinuteOfTheYear time_stamp;
  v2x_msgs__msg__DSecond second;
  /// Optional Field
  bool sequence_number_present;
  v2x_msgs__msg__MsgCount sequence_number;
  /// Optional Field
  bool requests_present;
  v2x_msgs__msg__SignalRequestList requests;
  v2x_msgs__msg__RequestorDescription requestor;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegSignalRequestMessage__Sequence regional;
} v2x_msgs__msg__SignalRequestMessage;

// Struct for a sequence of v2x_msgs__msg__SignalRequestMessage.
typedef struct v2x_msgs__msg__SignalRequestMessage__Sequence
{
  v2x_msgs__msg__SignalRequestMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SignalRequestMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SIGNAL_REQUEST_MESSAGE__STRUCT_H_
