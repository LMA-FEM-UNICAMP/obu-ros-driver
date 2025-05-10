// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Zone.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ZONE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ZONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ZONE_NOTHING'.
enum
{
  v2x_msgs__msg__Zone__ZONE_NOTHING = 0ll
};

/// Constant 'ZONE_SEGMENT'.
enum
{
  v2x_msgs__msg__Zone__ZONE_SEGMENT = 1ll
};

/// Constant 'ZONE_AREA'.
enum
{
  v2x_msgs__msg__Zone__ZONE_AREA = 2ll
};

/// Constant 'ZONE_COMPUTED_SEGMENT'.
enum
{
  v2x_msgs__msg__Zone__ZONE_COMPUTED_SEGMENT = 3ll
};

// Include directives for member types
// Member 'segment'
#include "v2x_msgs/msg/detail/segment__struct.h"
// Member 'area'
#include "v2x_msgs/msg/detail/polygonal_line__struct.h"
// Member 'computed_segment'
#include "v2x_msgs/msg/detail/computed_segment__struct.h"

/// Struct defined in msg/Zone in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Zone
{
  /// CHOICE! - Choose exactly of the containers
  int64_t zone_container_select;
  /// container 1
  v2x_msgs__msg__Segment segment;
  /// container 2
  v2x_msgs__msg__PolygonalLine area;
  /// container 3
  v2x_msgs__msg__ComputedSegment computed_segment;
} v2x_msgs__msg__Zone;

// Struct for a sequence of v2x_msgs__msg__Zone.
typedef struct v2x_msgs__msg__Zone__Sequence
{
  v2x_msgs__msg__Zone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Zone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ZONE__STRUCT_H_
