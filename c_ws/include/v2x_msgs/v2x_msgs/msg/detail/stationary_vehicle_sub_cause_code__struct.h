// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/StationaryVehicleSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__STATIONARY_VEHICLE_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__STATIONARY_VEHICLE_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATIONARY_VEHICLE_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__StationaryVehicleSubCauseCode__STATIONARY_VEHICLE_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'STATIONARY_VEHICLE_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__StationaryVehicleSubCauseCode__STATIONARY_VEHICLE_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'STATIONARY_VEHICLE_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__StationaryVehicleSubCauseCode__STATIONARY_VEHICLE_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'STATIONARY_VEHICLE_SUB_CAUSE_CODE_HUMAN_PROBLEM'.
enum
{
  v2x_msgs__msg__StationaryVehicleSubCauseCode__STATIONARY_VEHICLE_SUB_CAUSE_CODE_HUMAN_PROBLEM = 1ll
};

/// Constant 'STATIONARY_VEHICLE_SUB_CAUSE_CODE_VEHICLE_BREAKDOWN'.
enum
{
  v2x_msgs__msg__StationaryVehicleSubCauseCode__STATIONARY_VEHICLE_SUB_CAUSE_CODE_VEHICLE_BREAKDOWN = 2ll
};

/// Constant 'STATIONARY_VEHICLE_SUB_CAUSE_CODE_POST_CRASH'.
enum
{
  v2x_msgs__msg__StationaryVehicleSubCauseCode__STATIONARY_VEHICLE_SUB_CAUSE_CODE_POST_CRASH = 3ll
};

/// Constant 'STATIONARY_VEHICLE_SUB_CAUSE_CODE_PUBLIC_TRANSPORT_STOP'.
enum
{
  v2x_msgs__msg__StationaryVehicleSubCauseCode__STATIONARY_VEHICLE_SUB_CAUSE_CODE_PUBLIC_TRANSPORT_STOP = 4ll
};

/// Constant 'STATIONARY_VEHICLE_SUB_CAUSE_CODE_CARRYING_DANGEROUS_GOODS'.
enum
{
  v2x_msgs__msg__StationaryVehicleSubCauseCode__STATIONARY_VEHICLE_SUB_CAUSE_CODE_CARRYING_DANGEROUS_GOODS = 5ll
};

/// Struct defined in msg/StationaryVehicleSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__StationaryVehicleSubCauseCode
{
  int64_t stationary_vehicle_sub_cause_code;
} v2x_msgs__msg__StationaryVehicleSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__StationaryVehicleSubCauseCode.
typedef struct v2x_msgs__msg__StationaryVehicleSubCauseCode__Sequence
{
  v2x_msgs__msg__StationaryVehicleSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__StationaryVehicleSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__STATIONARY_VEHICLE_SUB_CAUSE_CODE__STRUCT_H_
