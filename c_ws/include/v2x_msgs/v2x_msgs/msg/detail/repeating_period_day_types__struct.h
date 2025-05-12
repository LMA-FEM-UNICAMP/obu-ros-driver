// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RepeatingPeriodDayTypes.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REPEATING_PERIOD_DAY_TYPES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__REPEATING_PERIOD_DAY_TYPES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REPEATING_PERIOD_DAY_TYPES_NATIONAL_HOLIDAY'.
enum
{
  v2x_msgs__msg__RepeatingPeriodDayTypes__REPEATING_PERIOD_DAY_TYPES_NATIONAL_HOLIDAY = 0ll
};

/// Constant 'REPEATING_PERIOD_DAY_TYPES_EVEN_DAYS'.
enum
{
  v2x_msgs__msg__RepeatingPeriodDayTypes__REPEATING_PERIOD_DAY_TYPES_EVEN_DAYS = 1ll
};

/// Constant 'REPEATING_PERIOD_DAY_TYPES_ODD_DAYS'.
enum
{
  v2x_msgs__msg__RepeatingPeriodDayTypes__REPEATING_PERIOD_DAY_TYPES_ODD_DAYS = 2ll
};

/// Constant 'REPEATING_PERIOD_DAY_TYPES_MARKET_DAY'.
enum
{
  v2x_msgs__msg__RepeatingPeriodDayTypes__REPEATING_PERIOD_DAY_TYPES_MARKET_DAY = 3ll
};

/// Struct defined in msg/RepeatingPeriodDayTypes in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RepeatingPeriodDayTypes
{
  int64_t repeating_period_day_types;
} v2x_msgs__msg__RepeatingPeriodDayTypes;

// Struct for a sequence of v2x_msgs__msg__RepeatingPeriodDayTypes.
typedef struct v2x_msgs__msg__RepeatingPeriodDayTypes__Sequence
{
  v2x_msgs__msg__RepeatingPeriodDayTypes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RepeatingPeriodDayTypes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REPEATING_PERIOD_DAY_TYPES__STRUCT_H_
