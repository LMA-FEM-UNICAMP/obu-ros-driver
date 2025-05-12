// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EquipmentOBUId.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EQUIPMENT_OBU_ID__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EQUIPMENT_OBU_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'equipment_obuid'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/EquipmentOBUId in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EquipmentOBUId
{
  rosidl_runtime_c__int64__Sequence equipment_obuid;
} v2x_msgs__msg__EquipmentOBUId;

// Struct for a sequence of v2x_msgs__msg__EquipmentOBUId.
typedef struct v2x_msgs__msg__EquipmentOBUId__Sequence
{
  v2x_msgs__msg__EquipmentOBUId * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EquipmentOBUId__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EQUIPMENT_OBU_ID__STRUCT_H_
