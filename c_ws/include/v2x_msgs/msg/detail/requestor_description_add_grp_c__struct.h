// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RequestorDescriptionAddGrpC.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REQUESTOR_DESCRIPTION_ADD_GRP_C__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__REQUESTOR_DESCRIPTION_ADD_GRP_C__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fuel'
#include "v2x_msgs/msg/detail/fuel_type__struct.h"
// Member 'battery_status'
#include "v2x_msgs/msg/detail/battery_status__struct.h"

/// Struct defined in msg/RequestorDescriptionAddGrpC in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RequestorDescriptionAddGrpC
{
  /// Optional Field
  bool fuel_present;
  v2x_msgs__msg__FuelType fuel;
  /// Optional Field
  bool battery_status_present;
  v2x_msgs__msg__BatteryStatus battery_status;
} v2x_msgs__msg__RequestorDescriptionAddGrpC;

// Struct for a sequence of v2x_msgs__msg__RequestorDescriptionAddGrpC.
typedef struct v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence
{
  v2x_msgs__msg__RequestorDescriptionAddGrpC * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REQUESTOR_DESCRIPTION_ADD_GRP_C__STRUCT_H_
