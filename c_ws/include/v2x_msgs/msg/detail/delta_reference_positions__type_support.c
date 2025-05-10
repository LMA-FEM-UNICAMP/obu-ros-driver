// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/DeltaReferencePositions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/delta_reference_positions__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/delta_reference_positions__functions.h"
#include "v2x_msgs/msg/detail/delta_reference_positions__struct.h"


// Include directives for member types
// Member `positions`
#include "v2x_msgs/msg/delta_reference_position.h"
// Member `positions`
#include "v2x_msgs/msg/detail/delta_reference_position__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__DeltaReferencePositions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__DeltaReferencePositions__init(message_memory);
}

void v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__DeltaReferencePositions_fini_function(void * message_memory)
{
  v2x_msgs__msg__DeltaReferencePositions__fini(message_memory);
}

size_t v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__size_function__DeltaReferencePositions__positions(
  const void * untyped_member)
{
  const v2x_msgs__msg__DeltaReferencePosition__Sequence * member =
    (const v2x_msgs__msg__DeltaReferencePosition__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__get_const_function__DeltaReferencePositions__positions(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__DeltaReferencePosition__Sequence * member =
    (const v2x_msgs__msg__DeltaReferencePosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__get_function__DeltaReferencePositions__positions(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__DeltaReferencePosition__Sequence * member =
    (v2x_msgs__msg__DeltaReferencePosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__fetch_function__DeltaReferencePositions__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__DeltaReferencePosition * item =
    ((const v2x_msgs__msg__DeltaReferencePosition *)
    v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__get_const_function__DeltaReferencePositions__positions(untyped_member, index));
  v2x_msgs__msg__DeltaReferencePosition * value =
    (v2x_msgs__msg__DeltaReferencePosition *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__assign_function__DeltaReferencePositions__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__DeltaReferencePosition * item =
    ((v2x_msgs__msg__DeltaReferencePosition *)
    v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__get_function__DeltaReferencePositions__positions(untyped_member, index));
  const v2x_msgs__msg__DeltaReferencePosition * value =
    (const v2x_msgs__msg__DeltaReferencePosition *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__resize_function__DeltaReferencePositions__positions(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__DeltaReferencePosition__Sequence * member =
    (v2x_msgs__msg__DeltaReferencePosition__Sequence *)(untyped_member);
  v2x_msgs__msg__DeltaReferencePosition__Sequence__fini(member);
  return v2x_msgs__msg__DeltaReferencePosition__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__DeltaReferencePositions_message_member_array[1] = {
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__DeltaReferencePositions, positions),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__size_function__DeltaReferencePositions__positions,  // size() function pointer
    v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__get_const_function__DeltaReferencePositions__positions,  // get_const(index) function pointer
    v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__get_function__DeltaReferencePositions__positions,  // get(index) function pointer
    v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__fetch_function__DeltaReferencePositions__positions,  // fetch(index, &value) function pointer
    v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__assign_function__DeltaReferencePositions__positions,  // assign(index, value) function pointer
    v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__resize_function__DeltaReferencePositions__positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__DeltaReferencePositions_message_members = {
  "v2x_msgs__msg",  // message namespace
  "DeltaReferencePositions",  // message name
  1,  // number of fields
  sizeof(v2x_msgs__msg__DeltaReferencePositions),
  v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__DeltaReferencePositions_message_member_array,  // message members
  v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__DeltaReferencePositions_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__DeltaReferencePositions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__DeltaReferencePositions_message_type_support_handle = {
  0,
  &v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__DeltaReferencePositions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DeltaReferencePositions)() {
  v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__DeltaReferencePositions_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DeltaReferencePosition)();
  if (!v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__DeltaReferencePositions_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__DeltaReferencePositions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__DeltaReferencePositions__rosidl_typesupport_introspection_c__DeltaReferencePositions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
