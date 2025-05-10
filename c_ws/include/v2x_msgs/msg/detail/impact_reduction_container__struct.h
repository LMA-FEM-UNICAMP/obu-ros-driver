// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ImpactReductionContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__IMPACT_REDUCTION_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__IMPACT_REDUCTION_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'height_lon_carr_left'
// Member 'height_lon_carr_right'
#include "v2x_msgs/msg/detail/height_lon_carr__struct.h"
// Member 'pos_lon_carr_left'
// Member 'pos_lon_carr_right'
#include "v2x_msgs/msg/detail/pos_lon_carr__struct.h"
// Member 'position_of_pillars'
#include "v2x_msgs/msg/detail/position_of_pillars__struct.h"
// Member 'pos_cent_mass'
#include "v2x_msgs/msg/detail/pos_cent_mass__struct.h"
// Member 'wheel_base_vehicle'
#include "v2x_msgs/msg/detail/wheel_base_vehicle__struct.h"
// Member 'turning_radius'
#include "v2x_msgs/msg/detail/turning_radius__struct.h"
// Member 'pos_front_ax'
#include "v2x_msgs/msg/detail/pos_front_ax__struct.h"
// Member 'position_of_occupants'
#include "v2x_msgs/msg/detail/position_of_occupants__struct.h"
// Member 'vehicle_mass'
#include "v2x_msgs/msg/detail/vehicle_mass__struct.h"
// Member 'request_response_indication'
#include "v2x_msgs/msg/detail/request_response_indication__struct.h"

/// Struct defined in msg/ImpactReductionContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ImpactReductionContainer
{
  v2x_msgs__msg__HeightLonCarr height_lon_carr_left;
  v2x_msgs__msg__HeightLonCarr height_lon_carr_right;
  v2x_msgs__msg__PosLonCarr pos_lon_carr_left;
  v2x_msgs__msg__PosLonCarr pos_lon_carr_right;
  v2x_msgs__msg__PositionOfPillars position_of_pillars;
  v2x_msgs__msg__PosCentMass pos_cent_mass;
  v2x_msgs__msg__WheelBaseVehicle wheel_base_vehicle;
  v2x_msgs__msg__TurningRadius turning_radius;
  v2x_msgs__msg__PosFrontAx pos_front_ax;
  v2x_msgs__msg__PositionOfOccupants position_of_occupants;
  v2x_msgs__msg__VehicleMass vehicle_mass;
  v2x_msgs__msg__RequestResponseIndication request_response_indication;
} v2x_msgs__msg__ImpactReductionContainer;

// Struct for a sequence of v2x_msgs__msg__ImpactReductionContainer.
typedef struct v2x_msgs__msg__ImpactReductionContainer__Sequence
{
  v2x_msgs__msg__ImpactReductionContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ImpactReductionContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__IMPACT_REDUCTION_CONTAINER__STRUCT_H_
