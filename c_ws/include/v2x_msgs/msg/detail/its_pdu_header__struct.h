// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ItsPduHeader.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ITS_PDU_HEADER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ITS_PDU_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PROTOCOL_VERSION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ItsPduHeader__PROTOCOL_VERSION_RANGE_MIN = 0ll
};

/// Constant 'PROTOCOL_VERSION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ItsPduHeader__PROTOCOL_VERSION_RANGE_MAX = 255ll
};

/// Constant 'MESSAGE_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_RANGE_MIN = 0ll
};

/// Constant 'MESSAGE_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_RANGE_MAX = 255ll
};

/// Constant 'MESSAGE_ID_DENM'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_DENM = 1ll
};

/// Constant 'MESSAGE_ID_CAM'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_CAM = 2ll
};

/// Constant 'MESSAGE_ID_POI'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_POI = 3ll
};

/// Constant 'MESSAGE_ID_SPATEM'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_SPATEM = 4ll
};

/// Constant 'MESSAGE_ID_MAPEM'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_MAPEM = 5ll
};

/// Constant 'MESSAGE_ID_IVIM'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_IVIM = 6ll
};

/// Constant 'MESSAGE_ID_EV_RSR'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_EV_RSR = 7ll
};

/// Constant 'MESSAGE_ID_TISTPGTRANSACTION'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_TISTPGTRANSACTION = 8ll
};

/// Constant 'MESSAGE_ID_SREM'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_SREM = 9ll
};

/// Constant 'MESSAGE_ID_SSEM'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_SSEM = 10ll
};

/// Constant 'MESSAGE_ID_EVCSN'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_EVCSN = 11ll
};

/// Constant 'MESSAGE_ID_SAEM'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_SAEM = 12ll
};

/// Constant 'MESSAGE_ID_RTCMEM'.
enum
{
  v2x_msgs__msg__ItsPduHeader__MESSAGE_ID_RTCMEM = 13ll
};

// Include directives for member types
// Member 'station_id'
#include "v2x_msgs/msg/detail/station_id__struct.h"

/// Struct defined in msg/ItsPduHeader in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ItsPduHeader
{
  int64_t protocol_version;
  int64_t message_id;
  v2x_msgs__msg__StationID station_id;
} v2x_msgs__msg__ItsPduHeader;

// Struct for a sequence of v2x_msgs__msg__ItsPduHeader.
typedef struct v2x_msgs__msg__ItsPduHeader__Sequence
{
  v2x_msgs__msg__ItsPduHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ItsPduHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ITS_PDU_HEADER__STRUCT_H_
