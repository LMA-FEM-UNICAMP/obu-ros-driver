// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/OffsetB09.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__OFFSET_B09__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__OFFSET_B09__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFFSET_B09_RANGE_MIN'.
enum
{
  v2x_msgs__msg__OffsetB09__OFFSET_B09_RANGE_MIN = -256ll
};

/// Constant 'OFFSET_B09_RANGE_MAX'.
enum
{
  v2x_msgs__msg__OffsetB09__OFFSET_B09_RANGE_MAX = 255ll
};

/// Struct defined in msg/OffsetB09 in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__OffsetB09
{
  int64_t offset_b09;
} v2x_msgs__msg__OffsetB09;

// Struct for a sequence of v2x_msgs__msg__OffsetB09.
typedef struct v2x_msgs__msg__OffsetB09__Sequence
{
  v2x_msgs__msg__OffsetB09 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__OffsetB09__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__OFFSET_B09__STRUCT_H_
