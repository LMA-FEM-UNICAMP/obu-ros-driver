// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/SpecialVehicleContainer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/special_vehicle_container__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/special_vehicle_container__functions.h"
#include "v2x_msgs/msg/detail/special_vehicle_container__struct.h"


// Include directives for member types
// Member `public_transport_container`
#include "v2x_msgs/msg/public_transport_container.h"
// Member `public_transport_container`
#include "v2x_msgs/msg/detail/public_transport_container__rosidl_typesupport_introspection_c.h"
// Member `special_transport_container`
#include "v2x_msgs/msg/special_transport_container.h"
// Member `special_transport_container`
#include "v2x_msgs/msg/detail/special_transport_container__rosidl_typesupport_introspection_c.h"
// Member `dangerous_goods_container`
#include "v2x_msgs/msg/dangerous_goods_container.h"
// Member `dangerous_goods_container`
#include "v2x_msgs/msg/detail/dangerous_goods_container__rosidl_typesupport_introspection_c.h"
// Member `road_works_container_basic`
#include "v2x_msgs/msg/road_works_container_basic.h"
// Member `road_works_container_basic`
#include "v2x_msgs/msg/detail/road_works_container_basic__rosidl_typesupport_introspection_c.h"
// Member `rescue_container`
#include "v2x_msgs/msg/rescue_container.h"
// Member `rescue_container`
#include "v2x_msgs/msg/detail/rescue_container__rosidl_typesupport_introspection_c.h"
// Member `emergency_container`
#include "v2x_msgs/msg/emergency_container.h"
// Member `emergency_container`
#include "v2x_msgs/msg/detail/emergency_container__rosidl_typesupport_introspection_c.h"
// Member `safety_car_container`
#include "v2x_msgs/msg/safety_car_container.h"
// Member `safety_car_container`
#include "v2x_msgs/msg/detail/safety_car_container__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__SpecialVehicleContainer__init(message_memory);
}

void v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_fini_function(void * message_memory)
{
  v2x_msgs__msg__SpecialVehicleContainer__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_member_array[8] = {
  {
    "special_vehicle_container_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SpecialVehicleContainer, special_vehicle_container_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "public_transport_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SpecialVehicleContainer, public_transport_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "special_transport_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SpecialVehicleContainer, special_transport_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dangerous_goods_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SpecialVehicleContainer, dangerous_goods_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_works_container_basic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SpecialVehicleContainer, road_works_container_basic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rescue_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SpecialVehicleContainer, rescue_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SpecialVehicleContainer, emergency_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safety_car_container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SpecialVehicleContainer, safety_car_container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_members = {
  "v2x_msgs__msg",  // message namespace
  "SpecialVehicleContainer",  // message name
  8,  // number of fields
  sizeof(v2x_msgs__msg__SpecialVehicleContainer),
  v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_member_array,  // message members
  v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_type_support_handle = {
  0,
  &v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SpecialVehicleContainer)() {
  v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PublicTransportContainer)();
  v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SpecialTransportContainer)();
  v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DangerousGoodsContainer)();
  v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RoadWorksContainerBasic)();
  v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RescueContainer)();
  v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EmergencyContainer)();
  v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SafetyCarContainer)();
  if (!v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__SpecialVehicleContainer__rosidl_typesupport_introspection_c__SpecialVehicleContainer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
