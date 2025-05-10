// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DataParameters.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'process_method'
// Member 'process_agency'
// Member 'last_checked_date'
// Member 'geoid_used'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DataParameters in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DataParameters
{
  /// Optional Field
  bool process_method_present;
  rosidl_runtime_c__String process_method;
  /// Optional Field
  bool process_agency_present;
  rosidl_runtime_c__String process_agency;
  /// Optional Field
  bool last_checked_date_present;
  rosidl_runtime_c__String last_checked_date;
  /// Optional Field
  bool geoid_used_present;
  rosidl_runtime_c__String geoid_used;
} v2x_msgs__msg__DataParameters;

// Struct for a sequence of v2x_msgs__msg__DataParameters.
typedef struct v2x_msgs__msg__DataParameters__Sequence
{
  v2x_msgs__msg__DataParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DataParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__STRUCT_H_
