// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ComputedSegment.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__COMPUTED_SEGMENT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__COMPUTED_SEGMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFFSET_DISTANCE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ComputedSegment__OFFSET_DISTANCE_RANGE_MIN = -32768ll
};

/// Constant 'OFFSET_DISTANCE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ComputedSegment__OFFSET_DISTANCE_RANGE_MAX = 32767ll
};

// Include directives for member types
// Member 'zone_id'
#include "v2x_msgs/msg/detail/zid__struct.h"
// Member 'lane_number'
#include "v2x_msgs/msg/detail/lane_position__struct.h"
// Member 'lane_width'
#include "v2x_msgs/msg/detail/ivi_lane_width__struct.h"
// Member 'offset_position'
#include "v2x_msgs/msg/detail/delta_reference_position__struct.h"

/// Struct defined in msg/ComputedSegment in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ComputedSegment
{
  v2x_msgs__msg__Zid zone_id;
  v2x_msgs__msg__LanePosition lane_number;
  v2x_msgs__msg__IviLaneWidth lane_width;
  /// Optional Field
  bool offset_distance_present;
  int64_t offset_distance;
  /// Optional Field
  bool offset_position_present;
  v2x_msgs__msg__DeltaReferencePosition offset_position;
} v2x_msgs__msg__ComputedSegment;

// Struct for a sequence of v2x_msgs__msg__ComputedSegment.
typedef struct v2x_msgs__msg__ComputedSegment__Sequence
{
  v2x_msgs__msg__ComputedSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ComputedSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__COMPUTED_SEGMENT__STRUCT_H_
