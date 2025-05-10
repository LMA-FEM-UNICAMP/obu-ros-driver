// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LayoutComponent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LAYOUT_COMPONENT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LAYOUT_COMPONENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LAYOUT_COMPONENT_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LayoutComponent__LAYOUT_COMPONENT_ID_RANGE_MIN = 1ll
};

/// Constant 'LAYOUT_COMPONENT_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LayoutComponent__LAYOUT_COMPONENT_ID_RANGE_MAX = 8ll
};

/// Constant 'HEIGHT_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LayoutComponent__HEIGHT_RANGE_MIN = 10ll
};

/// Constant 'HEIGHT_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LayoutComponent__HEIGHT_RANGE_MAX = 73ll
};

/// Constant 'WIDTH_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LayoutComponent__WIDTH_RANGE_MIN = 10ll
};

/// Constant 'WIDTH_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LayoutComponent__WIDTH_RANGE_MAX = 265ll
};

/// Constant 'X_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LayoutComponent__X_RANGE_MIN = 10ll
};

/// Constant 'X_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LayoutComponent__X_RANGE_MAX = 265ll
};

/// Constant 'Y_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LayoutComponent__Y_RANGE_MIN = 10ll
};

/// Constant 'Y_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LayoutComponent__Y_RANGE_MAX = 73ll
};

/// Constant 'TEXT_SCRIPTING_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LayoutComponent__TEXT_SCRIPTING_RANGE_MIN = 0ll
};

/// Constant 'TEXT_SCRIPTING_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LayoutComponent__TEXT_SCRIPTING_RANGE_MAX = 1ll
};

/// Constant 'TEXT_SCRIPTING_HORIZONTAL'.
enum
{
  v2x_msgs__msg__LayoutComponent__TEXT_SCRIPTING_HORIZONTAL = 0ll
};

/// Constant 'TEXT_SCRIPTING_VERTICAL'.
enum
{
  v2x_msgs__msg__LayoutComponent__TEXT_SCRIPTING_VERTICAL = 1ll
};

/// Struct defined in msg/LayoutComponent in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LayoutComponent
{
  int64_t layout_component_id;
  int64_t height;
  int64_t width;
  int64_t x;
  int64_t y;
  int64_t text_scripting;
} v2x_msgs__msg__LayoutComponent;

// Struct for a sequence of v2x_msgs__msg__LayoutComponent.
typedef struct v2x_msgs__msg__LayoutComponent__Sequence
{
  v2x_msgs__msg__LayoutComponent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LayoutComponent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LAYOUT_COMPONENT__STRUCT_H_
