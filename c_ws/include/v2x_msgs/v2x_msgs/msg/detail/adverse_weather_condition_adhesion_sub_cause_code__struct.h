// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AdverseWeatherConditionAdhesionSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ADVERSE_WEATHER_CONDITION_ADHESION_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ADVERSE_WEATHER_CONDITION_ADHESION_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADVERSE_WEATHER_CONDITION_ADHESION_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__ADVERSE_WEATHER_CONDITION_ADHESION_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'ADVERSE_WEATHER_CONDITION_ADHESION_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__ADVERSE_WEATHER_CONDITION_ADHESION_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_HEAVY_FROST_ON_ROAD'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_HEAVY_FROST_ON_ROAD = 1ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_FUEL_ON_ROAD'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_FUEL_ON_ROAD = 2ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_MUD_ON_ROAD'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_MUD_ON_ROAD = 3ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_SNOW_ON_ROAD'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_SNOW_ON_ROAD = 4ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_ICE_ON_ROAD'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_ICE_ON_ROAD = 5ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_BLACK_ICE_ON_ROAD'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_BLACK_ICE_ON_ROAD = 6ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_OIL_ON_ROAD'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_OIL_ON_ROAD = 7ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_LOOSE_CHIPPINGS'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_LOOSE_CHIPPINGS = 8ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_INSTANT_BLACK_ICE'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_INSTANT_BLACK_ICE = 9ll
};

/// Constant 'ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_ROADS_SALTED'.
enum
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__ADVERSE_WEATHER_CONDITIONADHESION_SUB_CAUSE_CODE_ROADS_SALTED = 10ll
};

/// Struct defined in msg/AdverseWeatherConditionAdhesionSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode
{
  int64_t adverse_weather_condition_adhesion_sub_cause_code;
} v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode.
typedef struct v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__Sequence
{
  v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AdverseWeatherConditionAdhesionSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ADVERSE_WEATHER_CONDITION_ADHESION_SUB_CAUSE_CODE__STRUCT_H_
