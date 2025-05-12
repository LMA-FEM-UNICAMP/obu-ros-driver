// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RegionalExtension.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REGIONAL_EXTENSION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__REGIONAL_EXTENSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'region_id'
#include "v2x_msgs/msg/detail/region_id__struct.h"
// Member 'reg_ext_value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RegionalExtension in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__RegionalExtension
{
  /// Adaption of struct RegionalExtension
  v2x_msgs__msg__RegionId region_id;
  rosidl_runtime_c__String reg_ext_value;
} v2x_msgs__msg__RegionalExtension;

// Struct for a sequence of v2x_msgs__msg__RegionalExtension.
typedef struct v2x_msgs__msg__RegionalExtension__Sequence
{
  v2x_msgs__msg__RegionalExtension * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RegionalExtension__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REGIONAL_EXTENSION__STRUCT_H_
