// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/HazardousLocationObstacleOnTheRoadSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode__HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode__HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode__HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_SHED_LOAD'.
enum
{
  v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode__HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_SHED_LOAD = 1ll
};

/// Constant 'HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_PARTS_OF_VEHICLES'.
enum
{
  v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode__HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_PARTS_OF_VEHICLES = 2ll
};

/// Constant 'HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_PARTS_OF_TYRES'.
enum
{
  v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode__HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_PARTS_OF_TYRES = 3ll
};

/// Constant 'HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_BIG_OBJECTS'.
enum
{
  v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode__HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_BIG_OBJECTS = 4ll
};

/// Constant 'HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_FALLEN_TREES'.
enum
{
  v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode__HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_FALLEN_TREES = 5ll
};

/// Constant 'HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_HUB_CAPS'.
enum
{
  v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode__HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_HUB_CAPS = 6ll
};

/// Constant 'HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_WAITING_VEHICLES'.
enum
{
  v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode__HAZARDOUS_LOCATIONOBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE_WAITING_VEHICLES = 7ll
};

/// Struct defined in msg/HazardousLocationObstacleOnTheRoadSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode
{
  int64_t hazardous_location_obstacle_on_the_road_sub_cause_code;
} v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode.
typedef struct v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode__Sequence
{
  v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__HazardousLocationObstacleOnTheRoadSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD_SUB_CAUSE_CODE__STRUCT_H_
