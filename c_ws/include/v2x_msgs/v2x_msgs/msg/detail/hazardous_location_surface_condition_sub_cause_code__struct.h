// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/HazardousLocationSurfaceConditionSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__HAZARDOUS_LOCATION_SURFACE_CONDITION_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__HAZARDOUS_LOCATION_SURFACE_CONDITION_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAZARDOUS_LOCATION_SURFACE_CONDITION_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__HAZARDOUS_LOCATION_SURFACE_CONDITION_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'HAZARDOUS_LOCATION_SURFACE_CONDITION_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__HAZARDOUS_LOCATION_SURFACE_CONDITION_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_ROCKFALLS'.
enum
{
  v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_ROCKFALLS = 1ll
};

/// Constant 'HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_EARTHQUAKE_DAMAGE'.
enum
{
  v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_EARTHQUAKE_DAMAGE = 2ll
};

/// Constant 'HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_SEWER_COLLAPSE'.
enum
{
  v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_SEWER_COLLAPSE = 3ll
};

/// Constant 'HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_SUBSIDENCE'.
enum
{
  v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_SUBSIDENCE = 4ll
};

/// Constant 'HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_SNOW_DRIFTS'.
enum
{
  v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_SNOW_DRIFTS = 5ll
};

/// Constant 'HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_STORM_DAMAGE'.
enum
{
  v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_STORM_DAMAGE = 6ll
};

/// Constant 'HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_BURST_PIPE'.
enum
{
  v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_BURST_PIPE = 7ll
};

/// Constant 'HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_VOLCANO_ERUPTION'.
enum
{
  v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_VOLCANO_ERUPTION = 8ll
};

/// Constant 'HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_FALLING_ICE'.
enum
{
  v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__HAZARDOUS_LOCATIONSURFACE_CONDITION_SUB_CAUSE_CODE_FALLING_ICE = 9ll
};

/// Struct defined in msg/HazardousLocationSurfaceConditionSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode
{
  int64_t hazardous_location_surface_condition_sub_cause_code;
} v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode.
typedef struct v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__Sequence
{
  v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__HazardousLocationSurfaceConditionSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__HAZARDOUS_LOCATION_SURFACE_CONDITION_SUB_CAUSE_CODE__STRUCT_H_
