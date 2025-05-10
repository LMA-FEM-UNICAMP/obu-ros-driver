// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/IviContainer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/ivi_container__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/ivi_container__functions.h"
#include "v2x_msgs/msg/detail/ivi_container__struct.h"


// Include directives for member types
// Member `glc`
#include "v2x_msgs/msg/geographic_location_container.h"
// Member `glc`
#include "v2x_msgs/msg/detail/geographic_location_container__rosidl_typesupport_introspection_c.h"
// Member `giv`
#include "v2x_msgs/msg/general_ivi_container.h"
// Member `giv`
#include "v2x_msgs/msg/detail/general_ivi_container__rosidl_typesupport_introspection_c.h"
// Member `rcc`
#include "v2x_msgs/msg/road_configuration_container.h"
// Member `rcc`
#include "v2x_msgs/msg/detail/road_configuration_container__rosidl_typesupport_introspection_c.h"
// Member `tc`
#include "v2x_msgs/msg/text_container.h"
// Member `tc`
#include "v2x_msgs/msg/detail/text_container__rosidl_typesupport_introspection_c.h"
// Member `lac`
#include "v2x_msgs/msg/layout_container.h"
// Member `lac`
#include "v2x_msgs/msg/detail/layout_container__rosidl_typesupport_introspection_c.h"
// Member `avc`
#include "v2x_msgs/msg/automated_vehicle_container.h"
// Member `avc`
#include "v2x_msgs/msg/detail/automated_vehicle_container__rosidl_typesupport_introspection_c.h"
// Member `mlc`
#include "v2x_msgs/msg/map_location_container.h"
// Member `mlc`
#include "v2x_msgs/msg/detail/map_location_container__rosidl_typesupport_introspection_c.h"
// Member `rsc`
#include "v2x_msgs/msg/road_surface_container.h"
// Member `rsc`
#include "v2x_msgs/msg/detail/road_surface_container__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__IviContainer__init(message_memory);
}

void v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_fini_function(void * message_memory)
{
  v2x_msgs__msg__IviContainer__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_member_array[9] = {
  {
    "ivi_container_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviContainer, ivi_container_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "glc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviContainer, glc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "giv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviContainer, giv),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rcc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviContainer, rcc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviContainer, tc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lac",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviContainer, lac),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "avc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviContainer, avc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mlc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviContainer, mlc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rsc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IviContainer, rsc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_members = {
  "v2x_msgs__msg",  // message namespace
  "IviContainer",  // message name
  9,  // number of fields
  sizeof(v2x_msgs__msg__IviContainer),
  v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_member_array,  // message members
  v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_type_support_handle = {
  0,
  &v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IviContainer)() {
  v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, GeographicLocationContainer)();
  v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, GeneralIviContainer)();
  v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RoadConfigurationContainer)();
  v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TextContainer)();
  v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LayoutContainer)();
  v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AutomatedVehicleContainer)();
  v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MapLocationContainer)();
  v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RoadSurfaceContainer)();
  if (!v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__IviContainer__rosidl_typesupport_introspection_c__IviContainer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
