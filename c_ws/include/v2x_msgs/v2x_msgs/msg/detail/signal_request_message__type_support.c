// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/SignalRequestMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/signal_request_message__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/signal_request_message__functions.h"
#include "v2x_msgs/msg/detail/signal_request_message__struct.h"


// Include directives for member types
// Member `time_stamp`
#include "v2x_msgs/msg/minute_of_the_year.h"
// Member `time_stamp`
#include "v2x_msgs/msg/detail/minute_of_the_year__rosidl_typesupport_introspection_c.h"
// Member `second`
#include "v2x_msgs/msg/d_second.h"
// Member `second`
#include "v2x_msgs/msg/detail/d_second__rosidl_typesupport_introspection_c.h"
// Member `sequence_number`
#include "v2x_msgs/msg/msg_count.h"
// Member `sequence_number`
#include "v2x_msgs/msg/detail/msg_count__rosidl_typesupport_introspection_c.h"
// Member `requests`
#include "v2x_msgs/msg/signal_request_list.h"
// Member `requests`
#include "v2x_msgs/msg/detail/signal_request_list__rosidl_typesupport_introspection_c.h"
// Member `requestor`
#include "v2x_msgs/msg/requestor_description.h"
// Member `requestor`
#include "v2x_msgs/msg/detail/requestor_description__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_signal_request_message.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_signal_request_message__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__SignalRequestMessage__init(message_memory);
}

void v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_fini_function(void * message_memory)
{
  v2x_msgs__msg__SignalRequestMessage__fini(message_memory);
}

size_t v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__size_function__SignalRequestMessage__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegSignalRequestMessage__Sequence * member =
    (const v2x_msgs__msg__RegSignalRequestMessage__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__get_const_function__SignalRequestMessage__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegSignalRequestMessage__Sequence * member =
    (const v2x_msgs__msg__RegSignalRequestMessage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__get_function__SignalRequestMessage__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegSignalRequestMessage__Sequence * member =
    (v2x_msgs__msg__RegSignalRequestMessage__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__fetch_function__SignalRequestMessage__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegSignalRequestMessage * item =
    ((const v2x_msgs__msg__RegSignalRequestMessage *)
    v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__get_const_function__SignalRequestMessage__regional(untyped_member, index));
  v2x_msgs__msg__RegSignalRequestMessage * value =
    (v2x_msgs__msg__RegSignalRequestMessage *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__assign_function__SignalRequestMessage__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegSignalRequestMessage * item =
    ((v2x_msgs__msg__RegSignalRequestMessage *)
    v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__get_function__SignalRequestMessage__regional(untyped_member, index));
  const v2x_msgs__msg__RegSignalRequestMessage * value =
    (const v2x_msgs__msg__RegSignalRequestMessage *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__resize_function__SignalRequestMessage__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegSignalRequestMessage__Sequence * member =
    (v2x_msgs__msg__RegSignalRequestMessage__Sequence *)(untyped_member);
  v2x_msgs__msg__RegSignalRequestMessage__Sequence__fini(member);
  return v2x_msgs__msg__RegSignalRequestMessage__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_member_array[10] = {
  {
    "time_stamp_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestMessage, time_stamp_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__SignalRequestMessage, time_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestMessage, second),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence_number_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestMessage, sequence_number_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestMessage, sequence_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requests_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestMessage, requests_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requests",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestMessage, requests),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requestor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestMessage, requestor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "regional_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestMessage, regional_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "regional",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestMessage, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__size_function__SignalRequestMessage__regional,  // size() function pointer
    v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__get_const_function__SignalRequestMessage__regional,  // get_const(index) function pointer
    v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__get_function__SignalRequestMessage__regional,  // get(index) function pointer
    v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__fetch_function__SignalRequestMessage__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__assign_function__SignalRequestMessage__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__resize_function__SignalRequestMessage__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_members = {
  "v2x_msgs__msg",  // message namespace
  "SignalRequestMessage",  // message name
  10,  // number of fields
  sizeof(v2x_msgs__msg__SignalRequestMessage),
  v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_member_array,  // message members
  v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_type_support_handle = {
  0,
  &v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SignalRequestMessage)() {
  v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MinuteOfTheYear)();
  v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DSecond)();
  v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MsgCount)();
  v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SignalRequestList)();
  v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RequestorDescription)();
  v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegSignalRequestMessage)();
  if (!v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__SignalRequestMessage__rosidl_typesupport_introspection_c__SignalRequestMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
