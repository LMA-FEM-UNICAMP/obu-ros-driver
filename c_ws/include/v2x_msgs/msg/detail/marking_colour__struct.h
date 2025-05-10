// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MarkingColour.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MARKING_COLOUR__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MARKING_COLOUR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MARKING_COLOUR_RANGE_MIN'.
enum
{
  v2x_msgs__msg__MarkingColour__MARKING_COLOUR_RANGE_MIN = 0ll
};

/// Constant 'MARKING_COLOUR_RANGE_MAX'.
enum
{
  v2x_msgs__msg__MarkingColour__MARKING_COLOUR_RANGE_MAX = 7ll
};

/// Constant 'MARKING_COLOUR_WHITE'.
enum
{
  v2x_msgs__msg__MarkingColour__MARKING_COLOUR_WHITE = 0ll
};

/// Constant 'MARKING_COLOUR_YELLOW'.
enum
{
  v2x_msgs__msg__MarkingColour__MARKING_COLOUR_YELLOW = 1ll
};

/// Constant 'MARKING_COLOUR_ORANGE'.
enum
{
  v2x_msgs__msg__MarkingColour__MARKING_COLOUR_ORANGE = 2ll
};

/// Constant 'MARKING_COLOUR_RED'.
enum
{
  v2x_msgs__msg__MarkingColour__MARKING_COLOUR_RED = 3ll
};

/// Constant 'MARKING_COLOUR_BLUE'.
enum
{
  v2x_msgs__msg__MarkingColour__MARKING_COLOUR_BLUE = 4ll
};

/// Constant 'MARKING_COLOUR_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__MarkingColour__MARKING_COLOUR_UNAVAILABLE = 7ll
};

/// Struct defined in msg/MarkingColour in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MarkingColour
{
  int64_t marking_colour;
} v2x_msgs__msg__MarkingColour;

// Struct for a sequence of v2x_msgs__msg__MarkingColour.
typedef struct v2x_msgs__msg__MarkingColour__Sequence
{
  v2x_msgs__msg__MarkingColour * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MarkingColour__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MARKING_COLOUR__STRUCT_H_
