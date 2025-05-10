// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PolygonalLine.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__POLYGONAL_LINE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__POLYGONAL_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POLYGONAL_LINE_NOTHING'.
enum
{
  v2x_msgs__msg__PolygonalLine__POLYGONAL_LINE_NOTHING = 0ll
};

/// Constant 'POLYGONAL_LINE_DELTA_POSITIONS'.
enum
{
  v2x_msgs__msg__PolygonalLine__POLYGONAL_LINE_DELTA_POSITIONS = 1ll
};

/// Constant 'POLYGONAL_LINE_DELTA_POSITIONS_WITH_ALTITUDE'.
enum
{
  v2x_msgs__msg__PolygonalLine__POLYGONAL_LINE_DELTA_POSITIONS_WITH_ALTITUDE = 2ll
};

/// Constant 'POLYGONAL_LINE_ABSOLUTE_POSITIONS'.
enum
{
  v2x_msgs__msg__PolygonalLine__POLYGONAL_LINE_ABSOLUTE_POSITIONS = 3ll
};

/// Constant 'POLYGONAL_LINE_ABSOLUTE_POSITIONS_WITH_ALTITUDE'.
enum
{
  v2x_msgs__msg__PolygonalLine__POLYGONAL_LINE_ABSOLUTE_POSITIONS_WITH_ALTITUDE = 4ll
};

// Include directives for member types
// Member 'delta_positions'
#include "v2x_msgs/msg/detail/delta_positions__struct.h"
// Member 'delta_positions_with_altitude'
#include "v2x_msgs/msg/detail/delta_reference_positions__struct.h"
// Member 'absolute_positions'
#include "v2x_msgs/msg/detail/absolute_positions__struct.h"
// Member 'absolute_positions_with_altitude'
#include "v2x_msgs/msg/detail/absolute_positions_w_altitude__struct.h"

/// Struct defined in msg/PolygonalLine in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PolygonalLine
{
  /// CHOICE! - Choose exactly of the containers
  int64_t polygonal_line_container_select;
  /// container 1
  v2x_msgs__msg__DeltaPositions delta_positions;
  /// container 2
  v2x_msgs__msg__DeltaReferencePositions delta_positions_with_altitude;
  /// container 3
  v2x_msgs__msg__AbsolutePositions absolute_positions;
  /// container 4
  v2x_msgs__msg__AbsolutePositionsWAltitude absolute_positions_with_altitude;
} v2x_msgs__msg__PolygonalLine;

// Struct for a sequence of v2x_msgs__msg__PolygonalLine.
typedef struct v2x_msgs__msg__PolygonalLine__Sequence
{
  v2x_msgs__msg__PolygonalLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PolygonalLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__POLYGONAL_LINE__STRUCT_H_
