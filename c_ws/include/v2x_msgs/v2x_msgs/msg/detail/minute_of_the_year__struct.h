// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MinuteOfTheYear.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MINUTE_OF_THE_YEAR__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MINUTE_OF_THE_YEAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MINUTE_OF_THE_YEAR_RANGE_MIN'.
enum
{
  v2x_msgs__msg__MinuteOfTheYear__MINUTE_OF_THE_YEAR_RANGE_MIN = 0ll
};

/// Constant 'MINUTE_OF_THE_YEAR_RANGE_MAX'.
enum
{
  v2x_msgs__msg__MinuteOfTheYear__MINUTE_OF_THE_YEAR_RANGE_MAX = 527040ll
};

/// Struct defined in msg/MinuteOfTheYear in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MinuteOfTheYear
{
  int64_t minute_of_the_year;
} v2x_msgs__msg__MinuteOfTheYear;

// Struct for a sequence of v2x_msgs__msg__MinuteOfTheYear.
typedef struct v2x_msgs__msg__MinuteOfTheYear__Sequence
{
  v2x_msgs__msg__MinuteOfTheYear * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MinuteOfTheYear__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MINUTE_OF_THE_YEAR__STRUCT_H_
