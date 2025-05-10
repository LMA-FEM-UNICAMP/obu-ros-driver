// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/EfcContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/efc_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `octetstring`
// Member `vector`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `universal_string`
#include "rosidl_runtime_c/string_functions.h"
// Member `beacon_id`
#include "v2x_msgs/msg/detail/beacon_id__functions.h"
// Member `dsrc_application_entity_id`
#include "v2x_msgs/msg/detail/dsrc_application_entity_id__functions.h"
// Member `dsrc_ase_id`
#include "v2x_msgs/msg/detail/dsrc_eid__functions.h"
// Member `attr_id_list`
#include "v2x_msgs/msg/detail/attribute_id_list__functions.h"
// Member `attr_list`
#include "v2x_msgs/msg/detail/attribute_list__functions.h"
// Member `broadcast_pool`
#include "v2x_msgs/msg/detail/broadcast_pool__functions.h"
// Member `directory`
#include "v2x_msgs/msg/detail/directory__functions.h"
// Member `file`
#include "v2x_msgs/msg/detail/file__functions.h"
// Member `file_type`
#include "v2x_msgs/msg/detail/file_type__functions.h"
// Member `record`
#include "v2x_msgs/msg/detail/record__functions.h"
// Member `time`
#include "v2x_msgs/msg/detail/time__functions.h"
// Member `gstrq`
#include "v2x_msgs/msg/detail/get_stamped_rq__functions.h"
// Member `gstrs`
#include "v2x_msgs/msg/detail/get_stamped_rs__functions.h"
// Member `sstrq`
#include "v2x_msgs/msg/detail/set_stamped_rq__functions.h"
// Member `ginrq`
#include "v2x_msgs/msg/detail/get_instance_rq__functions.h"
// Member `ginrs`
#include "v2x_msgs/msg/detail/get_instance_rs__functions.h"
// Member `sinrq`
#include "v2x_msgs/msg/detail/set_instance_rq__functions.h"
// Member `charq`
#include "v2x_msgs/msg/detail/channel_rq__functions.h"
// Member `chars`
#include "v2x_msgs/msg/detail/channel_rs__functions.h"
// Member `cpprq`
#include "v2x_msgs/msg/detail/copy_rq__functions.h"
// Member `subrq`
#include "v2x_msgs/msg/detail/sub_rq__functions.h"
// Member `addrq`
#include "v2x_msgs/msg/detail/add_rq__functions.h"
// Member `debrq`
#include "v2x_msgs/msg/detail/debit_rq__functions.h"
// Member `debrs`
#include "v2x_msgs/msg/detail/debit_rs__functions.h"
// Member `crerq`
#include "v2x_msgs/msg/detail/credit_rq__functions.h"
// Member `crers`
#include "v2x_msgs/msg/detail/credit_rs__functions.h"
// Member `efccontext`
#include "v2x_msgs/msg/detail/efc_context_mark__functions.h"
// Member `contser`
#include "v2x_msgs/msg/detail/contract_serial_number__functions.h"
// Member `contval`
#include "v2x_msgs/msg/detail/contract_validity__functions.h"
// Member `contveh`
#include "v2x_msgs/msg/detail/contract_vehicle__functions.h"
// Member `contauth`
#include "v2x_msgs/msg/detail/contract_authenticator__functions.h"
// Member `recspt`
#include "v2x_msgs/msg/detail/receipt_service_part__functions.h"
// Member `sessioncls`
#include "v2x_msgs/msg/detail/session_class__functions.h"
// Member `recservserialno`
#include "v2x_msgs/msg/detail/receipt_service_serial_number__functions.h"
// Member `reccont`
#include "v2x_msgs/msg/detail/receipt_contract__functions.h"
// Member `rec_obuid`
#include "v2x_msgs/msg/detail/receipt_obu_id__functions.h"
// Member `rec_iccid`
#include "v2x_msgs/msg/detail/receipt_icc_id__functions.h"
// Member `rectext`
#include "v2x_msgs/msg/detail/receipt_text__functions.h"
// Member `recauth`
#include "v2x_msgs/msg/detail/receipt_authenticator__functions.h"
// Member `recdist`
#include "v2x_msgs/msg/detail/receipt_distance__functions.h"
// Member `vehlpn`
#include "v2x_msgs/msg/detail/lpn__functions.h"
// Member `vehid`
#include "v2x_msgs/msg/detail/cs5__functions.h"
// Member `vehclass`
#include "v2x_msgs/msg/detail/vehicle_class__functions.h"
// Member `vehdims`
#include "v2x_msgs/msg/detail/vehicle_dimensions__functions.h"
// Member `vehaxles`
#include "v2x_msgs/msg/detail/vehicle_axles__functions.h"
// Member `vehwtlims`
#include "v2x_msgs/msg/detail/vehicle_weight_limits__functions.h"
// Member `vehwtladen`
#include "v2x_msgs/msg/detail/vehicle_weight_laden__functions.h"
// Member `vehspchars`
#include "v2x_msgs/msg/detail/vehicle_specific_characteristics__functions.h"
// Member `vehauth`
#include "v2x_msgs/msg/detail/vehicle_authenticator__functions.h"
// Member `equ_obuid`
#include "v2x_msgs/msg/detail/equipment_obu_id__functions.h"
// Member `equ_iccid`
#include "v2x_msgs/msg/detail/icc_id__functions.h"
// Member `equstat`
#include "v2x_msgs/msg/detail/equipment_status__functions.h"
// Member `dvrchars`
#include "v2x_msgs/msg/detail/driver_characteristics__functions.h"
// Member `paymbal`
#include "v2x_msgs/msg/detail/payment_means_balance__functions.h"
// Member `paymunit`
#include "v2x_msgs/msg/detail/payment_means_unit__functions.h"
// Member `paysecdata`
#include "v2x_msgs/msg/detail/payment_security_data__functions.h"
// Member `paymeans`
#include "v2x_msgs/msg/detail/payment_means__functions.h"
// Member `recdata1`
#include "v2x_msgs/msg/detail/receipt_data1__functions.h"
// Member `recdata2`
#include "v2x_msgs/msg/detail/receipt_data2__functions.h"
// Member `valofcon`
#include "v2x_msgs/msg/detail/validity_of_contract__functions.h"
// Member `recfinpt`
#include "v2x_msgs/msg/detail/receipt_financial_part__functions.h"
// Member `setmmirq`
#include "v2x_msgs/msg/detail/set_mmi_rq__functions.h"
// Member `awl`
#include "v2x_msgs/msg/detail/axle_weight_limits__functions.h"
// Member `paca`
#include "v2x_msgs/msg/detail/passenger_capacity__functions.h"
// Member `eng`
#include "v2x_msgs/msg/detail/engine__functions.h"
// Member `sl`
#include "v2x_msgs/msg/detail/sound_level__functions.h"
// Member `eev`
#include "v2x_msgs/msg/detail/exhaust_emission_values__functions.h"
// Member `dev`
#include "v2x_msgs/msg/detail/diesel_emission_values__functions.h"
// Member `co2ev`
#include "v2x_msgs/msg/detail/co2_emission_value__functions.h"
// Member `vtd`
#include "v2x_msgs/msg/detail/vehicle_total_distance__functions.h"
// Member `tlpn`
#include "v2x_msgs/msg/detail/trailer_licence_plate_number__functions.h"
// Member `tch`
#include "v2x_msgs/msg/detail/trailer_characteristics__functions.h"
// Member `anp`
#include "v2x_msgs/msg/detail/actual_number_of_passengers__functions.h"

