// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PosCentMass.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__POS_CENT_MASS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__POS_CENT_MASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POS_CENT_MASS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__PosCentMass__POS_CENT_MASS_RANGE_MIN = 1ll
};

/// Constant 'POS_CENT_MASS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__PosCentMass__POS_CENT_MASS_RANGE_MAX = 63ll
};

/// Constant 'POS_CENT_MASS_TEN_CENTIMETERS'.
enum
{
  v2x_msgs__msg__PosCentMass__POS_CENT_MASS_TEN_CENTIMETERS = 1ll
};

/// Constant 'POS_CENT_MASS_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__PosCentMass__POS_CENT_MASS_UNAVAILABLE = 63ll
};

/// Struct defined in msg/PosCentMass in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PosCentMass
{
  int64_t pos_cent_mass;
} v2x_msgs__msg__PosCentMass;

// Struct for a sequence of v2x_msgs__msg__PosCentMass.
typedef struct v2x_msgs__msg__PosCentMass__Sequence
{
  v2x_msgs__msg__PosCentMass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PosCentMass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__POS_CENT_MASS__STRUCT_H_
