// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EFCContextMark.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EFC_CONTEXT_MARK__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EFC_CONTEXT_MARK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONTEXT_VERSION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__EFCContextMark__CONTEXT_VERSION_RANGE_MIN = 0ll
};

/// Constant 'CONTEXT_VERSION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__EFCContextMark__CONTEXT_VERSION_RANGE_MAX = 127ll
};

// Include directives for member types
// Member 'contract_provider'
#include "v2x_msgs/msg/detail/provider__struct.h"
// Member 'type_of_contract'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/EFCContextMark in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EFCContextMark
{
  v2x_msgs__msg__Provider contract_provider;
  /// size(1..2)
  rosidl_runtime_c__int64__Sequence type_of_contract;
  int64_t context_version;
} v2x_msgs__msg__EFCContextMark;

// Struct for a sequence of v2x_msgs__msg__EFCContextMark.
typedef struct v2x_msgs__msg__EFCContextMark__Sequence
{
  v2x_msgs__msg__EFCContextMark * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EFCContextMark__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EFC_CONTEXT_MARK__STRUCT_H_
