// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/EfcContainer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/efc_container__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/efc_container__functions.h"
#include "v2x_msgs/msg/detail/efc_container__struct.h"


// Include directives for member types
// Member `octetstring`
// Member `vector`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `universal_string`
#include "rosidl_runtime_c/string_functions.h"
// Member `beacon_id`
#include "v2x_msgs/msg/beacon_id.h"
// Member `beacon_id`
#include "v2x_msgs/msg/detail/beacon_id__rosidl_typesupport_introspection_c.h"
// Member `dsrc_application_entity_id`
#include "v2x_msgs/msg/dsrc_application_entity_id.h"
// Member `dsrc_application_entity_id`
#include "v2x_msgs/msg/detail/dsrc_application_entity_id__rosidl_typesupport_introspection_c.h"
// Member `dsrc_ase_id`
#include "v2x_msgs/msg/dsrc_eid.h"
// Member `dsrc_ase_id`
#include "v2x_msgs/msg/detail/dsrc_eid__rosidl_typesupport_introspection_c.h"
// Member `attr_id_list`
#include "v2x_msgs/msg/attribute_id_list.h"
// Member `attr_id_list`
#include "v2x_msgs/msg/detail/attribute_id_list__rosidl_typesupport_introspection_c.h"
// Member `attr_list`
#include "v2x_msgs/msg/attribute_list.h"
// Member `attr_list`
#include "v2x_msgs/msg/detail/attribute_list__rosidl_typesupport_introspection_c.h"
// Member `broadcast_pool`
#include "v2x_msgs/msg/broadcast_pool.h"
// Member `broadcast_pool`
#include "v2x_msgs/msg/detail/broadcast_pool__rosidl_typesupport_introspection_c.h"
// Member `directory`
#include "v2x_msgs/msg/directory.h"
// Member `directory`
#include "v2x_msgs/msg/detail/directory__rosidl_typesupport_introspection_c.h"
// Member `file`
#include "v2x_msgs/msg/file.h"
// Member `file`
#include "v2x_msgs/msg/detail/file__rosidl_typesupport_introspection_c.h"
// Member `file_type`
#include "v2x_msgs/msg/file_type.h"
// Member `file_type`
#include "v2x_msgs/msg/detail/file_type__rosidl_typesupport_introspection_c.h"
// Member `record`
#include "v2x_msgs/msg/record.h"
// Member `record`
#include "v2x_msgs/msg/detail/record__rosidl_typesupport_introspection_c.h"
// Member `time`
#include "v2x_msgs/msg/time.h"
// Member `time`
#include "v2x_msgs/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `gstrq`
#include "v2x_msgs/msg/get_stamped_rq.h"
// Member `gstrq`
#include "v2x_msgs/msg/detail/get_stamped_rq__rosidl_typesupport_introspection_c.h"
// Member `gstrs`
#include "v2x_msgs/msg/get_stamped_rs.h"
// Member `gstrs`
#include "v2x_msgs/msg/detail/get_stamped_rs__rosidl_typesupport_introspection_c.h"
// Member `sstrq`
#include "v2x_msgs/msg/set_stamped_rq.h"
// Member `sstrq`
#include "v2x_msgs/msg/detail/set_stamped_rq__rosidl_typesupport_introspection_c.h"
// Member `ginrq`
#include "v2x_msgs/msg/get_instance_rq.h"
// Member `ginrq`
#include "v2x_msgs/msg/detail/get_instance_rq__rosidl_typesupport_introspection_c.h"
// Member `ginrs`
#include "v2x_msgs/msg/get_instance_rs.h"
// Member `ginrs`
#include "v2x_msgs/msg/detail/get_instance_rs__rosidl_typesupport_introspection_c.h"
// Member `sinrq`
#include "v2x_msgs/msg/set_instance_rq.h"
// Member `sinrq`
#include "v2x_msgs/msg/detail/set_instance_rq__rosidl_typesupport_introspection_c.h"
// Member `charq`
#include "v2x_msgs/msg/channel_rq.h"
// Member `charq`
#include "v2x_msgs/msg/detail/channel_rq__rosidl_typesupport_introspection_c.h"
// Member `chars`
#include "v2x_msgs/msg/channel_rs.h"
// Member `chars`
#include "v2x_msgs/msg/detail/channel_rs__rosidl_typesupport_introspection_c.h"
// Member `cpprq`
#include "v2x_msgs/msg/copy_rq.h"
// Member `cpprq`
#include "v2x_msgs/msg/detail/copy_rq__rosidl_typesupport_introspection_c.h"
// Member `subrq`
#include "v2x_msgs/msg/sub_rq.h"
// Member `subrq`
#include "v2x_msgs/msg/detail/sub_rq__rosidl_typesupport_introspection_c.h"
// Member `addrq`
#include "v2x_msgs/msg/add_rq.h"
// Member `addrq`
#include "v2x_msgs/msg/detail/add_rq__rosidl_typesupport_introspection_c.h"
// Member `debrq`
#include "v2x_msgs/msg/debit_rq.h"
// Member `debrq`
#include "v2x_msgs/msg/detail/debit_rq__rosidl_typesupport_introspection_c.h"
// Member `debrs`
#include "v2x_msgs/msg/debit_rs.h"
// Member `debrs`
#include "v2x_msgs/msg/detail/debit_rs__rosidl_typesupport_introspection_c.h"
// Member `crerq`
#include "v2x_msgs/msg/credit_rq.h"
// Member `crerq`
#include "v2x_msgs/msg/detail/credit_rq__rosidl_typesupport_introspection_c.h"
// Member `crers`
#include "v2x_msgs/msg/credit_rs.h"
// Member `crers`
#include "v2x_msgs/msg/detail/credit_rs__rosidl_typesupport_introspection_c.h"
// Member `efccontext`
#include "v2x_msgs/msg/efc_context_mark.h"
// Member `efccontext`
#include "v2x_msgs/msg/detail/efc_context_mark__rosidl_typesupport_introspection_c.h"
// Member `contser`
#include "v2x_msgs/msg/contract_serial_number.h"
// Member `contser`
#include "v2x_msgs/msg/detail/contract_serial_number__rosidl_typesupport_introspection_c.h"
// Member `contval`
#include "v2x_msgs/msg/contract_validity.h"
// Member `contval`
#include "v2x_msgs/msg/detail/contract_validity__rosidl_typesupport_introspection_c.h"
// Member `contveh`
#include "v2x_msgs/msg/contract_vehicle.h"
// Member `contveh`
#include "v2x_msgs/msg/detail/contract_vehicle__rosidl_typesupport_introspection_c.h"
// Member `contauth`
#include "v2x_msgs/msg/contract_authenticator.h"
// Member `contauth`
#include "v2x_msgs/msg/detail/contract_authenticator__rosidl_typesupport_introspection_c.h"
// Member `recspt`
#include "v2x_msgs/msg/receipt_service_part.h"
// Member `recspt`
#include "v2x_msgs/msg/detail/receipt_service_part__rosidl_typesupport_introspection_c.h"
// Member `sessioncls`
#include "v2x_msgs/msg/session_class.h"
// Member `sessioncls`
#include "v2x_msgs/msg/detail/session_class__rosidl_typesupport_introspection_c.h"
// Member `recservserialno`
#include "v2x_msgs/msg/receipt_service_serial_number.h"
// Member `recservserialno`
#include "v2x_msgs/msg/detail/receipt_service_serial_number__rosidl_typesupport_introspection_c.h"
// Member `reccont`
#include "v2x_msgs/msg/receipt_contract.h"
// Member `reccont`
#include "v2x_msgs/msg/detail/receipt_contract__rosidl_typesupport_introspection_c.h"
// Member `rec_obuid`
#include "v2x_msgs/msg/receipt_obu_id.h"
// Member `rec_obuid`
#include "v2x_msgs/msg/detail/receipt_obu_id__rosidl_typesupport_introspection_c.h"
// Member `rec_iccid`
#include "v2x_msgs/msg/receipt_icc_id.h"
// Member `rec_iccid`
#include "v2x_msgs/msg/detail/receipt_icc_id__rosidl_typesupport_introspection_c.h"
// Member `rectext`
#include "v2x_msgs/msg/receipt_text.h"
// Member `rectext`
#include "v2x_msgs/msg/detail/receipt_text__rosidl_typesupport_introspection_c.h"
// Member `recauth`
#include "v2x_msgs/msg/receipt_authenticator.h"
// Member `recauth`
#include "v2x_msgs/msg/detail/receipt_authenticator__rosidl_typesupport_introspection_c.h"
// Member `recdist`
#include "v2x_msgs/msg/receipt_distance.h"
// Member `recdist`
#include "v2x_msgs/msg/detail/receipt_distance__rosidl_typesupport_introspection_c.h"
// Member `vehlpn`
#include "v2x_msgs/msg/lpn.h"
// Member `vehlpn`
#include "v2x_msgs/msg/detail/lpn__rosidl_typesupport_introspection_c.h"
// Member `vehid`
#include "v2x_msgs/msg/cs5.h"
// Member `vehid`
#include "v2x_msgs/msg/detail/cs5__rosidl_typesupport_introspection_c.h"
// Member `vehclass`
#include "v2x_msgs/msg/vehicle_class.h"
// Member `vehclass`
#include "v2x_msgs/msg/detail/vehicle_class__rosidl_typesupport_introspection_c.h"
// Member `vehdims`
#include "v2x_msgs/msg/vehicle_dimensions.h"
// Member `vehdims`
#include "v2x_msgs/msg/detail/vehicle_dimensions__rosidl_typesupport_introspection_c.h"
// Member `vehaxles`
#include "v2x_msgs/msg/vehicle_axles.h"
// Member `vehaxles`
#include "v2x_msgs/msg/detail/vehicle_axles__rosidl_typesupport_introspection_c.h"
// Member `vehwtlims`
#include "v2x_msgs/msg/vehicle_weight_limits.h"
// Member `vehwtlims`
#include "v2x_msgs/msg/detail/vehicle_weight_limits__rosidl_typesupport_introspection_c.h"
// Member `vehwtladen`
#include "v2x_msgs/msg/vehicle_weight_laden.h"
// Member `vehwtladen`
#include "v2x_msgs/msg/detail/vehicle_weight_laden__rosidl_typesupport_introspection_c.h"
// Member `vehspchars`
#include "v2x_msgs/msg/vehicle_specific_characteristics.h"
// Member `vehspchars`
#include "v2x_msgs/msg/detail/vehicle_specific_characteristics__rosidl_typesupport_introspection_c.h"
// Member `vehauth`
#include "v2x_msgs/msg/vehicle_authenticator.h"
// Member `vehauth`
#include "v2x_msgs/msg/detail/vehicle_authenticator__rosidl_typesupport_introspection_c.h"
// Member `equ_obuid`
#include "v2x_msgs/msg/equipment_obu_id.h"
// Member `equ_obuid`
#include "v2x_msgs/msg/detail/equipment_obu_id__rosidl_typesupport_introspection_c.h"
// Member `equ_iccid`
#include "v2x_msgs/msg/icc_id.h"
// Member `equ_iccid`
#include "v2x_msgs/msg/detail/icc_id__rosidl_typesupport_introspection_c.h"
// Member `equstat`
#include "v2x_msgs/msg/equipment_status.h"
// Member `equstat`
#include "v2x_msgs/msg/detail/equipment_status__rosidl_typesupport_introspection_c.h"
// Member `dvrchars`
#include "v2x_msgs/msg/driver_characteristics.h"
// Member `dvrchars`
#include "v2x_msgs/msg/detail/driver_characteristics__rosidl_typesupport_introspection_c.h"
// Member `paymbal`
#include "v2x_msgs/msg/payment_means_balance.h"
// Member `paymbal`
#include "v2x_msgs/msg/detail/payment_means_balance__rosidl_typesupport_introspection_c.h"
// Member `paymunit`
#include "v2x_msgs/msg/payment_means_unit.h"
// Member `paymunit`
#include "v2x_msgs/msg/detail/payment_means_unit__rosidl_typesupport_introspection_c.h"
// Member `paysecdata`
#include "v2x_msgs/msg/payment_security_data.h"
// Member `paysecdata`
#include "v2x_msgs/msg/detail/payment_security_data__rosidl_typesupport_introspection_c.h"
// Member `paymeans`
#include "v2x_msgs/msg/payment_means.h"
// Member `paymeans`
#include "v2x_msgs/msg/detail/payment_means__rosidl_typesupport_introspection_c.h"
// Member `recdata1`
#include "v2x_msgs/msg/receipt_data1.h"
// Member `recdata1`
#include "v2x_msgs/msg/detail/receipt_data1__rosidl_typesupport_introspection_c.h"
// Member `recdata2`
#include "v2x_msgs/msg/receipt_data2.h"
// Member `recdata2`
#include "v2x_msgs/msg/detail/receipt_data2__rosidl_typesupport_introspection_c.h"
// Member `valofcon`
#include "v2x_msgs/msg/validity_of_contract.h"
// Member `valofcon`
#include "v2x_msgs/msg/detail/validity_of_contract__rosidl_typesupport_introspection_c.h"
// Member `recfinpt`
#include "v2x_msgs/msg/receipt_financial_part.h"
// Member `recfinpt`
#include "v2x_msgs/msg/detail/receipt_financial_part__rosidl_typesupport_introspection_c.h"
// Member `setmmirq`
#include "v2x_msgs/msg/set_mmi_rq.h"
// Member `setmmirq`
#include "v2x_msgs/msg/detail/set_mmi_rq__rosidl_typesupport_introspection_c.h"
// Member `awl`
#include "v2x_msgs/msg/axle_weight_limits.h"
// Member `awl`
#include "v2x_msgs/msg/detail/axle_weight_limits__rosidl_typesupport_introspection_c.h"
// Member `paca`
#include "v2x_msgs/msg/passenger_capacity.h"
// Member `paca`
#include "v2x_msgs/msg/detail/passenger_capacity__rosidl_typesupport_introspection_c.h"
// Member `eng`
#include "v2x_msgs/msg/engine.h"
// Member `eng`
#include "v2x_msgs/msg/detail/engine__rosidl_typesupport_introspection_c.h"
// Member `sl`
#include "v2x_msgs/msg/sound_level.h"
// Member `sl`
#include "v2x_msgs/msg/detail/sound_level__rosidl_typesupport_introspection_c.h"
// Member `eev`
#include "v2x_msgs/msg/exhaust_emission_values.h"
// Member `eev`
#include "v2x_msgs/msg/detail/exhaust_emission_values__rosidl_typesupport_introspection_c.h"
// Member `dev`
#include "v2x_msgs/msg/diesel_emission_values.h"
// Member `dev`
#include "v2x_msgs/msg/detail/diesel_emission_values__rosidl_typesupport_introspection_c.h"
// Member `co2ev`
#include "v2x_msgs/msg/co2_emission_value.h"
// Member `co2ev`
#include "v2x_msgs/msg/detail/co2_emission_value__rosidl_typesupport_introspection_c.h"
// Member `vtd`
#include "v2x_msgs/msg/vehicle_total_distance.h"
// Member `vtd`
#include "v2x_msgs/msg/detail/vehicle_total_distance__rosidl_typesupport_introspection_c.h"
// Member `tlpn`
#include "v2x_msgs/msg/trailer_licence_plate_number.h"
// Member `tlpn`
#include "v2x_msgs/msg/detail/trailer_licence_plate_number__rosidl_typesupport_introspection_c.h"
// Member `tch`
#include "v2x_msgs/msg/trailer_characteristics.h"
// Member `tch`
#include "v2x_msgs/msg/detail/trailer_characteristics__rosidl_typesupport_introspection_c.h"
// Member `anp`
#include "v2x_msgs/msg/actual_number_of_passengers.h"
// Member `anp`
#include "v2x_msgs/msg/detail/actual_number_of_passengers__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__EfcContainer__init(message_memory);
}

