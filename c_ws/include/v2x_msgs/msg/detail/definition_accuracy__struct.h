// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DefinitionAccuracy.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DEFINITION_ACCURACY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DEFINITION_ACCURACY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEFINITION_ACCURACY_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DefinitionAccuracy__DEFINITION_ACCURACY_RANGE_MIN = 0ll
};

/// Constant 'DEFINITION_ACCURACY_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DefinitionAccuracy__DEFINITION_ACCURACY_RANGE_MAX = 7ll
};

/// Constant 'DEFINITION_ACCURACY_ONE_CM'.
enum
{
  v2x_msgs__msg__DefinitionAccuracy__DEFINITION_ACCURACY_ONE_CM = 0ll
};

/// Constant 'DEFINITION_ACCURACY_TWO_CM'.
enum
{
  v2x_msgs__msg__DefinitionAccuracy__DEFINITION_ACCURACY_TWO_CM = 1ll
};

/// Constant 'DEFINITION_ACCURACY_FIVE_CM'.
enum
{
  v2x_msgs__msg__DefinitionAccuracy__DEFINITION_ACCURACY_FIVE_CM = 2ll
};

/// Constant 'DEFINITION_ACCURACY_TEN_CM'.
enum
{
  v2x_msgs__msg__DefinitionAccuracy__DEFINITION_ACCURACY_TEN_CM = 3ll
};

/// Constant 'DEFINITION_ACCURACY_TWENTY_CM'.
enum
{
  v2x_msgs__msg__DefinitionAccuracy__DEFINITION_ACCURACY_TWENTY_CM = 4ll
};

/// Constant 'DEFINITION_ACCURACY_FIFTY_CM'.
enum
{
  v2x_msgs__msg__DefinitionAccuracy__DEFINITION_ACCURACY_FIFTY_CM = 5ll
};

/// Constant 'DEFINITION_ACCURACY_ONE_METER'.
enum
{
  v2x_msgs__msg__DefinitionAccuracy__DEFINITION_ACCURACY_ONE_METER = 6ll
};

/// Constant 'DEFINITION_ACCURACY_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__DefinitionAccuracy__DEFINITION_ACCURACY_UNAVAILABLE = 7ll
};

/// Struct defined in msg/DefinitionAccuracy in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DefinitionAccuracy
{
  int64_t definition_accuracy;
} v2x_msgs__msg__DefinitionAccuracy;

// Struct for a sequence of v2x_msgs__msg__DefinitionAccuracy.
typedef struct v2x_msgs__msg__DefinitionAccuracy__Sequence
{
  v2x_msgs__msg__DefinitionAccuracy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DefinitionAccuracy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DEFINITION_ACCURACY__STRUCT_H_
