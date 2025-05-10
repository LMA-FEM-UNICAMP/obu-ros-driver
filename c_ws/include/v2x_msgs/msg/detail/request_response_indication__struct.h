// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RequestResponseIndication.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REQUEST_RESPONSE_INDICATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__REQUEST_RESPONSE_INDICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REQUEST_RESPONSE_INDICATION_REQUEST'.
enum
{
  v2x_msgs__msg__RequestResponseIndication__REQUEST_RESPONSE_INDICATION_REQUEST = 0ll
};

/// Constant 'REQUEST_RESPONSE_INDICATION_RESPONSE'.
enum
{
  v2x_msgs__msg__RequestResponseIndication__REQUEST_RESPONSE_INDICATION_RESPONSE = 1ll
};

/// Struct defined in msg/RequestResponseIndication in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RequestResponseIndication
{
  int64_t request_response_indication;
} v2x_msgs__msg__RequestResponseIndication;

// Struct for a sequence of v2x_msgs__msg__RequestResponseIndication.
typedef struct v2x_msgs__msg__RequestResponseIndication__Sequence
{
  v2x_msgs__msg__RequestResponseIndication * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RequestResponseIndication__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REQUEST_RESPONSE_INDICATION__STRUCT_H_
