// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/IntersectionAccessPoint.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INTERSECTION_ACCESS_POINT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__INTERSECTION_ACCESS_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INTERSECTION_ACCESS_POINT_NOTHING'.
enum
{
  v2x_msgs__msg__IntersectionAccessPoint__INTERSECTION_ACCESS_POINT_NOTHING = 0ll
};

/// Constant 'INTERSECTION_ACCESS_POINT_LANE'.
enum
{
  v2x_msgs__msg__IntersectionAccessPoint__INTERSECTION_ACCESS_POINT_LANE = 1ll
};

/// Constant 'INTERSECTION_ACCESS_POINT_APPROACH'.
enum
{
  v2x_msgs__msg__IntersectionAccessPoint__INTERSECTION_ACCESS_POINT_APPROACH = 2ll
};

/// Constant 'INTERSECTION_ACCESS_POINT_CONNECTION'.
enum
{
  v2x_msgs__msg__IntersectionAccessPoint__INTERSECTION_ACCESS_POINT_CONNECTION = 3ll
};

// Include directives for member types
// Member 'lane'
#include "v2x_msgs/msg/detail/lane_id__struct.h"
// Member 'approach'
#include "v2x_msgs/msg/detail/approach_id__struct.h"
// Member 'connection'
#include "v2x_msgs/msg/detail/lane_connection_id__struct.h"

/// Struct defined in msg/IntersectionAccessPoint in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__IntersectionAccessPoint
{
  /// CHOICE! - Choose exactly of the containers
  int64_t intersection_access_point_container_select;
  /// container 1
  v2x_msgs__msg__LaneID lane;
  /// container 2
  v2x_msgs__msg__ApproachID approach;
  /// container 3
  v2x_msgs__msg__LaneConnectionID connection;
} v2x_msgs__msg__IntersectionAccessPoint;

// Struct for a sequence of v2x_msgs__msg__IntersectionAccessPoint.
typedef struct v2x_msgs__msg__IntersectionAccessPoint__Sequence
{
  v2x_msgs__msg__IntersectionAccessPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__IntersectionAccessPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INTERSECTION_ACCESS_POINT__STRUCT_H_
