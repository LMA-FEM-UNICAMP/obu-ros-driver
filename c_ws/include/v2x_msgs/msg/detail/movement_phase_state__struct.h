// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MovementPhaseState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MOVEMENT_PHASE_STATE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MOVEMENT_PHASE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MOVEMENT_PHASE_STATE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__MovementPhaseState__MOVEMENT_PHASE_STATE_UNAVAILABLE = 0ll
};

/// Constant 'MOVEMENT_PHASE_STATE_DARK'.
enum
{
  v2x_msgs__msg__MovementPhaseState__MOVEMENT_PHASE_STATE_DARK = 1ll
};

/// Constant 'MOVEMENT_PHASE_STATE_STOP_THEN_PROCEED'.
enum
{
  v2x_msgs__msg__MovementPhaseState__MOVEMENT_PHASE_STATE_STOP_THEN_PROCEED = 2ll
};

/// Constant 'MOVEMENT_PHASE_STATE_STOP_AND_REMAIN'.
enum
{
  v2x_msgs__msg__MovementPhaseState__MOVEMENT_PHASE_STATE_STOP_AND_REMAIN = 3ll
};

/// Constant 'MOVEMENT_PHASE_STATE_PRE_MOVEMENT'.
enum
{
  v2x_msgs__msg__MovementPhaseState__MOVEMENT_PHASE_STATE_PRE_MOVEMENT = 4ll
};

/// Constant 'MOVEMENT_PHASE_STATE_PERMISSIVE_MOVEMENT_ALLOWED'.
enum
{
  v2x_msgs__msg__MovementPhaseState__MOVEMENT_PHASE_STATE_PERMISSIVE_MOVEMENT_ALLOWED = 5ll
};

/// Constant 'MOVEMENT_PHASE_STATE_PROTECTED_MOVEMENT_ALLOWED'.
enum
{
  v2x_msgs__msg__MovementPhaseState__MOVEMENT_PHASE_STATE_PROTECTED_MOVEMENT_ALLOWED = 6ll
};

/// Constant 'MOVEMENT_PHASE_STATE_PERMISSIVE_CLEARANCE'.
enum
{
  v2x_msgs__msg__MovementPhaseState__MOVEMENT_PHASE_STATE_PERMISSIVE_CLEARANCE = 7ll
};

/// Constant 'MOVEMENT_PHASE_STATE_PROTECTED_CLEARANCE'.
enum
{
  v2x_msgs__msg__MovementPhaseState__MOVEMENT_PHASE_STATE_PROTECTED_CLEARANCE = 8ll
};

/// Constant 'MOVEMENT_PHASE_STATE_CAUTION_CONFLICTING_TRAFFIC'.
enum
{
  v2x_msgs__msg__MovementPhaseState__MOVEMENT_PHASE_STATE_CAUTION_CONFLICTING_TRAFFIC = 9ll
};

/// Struct defined in msg/MovementPhaseState in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MovementPhaseState
{
  int64_t movement_phase_state;
} v2x_msgs__msg__MovementPhaseState;

// Struct for a sequence of v2x_msgs__msg__MovementPhaseState.
typedef struct v2x_msgs__msg__MovementPhaseState__Sequence
{
  v2x_msgs__msg__MovementPhaseState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MovementPhaseState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MOVEMENT_PHASE_STATE__STRUCT_H_
