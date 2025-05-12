// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LayoutContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LAYOUT_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LAYOUT_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LAYOUT_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LayoutContainer__LAYOUT_ID_RANGE_MIN = 1ll
};

/// Constant 'LAYOUT_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LayoutContainer__LAYOUT_ID_RANGE_MAX = 4ll
};

/// Constant 'HEIGHT_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LayoutContainer__HEIGHT_RANGE_MIN = 10ll
};

/// Constant 'HEIGHT_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LayoutContainer__HEIGHT_RANGE_MAX = 73ll
};

/// Constant 'WIDTH_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LayoutContainer__WIDTH_RANGE_MIN = 10ll
};

/// Constant 'WIDTH_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LayoutContainer__WIDTH_RANGE_MAX = 265ll
};

// Include directives for member types
// Member 'layout_components'
#include "v2x_msgs/msg/detail/layout_components__struct.h"

/// Struct defined in msg/LayoutContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LayoutContainer
{
  int64_t layout_id;
  /// Optional Field
  bool height_present;
  int64_t height;
  /// Optional Field
  bool width_present;
  int64_t width;
  v2x_msgs__msg__LayoutComponents layout_components;
} v2x_msgs__msg__LayoutContainer;

// Struct for a sequence of v2x_msgs__msg__LayoutContainer.
typedef struct v2x_msgs__msg__LayoutContainer__Sequence
{
  v2x_msgs__msg__LayoutContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LayoutContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LAYOUT_CONTAINER__STRUCT_H_
