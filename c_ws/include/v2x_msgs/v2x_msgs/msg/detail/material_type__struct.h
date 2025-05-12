// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MaterialType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MATERIAL_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MATERIAL_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MATERIAL_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__MaterialType__MATERIAL_TYPE_RANGE_MIN = 0ll
};

/// Constant 'MATERIAL_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__MaterialType__MATERIAL_TYPE_RANGE_MAX = 7ll
};

/// Constant 'MATERIAL_TYPE_ASPHALT'.
enum
{
  v2x_msgs__msg__MaterialType__MATERIAL_TYPE_ASPHALT = 0ll
};

/// Constant 'MATERIAL_TYPE_CONCRETE'.
enum
{
  v2x_msgs__msg__MaterialType__MATERIAL_TYPE_CONCRETE = 1ll
};

/// Constant 'MATERIAL_TYPE_COBBLESTONE'.
enum
{
  v2x_msgs__msg__MaterialType__MATERIAL_TYPE_COBBLESTONE = 2ll
};

/// Constant 'MATERIAL_TYPE_GRAVEL'.
enum
{
  v2x_msgs__msg__MaterialType__MATERIAL_TYPE_GRAVEL = 3ll
};

/// Constant 'MATERIAL_TYPE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__MaterialType__MATERIAL_TYPE_UNAVAILABLE = 7ll
};

/// Struct defined in msg/MaterialType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MaterialType
{
  int64_t material_type;
} v2x_msgs__msg__MaterialType;

// Struct for a sequence of v2x_msgs__msg__MaterialType.
typedef struct v2x_msgs__msg__MaterialType__Sequence
{
  v2x_msgs__msg__MaterialType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MaterialType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MATERIAL_TYPE__STRUCT_H_
