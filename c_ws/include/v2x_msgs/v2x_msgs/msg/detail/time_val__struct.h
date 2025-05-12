// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TimeVal.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TIME_VAL__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TIME_VAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SEC_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TimeVal__SEC_RANGE_MIN = -2147483648ll
};

/// Constant 'SEC_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TimeVal__SEC_RANGE_MAX = 2147483647ll
};

/// Constant 'USEC_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TimeVal__USEC_RANGE_MIN = -2147483648ll
};

/// Constant 'USEC_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TimeVal__USEC_RANGE_MAX = 2147483647ll
};

/// Struct defined in msg/TimeVal in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TimeVal
{
  int64_t sec;
  int64_t usec;
} v2x_msgs__msg__TimeVal;

// Struct for a sequence of v2x_msgs__msg__TimeVal.
typedef struct v2x_msgs__msg__TimeVal__Sequence
{
  v2x_msgs__msg__TimeVal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TimeVal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TIME_VAL__STRUCT_H_
