// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_

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
// Member 'ref_point'
#include "v2x_msgs/msg/detail/position3_d__struct.h"
// Member 'lane_width'
#include "v2x_msgs/msg/detail/lane_width__struct.h"
// Member 'speed_limits'
#include "v2x_msgs/msg/detail/speed_limit_list__struct.h"
// Member 'lane_set'
#include "v2x_msgs/msg/detail/lane_list__struct.h"
// Member 'preempt_priority_data'
#include "v2x_msgs/msg/detail/preempt_priority_list__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_intersection_geometry__struct.h"

/// Struct defined in msg/IntersectionGeometry in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__IntersectionGeometry
{
  /// Optional Field
  bool name_present;
  v2x_msgs__msg__DescriptiveName name;
  v2x_msgs__msg__IntersectionReferenceID id;
  v2x_msgs__msg__MsgCount revision;
  v2x_msgs__msg__Position3D ref_point;
  /// Optional Field
  bool lane_width_present;
  v2x_msgs__msg__LaneWidth lane_width;
  /// Optional Field
  bool speed_limits_present;
  v2x_msgs__msg__SpeedLimitList speed_limits;
  v2x_msgs__msg__LaneList lane_set;
  /// Optional Field
  bool preempt_priority_data_present;
  v2x_msgs__msg__PreemptPriorityList preempt_priority_data;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegIntersectionGeometry__Sequence regional;
} v2x_msgs__msg__IntersectionGeometry;

// Struct for a sequence of v2x_msgs__msg__IntersectionGeometry.
typedef struct v2x_msgs__msg__IntersectionGeometry__Sequence
{
  v2x_msgs__msg__IntersectionGeometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__IntersectionGeometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_
