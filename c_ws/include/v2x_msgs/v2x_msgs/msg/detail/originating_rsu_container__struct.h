// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/OriginatingRSUContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ORIGINATING_RSU_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ORIGINATING_RSU_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ORIGINATING_RSUCONTAINER_NOTHING'.
enum
{
  v2x_msgs__msg__OriginatingRSUContainer__ORIGINATING_RSUCONTAINER_NOTHING = 0ll
};

/// Constant 'ORIGINATING_RSUCONTAINER_INTERSECTION_REFERENCE_ID'.
enum
{
  v2x_msgs__msg__OriginatingRSUContainer__ORIGINATING_RSUCONTAINER_INTERSECTION_REFERENCE_ID = 1ll
};

/// Constant 'ORIGINATING_RSUCONTAINER_ROAD_SEGMENT_REFERENCE_ID'.
enum
{
  v2x_msgs__msg__OriginatingRSUContainer__ORIGINATING_RSUCONTAINER_ROAD_SEGMENT_REFERENCE_ID = 2ll
};

// Include directives for member types
// Member 'intersection_reference_id'
#include "v2x_msgs/msg/detail/intersection_reference_id__struct.h"
// Member 'road_segment_reference_id'
#include "v2x_msgs/msg/detail/road_segment_reference_id__struct.h"

/// Struct defined in msg/OriginatingRSUContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__OriginatingRSUContainer
{
  /// CHOICE! - Choose exactly of the containers
  int64_t originating_rsucontainer_container_select;
  /// container 1
  v2x_msgs__msg__IntersectionReferenceID intersection_reference_id;
  /// container 2
  v2x_msgs__msg__RoadSegmentReferenceID road_segment_reference_id;
} v2x_msgs__msg__OriginatingRSUContainer;

// Struct for a sequence of v2x_msgs__msg__OriginatingRSUContainer.
typedef struct v2x_msgs__msg__OriginatingRSUContainer__Sequence
{
  v2x_msgs__msg__OriginatingRSUContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__OriginatingRSUContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ORIGINATING_RSU_CONTAINER__STRUCT_H_
