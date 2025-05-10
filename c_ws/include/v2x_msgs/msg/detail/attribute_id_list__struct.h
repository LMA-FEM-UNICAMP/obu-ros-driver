// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AttributeIdList.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ATTRIBUTE_ID_LIST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ATTRIBUTE_ID_LIST__STRUCT_H_

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
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AttributeIdList in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__AttributeIdList
{
  ///  Ringdependency - int64 is added as identifier
  /// size(0..127)
  rosidl_runtime_c__int64__Sequence list;
} v2x_msgs__msg__AttributeIdList;

// Struct for a sequence of v2x_msgs__msg__AttributeIdList.
typedef struct v2x_msgs__msg__AttributeIdList__Sequence
{
  v2x_msgs__msg__AttributeIdList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AttributeIdList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ATTRIBUTE_ID_LIST__STRUCT_H_
