// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AttributeList.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ATTRIBUTE_LIST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ATTRIBUTE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'list'
#include "v2x_msgs/msg/detail/attributes__struct.h"

/// Struct defined in msg/AttributeList in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__AttributeList
{
  ///  Ringdependency - Attributes is added as identifier
  /// size(0..127)
  v2x_msgs__msg__Attributes__Sequence list;
} v2x_msgs__msg__AttributeList;

// Struct for a sequence of v2x_msgs__msg__AttributeList.
typedef struct v2x_msgs__msg__AttributeList__Sequence
{
  v2x_msgs__msg__AttributeList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AttributeList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ATTRIBUTE_LIST__STRUCT_H_
