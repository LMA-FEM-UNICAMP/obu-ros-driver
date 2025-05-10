// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EncapType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ENCAP_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ENCAP_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ENCAP_TYPE_UNSECURE'.
enum
{
  v2x_msgs__msg__EncapType__ENCAP_TYPE_UNSECURE = 0ll
};

/// Constant 'ENCAP_TYPE_SIGNED'.
enum
{
  v2x_msgs__msg__EncapType__ENCAP_TYPE_SIGNED = 1ll
};

/// Struct defined in msg/EncapType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EncapType
{
  int64_t encap_type;
} v2x_msgs__msg__EncapType;

// Struct for a sequence of v2x_msgs__msg__EncapType.
typedef struct v2x_msgs__msg__EncapType__Sequence
{
  v2x_msgs__msg__EncapType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EncapType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ENCAP_TYPE__STRUCT_H_
