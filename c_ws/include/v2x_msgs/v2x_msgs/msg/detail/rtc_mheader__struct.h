// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RTCMheader.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RTC_MHEADER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RTC_MHEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "v2x_msgs/msg/detail/gns_sstatus__struct.h"
// Member 'offset_set'
#include "v2x_msgs/msg/detail/antenna_offset_set__struct.h"

/// Struct defined in msg/RTCMheader in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RTCMheader
{
  v2x_msgs__msg__GNSSstatus status;
  v2x_msgs__msg__AntennaOffsetSet offset_set;
} v2x_msgs__msg__RTCMheader;

// Struct for a sequence of v2x_msgs__msg__RTCMheader.
typedef struct v2x_msgs__msg__RTCMheader__Sequence
{
  v2x_msgs__msg__RTCMheader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RTCMheader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RTC_MHEADER__STRUCT_H_
