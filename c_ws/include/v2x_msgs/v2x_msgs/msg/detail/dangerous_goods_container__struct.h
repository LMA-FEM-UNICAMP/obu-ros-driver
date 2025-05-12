// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DangerousGoodsContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DANGEROUS_GOODS_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DANGEROUS_GOODS_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dangerous_goods_basic'
#include "v2x_msgs/msg/detail/dangerous_goods_basic__struct.h"

/// Struct defined in msg/DangerousGoodsContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DangerousGoodsContainer
{
  v2x_msgs__msg__DangerousGoodsBasic dangerous_goods_basic;
} v2x_msgs__msg__DangerousGoodsContainer;

// Struct for a sequence of v2x_msgs__msg__DangerousGoodsContainer.
typedef struct v2x_msgs__msg__DangerousGoodsContainer__Sequence
{
  v2x_msgs__msg__DangerousGoodsContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DangerousGoodsContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DANGEROUS_GOODS_CONTAINER__STRUCT_H_
