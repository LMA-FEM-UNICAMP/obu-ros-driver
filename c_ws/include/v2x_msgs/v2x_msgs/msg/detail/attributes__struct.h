// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Attributes.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ATTRIBUTES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ATTRIBUTES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ATTRIBUTE_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__Attributes__ATTRIBUTE_ID_RANGE_MIN = 0ll
};

/// Constant 'ATTRIBUTE_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__Attributes__ATTRIBUTE_ID_RANGE_MAX = 127ll
};

/// Struct defined in msg/Attributes in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__Attributes
{
  int64_t attribute_id;
  /// container-reference not parsed
  int64_t attribute_value;
} v2x_msgs__msg__Attributes;

// Struct for a sequence of v2x_msgs__msg__Attributes.
typedef struct v2x_msgs__msg__Attributes__Sequence
{
  v2x_msgs__msg__Attributes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Attributes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ATTRIBUTES__STRUCT_H_
