// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/TxSecurity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/tx_security__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/tx_security__functions.h"
#include "v2x_msgs/msg/detail/tx_security__struct.h"


// Include directives for member types
// Member `type`
#include "v2x_msgs/msg/encap_type.h"
// Member `type`
#include "v2x_msgs/msg/detail/encap_type__rosidl_typesupport_introspection_c.h"
// Member `its_aid`
#include "v2x_msgs/msg/its_aid.h"
// Member `its_aid`
#include "v2x_msgs/msg/detail/its_aid__rosidl_typesupport_introspection_c.h"
// Member `ssp_len`
#include "v2x_msgs/msg/ssp_len.h"
// Member `ssp_len`
#include "v2x_msgs/msg/detail/ssp_len__rosidl_typesupport_introspection_c.h"
// Member `ssp`
#include "v2x_msgs/msg/ssp.h"
// Member `ssp`
#include "v2x_msgs/msg/detail/ssp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__TxSecurity__init(message_memory);
}

void v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_fini_function(void * message_memory)
{
  v2x_msgs__msg__TxSecurity__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_message_member_array[4] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TxSecurity, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "its_aid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TxSecurity, its_aid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ssp_len",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TxSecurity, ssp_len),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ssp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TxSecurity, ssp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_message_members = {
  "v2x_msgs__msg",  // message namespace
  "TxSecurity",  // message name
  4,  // number of fields
  sizeof(v2x_msgs__msg__TxSecurity),
  v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_message_member_array,  // message members
  v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_message_type_support_handle = {
  0,
  &v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TxSecurity)() {
  v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EncapType)();
  v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ItsAID)();
  v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SSPLen)();
  v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SSP)();
  if (!v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__TxSecurity__rosidl_typesupport_introspection_c__TxSecurity_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
