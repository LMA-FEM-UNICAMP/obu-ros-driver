// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RequestorType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REQUESTOR_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__REQUESTOR_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'role'
#include "v2x_msgs/msg/detail/basic_vehicle_role__struct.h"
// Member 'subrole'
#include "v2x_msgs/msg/detail/request_sub_role__struct.h"
// Member 'request'
#include "v2x_msgs/msg/detail/request_importance_level__struct.h"
// Member 'iso3883'
#include "v2x_msgs/msg/detail/iso3833_vehicle_type__struct.h"
// Member 'hpms_type'
#include "v2x_msgs/msg/detail/vehicle_type__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/regional_extension__struct.h"

/// Struct defined in msg/RequestorType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RequestorType
{
  v2x_msgs__msg__BasicVehicleRole role;
  /// Optional Field
  bool subrole_present;
  v2x_msgs__msg__RequestSubRole subrole;
  /// Optional Field
  bool request_present;
  v2x_msgs__msg__RequestImportanceLevel request;
  /// Optional Field
  bool iso3883_present;
  v2x_msgs__msg__Iso3833VehicleType iso3883;
  /// Optional Field
  bool hpms_type_present;
  v2x_msgs__msg__VehicleType hpms_type;
  /// Optional Field
  bool regional_present;
  v2x_msgs__msg__RegionalExtension regional;
} v2x_msgs__msg__RequestorType;

// Struct for a sequence of v2x_msgs__msg__RequestorType.
typedef struct v2x_msgs__msg__RequestorType__Sequence
{
  v2x_msgs__msg__RequestorType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RequestorType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REQUESTOR_TYPE__STRUCT_H_
