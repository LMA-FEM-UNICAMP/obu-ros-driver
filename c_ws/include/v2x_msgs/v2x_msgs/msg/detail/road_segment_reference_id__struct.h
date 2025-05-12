// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RoadSegmentReferenceID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'region'
#include "v2x_msgs/msg/detail/road_regulator_id__struct.h"
// Member 'id'
#include "v2x_msgs/msg/detail/road_segment_id__struct.h"

/// Struct defined in msg/RoadSegmentReferenceID in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RoadSegmentReferenceID
{
  /// Optional Field
  bool region_present;
  v2x_msgs__msg__RoadRegulatorID region;
  v2x_msgs__msg__RoadSegmentID id;
} v2x_msgs__msg__RoadSegmentReferenceID;

// Struct for a sequence of v2x_msgs__msg__RoadSegmentReferenceID.
typedef struct v2x_msgs__msg__RoadSegmentReferenceID__Sequence
{
  v2x_msgs__msg__RoadSegmentReferenceID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RoadSegmentReferenceID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_H_
