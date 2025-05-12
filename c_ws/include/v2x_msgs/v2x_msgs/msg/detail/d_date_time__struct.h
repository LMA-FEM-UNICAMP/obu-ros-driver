// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DDateTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__D_DATE_TIME__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__D_DATE_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'year'
#include "v2x_msgs/msg/detail/d_year__struct.h"
// Member 'month'
#include "v2x_msgs/msg/detail/d_month__struct.h"
// Member 'day'
#include "v2x_msgs/msg/detail/d_day__struct.h"
// Member 'hour'
#include "v2x_msgs/msg/detail/d_hour__struct.h"
// Member 'minute'
#include "v2x_msgs/msg/detail/d_minute__struct.h"
// Member 'second'
#include "v2x_msgs/msg/detail/d_second__struct.h"
// Member 'offset'
#include "v2x_msgs/msg/detail/d_offset__struct.h"

/// Struct defined in msg/DDateTime in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DDateTime
{
  /// Optional Field
  bool year_present;
  v2x_msgs__msg__DYear year;
  /// Optional Field
  bool month_present;
  v2x_msgs__msg__DMonth month;
  /// Optional Field
  bool day_present;
  v2x_msgs__msg__DDay day;
  /// Optional Field
  bool hour_present;
  v2x_msgs__msg__DHour hour;
  /// Optional Field
  bool minute_present;
  v2x_msgs__msg__DMinute minute;
  /// Optional Field
  bool second_present;
  v2x_msgs__msg__DSecond second;
  /// Optional Field
  bool offset_present;
  v2x_msgs__msg__DOffset offset;
} v2x_msgs__msg__DDateTime;

// Struct for a sequence of v2x_msgs__msg__DDateTime.
typedef struct v2x_msgs__msg__DDateTime__Sequence
{
  v2x_msgs__msg__DDateTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DDateTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__D_DATE_TIME__STRUCT_H_
