// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SpecialTransportType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SPECIAL_TRANSPORT_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SPECIAL_TRANSPORT_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPECIAL_TRANSPORT_TYPE_HEAVY_LOAD'.
enum
{
  v2x_msgs__msg__SpecialTransportType__SPECIAL_TRANSPORT_TYPE_HEAVY_LOAD = 0ll
};

/// Constant 'SPECIAL_TRANSPORT_TYPE_EXCESS_WIDTH'.
enum
{
  v2x_msgs__msg__SpecialTransportType__SPECIAL_TRANSPORT_TYPE_EXCESS_WIDTH = 1ll
};

/// Constant 'SPECIAL_TRANSPORT_TYPE_EXCESS_LENGTH'.
enum
{
  v2x_msgs__msg__SpecialTransportType__SPECIAL_TRANSPORT_TYPE_EXCESS_LENGTH = 2ll
};

/// Constant 'SPECIAL_TRANSPORT_TYPE_EXCESS_HEIGHT'.
enum
{
  v2x_msgs__msg__SpecialTransportType__SPECIAL_TRANSPORT_TYPE_EXCESS_HEIGHT = 3ll
};

/// Struct defined in msg/SpecialTransportType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SpecialTransportType
{
  int64_t special_transport_type;
} v2x_msgs__msg__SpecialTransportType;

// Struct for a sequence of v2x_msgs__msg__SpecialTransportType.
typedef struct v2x_msgs__msg__SpecialTransportType__Sequence
{
  v2x_msgs__msg__SpecialTransportType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SpecialTransportType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SPECIAL_TRANSPORT_TYPE__STRUCT_H_
