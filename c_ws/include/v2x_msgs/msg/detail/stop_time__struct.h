// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/StopTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__STOP_TIME__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__STOP_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stop_time'
#include "v2x_msgs/msg/detail/avi_eri_date_time__struct.h"

/// Struct defined in msg/StopTime in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__StopTime
{
  v2x_msgs__msg__AviEriDateTime stop_time;
} v2x_msgs__msg__StopTime;

// Struct for a sequence of v2x_msgs__msg__StopTime.
typedef struct v2x_msgs__msg__StopTime__Sequence
{
  v2x_msgs__msg__StopTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__StopTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__STOP_TIME__STRUCT_H_
