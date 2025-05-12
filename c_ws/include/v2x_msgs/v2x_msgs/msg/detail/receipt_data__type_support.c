// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/ReceiptData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/receipt_data__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/receipt_data__functions.h"
#include "v2x_msgs/msg/detail/receipt_data__struct.h"


// Include directives for member types
// Member `session_time`
#include "v2x_msgs/msg/date_and_time.h"
// Member `session_time`
#include "v2x_msgs/msg/detail/date_and_time__rosidl_typesupport_introspection_c.h"
// Member `session_service_provider`
// Member `session_contract_provider`
#include "v2x_msgs/msg/provider.h"
// Member `session_service_provider`
// Member `session_contract_provider`
#include "v2x_msgs/msg/detail/provider__rosidl_typesupport_introspection_c.h"
// Member `location_of_station`
#include "v2x_msgs/msg/int2.h"
// Member `location_of_station`
#include "v2x_msgs/msg/detail/int2__rosidl_typesupport_introspection_c.h"
// Member `session_location`
#include "v2x_msgs/msg/session_location.h"
// Member `session_location`
#include "v2x_msgs/msg/detail/session_location__rosidl_typesupport_introspection_c.h"
// Member `session_type`
// Member `session_tariff_class`
// Member `session_claimed_class`
#include "v2x_msgs/msg/int1.h"
// Member `session_type`
// Member `session_tariff_class`
// Member `session_claimed_class`
#include "v2x_msgs/msg/detail/int1__rosidl_typesupport_introspection_c.h"
// Member `session_result`
#include "v2x_msgs/msg/result_op.h"
// Member `session_result`
#include "v2x_msgs/msg/detail/result_op__rosidl_typesupport_introspection_c.h"
// Member `session_fee`
#include "v2x_msgs/msg/payment_fee.h"
// Member `session_fee`
#include "v2x_msgs/msg/detail/payment_fee__rosidl_typesupport_introspection_c.h"
// Member `session_type_of_contract`
// Member `receipt_data_authenticator`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__ReceiptData__init(message_memory);
}

void v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_fini_function(void * message_memory)
{
  v2x_msgs__msg__ReceiptData__fini(message_memory);
}

size_t v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__size_function__ReceiptData__session_type_of_contract(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__get_const_function__ReceiptData__session_type_of_contract(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__get_function__ReceiptData__session_type_of_contract(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__fetch_function__ReceiptData__session_type_of_contract(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__get_const_function__ReceiptData__session_type_of_contract(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__assign_function__ReceiptData__session_type_of_contract(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__get_function__ReceiptData__session_type_of_contract(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__resize_function__ReceiptData__session_type_of_contract(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__size_function__ReceiptData__receipt_data_authenticator(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__get_const_function__ReceiptData__receipt_data_authenticator(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__get_function__ReceiptData__receipt_data_authenticator(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__fetch_function__ReceiptData__receipt_data_authenticator(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__get_const_function__ReceiptData__receipt_data_authenticator(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__assign_function__ReceiptData__receipt_data_authenticator(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__get_function__ReceiptData__receipt_data_authenticator(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__resize_function__ReceiptData__receipt_data_authenticator(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_member_array[13] = {
  {
    "session_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptData, session_time),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__ReceiptData, session_service_provider),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location_of_station",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptData, location_of_station),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptData, session_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptData, session_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptData, session_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_tariff_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptData, session_tariff_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_claimed_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptData, session_claimed_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_fee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptData, session_fee),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_contract_provider",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptData, session_contract_provider),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_type_of_contract",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptData, session_type_of_contract),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__size_function__ReceiptData__session_type_of_contract,  // size() function pointer
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__get_const_function__ReceiptData__session_type_of_contract,  // get_const(index) function pointer
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__get_function__ReceiptData__session_type_of_contract,  // get(index) function pointer
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__fetch_function__ReceiptData__session_type_of_contract,  // fetch(index, &value) function pointer
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__assign_function__ReceiptData__session_type_of_contract,  // assign(index, value) function pointer
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__resize_function__ReceiptData__session_type_of_contract  // resize(index) function pointer
  },
  {
    "session_context_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptData, session_context_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "receipt_data_authenticator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ReceiptData, receipt_data_authenticator),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__size_function__ReceiptData__receipt_data_authenticator,  // size() function pointer
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__get_const_function__ReceiptData__receipt_data_authenticator,  // get_const(index) function pointer
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__get_function__ReceiptData__receipt_data_authenticator,  // get(index) function pointer
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__fetch_function__ReceiptData__receipt_data_authenticator,  // fetch(index, &value) function pointer
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__assign_function__ReceiptData__receipt_data_authenticator,  // assign(index, value) function pointer
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__resize_function__ReceiptData__receipt_data_authenticator  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_members = {
  "v2x_msgs__msg",  // message namespace
  "ReceiptData",  // message name
  13,  // number of fields
  sizeof(v2x_msgs__msg__ReceiptData),
  v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_member_array,  // message members
  v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_type_support_handle = {
  0,
  &v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReceiptData)() {
  v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DateAndTime)();
  v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Provider)();
  v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Int2)();
  v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SessionLocation)();
  v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Int1)();
  v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ResultOp)();
  v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Int1)();
  v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Int1)();
  v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PaymentFee)();
  v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Provider)();
  if (!v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__ReceiptData__rosidl_typesupport_introspection_c__ReceiptData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
