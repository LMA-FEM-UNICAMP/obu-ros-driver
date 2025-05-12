// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LayerType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LAYER_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LAYER_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LAYER_TYPE_NONE'.
enum
{
  v2x_msgs__msg__LayerType__LAYER_TYPE_NONE = 0ll
};

/// Constant 'LAYER_TYPE_MIXED_CONTENT'.
enum
{
  v2x_msgs__msg__LayerType__LAYER_TYPE_MIXED_CONTENT = 1ll
};

/// Constant 'LAYER_TYPE_GENERAL_MAP_DATA'.
enum
{
  v2x_msgs__msg__LayerType__LAYER_TYPE_GENERAL_MAP_DATA = 2ll
};

/// Constant 'LAYER_TYPE_INTERSECTION_DATA'.
enum
{
  v2x_msgs__msg__LayerType__LAYER_TYPE_INTERSECTION_DATA = 3ll
};

/// Constant 'LAYER_TYPE_CURVE_DATA'.
enum
{
  v2x_msgs__msg__LayerType__LAYER_TYPE_CURVE_DATA = 4ll
};

/// Constant 'LAYER_TYPE_ROADWAY_SECTION_DATA'.
enum
{
  v2x_msgs__msg__LayerType__LAYER_TYPE_ROADWAY_SECTION_DATA = 5ll
};

/// Constant 'LAYER_TYPE_PARKING_AREA_DATA'.
enum
{
  v2x_msgs__msg__LayerType__LAYER_TYPE_PARKING_AREA_DATA = 6ll
};

/// Constant 'LAYER_TYPE_SHARED_LANE_DATA'.
enum
{
  v2x_msgs__msg__LayerType__LAYER_TYPE_SHARED_LANE_DATA = 7ll
};

/// Struct defined in msg/LayerType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LayerType
{
  int64_t layer_type;
} v2x_msgs__msg__LayerType;

// Struct for a sequence of v2x_msgs__msg__LayerType.
typedef struct v2x_msgs__msg__LayerType__Sequence
{
  v2x_msgs__msg__LayerType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LayerType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LAYER_TYPE__STRUCT_H_
