// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DrivenLineOffsetLg.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DRIVEN_LINE_OFFSET_LG__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DRIVEN_LINE_OFFSET_LG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DRIVEN_LINE_OFFSET_LG_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DrivenLineOffsetLg__DRIVEN_LINE_OFFSET_LG_RANGE_MIN = -32767ll
};

/// Constant 'DRIVEN_LINE_OFFSET_LG_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DrivenLineOffsetLg__DRIVEN_LINE_OFFSET_LG_RANGE_MAX = 32767ll
};

/// Struct defined in msg/DrivenLineOffsetLg in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DrivenLineOffsetLg
{
  int64_t driven_line_offset_lg;
} v2x_msgs__msg__DrivenLineOffsetLg;

// Struct for a sequence of v2x_msgs__msg__DrivenLineOffsetLg.
typedef struct v2x_msgs__msg__DrivenLineOffsetLg__Sequence
{
  v2x_msgs__msg__DrivenLineOffsetLg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DrivenLineOffsetLg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DRIVEN_LINE_OFFSET_LG__STRUCT_H_
