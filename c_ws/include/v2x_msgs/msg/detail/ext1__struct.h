// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Ext1.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EXT1__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EXT1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EXT1_NOTHING'.
enum
{
  v2x_msgs__msg__Ext1__EXT1_NOTHING = 0ll
};

/// Constant 'EXT1_CONTENT'.
enum
{
  v2x_msgs__msg__Ext1__EXT1_CONTENT = 1ll
};

/// Constant 'EXT1_EXTENSION'.
enum
{
  v2x_msgs__msg__Ext1__EXT1_EXTENSION = 2ll
};

// Include directives for member types
// Member 'extension'
#include "v2x_msgs/msg/detail/ext2__struct.h"

/// Struct defined in msg/Ext1 in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Ext1
{
  /// CHOICE! - Choose exactly of the containers
  int64_t ext1_container_select;
  /// container 1
  int64_t content;
  /// container 2
  v2x_msgs__msg__Ext2 extension;
} v2x_msgs__msg__Ext1;

// Struct for a sequence of v2x_msgs__msg__Ext1.
typedef struct v2x_msgs__msg__Ext1__Sequence
{
  v2x_msgs__msg__Ext1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Ext1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EXT1__STRUCT_H_
