// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleBreakdownSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__VehicleBreakdownSubCauseCode__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__VehicleBreakdownSubCauseCode__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__VehicleBreakdownSubCauseCode__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_LACK_OF_FUEL'.
enum
{
  v2x_msgs__msg__VehicleBreakdownSubCauseCode__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_LACK_OF_FUEL = 1ll
};

/// Constant 'VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_LACK_OF_BATTERY_POWER'.
enum
{
  v2x_msgs__msg__VehicleBreakdownSubCauseCode__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_LACK_OF_BATTERY_POWER = 2ll
};

/// Constant 'VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_ENGINE_PROBLEM'.
enum
{
  v2x_msgs__msg__VehicleBreakdownSubCauseCode__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_ENGINE_PROBLEM = 3ll
};

/// Constant 'VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_TRANSMISSION_PROBLEM'.
enum
{
  v2x_msgs__msg__VehicleBreakdownSubCauseCode__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_TRANSMISSION_PROBLEM = 4ll
};

/// Constant 'VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_ENGINE_COOLING_PROBLEM'.
enum
{
  v2x_msgs__msg__VehicleBreakdownSubCauseCode__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_ENGINE_COOLING_PROBLEM = 5ll
};

/// Constant 'VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_BRAKING_SYSTEM_PROBLEM'.
enum
{
  v2x_msgs__msg__VehicleBreakdownSubCauseCode__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_BRAKING_SYSTEM_PROBLEM = 6ll
};

/// Constant 'VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_STEERING_PROBLEM'.
enum
{
  v2x_msgs__msg__VehicleBreakdownSubCauseCode__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_STEERING_PROBLEM = 7ll
};

/// Constant 'VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_TYRE_PUNCTURE'.
enum
{
  v2x_msgs__msg__VehicleBreakdownSubCauseCode__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_TYRE_PUNCTURE = 8ll
};

/// Constant 'VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_TYRE_PRESSURE_PROBLEM'.
enum
{
  v2x_msgs__msg__VehicleBreakdownSubCauseCode__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE_TYRE_PRESSURE_PROBLEM = 9ll
};

/// Struct defined in msg/VehicleBreakdownSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleBreakdownSubCauseCode
{
  int64_t vehicle_breakdown_sub_cause_code;
} v2x_msgs__msg__VehicleBreakdownSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__VehicleBreakdownSubCauseCode.
typedef struct v2x_msgs__msg__VehicleBreakdownSubCauseCode__Sequence
{
  v2x_msgs__msg__VehicleBreakdownSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleBreakdownSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_BREAKDOWN_SUB_CAUSE_CODE__STRUCT_H_
