// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/GoodsType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__GOODS_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__GOODS_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GOODS_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_RANGE_MIN = 0ll
};

/// Constant 'GOODS_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_RANGE_MAX = 15ll
};

/// Constant 'GOODS_TYPE_AMMUNITION'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_AMMUNITION = 0ll
};

/// Constant 'GOODS_TYPE_CHEMICALS'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_CHEMICALS = 1ll
};

/// Constant 'GOODS_TYPE_EMPTY'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_EMPTY = 2ll
};

/// Constant 'GOODS_TYPE_FUEL'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_FUEL = 3ll
};

/// Constant 'GOODS_TYPE_GLASS'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_GLASS = 4ll
};

/// Constant 'GOODS_TYPE_DANGEROUS'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_DANGEROUS = 5ll
};

/// Constant 'GOODS_TYPE_LIQUID'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_LIQUID = 6ll
};

/// Constant 'GOODS_TYPE_LIVE_STOCK'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_LIVE_STOCK = 7ll
};

/// Constant 'GOODS_TYPE_DANGEROUS_FOR_PEOPLE'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_DANGEROUS_FOR_PEOPLE = 8ll
};

/// Constant 'GOODS_TYPE_DANGEROUS_FOR_THE_ENVIRONMENT'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_DANGEROUS_FOR_THE_ENVIRONMENT = 9ll
};

/// Constant 'GOODS_TYPE_DANGEROUS_FOR_WATER'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_DANGEROUS_FOR_WATER = 10ll
};

/// Constant 'GOODS_TYPE_PERISHABLE_PRODUCTS'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_PERISHABLE_PRODUCTS = 11ll
};

/// Constant 'GOODS_TYPE_PHARMACEUTICAL'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_PHARMACEUTICAL = 12ll
};

/// Constant 'GOODS_TYPE_VEHICLES'.
enum
{
  v2x_msgs__msg__GoodsType__GOODS_TYPE_VEHICLES = 13ll
};

/// Struct defined in msg/GoodsType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__GoodsType
{
  int64_t goods_type;
} v2x_msgs__msg__GoodsType;

// Struct for a sequence of v2x_msgs__msg__GoodsType.
typedef struct v2x_msgs__msg__GoodsType__Sequence
{
  v2x_msgs__msg__GoodsType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__GoodsType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__GOODS_TYPE__STRUCT_H_
