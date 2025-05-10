// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/InternationalSignDirectionalFlowOfLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_DIRECTIONAL_FLOW_OF_LANE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_DIRECTIONAL_FLOW_OF_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INTERNATIONAL_SIGN_DIRECTIONAL_FLOW_OF_LANE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__INTERNATIONAL_SIGN_DIRECTIONAL_FLOW_OF_LANE_RANGE_MIN = 1ll
};

/// Constant 'INTERNATIONAL_SIGN_DIRECTIONAL_FLOW_OF_LANE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__INTERNATIONAL_SIGN_DIRECTIONAL_FLOW_OF_LANE_RANGE_MAX = 8ll
};

/// Constant 'INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_S_DL'.
enum
{
  v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_S_DL = 1ll
};

/// Constant 'INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_S_LT'.
enum
{
  v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_S_LT = 2ll
};

/// Constant 'INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_S_RT'.
enum
{
  v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_S_RT = 3ll
};

/// Constant 'INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_L_TO'.
enum
{
  v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_L_TO = 4ll
};

/// Constant 'INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_R_TO'.
enum
{
  v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_R_TO = 5ll
};

/// Constant 'INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_C_LL'.
enum
{
  v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_C_LL = 6ll
};

/// Constant 'INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_C_RI'.
enum
{
  v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_C_RI = 7ll
};

/// Constant 'INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_O_VL'.
enum
{
  v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__INTERNATIONAL_SIGNDIRECTIONAL_FLOW_OF_LANE_O_VL = 8ll
};

/// Struct defined in msg/InternationalSignDirectionalFlowOfLane in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__InternationalSignDirectionalFlowOfLane
{
  int64_t international_sign_directional_flow_of_lane;
} v2x_msgs__msg__InternationalSignDirectionalFlowOfLane;

// Struct for a sequence of v2x_msgs__msg__InternationalSignDirectionalFlowOfLane.
typedef struct v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__Sequence
{
  v2x_msgs__msg__InternationalSignDirectionalFlowOfLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_DIRECTIONAL_FLOW_OF_LANE__STRUCT_H_
