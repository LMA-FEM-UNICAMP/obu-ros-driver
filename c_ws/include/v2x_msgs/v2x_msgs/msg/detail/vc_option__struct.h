// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VcOption.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VC_OPTION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VC_OPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VC_OPTION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__VcOption__VC_OPTION_RANGE_MIN = 0ll
};

/// Constant 'VC_OPTION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__VcOption__VC_OPTION_RANGE_MAX = 7ll
};

/// Constant 'VC_OPTION_NONE'.
enum
{
  v2x_msgs__msg__VcOption__VC_OPTION_NONE = 0ll
};

/// Constant 'VC_OPTION_A'.
enum
{
  v2x_msgs__msg__VcOption__VC_OPTION_A = 1ll
};

/// Constant 'VC_OPTION_B'.
enum
{
  v2x_msgs__msg__VcOption__VC_OPTION_B = 2ll
};

/// Constant 'VC_OPTION_C'.
enum
{
  v2x_msgs__msg__VcOption__VC_OPTION_C = 3ll
};

/// Constant 'VC_OPTION_D'.
enum
{
  v2x_msgs__msg__VcOption__VC_OPTION_D = 4ll
};

/// Constant 'VC_OPTION_E'.
enum
{
  v2x_msgs__msg__VcOption__VC_OPTION_E = 5ll
};

/// Constant 'VC_OPTION_F'.
enum
{
  v2x_msgs__msg__VcOption__VC_OPTION_F = 6ll
};

/// Constant 'VC_OPTION_G'.
enum
{
  v2x_msgs__msg__VcOption__VC_OPTION_G = 7ll
};

/// Struct defined in msg/VcOption in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VcOption
{
  int64_t vc_option;
} v2x_msgs__msg__VcOption;

// Struct for a sequence of v2x_msgs__msg__VcOption.
typedef struct v2x_msgs__msg__VcOption__Sequence
{
  v2x_msgs__msg__VcOption * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VcOption__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VC_OPTION__STRUCT_H_
