// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/IviManagementContainer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/ivi_management_container__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/ivi_management_container__functions.h"
#include "v2x_msgs/msg/detail/ivi_management_container__struct.h"


// Include directives for member types
// Member `service_provider_id`
#include "v2x_msgs/msg/provider.h"
// Member `service_provider_id`
#include "v2x_msgs/msg/detail/provider__rosidl_typesupport_introspection_c.h"
// Member `ivi_identification_number`
#include "v2x_msgs/msg/ivi_identification_number.h"
// Member `ivi_identification_number`
#include "v2x_msgs/msg/detail/ivi_identification_number__rosidl_typesupport_introspection_c.h"
// Member `time_stamp`
// Member `valid_from`
// Member `valid_to`
#include "v2x_msgs/msg/timestamp_its.h"
// Member `time_stamp`
// Member `valid_from`
// Member `valid_to`
#include "v2x_msgs/msg/detail/timestamp_its__rosidl_typesupport_introspection_c.h"
// Member `connected_ivi_structures`
#include "v2x_msgs/msg/ivi_identification_numbers.h"
// Member `connected_ivi_structures`
#include "v2x_msgs/msg/detail/ivi_identification_numbers__rosidl_typesupport_introspection_c.h"
// Member `ivi_status`
#include "v2x_msgs/msg/ivi_status.h"
// Member `ivi_status`
#include "v2x_msgs/msg/detail/ivi_status__rosidl_typesupport_introspection_c.h"
// Member `connected_denms`
#include "v2x_msgs/msg/connected_denms.h"
// Member `connected_denms`
#include "v2x_msgs/msg/detail/connected_denms__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__IviManagementContainer__init(message_memory);
}

void v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_fini_function(void * message_memory)
{
  v2x_msgs__msg__IviManagementContainer__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_member_array[13] = {
  {
    "service_provider_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviManagementContainer, service_provider_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ivi_identification_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviManagementContainer, ivi_identification_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_stamp_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviManagementContainer, time_stamp_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviManagementContainer, time_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid_from_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviManagementContainer, valid_from_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid_from",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviManagementContainer, valid_from),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid_to_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviManagementContainer, valid_to_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviManagementContainer, valid_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connected_ivi_structures_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviManagementContainer, connected_ivi_structures_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connected_ivi_structures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviManagementContainer, connected_ivi_structures),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ivi_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviManagementContainer, ivi_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connected_denms_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviManagementContainer, connected_denms_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connected_denms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviManagementContainer, connected_denms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_members = {
  "v2x_msgs__msg",  // message namespace
  "IviManagementContainer",  // message name
  13,  // number of fields
  sizeof(v2x_msgs__msg__IviManagementContainer),
  v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_member_array,  // message members
  v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_type_support_handle = {
  0,
  &v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IviManagementContainer)() {
  v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Provider)();
  v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IviIdentificationNumber)();
  v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TimestampIts)();
  v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TimestampIts)();
  v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TimestampIts)();
  v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IviIdentificationNumbers)();
  v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IviStatus)();
  v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ConnectedDenms)();
  if (!v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__IviManagementContainer__rosidl_typesupport_introspection_c__IviManagementContainer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
