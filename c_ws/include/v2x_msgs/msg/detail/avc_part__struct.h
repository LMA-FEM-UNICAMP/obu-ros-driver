// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AvcPart.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__AVC_PART__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__AVC_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'detection_zone_ids'
// Member 'relevance_zone_ids'
#include "v2x_msgs/msg/detail/zone_ids__struct.h"
// Member 'direction'
#include "v2x_msgs/msg/detail/direction__struct.h"
// Member 'applicable_lanes'
#include "v2x_msgs/msg/detail/lane_positions__struct.h"
// Member 'vehicle_characteristics'
#include "v2x_msgs/msg/detail/vehicle_characteristics_list__struct.h"
// Member 'automated_vehicle_rules'
#include "v2x_msgs/msg/detail/automated_vehicle_rules__struct.h"
// Member 'platooning_rules'
#include "v2x_msgs/msg/detail/platooning_rules__struct.h"

/// Struct defined in msg/AvcPart in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AvcPart
{
  /// Optional Field
  bool detection_zone_ids_present;
  v2x_msgs__msg__ZoneIds detection_zone_ids;
  v2x_msgs__msg__ZoneIds relevance_zone_ids;
  /// Optional Field
  bool direction_present;
  v2x_msgs__msg__Direction direction;
  /// Optional Field
  bool applicable_lanes_present;
  v2x_msgs__msg__LanePositions applicable_lanes;
  /// Optional Field
  bool vehicle_characteristics_present;
  v2x_msgs__msg__VehicleCharacteristicsList vehicle_characteristics;
  /// Optional Field
  bool automated_vehicle_rules_present;
  v2x_msgs__msg__AutomatedVehicleRules automated_vehicle_rules;
  /// Optional Field
  bool platooning_rules_present;
  v2x_msgs__msg__PlatooningRules platooning_rules;
} v2x_msgs__msg__AvcPart;

// Struct for a sequence of v2x_msgs__msg__AvcPart.
typedef struct v2x_msgs__msg__AvcPart__Sequence
{
  v2x_msgs__msg__AvcPart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AvcPart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__AVC_PART__STRUCT_H_
