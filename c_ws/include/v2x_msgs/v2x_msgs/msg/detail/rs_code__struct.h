// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RSCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RS_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RS_CODE__STRUCT_H_

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
  v2x_msgs__msg__RSCode__LAYOUT_COMPONENT_ID_RANGE_MIN = 1ll
};

/// Constant 'LAYOUT_COMPONENT_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__RSCode__LAYOUT_COMPONENT_ID_RANGE_MAX = 4ll
};

/// Constant 'CODE_NOTHING'.
enum
{
  v2x_msgs__msg__RSCode__CODE_NOTHING = 0ll
};

/// Constant 'CODE_VC_CODE'.
enum
{
  v2x_msgs__msg__RSCode__CODE_VC_CODE = 1ll
};

/// Constant 'CODE_ISO14823CODE'.
enum
{
  v2x_msgs__msg__RSCode__CODE_ISO14823CODE = 2ll
};

/// Constant 'CODE_ITIS_CODES'.
enum
{
  v2x_msgs__msg__RSCode__CODE_ITIS_CODES = 3ll
};

/// Constant 'CODE_ANY_CATALOGUE'.
enum
{
  v2x_msgs__msg__RSCode__CODE_ANY_CATALOGUE = 4ll
};

// Include directives for member types
// Member 'vienna_convention'
#include "v2x_msgs/msg/detail/vc_code__struct.h"
// Member 'iso14823'
#include "v2x_msgs/msg/detail/iso14823_code__struct.h"
// Member 'any_catalogue'
#include "v2x_msgs/msg/detail/any_catalogue__struct.h"

/// Struct defined in msg/RSCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RSCode
{
  /// Optional Field
  bool layout_component_id_present;
  int64_t layout_component_id;
  /// CHOICE! - Choose exactly of the containers
  int64_t code_container_select;
  /// container 1
  v2x_msgs__msg__VcCode vienna_convention;
  /// container 2
  v2x_msgs__msg__ISO14823Code iso14823;
  /// container 3
  int64_t itis_codes;
  /// container 4
  v2x_msgs__msg__AnyCatalogue any_catalogue;
} v2x_msgs__msg__RSCode;

// Struct for a sequence of v2x_msgs__msg__RSCode.
typedef struct v2x_msgs__msg__RSCode__Sequence
{
  v2x_msgs__msg__RSCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RSCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RS_CODE__STRUCT_H_
