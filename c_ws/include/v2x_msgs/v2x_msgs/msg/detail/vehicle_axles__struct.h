// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleAxles.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_AXLES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_AXLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYRE_TYPE_NOT_SPECIFIED'.
enum
{
  v2x_msgs__msg__VehicleAxles__TYRE_TYPE_NOT_SPECIFIED = 0ll
};

/// Constant 'TYRE_TYPE_SINGLE_TYRE'.
enum
{
  v2x_msgs__msg__VehicleAxles__TYRE_TYPE_SINGLE_TYRE = 1ll
};

/// Constant 'TYRE_TYPE_DUAL_TYRES'.
enum
{
  v2x_msgs__msg__VehicleAxles__TYRE_TYPE_DUAL_TYRES = 2ll
};

/// Constant 'TYRE_TYPE_RESERVED_FOR_USE'.
enum
{
  v2x_msgs__msg__VehicleAxles__TYRE_TYPE_RESERVED_FOR_USE = 3ll
};

/// Constant 'TYRE_TYPE_NUMBER_OF_AXLES'.
enum
{
  v2x_msgs__msg__VehicleAxles__TYRE_TYPE_NUMBER_OF_AXLES = 1ll
};

// Include directives for member types
// Member 'vehicle_first_axle_height'
#include "v2x_msgs/msg/detail/int1__struct.h"
// Member 'trailer_axles'
#include "v2x_msgs/msg/detail/trailer_axles__struct.h"
// Member 'tractor_axles'
#include "v2x_msgs/msg/detail/tractor_axles__struct.h"

/// Struct defined in msg/VehicleAxles in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleAxles
{
  v2x_msgs__msg__Int1 vehicle_first_axle_height;
  int64_t tyre_type;
  v2x_msgs__msg__TrailerAxles trailer_axles;
  v2x_msgs__msg__TractorAxles tractor_axles;
} v2x_msgs__msg__VehicleAxles;

// Struct for a sequence of v2x_msgs__msg__VehicleAxles.
typedef struct v2x_msgs__msg__VehicleAxles__Sequence
{
  v2x_msgs__msg__VehicleAxles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleAxles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_AXLES__STRUCT_H_
