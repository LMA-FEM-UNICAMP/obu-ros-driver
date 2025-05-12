// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DrivenLineOffsetSm.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DRIVEN_LINE_OFFSET_SM__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DRIVEN_LINE_OFFSET_SM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DRIVEN_LINE_OFFSET_SM_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DrivenLineOffsetSm__DRIVEN_LINE_OFFSET_SM_RANGE_MIN = -2047ll
};

/// Constant 'DRIVEN_LINE_OFFSET_SM_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DrivenLineOffsetSm__DRIVEN_LINE_OFFSET_SM_RANGE_MAX = 2047ll
};

/// Struct defined in msg/DrivenLineOffsetSm in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DrivenLineOffsetSm
{
  int64_t driven_line_offset_sm;
} v2x_msgs__msg__DrivenLineOffsetSm;

// Struct for a sequence of v2x_msgs__msg__DrivenLineOffsetSm.
typedef struct v2x_msgs__msg__DrivenLineOffsetSm__Sequence
{
  v2x_msgs__msg__DrivenLineOffsetSm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DrivenLineOffsetSm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DRIVEN_LINE_OFFSET_SM__STRUCT_H_
