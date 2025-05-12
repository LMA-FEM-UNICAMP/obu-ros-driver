// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EmergencyVehicleApproachingSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_APPROACHING_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_APPROACHING_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EMERGENCY_VEHICLE_APPROACHING_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__EmergencyVehicleApproachingSubCauseCode__EMERGENCY_VEHICLE_APPROACHING_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'EMERGENCY_VEHICLE_APPROACHING_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__EmergencyVehicleApproachingSubCauseCode__EMERGENCY_VEHICLE_APPROACHING_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'EMERGENCY_VEHICLE_APPROACHING_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__EmergencyVehicleApproachingSubCauseCode__EMERGENCY_VEHICLE_APPROACHING_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'EMERGENCY_VEHICLE_APPROACHING_SUB_CAUSE_CODE_EMERGENCY_VEHICLE_APPROACHING'.
enum
{
  v2x_msgs__msg__EmergencyVehicleApproachingSubCauseCode__EMERGENCY_VEHICLE_APPROACHING_SUB_CAUSE_CODE_EMERGENCY_VEHICLE_APPROACHING = 1ll
};

/// Constant 'EMERGENCY_VEHICLE_APPROACHING_SUB_CAUSE_CODE_PRIORITIZED_VEHICLE_APPROACHING'.
enum
{
  v2x_msgs__msg__EmergencyVehicleApproachingSubCauseCode__EMERGENCY_VEHICLE_APPROACHING_SUB_CAUSE_CODE_PRIORITIZED_VEHICLE_APPROACHING = 2ll
};

/// Struct defined in msg/EmergencyVehicleApproachingSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EmergencyVehicleApproachingSubCauseCode
{
  int64_t emergency_vehicle_approaching_sub_cause_code;
} v2x_msgs__msg__EmergencyVehicleApproachingSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__EmergencyVehicleApproachingSubCauseCode.
typedef struct v2x_msgs__msg__EmergencyVehicleApproachingSubCauseCode__Sequence
{
  v2x_msgs__msg__EmergencyVehicleApproachingSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EmergencyVehicleApproachingSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_APPROACHING_SUB_CAUSE_CODE__STRUCT_H_
