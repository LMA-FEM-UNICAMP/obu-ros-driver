// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DDDIO.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DDDIO__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DDDIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ARROW_DIRECTION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DDDIO__ARROW_DIRECTION_RANGE_MIN = 0ll
};

/// Constant 'ARROW_DIRECTION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DDDIO__ARROW_DIRECTION_RANGE_MAX = 7ll
};

/// Constant 'ROAD_NUMBER_IDENTIFIER_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DDDIO__ROAD_NUMBER_IDENTIFIER_RANGE_MIN = 1ll
};

/// Constant 'ROAD_NUMBER_IDENTIFIER_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DDDIO__ROAD_NUMBER_IDENTIFIER_RANGE_MAX = 999ll
};

/// Constant 'STREET_NAME_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DDDIO__STREET_NAME_RANGE_MIN = 1ll
};

/// Constant 'STREET_NAME_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DDDIO__STREET_NAME_RANGE_MAX = 999ll
};

// Include directives for member types
// Member 'dest_place'
#include "v2x_msgs/msg/detail/destination_places__struct.h"
// Member 'dest_road'
#include "v2x_msgs/msg/detail/destination_roads__struct.h"
// Member 'street_name_text'
#include "rosidl_runtime_c/string.h"
// Member 'distance_to_diverging_point'
// Member 'distance_to_destination_place'
#include "v2x_msgs/msg/detail/distance_or_duration__struct.h"

/// Struct defined in msg/DDDIO in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DDDIO
{
  int64_t arrow_direction;
  /// Optional Field
  bool dest_place_present;
  v2x_msgs__msg__DestinationPlaces dest_place;
  /// Optional Field
  bool dest_road_present;
  v2x_msgs__msg__DestinationRoads dest_road;
  /// Optional Field
  bool road_number_identifier_present;
  int64_t road_number_identifier;
  /// Optional Field
  bool street_name_present;
  int64_t street_name;
  /// Optional Field
  bool street_name_text_present;
  rosidl_runtime_c__String street_name_text;
  /// Optional Field
  bool distance_to_diverging_point_present;
  v2x_msgs__msg__DistanceOrDuration distance_to_diverging_point;
  /// Optional Field
  bool distance_to_destination_place_present;
  v2x_msgs__msg__DistanceOrDuration distance_to_destination_place;
} v2x_msgs__msg__DDDIO;

// Struct for a sequence of v2x_msgs__msg__DDDIO.
typedef struct v2x_msgs__msg__DDDIO__Sequence
{
  v2x_msgs__msg__DDDIO * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DDDIO__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DDDIO__STRUCT_H_
