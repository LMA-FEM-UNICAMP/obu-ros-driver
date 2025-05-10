// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DangerousGoodsExtended.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DANGEROUS_GOODS_EXTENDED__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DANGEROUS_GOODS_EXTENDED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UN_NUMBER_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DangerousGoodsExtended__UN_NUMBER_RANGE_MIN = 0ll
};

/// Constant 'UN_NUMBER_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DangerousGoodsExtended__UN_NUMBER_RANGE_MAX = 9999ll
};

// Include directives for member types
// Member 'dangerous_goods_type'
#include "v2x_msgs/msg/detail/dangerous_goods_basic__struct.h"
// Member 'emergency_action_code'
// Member 'company_name'
#include "rosidl_runtime_c/string.h"
// Member 'phone_number'
#include "v2x_msgs/msg/detail/phone_number__struct.h"

/// Struct defined in msg/DangerousGoodsExtended in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DangerousGoodsExtended
{
  v2x_msgs__msg__DangerousGoodsBasic dangerous_goods_type;
  int64_t un_number;
  bool elevated_temperature;
  bool tunnels_restricted;
  bool limited_quantity;
  /// Optional Field
  bool emergency_action_code_present;
  rosidl_runtime_c__String emergency_action_code;
  /// Optional Field
  bool phone_number_present;
  v2x_msgs__msg__PhoneNumber phone_number;
  /// Optional Field
  bool company_name_present;
  rosidl_runtime_c__String company_name;
} v2x_msgs__msg__DangerousGoodsExtended;

// Struct for a sequence of v2x_msgs__msg__DangerousGoodsExtended.
typedef struct v2x_msgs__msg__DangerousGoodsExtended__Sequence
{
  v2x_msgs__msg__DangerousGoodsExtended * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DangerousGoodsExtended__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DANGEROUS_GOODS_EXTENDED__STRUCT_H_
