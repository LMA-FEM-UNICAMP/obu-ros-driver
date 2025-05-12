// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SlowVehicleSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SLOW_VEHICLE_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SLOW_VEHICLE_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SLOW_VEHICLE_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SlowVehicleSubCauseCode__SLOW_VEHICLE_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'SLOW_VEHICLE_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SlowVehicleSubCauseCode__SLOW_VEHICLE_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'SLOW_VEHICLE_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__SlowVehicleSubCauseCode__SLOW_VEHICLE_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'SLOW_VEHICLE_SUB_CAUSE_CODE_MAINTENANCE_VEHICLE'.
enum
{
  v2x_msgs__msg__SlowVehicleSubCauseCode__SLOW_VEHICLE_SUB_CAUSE_CODE_MAINTENANCE_VEHICLE = 1ll
};

/// Constant 'SLOW_VEHICLE_SUB_CAUSE_CODE_VEHICLES_SLOWING_TO_LOOK_AT_ACCIDENT'.
enum
{
  v2x_msgs__msg__SlowVehicleSubCauseCode__SLOW_VEHICLE_SUB_CAUSE_CODE_VEHICLES_SLOWING_TO_LOOK_AT_ACCIDENT = 2ll
};

/// Constant 'SLOW_VEHICLE_SUB_CAUSE_CODE_ABNORMAL_LOAD'.
enum
{
  v2x_msgs__msg__SlowVehicleSubCauseCode__SLOW_VEHICLE_SUB_CAUSE_CODE_ABNORMAL_LOAD = 3ll
};

/// Constant 'SLOW_VEHICLE_SUB_CAUSE_CODE_ABNORMAL_WIDE_LOAD'.
enum
{
  v2x_msgs__msg__SlowVehicleSubCauseCode__SLOW_VEHICLE_SUB_CAUSE_CODE_ABNORMAL_WIDE_LOAD = 4ll
};

/// Constant 'SLOW_VEHICLE_SUB_CAUSE_CODE_CONVOY'.
enum
{
  v2x_msgs__msg__SlowVehicleSubCauseCode__SLOW_VEHICLE_SUB_CAUSE_CODE_CONVOY = 5ll
};

/// Constant 'SLOW_VEHICLE_SUB_CAUSE_CODE_SNOWPLOUGH'.
enum
{
  v2x_msgs__msg__SlowVehicleSubCauseCode__SLOW_VEHICLE_SUB_CAUSE_CODE_SNOWPLOUGH = 6ll
};

/// Constant 'SLOW_VEHICLE_SUB_CAUSE_CODE_DEICING'.
enum
{
  v2x_msgs__msg__SlowVehicleSubCauseCode__SLOW_VEHICLE_SUB_CAUSE_CODE_DEICING = 7ll
};

/// Constant 'SLOW_VEHICLE_SUB_CAUSE_CODE_SALTING_VEHICLES'.
enum
{
  v2x_msgs__msg__SlowVehicleSubCauseCode__SLOW_VEHICLE_SUB_CAUSE_CODE_SALTING_VEHICLES = 8ll
};

/// Struct defined in msg/SlowVehicleSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SlowVehicleSubCauseCode
{
  int64_t slow_vehicle_sub_cause_code;
} v2x_msgs__msg__SlowVehicleSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__SlowVehicleSubCauseCode.
typedef struct v2x_msgs__msg__SlowVehicleSubCauseCode__Sequence
{
  v2x_msgs__msg__SlowVehicleSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SlowVehicleSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SLOW_VEHICLE_SUB_CAUSE_CODE__STRUCT_H_
