// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/RequestorPositionVector.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/requestor_position_vector__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/requestor_position_vector__functions.h"
#include "v2x_msgs/msg/detail/requestor_position_vector__struct.h"


// Include directives for member types
// Member `position`
#include "v2x_msgs/msg/position3_d.h"
// Member `position`
#include "v2x_msgs/msg/detail/position3_d__rosidl_typesupport_introspection_c.h"
// Member `heading`
#include "v2x_msgs/msg/angle.h"
// Member `heading`
#include "v2x_msgs/msg/detail/angle__rosidl_typesupport_introspection_c.h"
// Member `speed`
#include "v2x_msgs/msg/transmission_and_speed.h"
// Member `speed`
#include "v2x_msgs/msg/detail/transmission_and_speed__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__RequestorPositionVector__init(message_memory);
}

void v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_fini_function(void * message_memory)
{
  v2x_msgs__msg__RequestorPositionVector__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_message_member_array[5] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorPositionVector, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorPositionVector, heading_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorPositionVector, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorPositionVector, speed_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorPositionVector, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_message_members = {
  "v2x_msgs__msg",  // message namespace
  "RequestorPositionVector",  // message name
  5,  // number of fields
  sizeof(v2x_msgs__msg__RequestorPositionVector),
  v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_message_member_array,  // message members
  v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_message_type_support_handle = {
  0,
  &v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RequestorPositionVector)() {
  v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Position3D)();
  v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Angle)();
  v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TransmissionAndSpeed)();
  if (!v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__RequestorPositionVector__rosidl_typesupport_introspection_c__RequestorPositionVector_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
