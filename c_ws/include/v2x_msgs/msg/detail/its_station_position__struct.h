// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ItsStationPosition.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ITS_STATION_POSITION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ITS_STATION_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'station_id'
#include "v2x_msgs/msg/detail/station_id__struct.h"
// Member 'lane_id'
#include "v2x_msgs/msg/detail/lane_id__struct.h"
// Member 'node_xy'
#include "v2x_msgs/msg/detail/node_offset_point_xy__struct.h"
// Member 'time_reference'
#include "v2x_msgs/msg/detail/time_reference__struct.h"

/// Struct defined in msg/ItsStationPosition in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ItsStationPosition
{
  v2x_msgs__msg__StationID station_id;
  /// Optional Field
  bool lane_id_present;
  v2x_msgs__msg__LaneID lane_id;
  /// Optional Field
  bool node_xy_present;
  v2x_msgs__msg__NodeOffsetPointXY node_xy;
  /// Optional Field
  bool time_reference_present;
  v2x_msgs__msg__TimeReference time_reference;
} v2x_msgs__msg__ItsStationPosition;

// Struct for a sequence of v2x_msgs__msg__ItsStationPosition.
typedef struct v2x_msgs__msg__ItsStationPosition__Sequence
{
  v2x_msgs__msg__ItsStationPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ItsStationPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ITS_STATION_POSITION__STRUCT_H_
