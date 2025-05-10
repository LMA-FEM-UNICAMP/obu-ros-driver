// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SignalRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SIGNAL_REQUEST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SIGNAL_REQUEST__STRUCT_H_

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
#include "v2x_msgs/msg/detail/intersection_reference_id__struct.h"
// Member 'request_id'
#include "v2x_msgs/msg/detail/request_id__struct.h"
// Member 'request_type'
#include "v2x_msgs/msg/detail/priority_request_type__struct.h"
// Member 'in_bound_lane'
// Member 'out_bound_lane'
#include "v2x_msgs/msg/detail/intersection_access_point__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_signal_request__struct.h"

/// Struct defined in msg/SignalRequest in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SignalRequest
{
  v2x_msgs__msg__IntersectionReferenceID id;
  v2x_msgs__msg__RequestID request_id;
  v2x_msgs__msg__PriorityRequestType request_type;
  v2x_msgs__msg__IntersectionAccessPoint in_bound_lane;
  /// Optional Field
  bool out_bound_lane_present;
  v2x_msgs__msg__IntersectionAccessPoint out_bound_lane;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegSignalRequest__Sequence regional;
} v2x_msgs__msg__SignalRequest;

// Struct for a sequence of v2x_msgs__msg__SignalRequest.
typedef struct v2x_msgs__msg__SignalRequest__Sequence
{
  v2x_msgs__msg__SignalRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SignalRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SIGNAL_REQUEST__STRUCT_H_
