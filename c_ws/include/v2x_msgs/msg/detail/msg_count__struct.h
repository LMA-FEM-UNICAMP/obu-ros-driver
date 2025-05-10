// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MsgCount.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MSG_COUNT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MSG_COUNT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MSG_COUNT_RANGE_MIN'.
enum
{
  v2x_msgs__msg__MsgCount__MSG_COUNT_RANGE_MIN = 0ll
};

/// Constant 'MSG_COUNT_RANGE_MAX'.
enum
{
  v2x_msgs__msg__MsgCount__MSG_COUNT_RANGE_MAX = 127ll
};

/// Struct defined in msg/MsgCount in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MsgCount
{
  int64_t msg_count;
} v2x_msgs__msg__MsgCount;

// Struct for a sequence of v2x_msgs__msg__MsgCount.
typedef struct v2x_msgs__msg__MsgCount__Sequence
{
  v2x_msgs__msg__MsgCount * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MsgCount__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MSG_COUNT__STRUCT_H_
