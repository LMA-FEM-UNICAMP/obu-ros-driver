// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AreaTypeInfo.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__AREA_TYPE_INFO__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__AREA_TYPE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DISTANCE_A_RANGE_MIN'.
enum
{
  v2x_msgs__msg__AreaTypeInfo__DISTANCE_A_RANGE_MIN = 0ll
};

/// Constant 'DISTANCE_A_RANGE_MAX'.
enum
{
  v2x_msgs__msg__AreaTypeInfo__DISTANCE_A_RANGE_MAX = 65535ll
};

/// Constant 'DISTANCE_B_RANGE_MIN'.
enum
{
  v2x_msgs__msg__AreaTypeInfo__DISTANCE_B_RANGE_MIN = 0ll
};

/// Constant 'DISTANCE_B_RANGE_MAX'.
enum
{
  v2x_msgs__msg__AreaTypeInfo__DISTANCE_B_RANGE_MAX = 65535ll
};

/// Constant 'ANGLE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__AreaTypeInfo__ANGLE_RANGE_MIN = 0ll
};

/// Constant 'ANGLE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__AreaTypeInfo__ANGLE_RANGE_MAX = 65535ll
};

// Include directives for member types
// Member 'type'
#include "v2x_msgs/msg/detail/area_type__struct.h"

/// Struct defined in msg/AreaTypeInfo in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AreaTypeInfo
{
  v2x_msgs__msg__AreaType type;
  int64_t distance_a;
  int64_t distance_b;
  int64_t angle;
} v2x_msgs__msg__AreaTypeInfo;

// Struct for a sequence of v2x_msgs__msg__AreaTypeInfo.
typedef struct v2x_msgs__msg__AreaTypeInfo__Sequence
{
  v2x_msgs__msg__AreaTypeInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AreaTypeInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__AREA_TYPE_INFO__STRUCT_H_
