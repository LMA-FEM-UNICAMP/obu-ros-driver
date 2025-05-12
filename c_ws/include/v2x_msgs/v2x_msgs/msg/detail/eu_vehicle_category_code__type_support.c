// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/EuVehicleCategoryCode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/eu_vehicle_category_code__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/eu_vehicle_category_code__functions.h"
#include "v2x_msgs/msg/detail/eu_vehicle_category_code__struct.h"


// Include directives for member types
// Member `eu_vehicle_category_l`
#include "v2x_msgs/msg/eu_vehicle_category_l.h"
// Member `eu_vehicle_category_l`
#include "v2x_msgs/msg/detail/eu_vehicle_category_l__rosidl_typesupport_introspection_c.h"
// Member `eu_vehicle_category_m`
#include "v2x_msgs/msg/eu_vehicle_category_m.h"
// Member `eu_vehicle_category_m`
#include "v2x_msgs/msg/detail/eu_vehicle_category_m__rosidl_typesupport_introspection_c.h"
// Member `eu_vehicle_category_n`
#include "v2x_msgs/msg/eu_vehicle_category_n.h"
// Member `eu_vehicle_category_n`
#include "v2x_msgs/msg/detail/eu_vehicle_category_n__rosidl_typesupport_introspection_c.h"
// Member `eu_vehicle_category_o`
#include "v2x_msgs/msg/eu_vehicle_category_o.h"
// Member `eu_vehicle_category_o`
#include "v2x_msgs/msg/detail/eu_vehicle_category_o__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__EuVehicleCategoryCode__init(message_memory);
}

void v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_fini_function(void * message_memory)
{
  v2x_msgs__msg__EuVehicleCategoryCode__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_message_member_array[5] = {
  {
    "eu_vehicle_category_code_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EuVehicleCategoryCode, eu_vehicle_category_code_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eu_vehicle_category_l",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EuVehicleCategoryCode, eu_vehicle_category_l),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eu_vehicle_category_m",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EuVehicleCategoryCode, eu_vehicle_category_m),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eu_vehicle_category_n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EuVehicleCategoryCode, eu_vehicle_category_n),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eu_vehicle_category_o",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EuVehicleCategoryCode, eu_vehicle_category_o),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_message_members = {
  "v2x_msgs__msg",  // message namespace
  "EuVehicleCategoryCode",  // message name
  5,  // number of fields
  sizeof(v2x_msgs__msg__EuVehicleCategoryCode),
  v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_message_member_array,  // message members
  v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_message_type_support_handle = {
  0,
  &v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EuVehicleCategoryCode)() {
  v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EuVehicleCategoryL)();
  v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EuVehicleCategoryM)();
  v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EuVehicleCategoryN)();
  v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EuVehicleCategoryO)();
  if (!v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__EuVehicleCategoryCode__rosidl_typesupport_introspection_c__EuVehicleCategoryCode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
