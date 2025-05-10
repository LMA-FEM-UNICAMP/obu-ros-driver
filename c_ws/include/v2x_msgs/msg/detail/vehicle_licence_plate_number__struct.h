// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleLicencePlateNumber.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_LICENCE_PLATE_NUMBER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_LICENCE_PLATE_NUMBER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vehicle_licence_plate_number'
#include "v2x_msgs/msg/detail/lpn__struct.h"

/// Struct defined in msg/VehicleLicencePlateNumber in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleLicencePlateNumber
{
  v2x_msgs__msg__LPN vehicle_licence_plate_number;
} v2x_msgs__msg__VehicleLicencePlateNumber;

// Struct for a sequence of v2x_msgs__msg__VehicleLicencePlateNumber.
typedef struct v2x_msgs__msg__VehicleLicencePlateNumber__Sequence
{
  v2x_msgs__msg__VehicleLicencePlateNumber * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleLicencePlateNumber__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_LICENCE_PLATE_NUMBER__STRUCT_H_
