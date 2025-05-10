// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/FreeSpaceArea.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__FREE_SPACE_AREA__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__FREE_SPACE_AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FREE_SPACE_AREA_NOTHING'.
enum
{
  v2x_msgs__msg__FreeSpaceArea__FREE_SPACE_AREA_NOTHING = 0ll
};

/// Constant 'FREE_SPACE_AREA_FREE_SPACE_POLYGON'.
enum
{
  v2x_msgs__msg__FreeSpaceArea__FREE_SPACE_AREA_FREE_SPACE_POLYGON = 1ll
};

/// Constant 'FREE_SPACE_AREA_FREE_SPACE_CIRCULAR'.
enum
{
  v2x_msgs__msg__FreeSpaceArea__FREE_SPACE_AREA_FREE_SPACE_CIRCULAR = 2ll
};

/// Constant 'FREE_SPACE_AREA_FREE_SPACE_ELLIPSE'.
enum
{
  v2x_msgs__msg__FreeSpaceArea__FREE_SPACE_AREA_FREE_SPACE_ELLIPSE = 3ll
};

/// Constant 'FREE_SPACE_AREA_FREE_SPACE_RECTANGLE'.
enum
{
  v2x_msgs__msg__FreeSpaceArea__FREE_SPACE_AREA_FREE_SPACE_RECTANGLE = 4ll
};

// Include directives for member types
// Member 'free_space_polygon'
#include "v2x_msgs/msg/detail/area_polygon__struct.h"
// Member 'free_space_circular'
#include "v2x_msgs/msg/detail/area_circular__struct.h"
// Member 'free_space_ellipse'
#include "v2x_msgs/msg/detail/area_ellipse__struct.h"
// Member 'free_space_rectangle'
#include "v2x_msgs/msg/detail/area_rectangle__struct.h"

/// Struct defined in msg/FreeSpaceArea in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__FreeSpaceArea
{
  /// CHOICE! - Choose exactly of the containers
  int64_t free_space_area_container_select;
  /// container 1
  v2x_msgs__msg__AreaPolygon free_space_polygon;
  /// container 2
  v2x_msgs__msg__AreaCircular free_space_circular;
  /// container 3
  v2x_msgs__msg__AreaEllipse free_space_ellipse;
  /// container 4
  v2x_msgs__msg__AreaRectangle free_space_rectangle;
} v2x_msgs__msg__FreeSpaceArea;

// Struct for a sequence of v2x_msgs__msg__FreeSpaceArea.
typedef struct v2x_msgs__msg__FreeSpaceArea__Sequence
{
  v2x_msgs__msg__FreeSpaceArea * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__FreeSpaceArea__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__FREE_SPACE_AREA__STRUCT_H_
