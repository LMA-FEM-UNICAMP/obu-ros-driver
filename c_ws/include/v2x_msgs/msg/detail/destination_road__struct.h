// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DestinationRoad.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DESTINATION_ROAD__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DESTINATION_ROAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROAD_NUMBER_IDENTIFIER_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DestinationRoad__ROAD_NUMBER_IDENTIFIER_RANGE_MIN = 1ll
};

/// Constant 'ROAD_NUMBER_IDENTIFIER_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DestinationRoad__ROAD_NUMBER_IDENTIFIER_RANGE_MAX = 999ll
};

// Include directives for member types
// Member 'der_type'
#include "v2x_msgs/msg/detail/destination_road_type__struct.h"
// Member 'road_number_text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DestinationRoad in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DestinationRoad
{
  v2x_msgs__msg__DestinationRoadType der_type;
  /// Optional Field
  bool road_number_identifier_present;
  int64_t road_number_identifier;
  /// Optional Field
  bool road_number_text_present;
  rosidl_runtime_c__String road_number_text;
} v2x_msgs__msg__DestinationRoad;

// Struct for a sequence of v2x_msgs__msg__DestinationRoad.
typedef struct v2x_msgs__msg__DestinationRoad__Sequence
{
  v2x_msgs__msg__DestinationRoad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DestinationRoad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DESTINATION_ROAD__STRUCT_H_
