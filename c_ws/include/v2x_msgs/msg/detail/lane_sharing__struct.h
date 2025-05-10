// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneSharing.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_SHARING__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_SHARING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_SHARING_OVERLAPPING_LANE_DESCRIPTION_PROVIDED'.
enum
{
  v2x_msgs__msg__LaneSharing__LANE_SHARING_OVERLAPPING_LANE_DESCRIPTION_PROVIDED = 0ll
};

/// Constant 'LANE_SHARING_MULTIPLE_LANES_TREATED_AS_ONE_LANE'.
enum
{
  v2x_msgs__msg__LaneSharing__LANE_SHARING_MULTIPLE_LANES_TREATED_AS_ONE_LANE = 1ll
};

/// Constant 'LANE_SHARING_OTHER_NON_MOTORIZED_TRAFFIC_TYPES'.
enum
{
  v2x_msgs__msg__LaneSharing__LANE_SHARING_OTHER_NON_MOTORIZED_TRAFFIC_TYPES = 2ll
};

/// Constant 'LANE_SHARING_INDIVIDUAL_MOTORIZED_VEHICLE_TRAFFIC'.
enum
{
  v2x_msgs__msg__LaneSharing__LANE_SHARING_INDIVIDUAL_MOTORIZED_VEHICLE_TRAFFIC = 3ll
};

/// Constant 'LANE_SHARING_BUS_VEHICLE_TRAFFIC'.
enum
{
  v2x_msgs__msg__LaneSharing__LANE_SHARING_BUS_VEHICLE_TRAFFIC = 4ll
};

/// Constant 'LANE_SHARING_TAXI_VEHICLE_TRAFFIC'.
enum
{
  v2x_msgs__msg__LaneSharing__LANE_SHARING_TAXI_VEHICLE_TRAFFIC = 5ll
};

/// Constant 'LANE_SHARING_PEDESTRIANS_TRAFFIC'.
enum
{
  v2x_msgs__msg__LaneSharing__LANE_SHARING_PEDESTRIANS_TRAFFIC = 6ll
};

/// Constant 'LANE_SHARING_CYCLIST_VEHICLE_TRAFFIC'.
enum
{
  v2x_msgs__msg__LaneSharing__LANE_SHARING_CYCLIST_VEHICLE_TRAFFIC = 7ll
};

/// Constant 'LANE_SHARING_TRACKED_VEHICLE_TRAFFIC'.
enum
{
  v2x_msgs__msg__LaneSharing__LANE_SHARING_TRACKED_VEHICLE_TRAFFIC = 8ll
};

/// Constant 'LANE_SHARING_PEDESTRIAN_TRAFFIC'.
enum
{
  v2x_msgs__msg__LaneSharing__LANE_SHARING_PEDESTRIAN_TRAFFIC = 9ll
};

/// Struct defined in msg/LaneSharing in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneSharing
{
  int64_t lane_sharing;
} v2x_msgs__msg__LaneSharing;

// Struct for a sequence of v2x_msgs__msg__LaneSharing.
typedef struct v2x_msgs__msg__LaneSharing__Sequence
{
  v2x_msgs__msg__LaneSharing * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneSharing__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_SHARING__STRUCT_H_
