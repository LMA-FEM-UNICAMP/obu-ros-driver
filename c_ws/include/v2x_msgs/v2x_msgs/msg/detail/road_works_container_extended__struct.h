// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RoadWorksContainerExtended.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ROAD_WORKS_CONTAINER_EXTENDED__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ROAD_WORKS_CONTAINER_EXTENDED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'light_bar_siren_in_use'
#include "v2x_msgs/msg/detail/light_bar_siren_in_use__struct.h"
// Member 'closed_lanes'
#include "v2x_msgs/msg/detail/closed_lanes__struct.h"
// Member 'restriction'
#include "v2x_msgs/msg/detail/restricted_types__struct.h"
// Member 'speed_limit'
#include "v2x_msgs/msg/detail/speed_limit__struct.h"
// Member 'incident_indication'
#include "v2x_msgs/msg/detail/cause_code__struct.h"
// Member 'recommended_path'
#include "v2x_msgs/msg/detail/itinerary_path__struct.h"
// Member 'starting_point_speed_limit'
#include "v2x_msgs/msg/detail/delta_reference_position__struct.h"
// Member 'traffic_flow_rule'
#include "v2x_msgs/msg/detail/traffic_rule__struct.h"
// Member 'reference_denms'
#include "v2x_msgs/msg/detail/reference_denms__struct.h"

/// Struct defined in msg/RoadWorksContainerExtended in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RoadWorksContainerExtended
{
  /// Optional Field
  bool light_bar_siren_in_use_present;
  v2x_msgs__msg__LightBarSirenInUse light_bar_siren_in_use;
  /// Optional Field
  bool closed_lanes_present;
  v2x_msgs__msg__ClosedLanes closed_lanes;
  /// Optional Field
  bool restriction_present;
  v2x_msgs__msg__RestrictedTypes restriction;
  /// Optional Field
  bool speed_limit_present;
  v2x_msgs__msg__SpeedLimit speed_limit;
  /// Optional Field
  bool incident_indication_present;
  v2x_msgs__msg__CauseCode incident_indication;
  /// Optional Field
  bool recommended_path_present;
  v2x_msgs__msg__ItineraryPath recommended_path;
  /// Optional Field
  bool starting_point_speed_limit_present;
  v2x_msgs__msg__DeltaReferencePosition starting_point_speed_limit;
  /// Optional Field
  bool traffic_flow_rule_present;
  v2x_msgs__msg__TrafficRule traffic_flow_rule;
  /// Optional Field
  bool reference_denms_present;
  v2x_msgs__msg__ReferenceDenms reference_denms;
} v2x_msgs__msg__RoadWorksContainerExtended;

// Struct for a sequence of v2x_msgs__msg__RoadWorksContainerExtended.
typedef struct v2x_msgs__msg__RoadWorksContainerExtended__Sequence
{
  v2x_msgs__msg__RoadWorksContainerExtended * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RoadWorksContainerExtended__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ROAD_WORKS_CONTAINER_EXTENDED__STRUCT_H_
