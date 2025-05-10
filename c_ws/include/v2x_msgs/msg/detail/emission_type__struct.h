// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EmissionType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EMISSION_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EMISSION_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EMISSION_TYPE_EURO1'.
enum
{
  v2x_msgs__msg__EmissionType__EMISSION_TYPE_EURO1 = 0ll
};

/// Constant 'EMISSION_TYPE_EURO2'.
enum
{
  v2x_msgs__msg__EmissionType__EMISSION_TYPE_EURO2 = 1ll
};

/// Constant 'EMISSION_TYPE_EURO3'.
enum
{
  v2x_msgs__msg__EmissionType__EMISSION_TYPE_EURO3 = 2ll
};

/// Constant 'EMISSION_TYPE_EURO4'.
enum
{
  v2x_msgs__msg__EmissionType__EMISSION_TYPE_EURO4 = 3ll
};

/// Constant 'EMISSION_TYPE_EURO5'.
enum
{
  v2x_msgs__msg__EmissionType__EMISSION_TYPE_EURO5 = 4ll
};

/// Constant 'EMISSION_TYPE_EURO6'.
enum
{
  v2x_msgs__msg__EmissionType__EMISSION_TYPE_EURO6 = 5ll
};

/// Struct defined in msg/EmissionType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EmissionType
{
  int64_t emission_type;
} v2x_msgs__msg__EmissionType;

// Struct for a sequence of v2x_msgs__msg__EmissionType.
typedef struct v2x_msgs__msg__EmissionType__Sequence
{
  v2x_msgs__msg__EmissionType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EmissionType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EMISSION_TYPE__STRUCT_H_
