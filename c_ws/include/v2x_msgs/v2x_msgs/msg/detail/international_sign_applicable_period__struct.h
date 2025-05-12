// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/InternationalSignApplicablePeriod.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_APPLICABLE_PERIOD__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_APPLICABLE_PERIOD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'YEAR_RANGE_START_YEAR_RANGE_MIN'.
enum
{
  v2x_msgs__msg__InternationalSignApplicablePeriod__YEAR_RANGE_START_YEAR_RANGE_MIN = 2000ll
};

/// Constant 'YEAR_RANGE_START_YEAR_RANGE_MAX'.
enum
{
  v2x_msgs__msg__InternationalSignApplicablePeriod__YEAR_RANGE_START_YEAR_RANGE_MAX = 2127ll
};

/// Constant 'YEAR_RANGE_END_YEAR_RANGE_MIN'.
enum
{
  v2x_msgs__msg__InternationalSignApplicablePeriod__YEAR_RANGE_END_YEAR_RANGE_MIN = 2000ll
};

/// Constant 'YEAR_RANGE_END_YEAR_RANGE_MAX'.
enum
{
  v2x_msgs__msg__InternationalSignApplicablePeriod__YEAR_RANGE_END_YEAR_RANGE_MAX = 2127ll
};

// Include directives for member types
// Member 'date_range_start_month_day'
// Member 'date_range_end_month_day'
#include "v2x_msgs/msg/detail/month_day__struct.h"
// Member 'repeating_period_day_types'
#include "v2x_msgs/msg/detail/repeating_period_day_types__struct.h"
// Member 'time_range_start_time'
// Member 'time_range_end_time'
// Member 'duration_hour_minute'
#include "v2x_msgs/msg/detail/hours_minutes__struct.h"
// Member 'date_range_of_week'
#include "v2x_msgs/msg/detail/day_of_week__struct.h"

/// Struct defined in msg/InternationalSignApplicablePeriod in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__InternationalSignApplicablePeriod
{
  /// Added SEQUENCE OF adaptation
  int64_t year_range_start_year;
  int64_t year_range_end_year;
  v2x_msgs__msg__MonthDay date_range_start_month_day;
  v2x_msgs__msg__MonthDay date_range_end_month_day;
  /// Optional Field
  bool repeating_period_day_types_present;
  v2x_msgs__msg__RepeatingPeriodDayTypes repeating_period_day_types;
  v2x_msgs__msg__HoursMinutes time_range_start_time;
  v2x_msgs__msg__HoursMinutes time_range_end_time;
  /// Optional Field
  bool date_range_of_week_present;
  v2x_msgs__msg__DayOfWeek date_range_of_week;
  /// Optional Field
  bool duration_hour_minute_present;
  v2x_msgs__msg__HoursMinutes duration_hour_minute;
} v2x_msgs__msg__InternationalSignApplicablePeriod;

// Struct for a sequence of v2x_msgs__msg__InternationalSignApplicablePeriod.
typedef struct v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence
{
  v2x_msgs__msg__InternationalSignApplicablePeriod * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_APPLICABLE_PERIOD__STRUCT_H_
