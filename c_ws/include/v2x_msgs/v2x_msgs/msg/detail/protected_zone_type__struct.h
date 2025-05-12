// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ProtectedZoneType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PROTECTED_ZONE_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PROTECTED_ZONE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PROTECTED_ZONE_TYPE_PERMANENT_CEN_DSRC_TOLLING'.
enum
{
  v2x_msgs__msg__ProtectedZoneType__PROTECTED_ZONE_TYPE_PERMANENT_CEN_DSRC_TOLLING = 0ll
};

/// Constant 'PROTECTED_ZONE_TYPE_TEMPORARY_CEN_DSRC_TOLLING'.
enum
{
  v2x_msgs__msg__ProtectedZoneType__PROTECTED_ZONE_TYPE_TEMPORARY_CEN_DSRC_TOLLING = 1ll
};

/// Struct defined in msg/ProtectedZoneType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ProtectedZoneType
{
  int64_t protected_zone_type;
} v2x_msgs__msg__ProtectedZoneType;

// Struct for a sequence of v2x_msgs__msg__ProtectedZoneType.
typedef struct v2x_msgs__msg__ProtectedZoneType__Sequence
{
  v2x_msgs__msg__ProtectedZoneType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ProtectedZoneType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PROTECTED_ZONE_TYPE__STRUCT_H_
