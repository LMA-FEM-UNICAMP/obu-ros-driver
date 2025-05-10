// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CollisionRiskSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__COLLISION_RISK_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__COLLISION_RISK_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COLLISION_RISK_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__CollisionRiskSubCauseCode__COLLISION_RISK_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'COLLISION_RISK_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__CollisionRiskSubCauseCode__COLLISION_RISK_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'COLLISION_RISK_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__CollisionRiskSubCauseCode__COLLISION_RISK_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'COLLISION_RISK_SUB_CAUSE_CODE_LONGITUDINAL_COLLISION_RISK'.
enum
{
  v2x_msgs__msg__CollisionRiskSubCauseCode__COLLISION_RISK_SUB_CAUSE_CODE_LONGITUDINAL_COLLISION_RISK = 1ll
};

/// Constant 'COLLISION_RISK_SUB_CAUSE_CODE_CROSSING_COLLISION_RISK'.
enum
{
  v2x_msgs__msg__CollisionRiskSubCauseCode__COLLISION_RISK_SUB_CAUSE_CODE_CROSSING_COLLISION_RISK = 2ll
};

/// Constant 'COLLISION_RISK_SUB_CAUSE_CODE_LATERAL_COLLISION_RISK'.
enum
{
  v2x_msgs__msg__CollisionRiskSubCauseCode__COLLISION_RISK_SUB_CAUSE_CODE_LATERAL_COLLISION_RISK = 3ll
};

/// Constant 'COLLISION_RISK_SUB_CAUSE_CODE_VULNERABLE_ROAD_USER'.
enum
{
  v2x_msgs__msg__CollisionRiskSubCauseCode__COLLISION_RISK_SUB_CAUSE_CODE_VULNERABLE_ROAD_USER = 4ll
};

/// Struct defined in msg/CollisionRiskSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CollisionRiskSubCauseCode
{
  int64_t collision_risk_sub_cause_code;
} v2x_msgs__msg__CollisionRiskSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__CollisionRiskSubCauseCode.
typedef struct v2x_msgs__msg__CollisionRiskSubCauseCode__Sequence
{
  v2x_msgs__msg__CollisionRiskSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CollisionRiskSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__COLLISION_RISK_SUB_CAUSE_CODE__STRUCT_H_
