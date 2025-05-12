// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/HitchPointOffset.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__HITCH_POINT_OFFSET__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__HITCH_POINT_OFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HITCH_POINT_OFFSET_RANGE_MIN'.
enum
{
  v2x_msgs__msg__HitchPointOffset__HITCH_POINT_OFFSET_RANGE_MIN = 0ll
};

/// Constant 'HITCH_POINT_OFFSET_RANGE_MAX'.
enum
{
  v2x_msgs__msg__HitchPointOffset__HITCH_POINT_OFFSET_RANGE_MAX = 100ll
};

/// Constant 'HITCH_POINT_OFFSET_ZERO_POINT_ONE_METER'.
enum
{
  v2x_msgs__msg__HitchPointOffset__HITCH_POINT_OFFSET_ZERO_POINT_ONE_METER = 1ll
};

/// Constant 'HITCH_POINT_OFFSET_ONE_METER'.
enum
{
  v2x_msgs__msg__HitchPointOffset__HITCH_POINT_OFFSET_ONE_METER = 10ll
};

/// Struct defined in msg/HitchPointOffset in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__HitchPointOffset
{
  int64_t hitch_point_offset;
} v2x_msgs__msg__HitchPointOffset;

// Struct for a sequence of v2x_msgs__msg__HitchPointOffset.
typedef struct v2x_msgs__msg__HitchPointOffset__Sequence
{
  v2x_msgs__msg__HitchPointOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__HitchPointOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__HITCH_POINT_OFFSET__STRUCT_H_
