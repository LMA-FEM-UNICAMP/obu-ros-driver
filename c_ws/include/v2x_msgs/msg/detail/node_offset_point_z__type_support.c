// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/NodeOffsetPointZ.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/node_offset_point_z__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/node_offset_point_z__functions.h"
#include "v2x_msgs/msg/detail/node_offset_point_z__struct.h"


// Include directives for member types
// Member `nodez1`
#include "v2x_msgs/msg/offset_b10.h"
// Member `nodez1`
#include "v2x_msgs/msg/detail/offset_b10__rosidl_typesupport_introspection_c.h"
// Member `nodez2`
#include "v2x_msgs/msg/offset_b11.h"
// Member `nodez2`
#include "v2x_msgs/msg/detail/offset_b11__rosidl_typesupport_introspection_c.h"
// Member `nodez3`
#include "v2x_msgs/msg/offset_b12.h"
// Member `nodez3`
#include "v2x_msgs/msg/detail/offset_b12__rosidl_typesupport_introspection_c.h"
// Member `nodez4`
#include "v2x_msgs/msg/offset_b13.h"
// Member `nodez4`
#include "v2x_msgs/msg/detail/offset_b13__rosidl_typesupport_introspection_c.h"
// Member `nodez5`
#include "v2x_msgs/msg/offset_b14.h"
// Member `nodez5`
#include "v2x_msgs/msg/detail/offset_b14__rosidl_typesupport_introspection_c.h"
// Member `nodez6`
#include "v2x_msgs/msg/offset_b16.h"
// Member `nodez6`
#include "v2x_msgs/msg/detail/offset_b16__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__NodeOffsetPointZ__init(message_memory);
}

void v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_fini_function(void * message_memory)
{
  v2x_msgs__msg__NodeOffsetPointZ__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_member_array[7] = {
  {
    "node_offset_point_z_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeOffsetPointZ, node_offset_point_z_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodez1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeOffsetPointZ, nodez1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodez2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeOffsetPointZ, nodez2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodez3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeOffsetPointZ, nodez3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodez4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeOffsetPointZ, nodez4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodez5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeOffsetPointZ, nodez5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodez6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeOffsetPointZ, nodez6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_members = {
  "v2x_msgs__msg",  // message namespace
  "NodeOffsetPointZ",  // message name
  7,  // number of fields
  sizeof(v2x_msgs__msg__NodeOffsetPointZ),
  v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_member_array,  // message members
  v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_type_support_handle = {
  0,
  &v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, NodeOffsetPointZ)() {
  v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, OffsetB10)();
  v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, OffsetB11)();
  v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, OffsetB12)();
  v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, OffsetB13)();
  v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, OffsetB14)();
  v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, OffsetB16)();
  if (!v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__NodeOffsetPointZ__rosidl_typesupport_introspection_c__NodeOffsetPointZ_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
