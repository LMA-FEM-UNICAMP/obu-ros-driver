// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SegmentAttributeXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SEGMENT_ATTRIBUTE_XY_RESERVED'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_RESERVED = 0ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_DO_NOT_BLOCK'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_DO_NOT_BLOCK = 1ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_WHITE_LINE'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_WHITE_LINE = 2ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_MERGING_LANE_LEFT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_MERGING_LANE_LEFT = 3ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_MERGING_LANE_RIGHT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_MERGING_LANE_RIGHT = 4ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_CURB_ON_LEFT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_CURB_ON_LEFT = 5ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_CURB_ON_RIGHT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_CURB_ON_RIGHT = 6ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_LOADINGZONE_ON_LEFT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_LOADINGZONE_ON_LEFT = 7ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_LOADINGZONE_ON_RIGHT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_LOADINGZONE_ON_RIGHT = 8ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_TURN_OUT_POINT_ON_LEFT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_TURN_OUT_POINT_ON_LEFT = 9ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_TURN_OUT_POINT_ON_RIGHT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_TURN_OUT_POINT_ON_RIGHT = 10ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_ADJACENT_PARKING_ON_LEFT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_ADJACENT_PARKING_ON_LEFT = 11ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_ADJACENT_PARKING_ON_RIGHT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_ADJACENT_PARKING_ON_RIGHT = 12ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_ADJACENT_BIKE_LANE_ON_LEFT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_ADJACENT_BIKE_LANE_ON_LEFT = 13ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_ADJACENT_BIKE_LANE_ON_RIGHT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_ADJACENT_BIKE_LANE_ON_RIGHT = 14ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_SHARED_BIKE_LANE'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_SHARED_BIKE_LANE = 15ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_BIKE_BOX_IN_FRONT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_BIKE_BOX_IN_FRONT = 16ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_TRANSIT_STOP_ON_LEFT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_TRANSIT_STOP_ON_LEFT = 17ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_TRANSIT_STOP_ON_RIGHT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_TRANSIT_STOP_ON_RIGHT = 18ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_TRANSIT_STOP_IN_LANE'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_TRANSIT_STOP_IN_LANE = 19ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_SHARED_WITH_TRACKED_VEHICLE'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_SHARED_WITH_TRACKED_VEHICLE = 20ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_SAFE_ISLAND'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_SAFE_ISLAND = 21ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_LOW_CURBS_PRESENT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_LOW_CURBS_PRESENT = 22ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_RUMBLE_STRIP_PRESENT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_RUMBLE_STRIP_PRESENT = 23ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_AUDIBLE_SIGNALING_PRESENT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_AUDIBLE_SIGNALING_PRESENT = 24ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_ADAPTIVE_TIMING_PRESENT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_ADAPTIVE_TIMING_PRESENT = 25ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_RF_SIGNAL_REQUEST_PRESENT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_RF_SIGNAL_REQUEST_PRESENT = 26ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_PARTIAL_CURB_INTRUSION'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_PARTIAL_CURB_INTRUSION = 27ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_TAPER_TO_LEFT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_TAPER_TO_LEFT = 28ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_TAPER_TO_RIGHT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_TAPER_TO_RIGHT = 29ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_TAPER_TO_CENTER_LINE'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_TAPER_TO_CENTER_LINE = 30ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_PARALLEL_PARKING'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_PARALLEL_PARKING = 31ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_HEAD_IN_PARKING'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_HEAD_IN_PARKING = 32ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_FREE_PARKING'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_FREE_PARKING = 33ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_TIME_RESTRICTIONS_ON_PARKING'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_TIME_RESTRICTIONS_ON_PARKING = 34ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_COST_TO_PARK'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_COST_TO_PARK = 35ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_MID_BLOCK_CURB_PRESENT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_MID_BLOCK_CURB_PRESENT = 36ll
};

/// Constant 'SEGMENT_ATTRIBUTE_XY_UN_EVEN_PAVEMENT_PRESENT'.
enum
{
  v2x_msgs__msg__SegmentAttributeXY__SEGMENT_ATTRIBUTE_XY_UN_EVEN_PAVEMENT_PRESENT = 37ll
};

/// Struct defined in msg/SegmentAttributeXY in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SegmentAttributeXY
{
  int64_t segment_attribute_xy;
} v2x_msgs__msg__SegmentAttributeXY;

// Struct for a sequence of v2x_msgs__msg__SegmentAttributeXY.
typedef struct v2x_msgs__msg__SegmentAttributeXY__Sequence
{
  v2x_msgs__msg__SegmentAttributeXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SegmentAttributeXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__STRUCT_H_
