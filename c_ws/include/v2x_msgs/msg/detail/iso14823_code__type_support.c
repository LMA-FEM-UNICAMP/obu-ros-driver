// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/ISO14823Code.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/iso14823_code__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/iso14823_code__functions.h"
#include "v2x_msgs/msg/detail/iso14823_code__struct.h"


// Include directives for member types
// Member `country_code`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `attributes`
#include "v2x_msgs/msg/iso14823_attributes.h"
// Member `attributes`
#include "v2x_msgs/msg/detail/iso14823_attributes__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__ISO14823Code_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__ISO14823Code__init(message_memory);
}

void v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__ISO14823Code_fini_function(void * message_memory)
{
  v2x_msgs__msg__ISO14823Code__fini(message_memory);
}

size_t v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__size_function__ISO14823Code__country_code(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__get_const_function__ISO14823Code__country_code(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__get_function__ISO14823Code__country_code(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__fetch_function__ISO14823Code__country_code(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__get_const_function__ISO14823Code__country_code(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__assign_function__ISO14823Code__country_code(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__get_function__ISO14823Code__country_code(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__resize_function__ISO14823Code__country_code(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__ISO14823Code_message_member_array[10] = {
  {
    "country_code_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ISO14823Code, country_code_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "country_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ISO14823Code, country_code),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__size_function__ISO14823Code__country_code,  // size() function pointer
    v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__get_const_function__ISO14823Code__country_code,  // get_const(index) function pointer
    v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__get_function__ISO14823Code__country_code,  // get(index) function pointer
    v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__fetch_function__ISO14823Code__country_code,  // fetch(index, &value) function pointer
    v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__assign_function__ISO14823Code__country_code,  // assign(index, value) function pointer
    v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__resize_function__ISO14823Code__country_code  // resize(index) function pointer
  },
  {
    "service_category_code_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ISO14823Code, service_category_code_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traffic_sign_pictogram",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ISO14823Code, traffic_sign_pictogram),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "public_facilities_pictorgram",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ISO14823Code, public_facilities_pictorgram),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ambient_or_road_condition_pictogram",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ISO14823Code, ambient_or_road_condition_pictogram),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ISO14823Code, nature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "serial_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ISO14823Code, serial_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attributes_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ISO14823Code, attributes_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attributes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ISO14823Code, attributes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__ISO14823Code_message_members = {
  "v2x_msgs__msg",  // message namespace
  "ISO14823Code",  // message name
  10,  // number of fields
  sizeof(v2x_msgs__msg__ISO14823Code),
  v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__ISO14823Code_message_member_array,  // message members
  v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__ISO14823Code_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__ISO14823Code_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__ISO14823Code_message_type_support_handle = {
  0,
  &v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__ISO14823Code_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ISO14823Code)() {
  v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__ISO14823Code_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ISO14823Attributes)();
  if (!v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__ISO14823Code_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__ISO14823Code_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__ISO14823Code__rosidl_typesupport_introspection_c__ISO14823Code_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
