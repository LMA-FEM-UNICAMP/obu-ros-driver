// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/PerceivedObjectContainer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/perceived_object_container__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/perceived_object_container__functions.h"
#include "v2x_msgs/msg/detail/perceived_object_container__struct.h"


// Include directives for member types
// Member `container`
#include "v2x_msgs/msg/perceived_object.h"
// Member `container`
#include "v2x_msgs/msg/detail/perceived_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__PerceivedObjectContainer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__PerceivedObjectContainer__init(message_memory);
}

void v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__PerceivedObjectContainer_fini_function(void * message_memory)
{
  v2x_msgs__msg__PerceivedObjectContainer__fini(message_memory);
}

size_t v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__size_function__PerceivedObjectContainer__container(
  const void * untyped_member)
{
  const v2x_msgs__msg__PerceivedObject__Sequence * member =
    (const v2x_msgs__msg__PerceivedObject__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__get_const_function__PerceivedObjectContainer__container(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__PerceivedObject__Sequence * member =
    (const v2x_msgs__msg__PerceivedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__get_function__PerceivedObjectContainer__container(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__PerceivedObject__Sequence * member =
    (v2x_msgs__msg__PerceivedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__fetch_function__PerceivedObjectContainer__container(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__PerceivedObject * item =
    ((const v2x_msgs__msg__PerceivedObject *)
    v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__get_const_function__PerceivedObjectContainer__container(untyped_member, index));
  v2x_msgs__msg__PerceivedObject * value =
    (v2x_msgs__msg__PerceivedObject *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__assign_function__PerceivedObjectContainer__container(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__PerceivedObject * item =
    ((v2x_msgs__msg__PerceivedObject *)
    v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__get_function__PerceivedObjectContainer__container(untyped_member, index));
  const v2x_msgs__msg__PerceivedObject * value =
    (const v2x_msgs__msg__PerceivedObject *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__resize_function__PerceivedObjectContainer__container(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__PerceivedObject__Sequence * member =
    (v2x_msgs__msg__PerceivedObject__Sequence *)(untyped_member);
  v2x_msgs__msg__PerceivedObject__Sequence__fini(member);
  return v2x_msgs__msg__PerceivedObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__PerceivedObjectContainer_message_member_array[1] = {
  {
    "container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__PerceivedObjectContainer, container),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__size_function__PerceivedObjectContainer__container,  // size() function pointer
    v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__get_const_function__PerceivedObjectContainer__container,  // get_const(index) function pointer
    v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__get_function__PerceivedObjectContainer__container,  // get(index) function pointer
    v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__fetch_function__PerceivedObjectContainer__container,  // fetch(index, &value) function pointer
    v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__assign_function__PerceivedObjectContainer__container,  // assign(index, value) function pointer
    v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__resize_function__PerceivedObjectContainer__container  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__PerceivedObjectContainer_message_members = {
  "v2x_msgs__msg",  // message namespace
  "PerceivedObjectContainer",  // message name
  1,  // number of fields
  sizeof(v2x_msgs__msg__PerceivedObjectContainer),
  v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__PerceivedObjectContainer_message_member_array,  // message members
  v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__PerceivedObjectContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__PerceivedObjectContainer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__PerceivedObjectContainer_message_type_support_handle = {
  0,
  &v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__PerceivedObjectContainer_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PerceivedObjectContainer)() {
  v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__PerceivedObjectContainer_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PerceivedObject)();
  if (!v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__PerceivedObjectContainer_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__PerceivedObjectContainer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__PerceivedObjectContainer__rosidl_typesupport_introspection_c__PerceivedObjectContainer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
