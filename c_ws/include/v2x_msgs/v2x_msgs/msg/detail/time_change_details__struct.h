// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_time'
// Member 'min_end_time'
// Member 'max_end_time'
// Member 'likely_time'
// Member 'next_time'
#include "v2x_msgs/msg/detail/time_mark__struct.h"
// Member 'confidence'
#include "v2x_msgs/msg/detail/time_interval_confidence__struct.h"

/// Struct defined in msg/TimeChangeDetails in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TimeChangeDetails
{
  /// Optional Field
  bool start_time_present;
  v2x_msgs__msg__TimeMark start_time;
  v2x_msgs__msg__TimeMark min_end_time;
  /// Optional Field
  bool max_end_time_present;
  v2x_msgs__msg__TimeMark max_end_time;
  /// Optional Field
  bool likely_time_present;
  v2x_msgs__msg__TimeMark likely_time;
  /// Optional Field
  bool confidence_present;
  v2x_msgs__msg__TimeIntervalConfidence confidence;
  /// Optional Field
  bool next_time_present;
  v2x_msgs__msg__TimeMark next_time;
} v2x_msgs__msg__TimeChangeDetails;

// Struct for a sequence of v2x_msgs__msg__TimeChangeDetails.
typedef struct v2x_msgs__msg__TimeChangeDetails__Sequence
{
  v2x_msgs__msg__TimeChangeDetails * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TimeChangeDetails__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_
