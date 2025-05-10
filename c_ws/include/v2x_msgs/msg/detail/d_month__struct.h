// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DMonth.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__D_MONTH__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__D_MONTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DMONTH_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DMonth__DMONTH_RANGE_MIN = 0ll
};

/// Constant 'DMONTH_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DMonth__DMONTH_RANGE_MAX = 12ll
};

/// Struct defined in msg/DMonth in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DMonth
{
  int64_t dmonth;
} v2x_msgs__msg__DMonth;

// Struct for a sequence of v2x_msgs__msg__DMonth.
typedef struct v2x_msgs__msg__DMonth__Sequence
{
  v2x_msgs__msg__DMonth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DMonth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__D_MONTH__STRUCT_H_
