// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/FileName.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__FILE_NAME__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__FILE_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FILE_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__FileName__FILE_ID_RANGE_MIN = 0ll
};

/// Constant 'FILE_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__FileName__FILE_ID_RANGE_MAX = 127ll
};

// Include directives for member types
// Member 'ase_id'
#include "v2x_msgs/msg/detail/dsrc_eid__struct.h"

/// Struct defined in msg/FileName in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__FileName
{
  v2x_msgs__msg__DsrcEID ase_id;
  int64_t file_id;
} v2x_msgs__msg__FileName;

// Struct for a sequence of v2x_msgs__msg__FileName.
typedef struct v2x_msgs__msg__FileName__Sequence
{
  v2x_msgs__msg__FileName * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__FileName__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__FILE_NAME__STRUCT_H_
