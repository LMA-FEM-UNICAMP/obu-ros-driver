// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DayOfWeek.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DAY_OF_WEEK__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DAY_OF_WEEK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DAY_OF_WEEK_UNUSED'.
enum
{
  v2x_msgs__msg__DayOfWeek__DAY_OF_WEEK_UNUSED = 0ll
};

/// Constant 'DAY_OF_WEEK_MONDAY'.
enum
{
  v2x_msgs__msg__DayOfWeek__DAY_OF_WEEK_MONDAY = 1ll
};

/// Constant 'DAY_OF_WEEK_TUESDAY'.
enum
{
  v2x_msgs__msg__DayOfWeek__DAY_OF_WEEK_TUESDAY = 2ll
};

/// Constant 'DAY_OF_WEEK_WEDNESDAY'.
enum
{
  v2x_msgs__msg__DayOfWeek__DAY_OF_WEEK_WEDNESDAY = 3ll
};

/// Constant 'DAY_OF_WEEK_THURSDAY'.
enum
{
  v2x_msgs__msg__DayOfWeek__DAY_OF_WEEK_THURSDAY = 4ll
};

/// Constant 'DAY_OF_WEEK_FRIDAY'.
enum
{
  v2x_msgs__msg__DayOfWeek__DAY_OF_WEEK_FRIDAY = 5ll
};

/// Constant 'DAY_OF_WEEK_SATURDAY'.
enum
{
  v2x_msgs__msg__DayOfWeek__DAY_OF_WEEK_SATURDAY = 6ll
};

/// Constant 'DAY_OF_WEEK_SUNDAY'.
enum
{
  v2x_msgs__msg__DayOfWeek__DAY_OF_WEEK_SUNDAY = 7ll
};

/// Struct defined in msg/DayOfWeek in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DayOfWeek
{
  int64_t day_of_week;
} v2x_msgs__msg__DayOfWeek;

// Struct for a sequence of v2x_msgs__msg__DayOfWeek.
typedef struct v2x_msgs__msg__DayOfWeek__Sequence
{
  v2x_msgs__msg__DayOfWeek * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DayOfWeek__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DAY_OF_WEEK__STRUCT_H_
