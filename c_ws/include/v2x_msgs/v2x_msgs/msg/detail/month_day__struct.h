// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MonthDay.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MONTH_DAY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MONTH_DAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MONTH_RANGE_MIN'.
enum
{
  v2x_msgs__msg__MonthDay__MONTH_RANGE_MIN = 1ll
};

/// Constant 'MONTH_RANGE_MAX'.
enum
{
  v2x_msgs__msg__MonthDay__MONTH_RANGE_MAX = 12ll
};

/// Constant 'DAY_RANGE_MIN'.
enum
{
  v2x_msgs__msg__MonthDay__DAY_RANGE_MIN = 1ll
};

/// Constant 'DAY_RANGE_MAX'.
enum
{
  v2x_msgs__msg__MonthDay__DAY_RANGE_MAX = 31ll
};

/// Struct defined in msg/MonthDay in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MonthDay
{
  int64_t month;
  int64_t day;
} v2x_msgs__msg__MonthDay;

// Struct for a sequence of v2x_msgs__msg__MonthDay.
typedef struct v2x_msgs__msg__MonthDay__Sequence
{
  v2x_msgs__msg__MonthDay * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MonthDay__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MONTH_DAY__STRUCT_H_