void v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_fini_function(void * message_memory)
{
  v2x_msgs__msg__EfcContainer__fini(message_memory);
}

size_t v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__size_function__EfcContainer__octetstring(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__get_const_function__EfcContainer__octetstring(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__get_function__EfcContainer__octetstring(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__fetch_function__EfcContainer__octetstring(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__get_const_function__EfcContainer__octetstring(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__assign_function__EfcContainer__octetstring(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__get_function__EfcContainer__octetstring(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__resize_function__EfcContainer__octetstring(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__size_function__EfcContainer__vector(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__get_const_function__EfcContainer__vector(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__get_function__EfcContainer__vector(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__fetch_function__EfcContainer__vector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__get_const_function__EfcContainer__vector(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__assign_function__EfcContainer__vector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__get_function__EfcContainer__vector(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__resize_function__EfcContainer__vector(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[79] = {
  {
    "efc_container_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, efc_container_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "integer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, integer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bitstring",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, bitstring),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octetstring",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, octetstring),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__size_function__EfcContainer__octetstring,  // size() function pointer
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__get_const_function__EfcContainer__octetstring,  // get_const(index) function pointer
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__get_function__EfcContainer__octetstring,  // get(index) function pointer
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__fetch_function__EfcContainer__octetstring,  // fetch(index, &value) function pointer
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__assign_function__EfcContainer__octetstring,  // assign(index, value) function pointer
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__resize_function__EfcContainer__octetstring  // resize(index) function pointer
  },
  {
    "universal_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, universal_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beacon_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, beacon_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dsrc_application_entity_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, dsrc_application_entity_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dsrc_ase_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, dsrc_ase_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attr_id_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, attr_id_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attr_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, attr_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "broadcast_pool",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, broadcast_pool),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "directory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, directory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "file",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, file),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "file_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, file_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "record",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, record),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, vector),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__size_function__EfcContainer__vector,  // size() function pointer
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__get_const_function__EfcContainer__vector,  // get_const(index) function pointer
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__get_function__EfcContainer__vector,  // get(index) function pointer
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__fetch_function__EfcContainer__vector,  // fetch(index, &value) function pointer
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__assign_function__EfcContainer__vector,  // assign(index, value) function pointer
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__resize_function__EfcContainer__vector  // resize(index) function pointer
  },
  {
    "gstrq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, gstrq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gstrs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, gstrs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sstrq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, sstrq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ginrq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, ginrq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ginrs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, ginrs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sinrq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, sinrq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, charq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "chars",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, chars),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cpprq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, cpprq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subrq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, subrq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "addrq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, addrq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "debrq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, debrq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "debrs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, debrs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crerq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, crerq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, crers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "efccontext",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, efccontext),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contser",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, contser),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contval",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, contval),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contveh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, contveh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contauth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, contauth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recspt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, recspt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sessioncls",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, sessioncls),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recservserialno",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, recservserialno),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reccont",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, reccont),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rec_obuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, rec_obuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rec_iccid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, rec_iccid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rectext",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, rectext),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recauth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, recauth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recdist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, recdist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehlpn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, vehlpn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, vehid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehclass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, vehclass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehdims",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, vehdims),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehaxles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, vehaxles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehwtlims",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, vehwtlims),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehwtladen",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, vehwtladen),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehspchars",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, vehspchars),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehauth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, vehauth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "equ_obuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, equ_obuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "equ_iccid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, equ_iccid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "equstat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, equstat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dvrchars",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, dvrchars),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "paymbal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, paymbal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "paymunit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, paymunit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "paysecdata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, paysecdata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "paymeans",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, paymeans),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recdata1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, recdata1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recdata2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, recdata2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valofcon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, valofcon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recfinpt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, recfinpt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "setmmirq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, setmmirq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "awl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, awl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "paca",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, paca),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eng",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, eng),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, sl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, eev),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, dev),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "co2ev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, co2ev),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vtd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, vtd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tlpn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, tlpn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, tch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "anp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EfcContainer, anp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_members = {
  "v2x_msgs__msg",  // message namespace
  "EfcContainer",  // message name
  79,  // number of fields
  sizeof(v2x_msgs__msg__EfcContainer),
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array,  // message members
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_type_support_handle = {
  0,
  &v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EfcContainer)() {
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, BeaconID)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DSRCApplicationEntityID)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DsrcEID)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AttributeIdList)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AttributeList)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, BroadcastPool)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Directory)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, File)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, FileType)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Record)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Time)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, GetStampedRq)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, GetStampedRs)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SetStampedRq)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, GetInstanceRq)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, GetInstanceRs)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SetInstanceRq)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[23].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ChannelRq)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[24].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ChannelRs)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[25].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CopyRq)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[26].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SubRq)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[27].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AddRq)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[28].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DebitRq)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[29].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DebitRs)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[30].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CreditRq)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[31].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CreditRs)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[32].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EFCContextMark)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[33].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ContractSerialNumber)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[34].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ContractValidity)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[35].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ContractVehicle)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[36].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ContractAuthenticator)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[37].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReceiptServicePart)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[38].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SessionClass)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[39].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReceiptServiceSerialNumber)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[40].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReceiptContract)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[41].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReceiptOBUId)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[42].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReceiptICCId)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[43].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReceiptText)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[44].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReceiptAuthenticator)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[45].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReceiptDistance)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[46].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LPN)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[47].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CS5)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[48].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleClass)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[49].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleDimensions)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[50].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleAxles)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[51].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleWeightLimits)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[52].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleWeightLaden)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[53].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleSpecificCharacteristics)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[54].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleAuthenticator)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[55].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EquipmentOBUId)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[56].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ICCId)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[57].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EquipmentStatus)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[58].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DriverCharacteristics)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[59].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PaymentMeansBalance)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[60].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PaymentMeansUnit)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[61].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PaymentSecurityData)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[62].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PaymentMeans)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[63].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReceiptData1)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[64].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReceiptData2)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[65].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ValidityOfContract)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[66].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReceiptFinancialPart)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[67].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SetMMIRq)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[68].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AxleWeightLimits)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[69].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PassengerCapacity)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[70].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Engine)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[71].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SoundLevel)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[72].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ExhaustEmissionValues)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[73].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DieselEmissionValues)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[74].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CO2EmissionValue)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[75].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleTotalDistance)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[76].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TrailerLicencePlateNumber)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[77].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TrailerCharacteristics)();
  v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_member_array[78].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ActualNumberOfPassengers)();
  if (!v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__EfcContainer__rosidl_typesupport_introspection_c__EfcContainer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
