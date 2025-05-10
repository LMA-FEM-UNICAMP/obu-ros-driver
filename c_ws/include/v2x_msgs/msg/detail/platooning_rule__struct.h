// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PlatooningRule.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PLATOONING_RULE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PLATOONING_RULE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'priority'
#include "v2x_msgs/msg/detail/priority_level__struct.h"
// Member 'allowed_sae_automation_levels'
#include "v2x_msgs/msg/detail/sae_automation_levels__struct.h"
// Member 'max_no_of_vehicles'
#include "v2x_msgs/msg/detail/max_no_of_vehicles__struct.h"
// Member 'max_lenght_of_platoon'
#include "v2x_msgs/msg/detail/max_lenght_of_platoon__struct.h"
// Member 'min_gap_between_vehicles'
#include "v2x_msgs/msg/detail/gap_between_vehicles__struct.h"
// Member 'platoon_max_speed_limit'
// Member 'platoon_min_speed_limit'
// Member 'platoon_speed_recommendation'
#include "v2x_msgs/msg/detail/speed_value__struct.h"
// Member 'road_sign_codes'
#include "v2x_msgs/msg/detail/road_sign_codes__struct.h"
// Member 'extra_text'
#include "v2x_msgs/msg/detail/constraint_text_lines2__struct.h"

/// Struct defined in msg/PlatooningRule in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PlatooningRule
{
  v2x_msgs__msg__PriorityLevel priority;
  v2x_msgs__msg__SaeAutomationLevels allowed_sae_automation_levels;
  /// Optional Field
  bool max_no_of_vehicles_present;
  v2x_msgs__msg__MaxNoOfVehicles max_no_of_vehicles;
  /// Optional Field
  bool max_lenght_of_platoon_present;
  v2x_msgs__msg__MaxLenghtOfPlatoon max_lenght_of_platoon;
  /// Optional Field
  bool min_gap_between_vehicles_present;
  v2x_msgs__msg__GapBetweenVehicles min_gap_between_vehicles;
  /// Optional Field
  bool platoon_max_speed_limit_present;
  v2x_msgs__msg__SpeedValue platoon_max_speed_limit;
  /// Optional Field
  bool platoon_min_speed_limit_present;
  v2x_msgs__msg__SpeedValue platoon_min_speed_limit;
  /// Optional Field
  bool platoon_speed_recommendation_present;
  v2x_msgs__msg__SpeedValue platoon_speed_recommendation;
  /// Optional Field
  bool road_sign_codes_present;
  v2x_msgs__msg__RoadSignCodes road_sign_codes;
  /// Optional Field
  bool extra_text_present;
  v2x_msgs__msg__ConstraintTextLines2 extra_text;
} v2x_msgs__msg__PlatooningRule;

// Struct for a sequence of v2x_msgs__msg__PlatooningRule.
typedef struct v2x_msgs__msg__PlatooningRule__Sequence
{
  v2x_msgs__msg__PlatooningRule * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PlatooningRule__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PLATOONING_RULE__STRUCT_H_
