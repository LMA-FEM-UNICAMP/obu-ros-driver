// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DSRCmsgID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DSR_CMSG_ID__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DSR_CMSG_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DSRCMSG_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DSRCmsgID__DSRCMSG_ID_RANGE_MIN = 0ll
};

/// Constant 'DSRCMSG_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DSRCmsgID__DSRCMSG_ID_RANGE_MAX = 32767ll
};

/// Constant 'DSRCMSG_ID_MAP_DATA'.
enum
{
  v2x_msgs__msg__DSRCmsgID__DSRCMSG_ID_MAP_DATA = 18ll
};

/// Constant 'DSRCMSG_ID_RTCM_CORRECTIONS'.
enum
{
  v2x_msgs__msg__DSRCmsgID__DSRCMSG_ID_RTCM_CORRECTIONS = 28ll
};

/// Constant 'DSRCMSG_ID_SIGNAL_PHASE_AND_TIMING_MESSAGE'.
enum
{
  v2x_msgs__msg__DSRCmsgID__DSRCMSG_ID_SIGNAL_PHASE_AND_TIMING_MESSAGE = 19ll
};

/// Constant 'DSRCMSG_ID_SIGNAL_REQUEST_MESSAGE'.
enum
{
  v2x_msgs__msg__DSRCmsgID__DSRCMSG_ID_SIGNAL_REQUEST_MESSAGE = 29ll
};

/// Constant 'DSRCMSG_ID_SIGNAL_STATUS_MESSAGE'.
enum
{
  v2x_msgs__msg__DSRCmsgID__DSRCMSG_ID_SIGNAL_STATUS_MESSAGE = 30ll
};

/// Struct defined in msg/DSRCmsgID in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DSRCmsgID
{
  int64_t dsrcmsg_id;
} v2x_msgs__msg__DSRCmsgID;

// Struct for a sequence of v2x_msgs__msg__DSRCmsgID.
typedef struct v2x_msgs__msg__DSRCmsgID__Sequence
{
  v2x_msgs__msg__DSRCmsgID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DSRCmsgID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DSR_CMSG_ID__STRUCT_H_
