// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RequestImportanceLevel.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REQUEST_IMPORTANCE_LEVEL__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__REQUEST_IMPORTANCE_LEVEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL_UN_KNOWN'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL_UN_KNOWN = 0ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL1'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL1 = 1ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL2'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL2 = 2ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL3'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL3 = 3ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL4'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL4 = 4ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL5'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL5 = 5ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL6'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL6 = 6ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL7'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL7 = 7ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL8'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL8 = 8ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL9'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL9 = 9ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL10'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL10 = 10ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL11'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL11 = 11ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL12'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL12 = 12ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL13'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL13 = 13ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL14'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_LEVEL14 = 14ll
};

/// Constant 'REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_RESERVED'.
enum
{
  v2x_msgs__msg__RequestImportanceLevel__REQUEST_IMPORTANCE_LEVEL_REQUEST_IMPORTANCE_RESERVED = 15ll
};

/// Struct defined in msg/RequestImportanceLevel in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RequestImportanceLevel
{
  int64_t request_importance_level;
} v2x_msgs__msg__RequestImportanceLevel;

// Struct for a sequence of v2x_msgs__msg__RequestImportanceLevel.
typedef struct v2x_msgs__msg__RequestImportanceLevel__Sequence
{
  v2x_msgs__msg__RequestImportanceLevel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RequestImportanceLevel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REQUEST_IMPORTANCE_LEVEL__STRUCT_H_
