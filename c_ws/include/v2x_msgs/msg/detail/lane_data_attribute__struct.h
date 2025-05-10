// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_DATA_ATTRIBUTE_NOTHING'.
enum
{
  v2x_msgs__msg__LaneDataAttribute__LANE_DATA_ATTRIBUTE_NOTHING = 0ll
};

/// Constant 'LANE_DATA_ATTRIBUTE_PATH_END_POINT_ANGLE'.
enum
{
  v2x_msgs__msg__LaneDataAttribute__LANE_DATA_ATTRIBUTE_PATH_END_POINT_ANGLE = 1ll
};

/// Constant 'LANE_DATA_ATTRIBUTE_LANE_CROWN_POINT_CENTER'.
enum
{
  v2x_msgs__msg__LaneDataAttribute__LANE_DATA_ATTRIBUTE_LANE_CROWN_POINT_CENTER = 2ll
};

/// Constant 'LANE_DATA_ATTRIBUTE_LANE_CROWN_POINT_LEFT'.
enum
{
  v2x_msgs__msg__LaneDataAttribute__LANE_DATA_ATTRIBUTE_LANE_CROWN_POINT_LEFT = 3ll
};

/// Constant 'LANE_DATA_ATTRIBUTE_LANE_CROWN_POINT_RIGHT'.
enum
{
  v2x_msgs__msg__LaneDataAttribute__LANE_DATA_ATTRIBUTE_LANE_CROWN_POINT_RIGHT = 4ll
};

/// Constant 'LANE_DATA_ATTRIBUTE_LANE_ANGLE'.
enum
{
  v2x_msgs__msg__LaneDataAttribute__LANE_DATA_ATTRIBUTE_LANE_ANGLE = 5ll
};

/// Constant 'LANE_DATA_ATTRIBUTE_SPEED_LIMITS'.
enum
{
  v2x_msgs__msg__LaneDataAttribute__LANE_DATA_ATTRIBUTE_SPEED_LIMITS = 6ll
};

/// Constant 'LANE_DATA_ATTRIBUTE_REGIONAL'.
enum
{
  v2x_msgs__msg__LaneDataAttribute__LANE_DATA_ATTRIBUTE_REGIONAL = 7ll
};

// Include directives for member types
// Member 'path_end_point_angle'
#include "v2x_msgs/msg/detail/delta_angle__struct.h"
// Member 'lane_crown_point_center'
// Member 'lane_crown_point_left'
// Member 'lane_crown_point_right'
#include "v2x_msgs/msg/detail/roadway_crown_angle__struct.h"
// Member 'lane_angle'
#include "v2x_msgs/msg/detail/merge_diverge_node_angle__struct.h"
// Member 'speed_limits'
#include "v2x_msgs/msg/detail/speed_limit_list__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_lane_attributes__struct.h"

/// Struct defined in msg/LaneDataAttribute in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__LaneDataAttribute
{
  /// CHOICE adaption
  /// CHOICE! - Choose exactly of the containers
  int64_t lane_data_attribute_container_select;
  /// container 1
  v2x_msgs__msg__DeltaAngle path_end_point_angle;
  /// container 2
  v2x_msgs__msg__RoadwayCrownAngle lane_crown_point_center;
  /// container 3
  v2x_msgs__msg__RoadwayCrownAngle lane_crown_point_left;
  /// container 4
  v2x_msgs__msg__RoadwayCrownAngle lane_crown_point_right;
  /// container 5
  v2x_msgs__msg__MergeDivergeNodeAngle lane_angle;
  /// container 6
  v2x_msgs__msg__SpeedLimitList speed_limits;
  ///  container 7
  /// size(1..4)
  v2x_msgs__msg__RegLaneAttributes__Sequence regional;
} v2x_msgs__msg__LaneDataAttribute;

// Struct for a sequence of v2x_msgs__msg__LaneDataAttribute.
typedef struct v2x_msgs__msg__LaneDataAttribute__Sequence
{
  v2x_msgs__msg__LaneDataAttribute * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneDataAttribute__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_
