// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LoadType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LOAD_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LOAD_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goods_type'
#include "v2x_msgs/msg/detail/goods_type__struct.h"
// Member 'dangerous_goods_type'
#include "v2x_msgs/msg/detail/dangerous_goods_basic__struct.h"
// Member 'special_transport_type'
#include "v2x_msgs/msg/detail/special_transport_type__struct.h"

/// Struct defined in msg/LoadType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LoadType
{
  v2x_msgs__msg__GoodsType goods_type;
  v2x_msgs__msg__DangerousGoodsBasic dangerous_goods_type;
  v2x_msgs__msg__SpecialTransportType special_transport_type;
} v2x_msgs__msg__LoadType;

// Struct for a sequence of v2x_msgs__msg__LoadType.
typedef struct v2x_msgs__msg__LoadType__Sequence
{
  v2x_msgs__msg__LoadType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LoadType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LOAD_TYPE__STRUCT_H_
