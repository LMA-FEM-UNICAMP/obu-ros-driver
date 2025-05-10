// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/ReceiptServicePart.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/receipt_service_part__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/receipt_service_part__functions.h"
#include "v2x_msgs/msg/detail/receipt_service_part__struct.h"


// Include directives for member types
// Member `session_time`
#include "v2x_msgs/msg/date_and_time.h"
// Member `session_time`
#include "v2x_msgs/msg/detail/date_and_time__rosidl_typesupport_introspection_c.h"
// Member `session_service_provider`
#include "v2x_msgs/msg/provider.h"
// Member `session_service_provider`
#include "v2x_msgs/msg/detail/provider__rosidl_typesupport_introspection_c.h"
// Member `type_of_session`
#include "v2x_msgs/msg/station_type.h"
// Member `type_of_session`
#include "v2x_msgs/msg/detail/station_type__rosidl_typesupport_introspection_c.h"
// Member `session_result_operational`
#include "v2x_msgs/msg/result_op.h"
// Member `session_result_operational`
#include "v2x_msgs/msg/detail/result_op__rosidl_typesupport_introspection_c.h"
// Member `session_result_financial`
#include "v2x_msgs/msg/result_fin.h"
// Member `session_result_financial`
#include "v2x_msgs/msg/detail/result_fin__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__ReceiptServicePart__init(message_memory);
}

void v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_fini_function(void * message_memory)
{
  v2x_msgs__msg__ReceiptServicePart__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_message_member_array[7] = {
  {
    "session_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptServicePart, session_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_service_provider",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptServicePart, session_service_provider),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "station_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptServicePart, station_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptServicePart, session_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type_of_session",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptServicePart, type_of_session),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_result_operational",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptServicePart, session_result_operational),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_result_financial",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptServicePart, session_result_financial),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_message_members = {
  "v2x_msgs__msg",  // message namespace
  "ReceiptServicePart",  // message name
  7,  // number of fields
  sizeof(v2x_msgs__msg__ReceiptServicePart),
  v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_message_member_array,  // message members
  v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_message_type_support_handle = {
  0,
  &v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReceiptServicePart)() {
  v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DateAndTime)();
  v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Provider)();
  v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, StationType)();
  v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ResultOp)();
  v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ResultFin)();
  if (!v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__ReceiptServicePart__rosidl_typesupport_introspection_c__ReceiptServicePart_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
