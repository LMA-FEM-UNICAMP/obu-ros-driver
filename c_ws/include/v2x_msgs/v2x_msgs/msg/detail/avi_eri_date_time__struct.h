// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AviEriDateTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__AVI_ERI_DATE_TIME__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__AVI_ERI_DATE_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'avi_eri_date_time'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AviEriDateTime in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AviEriDateTime
{
  /// size(1..10)
  rosidl_runtime_c__int64__Sequence avi_eri_date_time;
} v2x_msgs__msg__AviEriDateTime;

// Struct for a sequence of v2x_msgs__msg__AviEriDateTime.
typedef struct v2x_msgs__msg__AviEriDateTime__Sequence
{
  v2x_msgs__msg__AviEriDateTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AviEriDateTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__AVI_ERI_DATE_TIME__STRUCT_H_
