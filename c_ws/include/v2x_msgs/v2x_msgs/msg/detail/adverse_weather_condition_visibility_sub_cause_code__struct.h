// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AdverseWeatherConditionVisibilitySubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ADVERSE_WEATHER_CONDITION_VISIBILITY_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ADVERSE_WEATHER_CONDITION_VISIBILITY_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADVERSE_WEATHER_CONDITION_VISIBILITY_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode__ADVERSE_WEATHER_CONDITION_VISIBILITY_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'ADVERSE_WEATHER_CONDITION_VISIBILITY_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode__ADVERSE_WEATHER_CONDITION_VISIBILITY_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode__ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_FOG'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode__ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_FOG = 1ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_SMOKE'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode__ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_SMOKE = 2ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_HEAVY_SNOWFALL'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode__ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_HEAVY_SNOWFALL = 3ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_HEAVY_RAIN'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode__ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_HEAVY_RAIN = 4ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_HEAVY_HAIL'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode__ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_HEAVY_HAIL = 5ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_LOW_SUN_GLARE'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode__ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_LOW_SUN_GLARE = 6ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_SANDSTORMS'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode__ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_SANDSTORMS = 7ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_SWARMS_OF_INSECTS'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode__ADVERSE_WEATHER_CONDITIONVISIBILITY_SUB_CAUSE_CODE_SWARMS_OF_INSECTS = 8ll
};

/// Struct defined in msg/AdverseWeatherConditionVisibilitySubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode
{
  int64_t adverse_weather_condition_visibility_sub_cause_code;
} v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode;

// Struct for a sequence of v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode.
typedef struct v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode__Sequence
{
  v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AdverseWeatherConditionVisibilitySubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ADVERSE_WEATHER_CONDITION_VISIBILITY_SUB_CAUSE_CODE__STRUCT_H_