bool
v2x_msgs__msg__EfcContainer__init(v2x_msgs__msg__EfcContainer * msg)
{
  if (!msg) {
    return false;
  }
  // efc_container_container_select
  msg->efc_container_container_select = 0ll;
  // integer
  // bitstring
  // octetstring
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->octetstring, 0)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // universal_string
  if (!rosidl_runtime_c__String__init(&msg->universal_string)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // beacon_id
  if (!v2x_msgs__msg__BeaconID__init(&msg->beacon_id)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // dsrc_application_entity_id
  if (!v2x_msgs__msg__DSRCApplicationEntityID__init(&msg->dsrc_application_entity_id)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // dsrc_ase_id
  if (!v2x_msgs__msg__DsrcEID__init(&msg->dsrc_ase_id)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // attr_id_list
  if (!v2x_msgs__msg__AttributeIdList__init(&msg->attr_id_list)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // attr_list
  if (!v2x_msgs__msg__AttributeList__init(&msg->attr_list)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // broadcast_pool
  if (!v2x_msgs__msg__BroadcastPool__init(&msg->broadcast_pool)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // directory
  if (!v2x_msgs__msg__Directory__init(&msg->directory)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // file
  if (!v2x_msgs__msg__File__init(&msg->file)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // file_type
  if (!v2x_msgs__msg__FileType__init(&msg->file_type)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // record
  if (!v2x_msgs__msg__Record__init(&msg->record)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // time
  if (!v2x_msgs__msg__Time__init(&msg->time)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // vector
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->vector, 0)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // gstrq
  if (!v2x_msgs__msg__GetStampedRq__init(&msg->gstrq)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // gstrs
  if (!v2x_msgs__msg__GetStampedRs__init(&msg->gstrs)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // sstrq
  if (!v2x_msgs__msg__SetStampedRq__init(&msg->sstrq)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // ginrq
  if (!v2x_msgs__msg__GetInstanceRq__init(&msg->ginrq)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // ginrs
  if (!v2x_msgs__msg__GetInstanceRs__init(&msg->ginrs)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // sinrq
  if (!v2x_msgs__msg__SetInstanceRq__init(&msg->sinrq)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // charq
  if (!v2x_msgs__msg__ChannelRq__init(&msg->charq)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // chars
  if (!v2x_msgs__msg__ChannelRs__init(&msg->chars)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // cpprq
  if (!v2x_msgs__msg__CopyRq__init(&msg->cpprq)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // subrq
  if (!v2x_msgs__msg__SubRq__init(&msg->subrq)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // addrq
  if (!v2x_msgs__msg__AddRq__init(&msg->addrq)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // debrq
  if (!v2x_msgs__msg__DebitRq__init(&msg->debrq)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // debrs
  if (!v2x_msgs__msg__DebitRs__init(&msg->debrs)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // crerq
  if (!v2x_msgs__msg__CreditRq__init(&msg->crerq)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // crers
  if (!v2x_msgs__msg__CreditRs__init(&msg->crers)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // efccontext
  if (!v2x_msgs__msg__EFCContextMark__init(&msg->efccontext)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // contser
  if (!v2x_msgs__msg__ContractSerialNumber__init(&msg->contser)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // contval
  if (!v2x_msgs__msg__ContractValidity__init(&msg->contval)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // contveh
  if (!v2x_msgs__msg__ContractVehicle__init(&msg->contveh)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // contauth
  if (!v2x_msgs__msg__ContractAuthenticator__init(&msg->contauth)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // recspt
  if (!v2x_msgs__msg__ReceiptServicePart__init(&msg->recspt)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // sessioncls
  if (!v2x_msgs__msg__SessionClass__init(&msg->sessioncls)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // recservserialno
  if (!v2x_msgs__msg__ReceiptServiceSerialNumber__init(&msg->recservserialno)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // reccont
  if (!v2x_msgs__msg__ReceiptContract__init(&msg->reccont)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // rec_obuid
  if (!v2x_msgs__msg__ReceiptOBUId__init(&msg->rec_obuid)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // rec_iccid
  if (!v2x_msgs__msg__ReceiptICCId__init(&msg->rec_iccid)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // rectext
  if (!v2x_msgs__msg__ReceiptText__init(&msg->rectext)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // recauth
  if (!v2x_msgs__msg__ReceiptAuthenticator__init(&msg->recauth)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // recdist
  if (!v2x_msgs__msg__ReceiptDistance__init(&msg->recdist)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // vehlpn
  if (!v2x_msgs__msg__LPN__init(&msg->vehlpn)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // vehid
  if (!v2x_msgs__msg__CS5__init(&msg->vehid)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // vehclass
  if (!v2x_msgs__msg__VehicleClass__init(&msg->vehclass)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // vehdims
  if (!v2x_msgs__msg__VehicleDimensions__init(&msg->vehdims)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // vehaxles
  if (!v2x_msgs__msg__VehicleAxles__init(&msg->vehaxles)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // vehwtlims
  if (!v2x_msgs__msg__VehicleWeightLimits__init(&msg->vehwtlims)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // vehwtladen
  if (!v2x_msgs__msg__VehicleWeightLaden__init(&msg->vehwtladen)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // vehspchars
  if (!v2x_msgs__msg__VehicleSpecificCharacteristics__init(&msg->vehspchars)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // vehauth
  if (!v2x_msgs__msg__VehicleAuthenticator__init(&msg->vehauth)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // equ_obuid
  if (!v2x_msgs__msg__EquipmentOBUId__init(&msg->equ_obuid)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // equ_iccid
  if (!v2x_msgs__msg__ICCId__init(&msg->equ_iccid)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // equstat
  if (!v2x_msgs__msg__EquipmentStatus__init(&msg->equstat)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // dvrchars
  if (!v2x_msgs__msg__DriverCharacteristics__init(&msg->dvrchars)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // paymbal
  if (!v2x_msgs__msg__PaymentMeansBalance__init(&msg->paymbal)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // paymunit
  if (!v2x_msgs__msg__PaymentMeansUnit__init(&msg->paymunit)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // paysecdata
  if (!v2x_msgs__msg__PaymentSecurityData__init(&msg->paysecdata)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // paymeans
  if (!v2x_msgs__msg__PaymentMeans__init(&msg->paymeans)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // recdata1
  if (!v2x_msgs__msg__ReceiptData1__init(&msg->recdata1)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // recdata2
  if (!v2x_msgs__msg__ReceiptData2__init(&msg->recdata2)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // valofcon
  if (!v2x_msgs__msg__ValidityOfContract__init(&msg->valofcon)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // recfinpt
  if (!v2x_msgs__msg__ReceiptFinancialPart__init(&msg->recfinpt)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // setmmirq
  if (!v2x_msgs__msg__SetMMIRq__init(&msg->setmmirq)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // awl
  if (!v2x_msgs__msg__AxleWeightLimits__init(&msg->awl)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // paca
  if (!v2x_msgs__msg__PassengerCapacity__init(&msg->paca)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // eng
  if (!v2x_msgs__msg__Engine__init(&msg->eng)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // sl
  if (!v2x_msgs__msg__SoundLevel__init(&msg->sl)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // eev
  if (!v2x_msgs__msg__ExhaustEmissionValues__init(&msg->eev)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // dev
  if (!v2x_msgs__msg__DieselEmissionValues__init(&msg->dev)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // co2ev
  if (!v2x_msgs__msg__CO2EmissionValue__init(&msg->co2ev)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // vtd
  if (!v2x_msgs__msg__VehicleTotalDistance__init(&msg->vtd)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // tlpn
  if (!v2x_msgs__msg__TrailerLicencePlateNumber__init(&msg->tlpn)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // tch
  if (!v2x_msgs__msg__TrailerCharacteristics__init(&msg->tch)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  // anp
  if (!v2x_msgs__msg__ActualNumberOfPassengers__init(&msg->anp)) {
    v2x_msgs__msg__EfcContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__EfcContainer__fini(v2x_msgs__msg__EfcContainer * msg)
{
  if (!msg) {
    return;
  }
  // efc_container_container_select
  // integer
  // bitstring
  // octetstring
  rosidl_runtime_c__int64__Sequence__fini(&msg->octetstring);
  // universal_string
  rosidl_runtime_c__String__fini(&msg->universal_string);
  // beacon_id
  v2x_msgs__msg__BeaconID__fini(&msg->beacon_id);
  // dsrc_application_entity_id
  v2x_msgs__msg__DSRCApplicationEntityID__fini(&msg->dsrc_application_entity_id);
  // dsrc_ase_id
  v2x_msgs__msg__DsrcEID__fini(&msg->dsrc_ase_id);
  // attr_id_list
  v2x_msgs__msg__AttributeIdList__fini(&msg->attr_id_list);
  // attr_list
  v2x_msgs__msg__AttributeList__fini(&msg->attr_list);
  // broadcast_pool
  v2x_msgs__msg__BroadcastPool__fini(&msg->broadcast_pool);
  // directory
  v2x_msgs__msg__Directory__fini(&msg->directory);
  // file
  v2x_msgs__msg__File__fini(&msg->file);
  // file_type
  v2x_msgs__msg__FileType__fini(&msg->file_type);
  // record
  v2x_msgs__msg__Record__fini(&msg->record);
  // time
  v2x_msgs__msg__Time__fini(&msg->time);
  // vector
  rosidl_runtime_c__int64__Sequence__fini(&msg->vector);
  // gstrq
  v2x_msgs__msg__GetStampedRq__fini(&msg->gstrq);
  // gstrs
  v2x_msgs__msg__GetStampedRs__fini(&msg->gstrs);
  // sstrq
  v2x_msgs__msg__SetStampedRq__fini(&msg->sstrq);
  // ginrq
  v2x_msgs__msg__GetInstanceRq__fini(&msg->ginrq);
  // ginrs
  v2x_msgs__msg__GetInstanceRs__fini(&msg->ginrs);
  // sinrq
  v2x_msgs__msg__SetInstanceRq__fini(&msg->sinrq);
  // charq
  v2x_msgs__msg__ChannelRq__fini(&msg->charq);
  // chars
  v2x_msgs__msg__ChannelRs__fini(&msg->chars);
  // cpprq
  v2x_msgs__msg__CopyRq__fini(&msg->cpprq);
  // subrq
  v2x_msgs__msg__SubRq__fini(&msg->subrq);
  // addrq
  v2x_msgs__msg__AddRq__fini(&msg->addrq);
  // debrq
  v2x_msgs__msg__DebitRq__fini(&msg->debrq);
  // debrs
  v2x_msgs__msg__DebitRs__fini(&msg->debrs);
  // crerq
  v2x_msgs__msg__CreditRq__fini(&msg->crerq);
  // crers
  v2x_msgs__msg__CreditRs__fini(&msg->crers);
  // efccontext
  v2x_msgs__msg__EFCContextMark__fini(&msg->efccontext);
  // contser
  v2x_msgs__msg__ContractSerialNumber__fini(&msg->contser);
  // contval
  v2x_msgs__msg__ContractValidity__fini(&msg->contval);
  // contveh
  v2x_msgs__msg__ContractVehicle__fini(&msg->contveh);
  // contauth
  v2x_msgs__msg__ContractAuthenticator__fini(&msg->contauth);
  // recspt
  v2x_msgs__msg__ReceiptServicePart__fini(&msg->recspt);
  // sessioncls
  v2x_msgs__msg__SessionClass__fini(&msg->sessioncls);
  // recservserialno
  v2x_msgs__msg__ReceiptServiceSerialNumber__fini(&msg->recservserialno);
  // reccont
  v2x_msgs__msg__ReceiptContract__fini(&msg->reccont);
  // rec_obuid
  v2x_msgs__msg__ReceiptOBUId__fini(&msg->rec_obuid);
  // rec_iccid
  v2x_msgs__msg__ReceiptICCId__fini(&msg->rec_iccid);
  // rectext
  v2x_msgs__msg__ReceiptText__fini(&msg->rectext);
  // recauth
  v2x_msgs__msg__ReceiptAuthenticator__fini(&msg->recauth);
  // recdist
  v2x_msgs__msg__ReceiptDistance__fini(&msg->recdist);
  // vehlpn
  v2x_msgs__msg__LPN__fini(&msg->vehlpn);
  // vehid
  v2x_msgs__msg__CS5__fini(&msg->vehid);
  // vehclass
  v2x_msgs__msg__VehicleClass__fini(&msg->vehclass);
  // vehdims
  v2x_msgs__msg__VehicleDimensions__fini(&msg->vehdims);
  // vehaxles
  v2x_msgs__msg__VehicleAxles__fini(&msg->vehaxles);
  // vehwtlims
  v2x_msgs__msg__VehicleWeightLimits__fini(&msg->vehwtlims);
  // vehwtladen
  v2x_msgs__msg__VehicleWeightLaden__fini(&msg->vehwtladen);
  // vehspchars
  v2x_msgs__msg__VehicleSpecificCharacteristics__fini(&msg->vehspchars);
  // vehauth
  v2x_msgs__msg__VehicleAuthenticator__fini(&msg->vehauth);
  // equ_obuid
  v2x_msgs__msg__EquipmentOBUId__fini(&msg->equ_obuid);
  // equ_iccid
  v2x_msgs__msg__ICCId__fini(&msg->equ_iccid);
  // equstat
  v2x_msgs__msg__EquipmentStatus__fini(&msg->equstat);
  // dvrchars
  v2x_msgs__msg__DriverCharacteristics__fini(&msg->dvrchars);
  // paymbal
  v2x_msgs__msg__PaymentMeansBalance__fini(&msg->paymbal);
  // paymunit
  v2x_msgs__msg__PaymentMeansUnit__fini(&msg->paymunit);
  // paysecdata
  v2x_msgs__msg__PaymentSecurityData__fini(&msg->paysecdata);
  // paymeans
  v2x_msgs__msg__PaymentMeans__fini(&msg->paymeans);
  // recdata1
  v2x_msgs__msg__ReceiptData1__fini(&msg->recdata1);
  // recdata2
  v2x_msgs__msg__ReceiptData2__fini(&msg->recdata2);
  // valofcon
  v2x_msgs__msg__ValidityOfContract__fini(&msg->valofcon);
  // recfinpt
  v2x_msgs__msg__ReceiptFinancialPart__fini(&msg->recfinpt);
  // setmmirq
  v2x_msgs__msg__SetMMIRq__fini(&msg->setmmirq);
  // awl
  v2x_msgs__msg__AxleWeightLimits__fini(&msg->awl);
  // paca
  v2x_msgs__msg__PassengerCapacity__fini(&msg->paca);
  // eng
  v2x_msgs__msg__Engine__fini(&msg->eng);
  // sl
  v2x_msgs__msg__SoundLevel__fini(&msg->sl);
  // eev
  v2x_msgs__msg__ExhaustEmissionValues__fini(&msg->eev);
  // dev
  v2x_msgs__msg__DieselEmissionValues__fini(&msg->dev);
  // co2ev
  v2x_msgs__msg__CO2EmissionValue__fini(&msg->co2ev);
  // vtd
  v2x_msgs__msg__VehicleTotalDistance__fini(&msg->vtd);
  // tlpn
  v2x_msgs__msg__TrailerLicencePlateNumber__fini(&msg->tlpn);
  // tch
  v2x_msgs__msg__TrailerCharacteristics__fini(&msg->tch);
  // anp
  v2x_msgs__msg__ActualNumberOfPassengers__fini(&msg->anp);
}

bool
v2x_msgs__msg__EfcContainer__are_equal(const v2x_msgs__msg__EfcContainer * lhs, const v2x_msgs__msg__EfcContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // efc_container_container_select
  if (lhs->efc_container_container_select != rhs->efc_container_container_select) {
    return false;
  }
  // integer
  if (lhs->integer != rhs->integer) {
    return false;
  }
  // bitstring
  if (lhs->bitstring != rhs->bitstring) {
    return false;
  }
  // octetstring
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->octetstring), &(rhs->octetstring)))
  {
    return false;
  }
  // universal_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->universal_string), &(rhs->universal_string)))
  {
    return false;
  }
  // beacon_id
  if (!v2x_msgs__msg__BeaconID__are_equal(
      &(lhs->beacon_id), &(rhs->beacon_id)))
  {
    return false;
  }
  // dsrc_application_entity_id
  if (!v2x_msgs__msg__DSRCApplicationEntityID__are_equal(
      &(lhs->dsrc_application_entity_id), &(rhs->dsrc_application_entity_id)))
  {
    return false;
  }
  // dsrc_ase_id
  if (!v2x_msgs__msg__DsrcEID__are_equal(
      &(lhs->dsrc_ase_id), &(rhs->dsrc_ase_id)))
  {
    return false;
  }
  // attr_id_list
  if (!v2x_msgs__msg__AttributeIdList__are_equal(
      &(lhs->attr_id_list), &(rhs->attr_id_list)))
  {
    return false;
  }
  // attr_list
  if (!v2x_msgs__msg__AttributeList__are_equal(
      &(lhs->attr_list), &(rhs->attr_list)))
  {
    return false;
  }
  // broadcast_pool
  if (!v2x_msgs__msg__BroadcastPool__are_equal(
      &(lhs->broadcast_pool), &(rhs->broadcast_pool)))
  {
    return false;
  }
  // directory
  if (!v2x_msgs__msg__Directory__are_equal(
      &(lhs->directory), &(rhs->directory)))
  {
    return false;
  }
  // file
  if (!v2x_msgs__msg__File__are_equal(
      &(lhs->file), &(rhs->file)))
  {
    return false;
  }
  // file_type
  if (!v2x_msgs__msg__FileType__are_equal(
      &(lhs->file_type), &(rhs->file_type)))
  {
    return false;
  }
  // record
  if (!v2x_msgs__msg__Record__are_equal(
      &(lhs->record), &(rhs->record)))
  {
    return false;
  }
  // time
  if (!v2x_msgs__msg__Time__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  // vector
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->vector), &(rhs->vector)))
  {
    return false;
  }
  // gstrq
  if (!v2x_msgs__msg__GetStampedRq__are_equal(
      &(lhs->gstrq), &(rhs->gstrq)))
  {
    return false;
  }
  // gstrs
  if (!v2x_msgs__msg__GetStampedRs__are_equal(
      &(lhs->gstrs), &(rhs->gstrs)))
  {
    return false;
  }
  // sstrq
  if (!v2x_msgs__msg__SetStampedRq__are_equal(
      &(lhs->sstrq), &(rhs->sstrq)))
  {
    return false;
  }
  // ginrq
  if (!v2x_msgs__msg__GetInstanceRq__are_equal(
      &(lhs->ginrq), &(rhs->ginrq)))
  {
    return false;
  }
  // ginrs
  if (!v2x_msgs__msg__GetInstanceRs__are_equal(
      &(lhs->ginrs), &(rhs->ginrs)))
  {
    return false;
  }
  // sinrq
  if (!v2x_msgs__msg__SetInstanceRq__are_equal(
      &(lhs->sinrq), &(rhs->sinrq)))
  {
    return false;
  }
  // charq
  if (!v2x_msgs__msg__ChannelRq__are_equal(
      &(lhs->charq), &(rhs->charq)))
  {
    return false;
  }
  // chars
  if (!v2x_msgs__msg__ChannelRs__are_equal(
      &(lhs->chars), &(rhs->chars)))
  {
    return false;
  }
  // cpprq
  if (!v2x_msgs__msg__CopyRq__are_equal(
      &(lhs->cpprq), &(rhs->cpprq)))
  {
    return false;
  }
  // subrq
  if (!v2x_msgs__msg__SubRq__are_equal(
      &(lhs->subrq), &(rhs->subrq)))
  {
    return false;
  }
  // addrq
  if (!v2x_msgs__msg__AddRq__are_equal(
      &(lhs->addrq), &(rhs->addrq)))
  {
    return false;
  }
  // debrq
  if (!v2x_msgs__msg__DebitRq__are_equal(
      &(lhs->debrq), &(rhs->debrq)))
  {
    return false;
  }
  // debrs
  if (!v2x_msgs__msg__DebitRs__are_equal(
      &(lhs->debrs), &(rhs->debrs)))
  {
    return false;
  }
  // crerq
  if (!v2x_msgs__msg__CreditRq__are_equal(
      &(lhs->crerq), &(rhs->crerq)))
  {
    return false;
  }
  // crers
  if (!v2x_msgs__msg__CreditRs__are_equal(
      &(lhs->crers), &(rhs->crers)))
  {
    return false;
  }
  // efccontext
  if (!v2x_msgs__msg__EFCContextMark__are_equal(
      &(lhs->efccontext), &(rhs->efccontext)))
  {
    return false;
  }
  // contser
  if (!v2x_msgs__msg__ContractSerialNumber__are_equal(
      &(lhs->contser), &(rhs->contser)))
  {
    return false;
  }
  // contval
  if (!v2x_msgs__msg__ContractValidity__are_equal(
      &(lhs->contval), &(rhs->contval)))
  {
    return false;
  }
  // contveh
  if (!v2x_msgs__msg__ContractVehicle__are_equal(
      &(lhs->contveh), &(rhs->contveh)))
  {
    return false;
  }
  // contauth
  if (!v2x_msgs__msg__ContractAuthenticator__are_equal(
      &(lhs->contauth), &(rhs->contauth)))
  {
    return false;
  }
  // recspt
  if (!v2x_msgs__msg__ReceiptServicePart__are_equal(
      &(lhs->recspt), &(rhs->recspt)))
  {
    return false;
  }
  // sessioncls
  if (!v2x_msgs__msg__SessionClass__are_equal(
      &(lhs->sessioncls), &(rhs->sessioncls)))
  {
    return false;
  }
  // recservserialno
  if (!v2x_msgs__msg__ReceiptServiceSerialNumber__are_equal(
      &(lhs->recservserialno), &(rhs->recservserialno)))
  {
    return false;
  }
  // reccont
  if (!v2x_msgs__msg__ReceiptContract__are_equal(
      &(lhs->reccont), &(rhs->reccont)))
  {
    return false;
  }
  // rec_obuid
  if (!v2x_msgs__msg__ReceiptOBUId__are_equal(
      &(lhs->rec_obuid), &(rhs->rec_obuid)))
  {
    return false;
  }
  // rec_iccid
  if (!v2x_msgs__msg__ReceiptICCId__are_equal(
      &(lhs->rec_iccid), &(rhs->rec_iccid)))
  {
    return false;
  }
  // rectext
  if (!v2x_msgs__msg__ReceiptText__are_equal(
      &(lhs->rectext), &(rhs->rectext)))
  {
    return false;
  }
  // recauth
  if (!v2x_msgs__msg__ReceiptAuthenticator__are_equal(
      &(lhs->recauth), &(rhs->recauth)))
  {
    return false;
  }
  // recdist
  if (!v2x_msgs__msg__ReceiptDistance__are_equal(
      &(lhs->recdist), &(rhs->recdist)))
  {
    return false;
  }
  // vehlpn
  if (!v2x_msgs__msg__LPN__are_equal(
      &(lhs->vehlpn), &(rhs->vehlpn)))
  {
    return false;
  }
  // vehid
  if (!v2x_msgs__msg__CS5__are_equal(
      &(lhs->vehid), &(rhs->vehid)))
  {
    return false;
  }
  // vehclass
  if (!v2x_msgs__msg__VehicleClass__are_equal(
      &(lhs->vehclass), &(rhs->vehclass)))
  {
    return false;
  }
  // vehdims
  if (!v2x_msgs__msg__VehicleDimensions__are_equal(
      &(lhs->vehdims), &(rhs->vehdims)))
  {
    return false;
  }
  // vehaxles
  if (!v2x_msgs__msg__VehicleAxles__are_equal(
      &(lhs->vehaxles), &(rhs->vehaxles)))
  {
    return false;
  }
  // vehwtlims
  if (!v2x_msgs__msg__VehicleWeightLimits__are_equal(
      &(lhs->vehwtlims), &(rhs->vehwtlims)))
  {
    return false;
  }
  // vehwtladen
  if (!v2x_msgs__msg__VehicleWeightLaden__are_equal(
      &(lhs->vehwtladen), &(rhs->vehwtladen)))
  {
    return false;
  }
  // vehspchars
  if (!v2x_msgs__msg__VehicleSpecificCharacteristics__are_equal(
      &(lhs->vehspchars), &(rhs->vehspchars)))
  {
    return false;
  }
  // vehauth
  if (!v2x_msgs__msg__VehicleAuthenticator__are_equal(
      &(lhs->vehauth), &(rhs->vehauth)))
  {
    return false;
  }
  // equ_obuid
  if (!v2x_msgs__msg__EquipmentOBUId__are_equal(
      &(lhs->equ_obuid), &(rhs->equ_obuid)))
  {
    return false;
  }
  // equ_iccid
  if (!v2x_msgs__msg__ICCId__are_equal(
      &(lhs->equ_iccid), &(rhs->equ_iccid)))
  {
    return false;
  }
  // equstat
  if (!v2x_msgs__msg__EquipmentStatus__are_equal(
      &(lhs->equstat), &(rhs->equstat)))
  {
    return false;
  }
  // dvrchars
  if (!v2x_msgs__msg__DriverCharacteristics__are_equal(
      &(lhs->dvrchars), &(rhs->dvrchars)))
  {
    return false;
  }
  // paymbal
  if (!v2x_msgs__msg__PaymentMeansBalance__are_equal(
      &(lhs->paymbal), &(rhs->paymbal)))
  {
    return false;
  }
  // paymunit
  if (!v2x_msgs__msg__PaymentMeansUnit__are_equal(
      &(lhs->paymunit), &(rhs->paymunit)))
  {
    return false;
  }
  // paysecdata
  if (!v2x_msgs__msg__PaymentSecurityData__are_equal(
      &(lhs->paysecdata), &(rhs->paysecdata)))
  {
    return false;
  }
  // paymeans
  if (!v2x_msgs__msg__PaymentMeans__are_equal(
      &(lhs->paymeans), &(rhs->paymeans)))
  {
    return false;
  }
  // recdata1
  if (!v2x_msgs__msg__ReceiptData1__are_equal(
      &(lhs->recdata1), &(rhs->recdata1)))
  {
    return false;
  }
  // recdata2
  if (!v2x_msgs__msg__ReceiptData2__are_equal(
      &(lhs->recdata2), &(rhs->recdata2)))
  {
    return false;
  }
  // valofcon
  if (!v2x_msgs__msg__ValidityOfContract__are_equal(
      &(lhs->valofcon), &(rhs->valofcon)))
  {
    return false;
  }
  // recfinpt
  if (!v2x_msgs__msg__ReceiptFinancialPart__are_equal(
      &(lhs->recfinpt), &(rhs->recfinpt)))
  {
    return false;
  }
  // setmmirq
  if (!v2x_msgs__msg__SetMMIRq__are_equal(
      &(lhs->setmmirq), &(rhs->setmmirq)))
  {
    return false;
  }
  // awl
  if (!v2x_msgs__msg__AxleWeightLimits__are_equal(
      &(lhs->awl), &(rhs->awl)))
  {
    return false;
  }
  // paca
  if (!v2x_msgs__msg__PassengerCapacity__are_equal(
      &(lhs->paca), &(rhs->paca)))
  {
    return false;
  }
  // eng
  if (!v2x_msgs__msg__Engine__are_equal(
      &(lhs->eng), &(rhs->eng)))
  {
    return false;
  }
  // sl
  if (!v2x_msgs__msg__SoundLevel__are_equal(
      &(lhs->sl), &(rhs->sl)))
  {
    return false;
  }
  // eev
  if (!v2x_msgs__msg__ExhaustEmissionValues__are_equal(
      &(lhs->eev), &(rhs->eev)))
  {
    return false;
  }
  // dev
  if (!v2x_msgs__msg__DieselEmissionValues__are_equal(
      &(lhs->dev), &(rhs->dev)))
  {
    return false;
  }
  // co2ev
  if (!v2x_msgs__msg__CO2EmissionValue__are_equal(
      &(lhs->co2ev), &(rhs->co2ev)))
  {
    return false;
  }
  // vtd
  if (!v2x_msgs__msg__VehicleTotalDistance__are_equal(
      &(lhs->vtd), &(rhs->vtd)))
  {
    return false;
  }
  // tlpn
  if (!v2x_msgs__msg__TrailerLicencePlateNumber__are_equal(
      &(lhs->tlpn), &(rhs->tlpn)))
  {
    return false;
  }
  // tch
  if (!v2x_msgs__msg__TrailerCharacteristics__are_equal(
      &(lhs->tch), &(rhs->tch)))
  {
    return false;
  }
  // anp
  if (!v2x_msgs__msg__ActualNumberOfPassengers__are_equal(
      &(lhs->anp), &(rhs->anp)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__EfcContainer__copy(
  const v2x_msgs__msg__EfcContainer * input,
  v2x_msgs__msg__EfcContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // efc_container_container_select
  output->efc_container_container_select = input->efc_container_container_select;
  // integer
  output->integer = input->integer;
  // bitstring
  output->bitstring = input->bitstring;
  // octetstring
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->octetstring), &(output->octetstring)))
  {
    return false;
  }
  // universal_string
  if (!rosidl_runtime_c__String__copy(
      &(input->universal_string), &(output->universal_string)))
  {
    return false;
  }
  // beacon_id
  if (!v2x_msgs__msg__BeaconID__copy(
      &(input->beacon_id), &(output->beacon_id)))
  {
    return false;
  }
  // dsrc_application_entity_id
  if (!v2x_msgs__msg__DSRCApplicationEntityID__copy(
      &(input->dsrc_application_entity_id), &(output->dsrc_application_entity_id)))
  {
    return false;
  }
  // dsrc_ase_id
  if (!v2x_msgs__msg__DsrcEID__copy(
      &(input->dsrc_ase_id), &(output->dsrc_ase_id)))
  {
    return false;
  }
  // attr_id_list
  if (!v2x_msgs__msg__AttributeIdList__copy(
      &(input->attr_id_list), &(output->attr_id_list)))
  {
    return false;
  }
  // attr_list
  if (!v2x_msgs__msg__AttributeList__copy(
      &(input->attr_list), &(output->attr_list)))
  {
    return false;
  }
  // broadcast_pool
  if (!v2x_msgs__msg__BroadcastPool__copy(
      &(input->broadcast_pool), &(output->broadcast_pool)))
  {
    return false;
  }
  // directory
  if (!v2x_msgs__msg__Directory__copy(
      &(input->directory), &(output->directory)))
  {
    return false;
  }
  // file
  if (!v2x_msgs__msg__File__copy(
      &(input->file), &(output->file)))
  {
    return false;
  }
  // file_type
  if (!v2x_msgs__msg__FileType__copy(
      &(input->file_type), &(output->file_type)))
  {
    return false;
  }
  // record
  if (!v2x_msgs__msg__Record__copy(
      &(input->record), &(output->record)))
  {
    return false;
  }
  // time
  if (!v2x_msgs__msg__Time__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  // vector
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->vector), &(output->vector)))
  {
    return false;
  }
  // gstrq
  if (!v2x_msgs__msg__GetStampedRq__copy(
      &(input->gstrq), &(output->gstrq)))
  {
    return false;
  }
  // gstrs
  if (!v2x_msgs__msg__GetStampedRs__copy(
      &(input->gstrs), &(output->gstrs)))
  {
    return false;
  }
  // sstrq
  if (!v2x_msgs__msg__SetStampedRq__copy(
      &(input->sstrq), &(output->sstrq)))
  {
    return false;
  }
  // ginrq
  if (!v2x_msgs__msg__GetInstanceRq__copy(
      &(input->ginrq), &(output->ginrq)))
  {
    return false;
  }
  // ginrs
  if (!v2x_msgs__msg__GetInstanceRs__copy(
      &(input->ginrs), &(output->ginrs)))
  {
    return false;
  }
  // sinrq
  if (!v2x_msgs__msg__SetInstanceRq__copy(
      &(input->sinrq), &(output->sinrq)))
  {
    return false;
  }
  // charq
  if (!v2x_msgs__msg__ChannelRq__copy(
      &(input->charq), &(output->charq)))
  {
    return false;
  }
  // chars
  if (!v2x_msgs__msg__ChannelRs__copy(
      &(input->chars), &(output->chars)))
  {
    return false;
  }
  // cpprq
  if (!v2x_msgs__msg__CopyRq__copy(
      &(input->cpprq), &(output->cpprq)))
  {
    return false;
  }
  // subrq
  if (!v2x_msgs__msg__SubRq__copy(
      &(input->subrq), &(output->subrq)))
  {
    return false;
  }
  // addrq
  if (!v2x_msgs__msg__AddRq__copy(
      &(input->addrq), &(output->addrq)))
  {
    return false;
  }
  // debrq
  if (!v2x_msgs__msg__DebitRq__copy(
      &(input->debrq), &(output->debrq)))
  {
    return false;
  }
  // debrs
  if (!v2x_msgs__msg__DebitRs__copy(
      &(input->debrs), &(output->debrs)))
  {
    return false;
  }
  // crerq
  if (!v2x_msgs__msg__CreditRq__copy(
      &(input->crerq), &(output->crerq)))
  {
    return false;
  }
  // crers
  if (!v2x_msgs__msg__CreditRs__copy(
      &(input->crers), &(output->crers)))
  {
    return false;
  }
  // efccontext
  if (!v2x_msgs__msg__EFCContextMark__copy(
      &(input->efccontext), &(output->efccontext)))
  {
    return false;
  }
  // contser
  if (!v2x_msgs__msg__ContractSerialNumber__copy(
      &(input->contser), &(output->contser)))
  {
    return false;
  }
  // contval
  if (!v2x_msgs__msg__ContractValidity__copy(
      &(input->contval), &(output->contval)))
  {
    return false;
  }
  // contveh
  if (!v2x_msgs__msg__ContractVehicle__copy(
      &(input->contveh), &(output->contveh)))
  {
    return false;
  }
  // contauth
  if (!v2x_msgs__msg__ContractAuthenticator__copy(
      &(input->contauth), &(output->contauth)))
  {
    return false;
  }
  // recspt
  if (!v2x_msgs__msg__ReceiptServicePart__copy(
      &(input->recspt), &(output->recspt)))
  {
    return false;
  }
  // sessioncls
  if (!v2x_msgs__msg__SessionClass__copy(
      &(input->sessioncls), &(output->sessioncls)))
  {
    return false;
  }
  // recservserialno
  if (!v2x_msgs__msg__ReceiptServiceSerialNumber__copy(
      &(input->recservserialno), &(output->recservserialno)))
  {
    return false;
  }
  // reccont
  if (!v2x_msgs__msg__ReceiptContract__copy(
      &(input->reccont), &(output->reccont)))
  {
    return false;
  }
  // rec_obuid
  if (!v2x_msgs__msg__ReceiptOBUId__copy(
      &(input->rec_obuid), &(output->rec_obuid)))
  {
    return false;
  }
  // rec_iccid
  if (!v2x_msgs__msg__ReceiptICCId__copy(
      &(input->rec_iccid), &(output->rec_iccid)))
  {
    return false;
  }
  // rectext
  if (!v2x_msgs__msg__ReceiptText__copy(
      &(input->rectext), &(output->rectext)))
  {
    return false;
  }
  // recauth
  if (!v2x_msgs__msg__ReceiptAuthenticator__copy(
      &(input->recauth), &(output->recauth)))
  {
    return false;
  }
  // recdist
  if (!v2x_msgs__msg__ReceiptDistance__copy(
      &(input->recdist), &(output->recdist)))
  {
    return false;
  }
  // vehlpn
  if (!v2x_msgs__msg__LPN__copy(
      &(input->vehlpn), &(output->vehlpn)))
  {
    return false;
  }
  // vehid
  if (!v2x_msgs__msg__CS5__copy(
      &(input->vehid), &(output->vehid)))
  {
    return false;
  }
  // vehclass
  if (!v2x_msgs__msg__VehicleClass__copy(
      &(input->vehclass), &(output->vehclass)))
  {
    return false;
  }
  // vehdims
  if (!v2x_msgs__msg__VehicleDimensions__copy(
      &(input->vehdims), &(output->vehdims)))
  {
    return false;
  }
  // vehaxles
  if (!v2x_msgs__msg__VehicleAxles__copy(
      &(input->vehaxles), &(output->vehaxles)))
  {
    return false;
  }
  // vehwtlims
  if (!v2x_msgs__msg__VehicleWeightLimits__copy(
      &(input->vehwtlims), &(output->vehwtlims)))
  {
    return false;
  }
  // vehwtladen
  if (!v2x_msgs__msg__VehicleWeightLaden__copy(
      &(input->vehwtladen), &(output->vehwtladen)))
  {
    return false;
  }
  // vehspchars
  if (!v2x_msgs__msg__VehicleSpecificCharacteristics__copy(
      &(input->vehspchars), &(output->vehspchars)))
  {
    return false;
  }
  // vehauth
  if (!v2x_msgs__msg__VehicleAuthenticator__copy(
      &(input->vehauth), &(output->vehauth)))
  {
    return false;
  }
  // equ_obuid
  if (!v2x_msgs__msg__EquipmentOBUId__copy(
      &(input->equ_obuid), &(output->equ_obuid)))
  {
    return false;
  }
  // equ_iccid
  if (!v2x_msgs__msg__ICCId__copy(
      &(input->equ_iccid), &(output->equ_iccid)))
  {
    return false;
  }
  // equstat
  if (!v2x_msgs__msg__EquipmentStatus__copy(
      &(input->equstat), &(output->equstat)))
  {
    return false;
  }
  // dvrchars
  if (!v2x_msgs__msg__DriverCharacteristics__copy(
      &(input->dvrchars), &(output->dvrchars)))
  {
    return false;
  }
  // paymbal
  if (!v2x_msgs__msg__PaymentMeansBalance__copy(
      &(input->paymbal), &(output->paymbal)))
  {
    return false;
  }
  // paymunit
  if (!v2x_msgs__msg__PaymentMeansUnit__copy(
      &(input->paymunit), &(output->paymunit)))
  {
    return false;
  }
  // paysecdata
  if (!v2x_msgs__msg__PaymentSecurityData__copy(
      &(input->paysecdata), &(output->paysecdata)))
  {
    return false;
  }
  // paymeans
  if (!v2x_msgs__msg__PaymentMeans__copy(
      &(input->paymeans), &(output->paymeans)))
  {
    return false;
  }
  // recdata1
  if (!v2x_msgs__msg__ReceiptData1__copy(
      &(input->recdata1), &(output->recdata1)))
  {
    return false;
  }
  // recdata2
  if (!v2x_msgs__msg__ReceiptData2__copy(
      &(input->recdata2), &(output->recdata2)))
  {
    return false;
  }
  // valofcon
  if (!v2x_msgs__msg__ValidityOfContract__copy(
      &(input->valofcon), &(output->valofcon)))
  {
    return false;
  }
  // recfinpt
  if (!v2x_msgs__msg__ReceiptFinancialPart__copy(
      &(input->recfinpt), &(output->recfinpt)))
  {
    return false;
  }
  // setmmirq
  if (!v2x_msgs__msg__SetMMIRq__copy(
      &(input->setmmirq), &(output->setmmirq)))
  {
    return false;
  }
  // awl
  if (!v2x_msgs__msg__AxleWeightLimits__copy(
      &(input->awl), &(output->awl)))
  {
    return false;
  }
  // paca
  if (!v2x_msgs__msg__PassengerCapacity__copy(
      &(input->paca), &(output->paca)))
  {
    return false;
  }
  // eng
  if (!v2x_msgs__msg__Engine__copy(
      &(input->eng), &(output->eng)))
  {
    return false;
  }
  // sl
  if (!v2x_msgs__msg__SoundLevel__copy(
      &(input->sl), &(output->sl)))
  {
    return false;
  }
  // eev
  if (!v2x_msgs__msg__ExhaustEmissionValues__copy(
      &(input->eev), &(output->eev)))
  {
    return false;
  }
  // dev
  if (!v2x_msgs__msg__DieselEmissionValues__copy(
      &(input->dev), &(output->dev)))
  {
    return false;
  }
  // co2ev
  if (!v2x_msgs__msg__CO2EmissionValue__copy(
      &(input->co2ev), &(output->co2ev)))
  {
    return false;
  }
  // vtd
  if (!v2x_msgs__msg__VehicleTotalDistance__copy(
      &(input->vtd), &(output->vtd)))
  {
    return false;
  }
  // tlpn
  if (!v2x_msgs__msg__TrailerLicencePlateNumber__copy(
      &(input->tlpn), &(output->tlpn)))
  {
    return false;
  }
  // tch
  if (!v2x_msgs__msg__TrailerCharacteristics__copy(
      &(input->tch), &(output->tch)))
  {
    return false;
  }
  // anp
  if (!v2x_msgs__msg__ActualNumberOfPassengers__copy(
      &(input->anp), &(output->anp)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__EfcContainer *
v2x_msgs__msg__EfcContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__EfcContainer * msg = (v2x_msgs__msg__EfcContainer *)allocator.allocate(sizeof(v2x_msgs__msg__EfcContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__EfcContainer));
  bool success = v2x_msgs__msg__EfcContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__EfcContainer__destroy(v2x_msgs__msg__EfcContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__EfcContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__EfcContainer__Sequence__init(v2x_msgs__msg__EfcContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__EfcContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__EfcContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__EfcContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__EfcContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__EfcContainer__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
v2x_msgs__msg__EfcContainer__Sequence__fini(v2x_msgs__msg__EfcContainer__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msgs__msg__EfcContainer__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

v2x_msgs__msg__EfcContainer__Sequence *
v2x_msgs__msg__EfcContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__EfcContainer__Sequence * array = (v2x_msgs__msg__EfcContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__EfcContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__EfcContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__EfcContainer__Sequence__destroy(v2x_msgs__msg__EfcContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__EfcContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__EfcContainer__Sequence__are_equal(const v2x_msgs__msg__EfcContainer__Sequence * lhs, const v2x_msgs__msg__EfcContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__EfcContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__EfcContainer__Sequence__copy(
  const v2x_msgs__msg__EfcContainer__Sequence * input,
  v2x_msgs__msg__EfcContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__EfcContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__EfcContainer * data =
      (v2x_msgs__msg__EfcContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__EfcContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__EfcContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__EfcContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
