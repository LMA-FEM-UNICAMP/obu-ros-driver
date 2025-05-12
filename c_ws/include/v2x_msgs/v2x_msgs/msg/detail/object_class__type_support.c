// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/ObjectClass.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/object_class__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/object_class__functions.h"
#include "v2x_msgs/msg/detail/object_class__struct.h"


// Include directives for member types
// Member `confidence`
#include "v2x_msgs/msg/class_confidence.h"
// Member `confidence`
#include "v2x_msgs/msg/detail/class_confidence__rosidl_typesupport_introspection_c.h"
// Member `vehicle`
#include "v2x_msgs/msg/vehicle_subclass.h"
// Member `vehicle`
#include "v2x_msgs/msg/detail/vehicle_subclass__rosidl_typesupport_introspection_c.h"
// Member `person`
#include "v2x_msgs/msg/person_subclass.h"
// Member `person`
#include "v2x_msgs/msg/detail/person_subclass__rosidl_typesupport_introspection_c.h"
// Member `animal`
#include "v2x_msgs/msg/animal_subclass.h"
// Member `animal`
#include "v2x_msgs/msg/detail/animal_subclass__rosidl_typesupport_introspection_c.h"
// Member `other`
#include "v2x_msgs/msg/other_subclass.h"
// Member `other`
#include "v2x_msgs/msg/detail/other_subclass__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__ObjectClass__init(message_memory);
}

void v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_fini_function(void * message_memory)
{
  v2x_msgs__msg__ObjectClass__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_message_member_array[6] = {
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ObjectClass, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ObjectClass, class_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ObjectClass, vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "person",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ObjectClass, person),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "animal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ObjectClass, animal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "other",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ObjectClass, other),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_message_members = {
  "v2x_msgs__msg",  // message namespace
  "ObjectClass",  // message name
  6,  // number of fields
  sizeof(v2x_msgs__msg__ObjectClass),
  v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_message_member_array,  // message members
  v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_message_type_support_handle = {
  0,
  &v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ObjectClass)() {
  v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ClassConfidence)();
  v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleSubclass)();
  v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PersonSubclass)();
  v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AnimalSubclass)();
  v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, OtherSubclass)();
  if (!v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__ObjectClass__rosidl_typesupport_introspection_c__ObjectClass_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
