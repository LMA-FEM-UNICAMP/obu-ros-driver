// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ProtectedCommunicationZone.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PROTECTED_COMMUNICATION_ZONE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PROTECTED_COMMUNICATION_ZONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'protected_zone_type'
#include "v2x_msgs/msg/detail/protected_zone_type__struct.h"
// Member 'expiry_time'
#include "v2x_msgs/msg/detail/timestamp_its__struct.h"
// Member 'protected_zone_latitude'
#include "v2x_msgs/msg/detail/latitude__struct.h"
// Member 'protected_zone_longitude'
#include "v2x_msgs/msg/detail/longitude__struct.h"
// Member 'protected_zone_radius'
#include "v2x_msgs/msg/detail/protected_zone_radius__struct.h"
// Member 'protected_zone_id'
#include "v2x_msgs/msg/detail/protected_zone_id__struct.h"

/// Struct defined in msg/ProtectedCommunicationZone in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ProtectedCommunicationZone
{
  v2x_msgs__msg__ProtectedZoneType protected_zone_type;
  /// Optional Field
  bool expiry_time_present;
  v2x_msgs__msg__TimestampIts expiry_time;
  v2x_msgs__msg__Latitude protected_zone_latitude;
  v2x_msgs__msg__Longitude protected_zone_longitude;
  /// Optional Field
  bool protected_zone_radius_present;
  v2x_msgs__msg__ProtectedZoneRadius protected_zone_radius;
  /// Optional Field
  bool protected_zone_id_present;
  v2x_msgs__msg__ProtectedZoneID protected_zone_id;
} v2x_msgs__msg__ProtectedCommunicationZone;

// Struct for a sequence of v2x_msgs__msg__ProtectedCommunicationZone.
typedef struct v2x_msgs__msg__ProtectedCommunicationZone__Sequence
{
  v2x_msgs__msg__ProtectedCommunicationZone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ProtectedCommunicationZone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PROTECTED_COMMUNICATION_ZONE__STRUCT_H_
