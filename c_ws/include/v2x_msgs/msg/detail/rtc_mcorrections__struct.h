// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RTCMcorrections.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RTC_MCORRECTIONS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RTC_MCORRECTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'msg_cnt'
#include "v2x_msgs/msg/detail/msg_count__struct.h"
// Member 'rev'
#include "v2x_msgs/msg/detail/rtcm_revision__struct.h"
// Member 'time_stamp'
#include "v2x_msgs/msg/detail/minute_of_the_year__struct.h"
// Member 'anchor_point'
#include "v2x_msgs/msg/detail/full_position_vector__struct.h"
// Member 'rtcm_header'
#include "v2x_msgs/msg/detail/rtc_mheader__struct.h"
// Member 'msgs'
#include "v2x_msgs/msg/detail/rtc_mmessage_list__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_rtc_mcorrections__struct.h"

/// Struct defined in msg/RTCMcorrections in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RTCMcorrections
{
  v2x_msgs__msg__MsgCount msg_cnt;
  v2x_msgs__msg__RTCMRevision rev;
  /// Optional Field
  bool time_stamp_present;
  v2x_msgs__msg__MinuteOfTheYear time_stamp;
  /// Optional Field
  bool anchor_point_present;
  v2x_msgs__msg__FullPositionVector anchor_point;
  /// Optional Field
  bool rtcm_header_present;
  v2x_msgs__msg__RTCMheader rtcm_header;
  v2x_msgs__msg__RTCMmessageList msgs;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegRTCMcorrections__Sequence regional;
} v2x_msgs__msg__RTCMcorrections;

// Struct for a sequence of v2x_msgs__msg__RTCMcorrections.
typedef struct v2x_msgs__msg__RTCMcorrections__Sequence
{
  v2x_msgs__msg__RTCMcorrections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RTCMcorrections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RTC_MCORRECTIONS__STRUCT_H_
