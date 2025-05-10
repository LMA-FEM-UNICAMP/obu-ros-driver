// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SetStampedRq.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SET_STAMPED_RQ__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SET_STAMPED_RQ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'KEY_REF_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SetStampedRq__KEY_REF_RANGE_MIN = 0ll
};

/// Constant 'KEY_REF_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SetStampedRq__KEY_REF_RANGE_MAX = 255ll
};

// Include directives for member types
// Member 'attribute_list'
#include "v2x_msgs/msg/detail/attribute_list__struct.h"
// Member 'nonce'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SetStampedRq in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SetStampedRq
{
  v2x_msgs__msg__AttributeList attribute_list;
  rosidl_runtime_c__int64__Sequence nonce;
  int64_t key_ref;
} v2x_msgs__msg__SetStampedRq;

// Struct for a sequence of v2x_msgs__msg__SetStampedRq.
typedef struct v2x_msgs__msg__SetStampedRq__Sequence
{
  v2x_msgs__msg__SetStampedRq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SetStampedRq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SET_STAMPED_RQ__STRUCT_H_
