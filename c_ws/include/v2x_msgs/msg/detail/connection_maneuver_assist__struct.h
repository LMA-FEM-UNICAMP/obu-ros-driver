// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'connection_id'
#include "v2x_msgs/msg/detail/lane_connection_id__struct.h"
// Member 'queue_length'
// Member 'available_storage_length'
#include "v2x_msgs/msg/detail/zone_length__struct.h"
// Member 'wait_on_stop'
#include "v2x_msgs/msg/detail/wait_on_stopline__struct.h"
// Member 'ped_bicycle_detect'
#include "v2x_msgs/msg/detail/pedestrian_bicycle_detect__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/connection__struct.h"

/// Struct defined in msg/ConnectionManeuverAssist in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__ConnectionManeuverAssist
{
  /// Removed Reg in front of Connection[], because parser adds Reg in front of identifier if regional is variable name
  v2x_msgs__msg__LaneConnectionID connection_id;
  /// Optional Field
  bool queue_length_present;
  v2x_msgs__msg__ZoneLength queue_length;
  /// Optional Field
  bool available_storage_length_present;
  v2x_msgs__msg__ZoneLength available_storage_length;
  /// Optional Field
  bool wait_on_stop_present;
  v2x_msgs__msg__WaitOnStopline wait_on_stop;
  /// Optional Field
  bool ped_bicycle_detect_present;
  v2x_msgs__msg__PedestrianBicycleDetect ped_bicycle_detect;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__Connection__Sequence regional;
} v2x_msgs__msg__ConnectionManeuverAssist;

// Struct for a sequence of v2x_msgs__msg__ConnectionManeuverAssist.
typedef struct v2x_msgs__msg__ConnectionManeuverAssist__Sequence
{
  v2x_msgs__msg__ConnectionManeuverAssist * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ConnectionManeuverAssist__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_H_
