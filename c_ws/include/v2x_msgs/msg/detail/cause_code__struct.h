// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cause_code'
#include "v2x_msgs/msg/detail/cause_code_type__struct.h"
// Member 'sub_cause_code'
#include "v2x_msgs/msg/detail/sub_cause_code_type__struct.h"

/// Struct defined in msg/CauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CauseCode
{
  v2x_msgs__msg__CauseCodeType cause_code;
  v2x_msgs__msg__SubCauseCodeType sub_cause_code;
} v2x_msgs__msg__CauseCode;

// Struct for a sequence of v2x_msgs__msg__CauseCode.
typedef struct v2x_msgs__msg__CauseCode__Sequence
{
  v2x_msgs__msg__CauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CAUSE_CODE__STRUCT_H_
