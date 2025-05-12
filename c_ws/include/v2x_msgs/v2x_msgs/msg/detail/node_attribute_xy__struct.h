// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/NodeAttributeXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NODE_ATTRIBUTE_XY_RESERVED'.
enum
{
  v2x_msgs__msg__NodeAttributeXY__NODE_ATTRIBUTE_XY_RESERVED = 0ll
};

/// Constant 'NODE_ATTRIBUTE_XY_STOP_LINE'.
enum
{
  v2x_msgs__msg__NodeAttributeXY__NODE_ATTRIBUTE_XY_STOP_LINE = 1ll
};

/// Constant 'NODE_ATTRIBUTE_XY_ROUNDED_CAP_STYLE_A'.
enum
{
  v2x_msgs__msg__NodeAttributeXY__NODE_ATTRIBUTE_XY_ROUNDED_CAP_STYLE_A = 2ll
};

/// Constant 'NODE_ATTRIBUTE_XY_ROUNDED_CAP_STYLE_B'.
enum
{
  v2x_msgs__msg__NodeAttributeXY__NODE_ATTRIBUTE_XY_ROUNDED_CAP_STYLE_B = 3ll
};

/// Constant 'NODE_ATTRIBUTE_XY_MERGE_POINT'.
enum
{
  v2x_msgs__msg__NodeAttributeXY__NODE_ATTRIBUTE_XY_MERGE_POINT = 4ll
};

/// Constant 'NODE_ATTRIBUTE_XY_DIVERGE_POINT'.
enum
{
  v2x_msgs__msg__NodeAttributeXY__NODE_ATTRIBUTE_XY_DIVERGE_POINT = 5ll
};

/// Constant 'NODE_ATTRIBUTE_XY_DOWNSTREAM_STOP_LINE'.
enum
{
  v2x_msgs__msg__NodeAttributeXY__NODE_ATTRIBUTE_XY_DOWNSTREAM_STOP_LINE = 6ll
};

/// Constant 'NODE_ATTRIBUTE_XY_DOWNSTREAM_START_NODE'.
enum
{
  v2x_msgs__msg__NodeAttributeXY__NODE_ATTRIBUTE_XY_DOWNSTREAM_START_NODE = 7ll
};

/// Constant 'NODE_ATTRIBUTE_XY_CLOSED_TO_TRAFFIC'.
enum
{
  v2x_msgs__msg__NodeAttributeXY__NODE_ATTRIBUTE_XY_CLOSED_TO_TRAFFIC = 8ll
};

/// Constant 'NODE_ATTRIBUTE_XY_SAFE_ISLAND'.
enum
{
  v2x_msgs__msg__NodeAttributeXY__NODE_ATTRIBUTE_XY_SAFE_ISLAND = 9ll
};

/// Constant 'NODE_ATTRIBUTE_XY_CURB_PRESENT_AT_STEP_OFF'.
enum
{
  v2x_msgs__msg__NodeAttributeXY__NODE_ATTRIBUTE_XY_CURB_PRESENT_AT_STEP_OFF = 10ll
};

/// Constant 'NODE_ATTRIBUTE_XY_HYDRANT_PRESENT'.
enum
{
  v2x_msgs__msg__NodeAttributeXY__NODE_ATTRIBUTE_XY_HYDRANT_PRESENT = 11ll
};

/// Struct defined in msg/NodeAttributeXY in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__NodeAttributeXY
{
  int64_t node_attribute_xy;
} v2x_msgs__msg__NodeAttributeXY;

// Struct for a sequence of v2x_msgs__msg__NodeAttributeXY.
typedef struct v2x_msgs__msg__NodeAttributeXY__Sequence
{
  v2x_msgs__msg__NodeAttributeXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__NodeAttributeXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY__STRUCT_H_
