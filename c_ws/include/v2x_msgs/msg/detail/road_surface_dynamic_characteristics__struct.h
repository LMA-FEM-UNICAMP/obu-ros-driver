// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RoadSurfaceDynamicCharacteristics.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ROAD_SURFACE_DYNAMIC_CHARACTERISTICS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ROAD_SURFACE_DYNAMIC_CHARACTERISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'condition'
#include "v2x_msgs/msg/detail/condition__struct.h"
// Member 'temperature'
#include "v2x_msgs/msg/detail/temperature__struct.h"
// Member 'ice_or_water_depth'
#include "v2x_msgs/msg/detail/depth__struct.h"
// Member 'treatment'
#include "v2x_msgs/msg/detail/treatment_type__struct.h"

/// Struct defined in msg/RoadSurfaceDynamicCharacteristics in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RoadSurfaceDynamicCharacteristics
{
  v2x_msgs__msg__Condition condition;
  v2x_msgs__msg__Temperature temperature;
  v2x_msgs__msg__Depth ice_or_water_depth;
  v2x_msgs__msg__TreatmentType treatment;
} v2x_msgs__msg__RoadSurfaceDynamicCharacteristics;

// Struct for a sequence of v2x_msgs__msg__RoadSurfaceDynamicCharacteristics.
typedef struct v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence
{
  v2x_msgs__msg__RoadSurfaceDynamicCharacteristics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ROAD_SURFACE_DYNAMIC_CHARACTERISTICS__STRUCT_H_
