// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SignalStatusMessage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SIGNAL_STATUS_MESSAGE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SIGNAL_STATUS_MESSAGE__STRUCT_H_

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
// Member 'status'
#include "v2x_msgs/msg/detail/signal_status_list__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_signal_status_message__struct.h"

/// Struct defined in msg/SignalStatusMessage in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SignalStatusMessage
{
  /// Optional Field
  bool time_stamp_present;
  v2x_msgs__msg__MinuteOfTheYear time_stamp;
  v2x_msgs__msg__DSecond second;
  /// Optional Field
  bool sequence_number_present;
  v2x_msgs__msg__MsgCount sequence_number;
  v2x_msgs__msg__SignalStatusList status;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegSignalStatusMessage__Sequence regional;
} v2x_msgs__msg__SignalStatusMessage;

// Struct for a sequence of v2x_msgs__msg__SignalStatusMessage.
typedef struct v2x_msgs__msg__SignalStatusMessage__Sequence
{
  v2x_msgs__msg__SignalStatusMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SignalStatusMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SIGNAL_STATUS_MESSAGE__STRUCT_H_
