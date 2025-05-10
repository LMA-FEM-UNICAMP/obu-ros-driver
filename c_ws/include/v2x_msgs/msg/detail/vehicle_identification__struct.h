// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleIdentification.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_IDENTIFICATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_IDENTIFICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'w_minumber'
#include "v2x_msgs/msg/detail/wm_inumber__struct.h"
// Member 'v_ds'
#include "v2x_msgs/msg/detail/vds__struct.h"

/// Struct defined in msg/VehicleIdentification in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleIdentification
{
  /// Optional Field
  bool w_minumber_present;
  v2x_msgs__msg__WMInumber w_minumber;
  /// Optional Field
  bool v_ds_present;
  v2x_msgs__msg__VDS v_ds;
} v2x_msgs__msg__VehicleIdentification;

// Struct for a sequence of v2x_msgs__msg__VehicleIdentification.
typedef struct v2x_msgs__msg__VehicleIdentification__Sequence
{
  v2x_msgs__msg__VehicleIdentification * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleIdentification__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_IDENTIFICATION__STRUCT_H_
