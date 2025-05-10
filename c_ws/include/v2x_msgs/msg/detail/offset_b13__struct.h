// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/OffsetB13.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__OFFSET_B13__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__OFFSET_B13__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFFSET_B13_RANGE_MIN'.
enum
{
  v2x_msgs__msg__OffsetB13__OFFSET_B13_RANGE_MIN = -4096ll
};

/// Constant 'OFFSET_B13_RANGE_MAX'.
enum
{
  v2x_msgs__msg__OffsetB13__OFFSET_B13_RANGE_MAX = 4095ll
};

/// Struct defined in msg/OffsetB13 in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__OffsetB13
{
  int64_t offset_b13;
} v2x_msgs__msg__OffsetB13;

// Struct for a sequence of v2x_msgs__msg__OffsetB13.
typedef struct v2x_msgs__msg__OffsetB13__Sequence
{
  v2x_msgs__msg__OffsetB13 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__OffsetB13__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__OFFSET_B13__STRUCT_H_
