// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VcCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VC_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VC_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROAD_SIGN_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__VcCode__ROAD_SIGN_CODE_RANGE_MIN = 1ll
};

/// Constant 'ROAD_SIGN_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__VcCode__ROAD_SIGN_CODE_RANGE_MAX = 64ll
};

/// Constant 'VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__VcCode__VALUE_RANGE_MIN = 0ll
};

/// Constant 'VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__VcCode__VALUE_RANGE_MAX = 65535ll
};

// Include directives for member types
// Member 'road_sign_class'
#include "v2x_msgs/msg/detail/vc_class__struct.h"
// Member 'vc_option'
#include "v2x_msgs/msg/detail/vc_option__struct.h"
// Member 'validity'
#include "v2x_msgs/msg/detail/validity_periods__struct.h"
// Member 'unit'
#include "v2x_msgs/msg/detail/rsc_unit__struct.h"

/// Struct defined in msg/VcCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VcCode
{
  v2x_msgs__msg__VcClass road_sign_class;
  int64_t road_sign_code;
  v2x_msgs__msg__VcOption vc_option;
  /// Optional Field
  bool validity_present;
  v2x_msgs__msg__ValidityPeriods validity;
  /// Optional Field
  bool value_present;
  int64_t value;
  /// Optional Field
  bool unit_present;
  v2x_msgs__msg__RSCUnit unit;
} v2x_msgs__msg__VcCode;

// Struct for a sequence of v2x_msgs__msg__VcCode.
typedef struct v2x_msgs__msg__VcCode__Sequence
{
  v2x_msgs__msg__VcCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VcCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VC_CODE__STRUCT_H_
