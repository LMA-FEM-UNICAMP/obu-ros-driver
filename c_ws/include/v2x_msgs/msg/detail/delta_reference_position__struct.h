// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DeltaReferencePosition.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'delta_latitude'
#include "v2x_msgs/msg/detail/delta_latitude__struct.h"
// Member 'delta_longitude'
#include "v2x_msgs/msg/detail/delta_longitude__struct.h"
// Member 'delta_altitude'
#include "v2x_msgs/msg/detail/delta_altitude__struct.h"

/// Struct defined in msg/DeltaReferencePosition in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DeltaReferencePosition
{
  v2x_msgs__msg__DeltaLatitude delta_latitude;
  v2x_msgs__msg__DeltaLongitude delta_longitude;
  v2x_msgs__msg__DeltaAltitude delta_altitude;
} v2x_msgs__msg__DeltaReferencePosition;

// Struct for a sequence of v2x_msgs__msg__DeltaReferencePosition.
typedef struct v2x_msgs__msg__DeltaReferencePosition__Sequence
{
  v2x_msgs__msg__DeltaReferencePosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DeltaReferencePosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITION__STRUCT_H_
