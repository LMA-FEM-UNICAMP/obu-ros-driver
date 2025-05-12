// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/EventReportRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/event_report_request__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/event_report_request__functions.h"
#include "v2x_msgs/msg/detail/event_report_request__struct.h"


// Include directives for member types
// Member `eid`
// Member `iid`
#include "v2x_msgs/msg/dsrc_eid.h"
// Member `eid`
// Member `iid`
#include "v2x_msgs/msg/detail/dsrc_eid__rosidl_typesupport_introspection_c.h"
// Member `event_type`
#include "v2x_msgs/msg/event_type.h"
// Member `event_type`
#include "v2x_msgs/msg/detail/event_type__rosidl_typesupport_introspection_c.h"
// Member `access_credentials`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__EventReportRequest__init(message_memory);
}

void v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_fini_function(void * message_memory)
{
  v2x_msgs__msg__EventReportRequest__fini(message_memory);
}

size_t v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__size_function__EventReportRequest__access_credentials(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__get_const_function__EventReportRequest__access_credentials(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__get_function__EventReportRequest__access_credentials(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__fetch_function__EventReportRequest__access_credentials(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__get_const_function__EventReportRequest__access_credentials(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__assign_function__EventReportRequest__access_credentials(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__get_function__EventReportRequest__access_credentials(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__resize_function__EventReportRequest__access_credentials(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_message_member_array[9] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EventReportRequest, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EventReportRequest, eid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "event_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EventReportRequest, event_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "access_credentials_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EventReportRequest, access_credentials_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "access_credentials",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EventReportRequest, access_credentials),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__size_function__EventReportRequest__access_credentials,  // size() function pointer
    v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__get_const_function__EventReportRequest__access_credentials,  // get_const(index) function pointer
    v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__get_function__EventReportRequest__access_credentials,  // get(index) function pointer
    v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__fetch_function__EventReportRequest__access_credentials,  // fetch(index, &value) function pointer
    v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__assign_function__EventReportRequest__access_credentials,  // assign(index, value) function pointer
    v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__resize_function__EventReportRequest__access_credentials  // resize(index) function pointer
  },
  {
    "event_parameter_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EventReportRequest, event_parameter_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "event_parameter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EventReportRequest, event_parameter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "iid_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EventReportRequest, iid_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "iid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EventReportRequest, iid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_message_members = {
  "v2x_msgs__msg",  // message namespace
  "EventReportRequest",  // message name
  9,  // number of fields
  sizeof(v2x_msgs__msg__EventReportRequest),
  v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_message_member_array,  // message members
  v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_message_type_support_handle = {
  0,
  &v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EventReportRequest)() {
  v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DsrcEID)();
  v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EventType)();
  v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DsrcEID)();
  if (!v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__EventReportRequest__rosidl_typesupport_introspection_c__EventReportRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
