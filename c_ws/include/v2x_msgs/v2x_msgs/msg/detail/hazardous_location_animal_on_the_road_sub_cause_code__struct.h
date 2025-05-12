// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/HazardousLocationAnimalOnTheRoadSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__HazardousLocationAnimalOnTheRoadSubCauseCode__HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__HazardousLocationAnimalOnTheRoadSubCauseCode__HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'HAZARDOUS_LOCATIONANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__HazardousLocationAnimalOnTheRoadSubCauseCode__HAZARDOUS_LOCATIONANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'HAZARDOUS_LOCATIONANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_WILD_ANIMALS'.
enum
{
  v2x_msgs__msg__HazardousLocationAnimalOnTheRoadSubCauseCode__HAZARDOUS_LOCATIONANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_WILD_ANIMALS = 1ll
};

/// Constant 'HAZARDOUS_LOCATIONANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_HERD_OF_ANIMALS'.
enum
{
  v2x_msgs__msg__HazardousLocationAnimalOnTheRoadSubCauseCode__HAZARDOUS_LOCATIONANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_HERD_OF_ANIMALS = 2ll
};

/// Constant 'HAZARDOUS_LOCATIONANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_SMALL_ANIMALS'.
enum
{
  v2x_msgs__msg__HazardousLocationAnimalOnTheRoadSubCauseCode__HAZARDOUS_LOCATIONANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_SMALL_ANIMALS = 3ll
};

/// Constant 'HAZARDOUS_LOCATIONANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_LARGE_ANIMALS'.
enum
{
  v2x_msgs__msg__HazardousLocationAnimalOnTheRoadSubCauseCode__HAZARDOUS_LOCATIONANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE_LARGE_ANIMALS = 4ll
};

/// Struct defined in msg/HazardousLocationAnimalOnTheRoadSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__HazardousLocationAnimalOnTheRoadSubCauseCode
{
  int64_t hazardous_location_animal_on_the_road_sub_cause_code;
} v2x_msgs__msg__HazardousLocationAnimalOnTheRoadSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__HazardousLocationAnimalOnTheRoadSubCauseCode.
typedef struct v2x_msgs__msg__HazardousLocationAnimalOnTheRoadSubCauseCode__Sequence
{
  v2x_msgs__msg__HazardousLocationAnimalOnTheRoadSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__HazardousLocationAnimalOnTheRoadSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD_SUB_CAUSE_CODE__STRUCT_H_
