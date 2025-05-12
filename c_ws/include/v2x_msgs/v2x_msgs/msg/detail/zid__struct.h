// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Zid.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ZID__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ZID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ZID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__Zid__ZID_RANGE_MIN = 1ll
};

/// Constant 'ZID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__Zid__ZID_RANGE_MAX = 32ll
};

/// Struct defined in msg/Zid in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Zid
{
  int64_t zid;
} v2x_msgs__msg__Zid;

// Struct for a sequence of v2x_msgs__msg__Zid.
typedef struct v2x_msgs__msg__Zid__Sequence
{
  v2x_msgs__msg__Zid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Zid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ZID__STRUCT_H_
