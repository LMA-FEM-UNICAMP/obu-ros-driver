// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DangerousGoodsBasic.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DANGEROUS_GOODS_BASIC__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DANGEROUS_GOODS_BASIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DANGEROUS_GOODS_BASIC_EXPLOSIVES1'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_EXPLOSIVES1 = 0ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_EXPLOSIVES2'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_EXPLOSIVES2 = 1ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_EXPLOSIVES3'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_EXPLOSIVES3 = 2ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_EXPLOSIVES4'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_EXPLOSIVES4 = 3ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_EXPLOSIVES5'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_EXPLOSIVES5 = 4ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_EXPLOSIVES6'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_EXPLOSIVES6 = 5ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_FLAMMABLE_GASES'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_FLAMMABLE_GASES = 6ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_NON_FLAMMABLE_GASES'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_NON_FLAMMABLE_GASES = 7ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_TOXIC_GASES'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_TOXIC_GASES = 8ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_FLAMMABLE_LIQUIDS'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_FLAMMABLE_LIQUIDS = 9ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_FLAMMABLE_SOLIDS'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_FLAMMABLE_SOLIDS = 10ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_SUBSTANCES_LIABLE_TO_SPONTANEOUS_COMBUSTION'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_SUBSTANCES_LIABLE_TO_SPONTANEOUS_COMBUSTION = 11ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_SUBSTANCES_EMITTING_FLAMMABLE_GASES_UPON_CONTACT_WITH_WATER'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_SUBSTANCES_EMITTING_FLAMMABLE_GASES_UPON_CONTACT_WITH_WATER = 12ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_OXIDIZING_SUBSTANCES'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_OXIDIZING_SUBSTANCES = 13ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_ORGANIC_PEROXIDES'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_ORGANIC_PEROXIDES = 14ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_TOXIC_SUBSTANCES'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_TOXIC_SUBSTANCES = 15ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_INFECTIOUS_SUBSTANCES'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_INFECTIOUS_SUBSTANCES = 16ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_RADIOACTIVE_MATERIAL'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_RADIOACTIVE_MATERIAL = 17ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_CORROSIVE_SUBSTANCES'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_CORROSIVE_SUBSTANCES = 18ll
};

/// Constant 'DANGEROUS_GOODS_BASIC_MISCELLANEOUS_DANGEROUS_SUBSTANCES'.
enum
{
  v2x_msgs__msg__DangerousGoodsBasic__DANGEROUS_GOODS_BASIC_MISCELLANEOUS_DANGEROUS_SUBSTANCES = 19ll
};

/// Struct defined in msg/DangerousGoodsBasic in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DangerousGoodsBasic
{
  int64_t dangerous_goods_basic;
} v2x_msgs__msg__DangerousGoodsBasic;

// Struct for a sequence of v2x_msgs__msg__DangerousGoodsBasic.
typedef struct v2x_msgs__msg__DangerousGoodsBasic__Sequence
{
  v2x_msgs__msg__DangerousGoodsBasic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DangerousGoodsBasic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DANGEROUS_GOODS_BASIC__STRUCT_H_
