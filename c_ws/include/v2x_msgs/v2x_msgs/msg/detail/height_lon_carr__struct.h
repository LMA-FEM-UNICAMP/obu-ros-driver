// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/HeightLonCarr.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__HEIGHT_LON_CARR__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__HEIGHT_LON_CARR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HEIGHT_LON_CARR_RANGE_MIN'.
enum
{
  v2x_msgs__msg__HeightLonCarr__HEIGHT_LON_CARR_RANGE_MIN = 1ll
};

/// Constant 'HEIGHT_LON_CARR_RANGE_MAX'.
enum
{
  v2x_msgs__msg__HeightLonCarr__HEIGHT_LON_CARR_RANGE_MAX = 100ll
};

/// Constant 'HEIGHT_LON_CARR_ONE_CENTIMETER'.
enum
{
  v2x_msgs__msg__HeightLonCarr__HEIGHT_LON_CARR_ONE_CENTIMETER = 1ll
};

/// Constant 'HEIGHT_LON_CARR_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__HeightLonCarr__HEIGHT_LON_CARR_UNAVAILABLE = 100ll
};

/// Struct defined in msg/HeightLonCarr in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__HeightLonCarr
{
  int64_t height_lon_carr;
} v2x_msgs__msg__HeightLonCarr;

// Struct for a sequence of v2x_msgs__msg__HeightLonCarr.
typedef struct v2x_msgs__msg__HeightLonCarr__Sequence
{
  v2x_msgs__msg__HeightLonCarr * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__HeightLonCarr__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__HEIGHT_LON_CARR__STRUCT_H_
