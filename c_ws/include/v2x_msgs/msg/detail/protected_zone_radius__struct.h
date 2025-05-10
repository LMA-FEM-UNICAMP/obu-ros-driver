// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ProtectedZoneRadius.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PROTECTED_ZONE_RADIUS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PROTECTED_ZONE_RADIUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PROTECTED_ZONE_RADIUS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ProtectedZoneRadius__PROTECTED_ZONE_RADIUS_RANGE_MIN = 1ll
};

/// Constant 'PROTECTED_ZONE_RADIUS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ProtectedZoneRadius__PROTECTED_ZONE_RADIUS_RANGE_MAX = 255ll
};

/// Constant 'PROTECTED_ZONE_RADIUS_ONE_METER'.
enum
{
  v2x_msgs__msg__ProtectedZoneRadius__PROTECTED_ZONE_RADIUS_ONE_METER = 1ll
};

/// Struct defined in msg/ProtectedZoneRadius in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ProtectedZoneRadius
{
  int64_t protected_zone_radius;
} v2x_msgs__msg__ProtectedZoneRadius;

// Struct for a sequence of v2x_msgs__msg__ProtectedZoneRadius.
typedef struct v2x_msgs__msg__ProtectedZoneRadius__Sequence
{
  v2x_msgs__msg__ProtectedZoneRadius * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ProtectedZoneRadius__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PROTECTED_ZONE_RADIUS__STRUCT_H_
