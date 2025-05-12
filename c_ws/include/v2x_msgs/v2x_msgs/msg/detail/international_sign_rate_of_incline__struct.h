// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/InternationalSignRateOfIncline.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_RATE_OF_INCLINE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_RATE_OF_INCLINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INTERNATIONAL_SIGN_RATE_OF_INCLINE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__InternationalSignRateOfIncline__INTERNATIONAL_SIGN_RATE_OF_INCLINE_RANGE_MIN = 1ll
};

/// Constant 'INTERNATIONAL_SIGN_RATE_OF_INCLINE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__InternationalSignRateOfIncline__INTERNATIONAL_SIGN_RATE_OF_INCLINE_RANGE_MAX = 32ll
};

/// Struct defined in msg/InternationalSignRateOfIncline in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__InternationalSignRateOfIncline
{
  int64_t international_sign_rate_of_incline;
} v2x_msgs__msg__InternationalSignRateOfIncline;

// Struct for a sequence of v2x_msgs__msg__InternationalSignRateOfIncline.
typedef struct v2x_msgs__msg__InternationalSignRateOfIncline__Sequence
{
  v2x_msgs__msg__InternationalSignRateOfIncline * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__InternationalSignRateOfIncline__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_RATE_OF_INCLINE__STRUCT_H_
