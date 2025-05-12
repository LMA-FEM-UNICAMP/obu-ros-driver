// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RscPart.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RSC_PART__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RSC_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'detection_zone_ids'
// Member 'relevance_zone_ids'
#include "v2x_msgs/msg/detail/zone_ids__struct.h"
// Member 'direction'
#include "v2x_msgs/msg/detail/direction__struct.h"
// Member 'road_surface_static_characteristics'
#include "v2x_msgs/msg/detail/road_surface_static_characteristics__struct.h"
// Member 'road_surface_dynamic_characteristics'
#include "v2x_msgs/msg/detail/road_surface_dynamic_characteristics__struct.h"

/// Struct defined in msg/RscPart in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RscPart
{
  /// Optional Field
  bool detection_zone_ids_present;
  v2x_msgs__msg__ZoneIds detection_zone_ids;
  v2x_msgs__msg__ZoneIds relevance_zone_ids;
  /// Optional Field
  bool direction_present;
  v2x_msgs__msg__Direction direction;
  /// Optional Field
  bool road_surface_static_characteristics_present;
  v2x_msgs__msg__RoadSurfaceStaticCharacteristics road_surface_static_characteristics;
  /// Optional Field
  bool road_surface_dynamic_characteristics_present;
  v2x_msgs__msg__RoadSurfaceDynamicCharacteristics road_surface_dynamic_characteristics;
} v2x_msgs__msg__RscPart;

// Struct for a sequence of v2x_msgs__msg__RscPart.
typedef struct v2x_msgs__msg__RscPart__Sequence
{
  v2x_msgs__msg__RscPart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RscPart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RSC_PART__STRUCT_H_
