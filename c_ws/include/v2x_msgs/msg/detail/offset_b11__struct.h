// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/OffsetB11.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__OFFSET_B11__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__OFFSET_B11__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFFSET_B11_RANGE_MIN'.
enum
{
  v2x_msgs__msg__OffsetB11__OFFSET_B11_RANGE_MIN = -1024ll
};

/// Constant 'OFFSET_B11_RANGE_MAX'.
enum
{
  v2x_msgs__msg__OffsetB11__OFFSET_B11_RANGE_MAX = 1023ll
};

/// Struct defined in msg/OffsetB11 in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__OffsetB11
{
  int64_t offset_b11;
} v2x_msgs__msg__OffsetB11;

// Struct for a sequence of v2x_msgs__msg__OffsetB11.
typedef struct v2x_msgs__msg__OffsetB11__Sequence
{
  v2x_msgs__msg__OffsetB11 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__OffsetB11__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__OFFSET_B11__STRUCT_H_
