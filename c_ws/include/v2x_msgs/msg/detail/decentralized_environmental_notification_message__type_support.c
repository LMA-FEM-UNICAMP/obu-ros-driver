// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/DecentralizedEnvironmentalNotificationMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/decentralized_environmental_notification_message__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/decentralized_environmental_notification_message__functions.h"
#include "v2x_msgs/msg/detail/decentralized_environmental_notification_message__struct.h"


// Include directives for member types
// Member `management`
#include "v2x_msgs/msg/management_container.h"
// Member `management`
#include "v2x_msgs/msg/detail/management_container__rosidl_typesupport_introspection_c.h"
// Member `situation`
#include "v2x_msgs/msg/situation_container.h"
// Member `situation`
#include "v2x_msgs/msg/detail/situation_container__rosidl_typesupport_introspection_c.h"
// Member `location`
#include "v2x_msgs/msg/location_container.h"
// Member `location`
#include "v2x_msgs/msg/detail/location_container__rosidl_typesupport_introspection_c.h"
// Member `alacarte`
#include "v2x_msgs/msg/alacarte_container.h"
// Member `alacarte`
#include "v2x_msgs/msg/detail/alacarte_container__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__init(message_memory);
}

void v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_fini_function(void * message_memory)
{
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_message_member_array[7] = {
  {
    "management",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage, management),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "situation_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage, situation_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "situation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage, situation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage, location_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alacarte_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage, alacarte_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alacarte",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage, alacarte),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_message_members = {
  "v2x_msgs__msg",  // message namespace
  "DecentralizedEnvironmentalNotificationMessage",  // message name
  7,  // number of fields
  sizeof(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage),
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_message_member_array,  // message members
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_message_type_support_handle = {
  0,
  &v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DecentralizedEnvironmentalNotificationMessage)() {
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ManagementContainer)();
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SituationContainer)();
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LocationContainer)();
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AlacarteContainer)();
  if (!v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__rosidl_typesupport_introspection_c__DecentralizedEnvironmentalNotificationMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
