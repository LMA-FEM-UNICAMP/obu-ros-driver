// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AlacarteContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ALACARTE_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ALACARTE_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lane_position'
#include "v2x_msgs/msg/detail/lane_position__struct.h"
// Member 'impact_reduction'
#include "v2x_msgs/msg/detail/impact_reduction_container__struct.h"
// Member 'external_temperature'
#include "v2x_msgs/msg/detail/temperature__struct.h"
// Member 'road_works'
#include "v2x_msgs/msg/detail/road_works_container_extended__struct.h"
// Member 'positioning_solution'
#include "v2x_msgs/msg/detail/positioning_solution_type__struct.h"
// Member 'stationary_vehicle'
#include "v2x_msgs/msg/detail/stationary_vehicle_container__struct.h"

/// Struct defined in msg/AlacarteContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AlacarteContainer
{
  /// Optional Field
  bool lane_position_present;
  v2x_msgs__msg__LanePosition lane_position;
  /// Optional Field
  bool impact_reduction_present;
  v2x_msgs__msg__ImpactReductionContainer impact_reduction;
  /// Optional Field
  bool external_temperature_present;
  v2x_msgs__msg__Temperature external_temperature;
  /// Optional Field
  bool road_works_present;
  v2x_msgs__msg__RoadWorksContainerExtended road_works;
  /// Optional Field
  bool positioning_solution_present;
  v2x_msgs__msg__PositioningSolutionType positioning_solution;
  /// Optional Field
  bool stationary_vehicle_present;
  v2x_msgs__msg__StationaryVehicleContainer stationary_vehicle;
} v2x_msgs__msg__AlacarteContainer;

// Struct for a sequence of v2x_msgs__msg__AlacarteContainer.
typedef struct v2x_msgs__msg__AlacarteContainer__Sequence
{
  v2x_msgs__msg__AlacarteContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AlacarteContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ALACARTE_CONTAINER__STRUCT_H_
