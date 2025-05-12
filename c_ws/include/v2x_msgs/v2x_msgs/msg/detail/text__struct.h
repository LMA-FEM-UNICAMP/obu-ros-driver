// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Text.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TEXT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TEXT__STRUCT_H_

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
  v2x_msgs__msg__Text__LAYOUT_COMPONENT_ID_RANGE_MIN = 1ll
};

/// Constant 'LAYOUT_COMPONENT_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__Text__LAYOUT_COMPONENT_ID_RANGE_MAX = 4ll
};

// Include directives for member types
// Member 'text_content'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Text in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Text
{
  /// Optional Field
  bool layout_component_id_present;
  int64_t layout_component_id;
  int64_t language;
  rosidl_runtime_c__String text_content;
} v2x_msgs__msg__Text;

// Struct for a sequence of v2x_msgs__msg__Text.
typedef struct v2x_msgs__msg__Text__Sequence
{
  v2x_msgs__msg__Text * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Text__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TEXT__STRUCT_H_
