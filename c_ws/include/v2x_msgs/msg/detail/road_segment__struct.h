// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RoadSegment.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_H_

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
#include "v2x_msgs/msg/detail/road_segment_reference_id__struct.h"
// Member 'revision'
#include "v2x_msgs/msg/detail/msg_count__struct.h"
// Member 'ref_point'
#include "v2x_msgs/msg/detail/position3_d__struct.h"
// Member 'lane_width'
#include "v2x_msgs/msg/detail/lane_width__struct.h"
// Member 'speed_limits'
#include "v2x_msgs/msg/detail/speed_limit_list__struct.h"
// Member 'road_lane_set'
#include "v2x_msgs/msg/detail/road_lane_set_list__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_road_segment__struct.h"

/// Struct defined in msg/RoadSegment in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RoadSegment
{
  /// Optional Field
  bool name_present;
  v2x_msgs__msg__DescriptiveName name;
  v2x_msgs__msg__RoadSegmentReferenceID id;
  v2x_msgs__msg__MsgCount revision;
  v2x_msgs__msg__Position3D ref_point;
  /// Optional Field
  bool lane_width_present;
  v2x_msgs__msg__LaneWidth lane_width;
  /// Optional Field
  bool speed_limits_present;
  v2x_msgs__msg__SpeedLimitList speed_limits;
  v2x_msgs__msg__RoadLaneSetList road_lane_set;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegRoadSegment__Sequence regional;
} v2x_msgs__msg__RoadSegment;

// Struct for a sequence of v2x_msgs__msg__RoadSegment.
typedef struct v2x_msgs__msg__RoadSegment__Sequence
{
  v2x_msgs__msg__RoadSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RoadSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_H_
