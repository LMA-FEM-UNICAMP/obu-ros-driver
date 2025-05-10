// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VcClass.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VC_CLASS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VC_CLASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VC_CLASS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__VcClass__VC_CLASS_RANGE_MIN = 0ll
};

/// Constant 'VC_CLASS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__VcClass__VC_CLASS_RANGE_MAX = 7ll
};

/// Constant 'VC_CLASS_CLASS_A'.
enum
{
  v2x_msgs__msg__VcClass__VC_CLASS_CLASS_A = 0ll
};

/// Constant 'VC_CLASS_CLASS_B'.
enum
{
  v2x_msgs__msg__VcClass__VC_CLASS_CLASS_B = 1ll
};

/// Constant 'VC_CLASS_CLASS_C'.
enum
{
  v2x_msgs__msg__VcClass__VC_CLASS_CLASS_C = 2ll
};

/// Constant 'VC_CLASS_CLASS_D'.
enum
{
  v2x_msgs__msg__VcClass__VC_CLASS_CLASS_D = 3ll
};

/// Constant 'VC_CLASS_CLASS_E'.
enum
{
  v2x_msgs__msg__VcClass__VC_CLASS_CLASS_E = 4ll
};

/// Constant 'VC_CLASS_CLASS_F'.
enum
{
  v2x_msgs__msg__VcClass__VC_CLASS_CLASS_F = 5ll
};

/// Constant 'VC_CLASS_CLASS_G'.
enum
{
  v2x_msgs__msg__VcClass__VC_CLASS_CLASS_G = 6ll
};

/// Constant 'VC_CLASS_CLASS_H'.
enum
{
  v2x_msgs__msg__VcClass__VC_CLASS_CLASS_H = 7ll
};

/// Struct defined in msg/VcClass in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VcClass
{
  int64_t vc_class;
} v2x_msgs__msg__VcClass;

// Struct for a sequence of v2x_msgs__msg__VcClass.
typedef struct v2x_msgs__msg__VcClass__Sequence
{
  v2x_msgs__msg__VcClass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VcClass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VC_CLASS__STRUCT_H_
