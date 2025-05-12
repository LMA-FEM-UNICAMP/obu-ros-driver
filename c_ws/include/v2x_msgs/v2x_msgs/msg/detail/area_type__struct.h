// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AreaType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__AREA_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__AREA_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AREA_TYPE_CIRCLE'.
enum
{
  v2x_msgs__msg__AreaType__AREA_TYPE_CIRCLE = 0ll
};

/// Constant 'AREA_TYPE_RECTANGLE'.
enum
{
  v2x_msgs__msg__AreaType__AREA_TYPE_RECTANGLE = 1ll
};

/// Constant 'AREA_TYPE_ELLIPSE'.
enum
{
  v2x_msgs__msg__AreaType__AREA_TYPE_ELLIPSE = 2ll
};

/// Struct defined in msg/AreaType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AreaType
{
  int64_t area_type;
} v2x_msgs__msg__AreaType;

// Struct for a sequence of v2x_msgs__msg__AreaType.
typedef struct v2x_msgs__msg__AreaType__Sequence
{
  v2x_msgs__msg__AreaType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AreaType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__AREA_TYPE__STRUCT_H_
