// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INTERSECTION_STATUS_OBJECT_MANUAL_CONTROL_IS_ENABLED'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_MANUAL_CONTROL_IS_ENABLED = 0ll
};

/// Constant 'INTERSECTION_STATUS_OBJECT_STOP_TIME_IS_ACTIVATED'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_STOP_TIME_IS_ACTIVATED = 1ll
};

/// Constant 'INTERSECTION_STATUS_OBJECT_FAILURE_FLASH'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_FAILURE_FLASH = 2ll
};

/// Constant 'INTERSECTION_STATUS_OBJECT_PREEMPT_IS_ACTIVE'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_PREEMPT_IS_ACTIVE = 3ll
};

/// Constant 'INTERSECTION_STATUS_OBJECT_SIGNAL_PRIORITY_IS_ACTIVE'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_SIGNAL_PRIORITY_IS_ACTIVE = 4ll
};

/// Constant 'INTERSECTION_STATUS_OBJECT_FIXED_TIME_OPERATION'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_FIXED_TIME_OPERATION = 5ll
};

/// Constant 'INTERSECTION_STATUS_OBJECT_TRAFFIC_DEPENDENT_OPERATION'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_TRAFFIC_DEPENDENT_OPERATION = 6ll
};

/// Constant 'INTERSECTION_STATUS_OBJECT_STANDBY_OPERATION'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_STANDBY_OPERATION = 7ll
};

/// Constant 'INTERSECTION_STATUS_OBJECT_FAILURE_MODE'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_FAILURE_MODE = 8ll
};

/// Constant 'INTERSECTION_STATUS_OBJECT_OFF'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_OFF = 9ll
};

/// Constant 'INTERSECTION_STATUS_OBJECT_RECENT_MAPMESSAGE_UPDATE'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_RECENT_MAPMESSAGE_UPDATE = 10ll
};

/// Constant 'INTERSECTION_STATUS_OBJECT_RECENT_CHANGE_IN_MAPASSIGNED_LANES_IDS_USED'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_RECENT_CHANGE_IN_MAPASSIGNED_LANES_IDS_USED = 11ll
};

/// Constant 'INTERSECTION_STATUS_OBJECT_NO_VALID_MAPIS_AVAILABLE_AT_THIS_TIME'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_NO_VALID_MAPIS_AVAILABLE_AT_THIS_TIME = 12ll
};

/// Constant 'INTERSECTION_STATUS_OBJECT_NO_VALID_SPATIS_AVAILABLE_AT_THIS_TIME'.
enum
{
  v2x_msgs__msg__IntersectionStatusObject__INTERSECTION_STATUS_OBJECT_NO_VALID_SPATIS_AVAILABLE_AT_THIS_TIME = 13ll
};

/// Struct defined in msg/IntersectionStatusObject in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__IntersectionStatusObject
{
  int64_t intersection_status_object;
} v2x_msgs__msg__IntersectionStatusObject;

// Struct for a sequence of v2x_msgs__msg__IntersectionStatusObject.
typedef struct v2x_msgs__msg__IntersectionStatusObject__Sequence
{
  v2x_msgs__msg__IntersectionStatusObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__IntersectionStatusObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__STRUCT_H_
