// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/IVIM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__IVIM__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__IVIM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "v2x_msgs/msg/detail/its_pdu_header__struct.h"
// Member 'ivi'
#include "v2x_msgs/msg/detail/ivi_structure__struct.h"

/// Struct defined in msg/IVIM in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__IVIM
{
  v2x_msgs__msg__ItsPduHeader header;
  v2x_msgs__msg__IviStructure ivi;
} v2x_msgs__msg__IVIM;

// Struct for a sequence of v2x_msgs__msg__IVIM.
typedef struct v2x_msgs__msg__IVIM__Sequence
{
  v2x_msgs__msg__IVIM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__IVIM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__IVIM__STRUCT_H_
