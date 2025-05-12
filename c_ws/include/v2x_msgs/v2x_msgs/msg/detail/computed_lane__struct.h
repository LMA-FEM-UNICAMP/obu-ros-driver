// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFFSET_XAXIS_NOTHING'.
enum
{
  v2x_msgs__msg__ComputedLane__OFFSET_XAXIS_NOTHING = 0ll
};

/// Constant 'OFFSET_XAXIS_DRIVEN_LINE_OFFSET_SM'.
enum
{
  v2x_msgs__msg__ComputedLane__OFFSET_XAXIS_DRIVEN_LINE_OFFSET_SM = 1ll
};

/// Constant 'OFFSET_XAXIS_DRIVEN_LINE_OFFSET_LG'.
enum
{
  v2x_msgs__msg__ComputedLane__OFFSET_XAXIS_DRIVEN_LINE_OFFSET_LG = 2ll
};

/// Constant 'OFFSET_YAXIS_NOTHING'.
enum
{
  v2x_msgs__msg__ComputedLane__OFFSET_YAXIS_NOTHING = 0ll
};

/// Constant 'OFFSET_YAXIS_DRIVEN_LINE_OFFSET_SM'.
enum
{
  v2x_msgs__msg__ComputedLane__OFFSET_YAXIS_DRIVEN_LINE_OFFSET_SM = 1ll
};

/// Constant 'OFFSET_YAXIS_DRIVEN_LINE_OFFSET_LG'.
enum
{
  v2x_msgs__msg__ComputedLane__OFFSET_YAXIS_DRIVEN_LINE_OFFSET_LG = 2ll
};

// Include directives for member types
// Member 'reference_lane_id'
#include "v2x_msgs/msg/detail/lane_id__struct.h"
// Member 'small_x'
// Member 'small_y'
#include "v2x_msgs/msg/detail/driven_line_offset_sm__struct.h"
// Member 'large_x'
// Member 'large_y'
#include "v2x_msgs/msg/detail/driven_line_offset_lg__struct.h"
// Member 'rotate_xy'
#include "v2x_msgs/msg/detail/angle__struct.h"
// Member 'scale_xaxis'
// Member 'scale_yaxis'
#include "v2x_msgs/msg/detail/scale_b12__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/antenna_offset_set__struct.h"

/// Struct defined in msg/ComputedLane in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__ComputedLane
{
  /// duplicates (small, large) removed by adding char
  v2x_msgs__msg__LaneID reference_lane_id;
  /// CHOICE! - Choose exactly of the containers
  int64_t offset_xaxis_container_select;
  /// container 1
  v2x_msgs__msg__DrivenLineOffsetSm small_x;
  /// container 2
  v2x_msgs__msg__DrivenLineOffsetLg large_x;
  /// CHOICE! - Choose exactly of the containers
  int64_t offset_yaxis_container_select;
  /// container 1
  v2x_msgs__msg__DrivenLineOffsetSm small_y;
  /// container 2
  v2x_msgs__msg__DrivenLineOffsetLg large_y;
  /// Optional Field
  bool rotate_xy_present;
  v2x_msgs__msg__Angle rotate_xy;
  /// Optional Field
  bool scale_xaxis_present;
  v2x_msgs__msg__ScaleB12 scale_xaxis;
  /// Optional Field
  bool scale_yaxis_present;
  v2x_msgs__msg__ScaleB12 scale_yaxis;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__AntennaOffsetSet__Sequence regional;
} v2x_msgs__msg__ComputedLane;

// Struct for a sequence of v2x_msgs__msg__ComputedLane.
typedef struct v2x_msgs__msg__ComputedLane__Sequence
{
  v2x_msgs__msg__ComputedLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ComputedLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__STRUCT_H_
