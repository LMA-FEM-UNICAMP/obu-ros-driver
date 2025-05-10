// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneInformation.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_INFORMATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lane_number'
#include "v2x_msgs/msg/detail/lane_position__struct.h"
// Member 'direction'
#include "v2x_msgs/msg/detail/direction__struct.h"
// Member 'validity'
#include "v2x_msgs/msg/detail/international_sign_applicable_period__struct.h"
// Member 'lane_type'
#include "v2x_msgs/msg/detail/lane_type__struct.h"
// Member 'lane_type_qualifier'
#include "v2x_msgs/msg/detail/complete_vehicle_characteristics__struct.h"
// Member 'lane_status'
#include "v2x_msgs/msg/detail/lane_status__struct.h"
// Member 'lane_width'
#include "v2x_msgs/msg/detail/ivi_lane_width__struct.h"
// Member 'detection_zone_ids'
// Member 'relevance_zone_ids'
#include "v2x_msgs/msg/detail/zone_ids__struct.h"
// Member 'lane_characteristics'
#include "v2x_msgs/msg/detail/lane_characteristics__struct.h"
// Member 'lane_surface_static_characteristics'
#include "v2x_msgs/msg/detail/road_surface_static_characteristics__struct.h"
// Member 'lane_surface_dynamic_characteristics'
#include "v2x_msgs/msg/detail/road_surface_dynamic_characteristics__struct.h"

/// Struct defined in msg/LaneInformation in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__LaneInformation
{
  /// InternationalSignapplicablePeriod -> InternationalSignApplicablePeriod
  v2x_msgs__msg__LanePosition lane_number;
  v2x_msgs__msg__Direction direction;
  /// Optional Field
  bool validity_present;
  v2x_msgs__msg__InternationalSignApplicablePeriod validity;
  v2x_msgs__msg__LaneType lane_type;
  /// Optional Field
  bool lane_type_qualifier_present;
  v2x_msgs__msg__CompleteVehicleCharacteristics lane_type_qualifier;
  v2x_msgs__msg__LaneStatus lane_status;
  /// Optional Field
  bool lane_width_present;
  v2x_msgs__msg__IviLaneWidth lane_width;
  /// Optional Field
  bool detection_zone_ids_present;
  v2x_msgs__msg__ZoneIds detection_zone_ids;
  /// Optional Field
  bool relevance_zone_ids_present;
  v2x_msgs__msg__ZoneIds relevance_zone_ids;
  /// Optional Field
  bool lane_characteristics_present;
  v2x_msgs__msg__LaneCharacteristics lane_characteristics;
  /// Optional Field
  bool lane_surface_static_characteristics_present;
  v2x_msgs__msg__RoadSurfaceStaticCharacteristics lane_surface_static_characteristics;
  /// Optional Field
  bool lane_surface_dynamic_characteristics_present;
  v2x_msgs__msg__RoadSurfaceDynamicCharacteristics lane_surface_dynamic_characteristics;
} v2x_msgs__msg__LaneInformation;

// Struct for a sequence of v2x_msgs__msg__LaneInformation.
typedef struct v2x_msgs__msg__LaneInformation__Sequence
{
  v2x_msgs__msg__LaneInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_INFORMATION__STRUCT_H_
