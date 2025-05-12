// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SignalRequesterInfo.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SIGNAL_REQUESTER_INFO__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SIGNAL_REQUESTER_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "v2x_msgs/msg/detail/vehicle_id__struct.h"
// Member 'request'
#include "v2x_msgs/msg/detail/request_id__struct.h"
// Member 'sequence_number'
#include "v2x_msgs/msg/detail/msg_count__struct.h"
// Member 'role'
#include "v2x_msgs/msg/detail/basic_vehicle_role__struct.h"
// Member 'type_data'
#include "v2x_msgs/msg/detail/requestor_type__struct.h"

/// Struct defined in msg/SignalRequesterInfo in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SignalRequesterInfo
{
  v2x_msgs__msg__VehicleID id;
  v2x_msgs__msg__RequestID request;
  v2x_msgs__msg__MsgCount sequence_number;
  /// Optional Field
  bool role_present;
  v2x_msgs__msg__BasicVehicleRole role;
  /// Optional Field
  bool type_data_present;
  v2x_msgs__msg__RequestorType type_data;
} v2x_msgs__msg__SignalRequesterInfo;

// Struct for a sequence of v2x_msgs__msg__SignalRequesterInfo.
typedef struct v2x_msgs__msg__SignalRequesterInfo__Sequence
{
  v2x_msgs__msg__SignalRequesterInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SignalRequesterInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SIGNAL_REQUESTER_INFO__STRUCT_H_
