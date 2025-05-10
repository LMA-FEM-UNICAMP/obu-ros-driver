// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RoadSurfaceStaticCharacteristics.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ROAD_SURFACE_STATIC_CHARACTERISTICS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ROAD_SURFACE_STATIC_CHARACTERISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'friction_coefficient'
#include "v2x_msgs/msg/detail/friction_coefficient__struct.h"
// Member 'material'
#include "v2x_msgs/msg/detail/material_type__struct.h"
// Member 'wear'
#include "v2x_msgs/msg/detail/wear_level__struct.h"
// Member 'av_banking_angle'
#include "v2x_msgs/msg/detail/banking_angle__struct.h"

/// Struct defined in msg/RoadSurfaceStaticCharacteristics in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RoadSurfaceStaticCharacteristics
{
  v2x_msgs__msg__FrictionCoefficient friction_coefficient;
  v2x_msgs__msg__MaterialType material;
  v2x_msgs__msg__WearLevel wear;
  v2x_msgs__msg__BankingAngle av_banking_angle;
} v2x_msgs__msg__RoadSurfaceStaticCharacteristics;

// Struct for a sequence of v2x_msgs__msg__RoadSurfaceStaticCharacteristics.
typedef struct v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence
{
  v2x_msgs__msg__RoadSurfaceStaticCharacteristics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ROAD_SURFACE_STATIC_CHARACTERISTICS__STRUCT_H_
