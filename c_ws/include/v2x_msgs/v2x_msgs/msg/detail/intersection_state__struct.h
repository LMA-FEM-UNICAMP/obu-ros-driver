// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "v2x_msgs/msg/detail/descriptive_name__struct.h"
// Member 'id'
#include "v2x_msgs/msg/detail/intersection_reference_id__struct.h"
// Member 'revision'
#include "v2x_msgs/msg/detail/msg_count__struct.h"
// Member 'status'
#include "v2x_msgs/msg/detail/intersection_status_object__struct.h"
// Member 'moy'
#include "v2x_msgs/msg/detail/minute_of_the_year__struct.h"
// Member 'time_stamp'
#include "v2x_msgs/msg/detail/d_second__struct.h"
// Member 'enabled_lanes'
#include "v2x_msgs/msg/detail/enabled_lane_list__struct.h"
// Member 'states'
#include "v2x_msgs/msg/detail/movement_list__struct.h"
// Member 'maneuver_assist_list'
#include "v2x_msgs/msg/detail/maneuver_assist_list__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_intersection_state__struct.h"

/// Struct defined in msg/IntersectionState in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__IntersectionState
{
  /// Optional Field
  bool name_present;
  v2x_msgs__msg__DescriptiveName name;
  v2x_msgs__msg__IntersectionReferenceID id;
  v2x_msgs__msg__MsgCount revision;
  v2x_msgs__msg__IntersectionStatusObject status;
  /// Optional Field
  bool moy_present;
  v2x_msgs__msg__MinuteOfTheYear moy;
  /// Optional Field
  bool time_stamp_present;
  v2x_msgs__msg__DSecond time_stamp;
  /// Optional Field
  bool enabled_lanes_present;
  v2x_msgs__msg__EnabledLaneList enabled_lanes;
  v2x_msgs__msg__MovementList states;
  /// Optional Field
  bool maneuver_assist_list_present;
  v2x_msgs__msg__ManeuverAssistList maneuver_assist_list;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegIntersectionState__Sequence regional;
} v2x_msgs__msg__IntersectionState;

// Struct for a sequence of v2x_msgs__msg__IntersectionState.
typedef struct v2x_msgs__msg__IntersectionState__Sequence
{
  v2x_msgs__msg__IntersectionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__IntersectionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_
