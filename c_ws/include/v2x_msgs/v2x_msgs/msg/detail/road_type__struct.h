// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RoadType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ROAD_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ROAD_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'.
enum
{
  v2x_msgs__msg__RoadType__ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES = 0ll
};

/// Constant 'ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'.
enum
{
  v2x_msgs__msg__RoadType__ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES = 1ll
};

/// Constant 'ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'.
enum
{
  v2x_msgs__msg__RoadType__ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES = 2ll
};

/// Constant 'ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES'.
enum
{
  v2x_msgs__msg__RoadType__ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES = 3ll
};

/// Struct defined in msg/RoadType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RoadType
{
  int64_t road_type;
} v2x_msgs__msg__RoadType;

// Struct for a sequence of v2x_msgs__msg__RoadType.
typedef struct v2x_msgs__msg__RoadType__Sequence
{
  v2x_msgs__msg__RoadType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RoadType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ROAD_TYPE__STRUCT_H_
