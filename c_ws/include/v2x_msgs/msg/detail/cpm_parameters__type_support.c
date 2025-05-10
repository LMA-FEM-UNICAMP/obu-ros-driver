// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/CpmParameters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/cpm_parameters__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/cpm_parameters__functions.h"
#include "v2x_msgs/msg/detail/cpm_parameters__struct.h"


// Include directives for member types
// Member `management_container`
#include "v2x_msgs/msg/cpm_management_container.h"
// Member `management_container`
#include "v2x_msgs/msg/detail/cpm_management_container__rosidl_typesupport_introspection_c.h"
// Member `station_data_container`
#include "v2x_msgs/msg/station_data_container.h"
// Member `station_data_container`
#include "v2x_msgs/msg/detail/station_data_container__rosidl_typesupport_introspection_c.h"
// Member `sensor_information_container`
#include "v2x_msgs/msg/sensor_information_container.h"
// Member `sensor_information_container`
#include "v2x_msgs/msg/detail/sensor_information_container__rosidl_typesupport_introspection_c.h"
// Member `perceived_object_container`
#include "v2x_msgs/msg/perceived_object_container.h"
// Member `perceived_object_container`
#include "v2x_msgs/msg/detail/perceived_object_container__rosidl_typesupport_introspection_c.h"
// Member `free_space_addendum_container`
#include "v2x_msgs/msg/free_space_addendum_container.h"
// Member `free_space_addendum_container`
#include "v2x_msgs/msg/detail/free_space_addendum_container__rosidl_typesupport_introspection_c.h"
// Member `number_of_perceived_objects`
#include "v2x_msgs/msg/number_of_perceived_objects.h"
// Member `number_of_perceived_objects`
#include "v2x_msgs/msg/detail/number_of_perceived_objects__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__CpmParameters__init(message_memory);
}

void v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_fini_function(void * message_memory)
{
  v2x_msgs__msg__CpmParameters__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_member_array[10] = {
  {
    "management_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CpmParameters, management_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "station_data_container_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CpmParameters, station_data_container_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "station_data_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CpmParameters, station_data_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_information_container_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CpmParameters, sensor_information_container_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_information_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CpmParameters, sensor_information_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "perceived_object_container_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CpmParameters, perceived_object_container_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "perceived_object_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CpmParameters, perceived_object_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_space_addendum_container_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CpmParameters, free_space_addendum_container_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_space_addendum_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CpmParameters, free_space_addendum_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_perceived_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CpmParameters, number_of_perceived_objects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_members = {
  "v2x_msgs__msg",  // message namespace
  "CpmParameters",  // message name
  10,  // number of fields
  sizeof(v2x_msgs__msg__CpmParameters),
  v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_member_array,  // message members
  v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_type_support_handle = {
  0,
  &v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CpmParameters)() {
  v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CpmManagementContainer)();
  v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, StationDataContainer)();
  v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SensorInformationContainer)();
  v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PerceivedObjectContainer)();
  v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, FreeSpaceAddendumContainer)();
  v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, NumberOfPerceivedObjects)();
  if (!v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__CpmParameters__rosidl_typesupport_introspection_c__CpmParameters_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
