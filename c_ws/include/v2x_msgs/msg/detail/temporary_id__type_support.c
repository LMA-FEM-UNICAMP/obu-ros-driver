// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/TemporaryID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/temporary_id__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/temporary_id__functions.h"
#include "v2x_msgs/msg/detail/temporary_id__struct.h"


// Include directives for member types
// Member `temporary_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__TemporaryID_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__TemporaryID__init(message_memory);
}

void v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__TemporaryID_fini_function(void * message_memory)
{
  v2x_msgs__msg__TemporaryID__fini(message_memory);
}

size_t v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__size_function__TemporaryID__temporary_id(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__get_const_function__TemporaryID__temporary_id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__get_function__TemporaryID__temporary_id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__fetch_function__TemporaryID__temporary_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__get_const_function__TemporaryID__temporary_id(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__assign_function__TemporaryID__temporary_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__get_function__TemporaryID__temporary_id(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__resize_function__TemporaryID__temporary_id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__TemporaryID_message_member_array[1] = {
  {
    "temporary_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TemporaryID, temporary_id),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__size_function__TemporaryID__temporary_id,  // size() function pointer
    v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__get_const_function__TemporaryID__temporary_id,  // get_const(index) function pointer
    v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__get_function__TemporaryID__temporary_id,  // get(index) function pointer
    v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__fetch_function__TemporaryID__temporary_id,  // fetch(index, &value) function pointer
    v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__assign_function__TemporaryID__temporary_id,  // assign(index, value) function pointer
    v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__resize_function__TemporaryID__temporary_id  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__TemporaryID_message_members = {
  "v2x_msgs__msg",  // message namespace
  "TemporaryID",  // message name
  1,  // number of fields
  sizeof(v2x_msgs__msg__TemporaryID),
  v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__TemporaryID_message_member_array,  // message members
  v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__TemporaryID_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__TemporaryID_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__TemporaryID_message_type_support_handle = {
  0,
  &v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__TemporaryID_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TemporaryID)() {
  if (!v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__TemporaryID_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__TemporaryID_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__TemporaryID__rosidl_typesupport_introspection_c__TemporaryID_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
