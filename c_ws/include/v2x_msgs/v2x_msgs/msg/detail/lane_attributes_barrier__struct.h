// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneAttributesBarrier.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BARRIER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BARRIER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_ATTRIBUTESBARRIER_MEDIAN_REVOCABLE_LANE'.
enum
{
  v2x_msgs__msg__LaneAttributesBarrier__LANE_ATTRIBUTESBARRIER_MEDIAN_REVOCABLE_LANE = 0ll
};

/// Constant 'LANE_ATTRIBUTESBARRIER_MEDIAN'.
enum
{
  v2x_msgs__msg__LaneAttributesBarrier__LANE_ATTRIBUTESBARRIER_MEDIAN = 1ll
};

/// Constant 'LANE_ATTRIBUTESBARRIER_WHITE_LINE_HASHING'.
enum
{
  v2x_msgs__msg__LaneAttributesBarrier__LANE_ATTRIBUTESBARRIER_WHITE_LINE_HASHING = 2ll
};

/// Constant 'LANE_ATTRIBUTESBARRIER_STRIPED_LINES'.
enum
{
  v2x_msgs__msg__LaneAttributesBarrier__LANE_ATTRIBUTESBARRIER_STRIPED_LINES = 3ll
};

/// Constant 'LANE_ATTRIBUTESBARRIER_DOUBLE_STRIPED_LINES'.
enum
{
  v2x_msgs__msg__LaneAttributesBarrier__LANE_ATTRIBUTESBARRIER_DOUBLE_STRIPED_LINES = 4ll
};

/// Constant 'LANE_ATTRIBUTESBARRIER_TRAFFIC_CONES'.
enum
{
  v2x_msgs__msg__LaneAttributesBarrier__LANE_ATTRIBUTESBARRIER_TRAFFIC_CONES = 5ll
};

/// Constant 'LANE_ATTRIBUTESBARRIER_CONSTRUCTION_BARRIER'.
enum
{
  v2x_msgs__msg__LaneAttributesBarrier__LANE_ATTRIBUTESBARRIER_CONSTRUCTION_BARRIER = 6ll
};

/// Constant 'LANE_ATTRIBUTESBARRIER_TRAFFIC_CHANNELS'.
enum
{
  v2x_msgs__msg__LaneAttributesBarrier__LANE_ATTRIBUTESBARRIER_TRAFFIC_CHANNELS = 7ll
};

/// Constant 'LANE_ATTRIBUTESBARRIER_LOW_CURBS'.
enum
{
  v2x_msgs__msg__LaneAttributesBarrier__LANE_ATTRIBUTESBARRIER_LOW_CURBS = 8ll
};

/// Constant 'LANE_ATTRIBUTESBARRIER_HIGH_CURBS'.
enum
{
  v2x_msgs__msg__LaneAttributesBarrier__LANE_ATTRIBUTESBARRIER_HIGH_CURBS = 9ll
};

/// Struct defined in msg/LaneAttributesBarrier in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneAttributesBarrier
{
  int64_t lane_attributes_barrier;
} v2x_msgs__msg__LaneAttributesBarrier;

// Struct for a sequence of v2x_msgs__msg__LaneAttributesBarrier.
typedef struct v2x_msgs__msg__LaneAttributesBarrier__Sequence
{
  v2x_msgs__msg__LaneAttributesBarrier * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneAttributesBarrier__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BARRIER__STRUCT_H_
