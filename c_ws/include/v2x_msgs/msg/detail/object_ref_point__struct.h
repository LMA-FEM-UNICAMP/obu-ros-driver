// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ObjectRefPoint.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__OBJECT_REF_POINT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__OBJECT_REF_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OBJECT_REF_POINT_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ObjectRefPoint__OBJECT_REF_POINT_RANGE_MIN = 0ll
};

/// Constant 'OBJECT_REF_POINT_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ObjectRefPoint__OBJECT_REF_POINT_RANGE_MAX = 8ll
};

/// Constant 'OBJECT_REF_POINT_MID'.
enum
{
  v2x_msgs__msg__ObjectRefPoint__OBJECT_REF_POINT_MID = 0ll
};

/// Constant 'OBJECT_REF_POINT_BOTTOM_LEFT'.
enum
{
  v2x_msgs__msg__ObjectRefPoint__OBJECT_REF_POINT_BOTTOM_LEFT = 1ll
};

/// Constant 'OBJECT_REF_POINT_MID_LEFT'.
enum
{
  v2x_msgs__msg__ObjectRefPoint__OBJECT_REF_POINT_MID_LEFT = 2ll
};

/// Constant 'OBJECT_REF_POINT_TOP_LEFT'.
enum
{
  v2x_msgs__msg__ObjectRefPoint__OBJECT_REF_POINT_TOP_LEFT = 3ll
};

/// Constant 'OBJECT_REF_POINT_BOTTOM_MID'.
enum
{
  v2x_msgs__msg__ObjectRefPoint__OBJECT_REF_POINT_BOTTOM_MID = 4ll
};

/// Constant 'OBJECT_REF_POINT_TOP_MID'.
enum
{
  v2x_msgs__msg__ObjectRefPoint__OBJECT_REF_POINT_TOP_MID = 5ll
};

/// Constant 'OBJECT_REF_POINT_BOTTOM_RIGHT'.
enum
{
  v2x_msgs__msg__ObjectRefPoint__OBJECT_REF_POINT_BOTTOM_RIGHT = 6ll
};

/// Constant 'OBJECT_REF_POINT_MID_RIGHT'.
enum
{
  v2x_msgs__msg__ObjectRefPoint__OBJECT_REF_POINT_MID_RIGHT = 7ll
};

/// Constant 'OBJECT_REF_POINT_TOP_RIGHT'.
enum
{
  v2x_msgs__msg__ObjectRefPoint__OBJECT_REF_POINT_TOP_RIGHT = 8ll
};

/// Struct defined in msg/ObjectRefPoint in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ObjectRefPoint
{
  int64_t object_ref_point;
} v2x_msgs__msg__ObjectRefPoint;

// Struct for a sequence of v2x_msgs__msg__ObjectRefPoint.
typedef struct v2x_msgs__msg__ObjectRefPoint__Sequence
{
  v2x_msgs__msg__ObjectRefPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ObjectRefPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__OBJECT_REF_POINT__STRUCT_H_
