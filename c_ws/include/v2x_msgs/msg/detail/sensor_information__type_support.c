// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/SensorInformation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/sensor_information__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/sensor_information__functions.h"
#include "v2x_msgs/msg/detail/sensor_information__struct.h"


// Include directives for member types
// Member `sensor_id`
#include "v2x_msgs/msg/identifier.h"
// Member `sensor_id`
#include "v2x_msgs/msg/detail/identifier__rosidl_typesupport_introspection_c.h"
// Member `type`
#include "v2x_msgs/msg/sensor_type.h"
// Member `type`
#include "v2x_msgs/msg/detail/sensor_type__rosidl_typesupport_introspection_c.h"
// Member `detection_area`
#include "v2x_msgs/msg/detection_area.h"
// Member `detection_area`
#include "v2x_msgs/msg/detail/detection_area__rosidl_typesupport_introspection_c.h"
// Member `free_space_confidence`
#include "v2x_msgs/msg/free_space_confidence.h"
// Member `free_space_confidence`
#include "v2x_msgs/msg/detail/free_space_confidence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__SensorInformation__init(message_memory);
}

void v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_fini_function(void * message_memory)
{
  v2x_msgs__msg__SensorInformation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_message_member_array[5] = {
  {
    "sensor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SensorInformation, sensor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SensorInformation, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detection_area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SensorInformation, detection_area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_space_confidence_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SensorInformation, free_space_confidence_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_space_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SensorInformation, free_space_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_message_members = {
  "v2x_msgs__msg",  // message namespace
  "SensorInformation",  // message name
  5,  // number of fields
  sizeof(v2x_msgs__msg__SensorInformation),
  v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_message_member_array,  // message members
  v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_message_type_support_handle = {
  0,
  &v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SensorInformation)() {
  v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Identifier)();
  v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SensorType)();
  v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DetectionArea)();
  v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, FreeSpaceConfidence)();
  if (!v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__SensorInformation__rosidl_typesupport_introspection_c__SensorInformation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
