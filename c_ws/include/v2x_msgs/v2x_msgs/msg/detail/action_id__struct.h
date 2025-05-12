// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ActionID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ACTION_ID__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ACTION_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'originating_station_id'
#include "v2x_msgs/msg/detail/station_id__struct.h"
// Member 'sequence_number'
#include "v2x_msgs/msg/detail/sequence_number__struct.h"

/// Struct defined in msg/ActionID in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ActionID
{
  v2x_msgs__msg__StationID originating_station_id;
  v2x_msgs__msg__SequenceNumber sequence_number;
} v2x_msgs__msg__ActionID;

// Struct for a sequence of v2x_msgs__msg__ActionID.
typedef struct v2x_msgs__msg__ActionID__Sequence
{
  v2x_msgs__msg__ActionID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ActionID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ACTION_ID__STRUCT_H_
