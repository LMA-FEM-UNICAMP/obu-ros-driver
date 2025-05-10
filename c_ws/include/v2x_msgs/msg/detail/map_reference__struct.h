// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MapReference.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MAP_REFERENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MAP_REFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAP_REFERENCE_NOTHING'.
enum
{
  v2x_msgs__msg__MapReference__MAP_REFERENCE_NOTHING = 0ll
};

/// Constant 'MAP_REFERENCE_ROADSEGMENT'.
enum
{
  v2x_msgs__msg__MapReference__MAP_REFERENCE_ROADSEGMENT = 1ll
};

/// Constant 'MAP_REFERENCE_INTERSECTION'.
enum
{
  v2x_msgs__msg__MapReference__MAP_REFERENCE_INTERSECTION = 2ll
};

// Include directives for member types
// Member 'roadsegment'
#include "v2x_msgs/msg/detail/road_segment_reference_id__struct.h"
// Member 'intersection'
#include "v2x_msgs/msg/detail/intersection_reference_id__struct.h"

/// Struct defined in msg/MapReference in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MapReference
{
  /// CHOICE! - Choose exactly of the containers
  int64_t map_reference_container_select;
  /// container 1
  v2x_msgs__msg__RoadSegmentReferenceID roadsegment;
  /// container 2
  v2x_msgs__msg__IntersectionReferenceID intersection;
} v2x_msgs__msg__MapReference;

// Struct for a sequence of v2x_msgs__msg__MapReference.
typedef struct v2x_msgs__msg__MapReference__Sequence
{
  v2x_msgs__msg__MapReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MapReference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MAP_REFERENCE__STRUCT_H_
