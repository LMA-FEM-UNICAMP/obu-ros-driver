// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/StationaryVehicleContainer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/stationary_vehicle_container__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/stationary_vehicle_container__functions.h"
#include "v2x_msgs/msg/detail/stationary_vehicle_container__struct.h"


// Include directives for member types
// Member `stationary_since`
#include "v2x_msgs/msg/stationary_since.h"
// Member `stationary_since`
#include "v2x_msgs/msg/detail/stationary_since__rosidl_typesupport_introspection_c.h"
// Member `stationary_cause`
#include "v2x_msgs/msg/cause_code.h"
// Member `stationary_cause`
#include "v2x_msgs/msg/detail/cause_code__rosidl_typesupport_introspection_c.h"
// Member `carrying_dangerous_goods`
#include "v2x_msgs/msg/dangerous_goods_extended.h"
// Member `carrying_dangerous_goods`
#include "v2x_msgs/msg/detail/dangerous_goods_extended__rosidl_typesupport_introspection_c.h"
// Member `number_of_occupants`
#include "v2x_msgs/msg/number_of_occupants.h"
// Member `number_of_occupants`
#include "v2x_msgs/msg/detail/number_of_occupants__rosidl_typesupport_introspection_c.h"
// Member `vehicle_identification`
#include "v2x_msgs/msg/vehicle_identification.h"
// Member `vehicle_identification`
#include "v2x_msgs/msg/detail/vehicle_identification__rosidl_typesupport_introspection_c.h"
// Member `energy_storage_type`
#include "v2x_msgs/msg/energy_storage_type.h"
// Member `energy_storage_type`
#include "v2x_msgs/msg/detail/energy_storage_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__StationaryVehicleContainer__init(message_memory);
}

void v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_fini_function(void * message_memory)
{
  v2x_msgs__msg__StationaryVehicleContainer__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_member_array[12] = {
  {
    "stationary_since_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__StationaryVehicleContainer, stationary_since_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stationary_since",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__StationaryVehicleContainer, stationary_since),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stationary_cause_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__StationaryVehicleContainer, stationary_cause_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stationary_cause",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__StationaryVehicleContainer, stationary_cause),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "carrying_dangerous_goods_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__StationaryVehicleContainer, carrying_dangerous_goods_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "carrying_dangerous_goods",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__StationaryVehicleContainer, carrying_dangerous_goods),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_occupants_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__StationaryVehicleContainer, number_of_occupants_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_occupants",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__StationaryVehicleContainer, number_of_occupants),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_identification_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__StationaryVehicleContainer, vehicle_identification_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_identification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__StationaryVehicleContainer, vehicle_identification),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "energy_storage_type_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__StationaryVehicleContainer, energy_storage_type_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "energy_storage_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__StationaryVehicleContainer, energy_storage_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_members = {
  "v2x_msgs__msg",  // message namespace
  "StationaryVehicleContainer",  // message name
  12,  // number of fields
  sizeof(v2x_msgs__msg__StationaryVehicleContainer),
  v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_member_array,  // message members
  v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_type_support_handle = {
  0,
  &v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, StationaryVehicleContainer)() {
  v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, StationarySince)();
  v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CauseCode)();
  v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DangerousGoodsExtended)();
  v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, NumberOfOccupants)();
  v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleIdentification)();
  v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EnergyStorageType)();
  if (!v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__StationaryVehicleContainer__rosidl_typesupport_introspection_c__StationaryVehicleContainer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
