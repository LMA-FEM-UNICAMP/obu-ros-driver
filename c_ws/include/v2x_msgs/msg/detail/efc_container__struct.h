// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EfcContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EFC_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EFC_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EFC_CONTAINER_NOTHING'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_NOTHING = 0ll
};

/// Constant 'EFC_CONTAINER_INTEGER'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_INTEGER = 1ll
};

/// Constant 'EFC_CONTAINER_BITSTRING'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_BITSTRING = 2ll
};

/// Constant 'EFC_CONTAINER_OCTETSTRING'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_OCTETSTRING = 3ll
};

/// Constant 'EFC_CONTAINER_UNIVERSAL_STRING'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_UNIVERSAL_STRING = 4ll
};

/// Constant 'EFC_CONTAINER_BEACON_ID'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_BEACON_ID = 5ll
};

/// Constant 'EFC_CONTAINER_T_APDU'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_T_APDU = 6ll
};

/// Constant 'EFC_CONTAINER_DSRC_APPLICATION_ENTITY_ID'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_DSRC_APPLICATION_ENTITY_ID = 7ll
};

/// Constant 'EFC_CONTAINER_DSRC_ASE_ID'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_DSRC_ASE_ID = 8ll
};

/// Constant 'EFC_CONTAINER_ATTR_ID_LIST'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_ATTR_ID_LIST = 9ll
};

/// Constant 'EFC_CONTAINER_ATTR_LIST'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_ATTR_LIST = 10ll
};

/// Constant 'EFC_CONTAINER_BROADCAST_POOL'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_BROADCAST_POOL = 11ll
};

/// Constant 'EFC_CONTAINER_DIRECTORY'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_DIRECTORY = 12ll
};

/// Constant 'EFC_CONTAINER_FILE'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_FILE = 13ll
};

/// Constant 'EFC_CONTAINER_FILE_TYPE'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_FILE_TYPE = 14ll
};

/// Constant 'EFC_CONTAINER_RECORD'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_RECORD = 15ll
};

/// Constant 'EFC_CONTAINER_TIME'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_TIME = 16ll
};

/// Constant 'EFC_CONTAINER_VECTOR'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_VECTOR = 17ll
};

/// Constant 'EFC_CONTAINER_GSTRQ'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_GSTRQ = 18ll
};

/// Constant 'EFC_CONTAINER_GSTRS'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_GSTRS = 19ll
};

/// Constant 'EFC_CONTAINER_SSTRQ'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_SSTRQ = 20ll
};

/// Constant 'EFC_CONTAINER_GINRQ'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_GINRQ = 21ll
};

/// Constant 'EFC_CONTAINER_GINRS'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_GINRS = 22ll
};

/// Constant 'EFC_CONTAINER_SINRQ'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_SINRQ = 23ll
};

/// Constant 'EFC_CONTAINER_CHARQ'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_CHARQ = 24ll
};

/// Constant 'EFC_CONTAINER_CHARS'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_CHARS = 25ll
};

/// Constant 'EFC_CONTAINER_CPPRQ'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_CPPRQ = 26ll
};

/// Constant 'EFC_CONTAINER_SUBRQ'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_SUBRQ = 27ll
};

/// Constant 'EFC_CONTAINER_ADDRQ'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_ADDRQ = 28ll
};

/// Constant 'EFC_CONTAINER_DEBRQ'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_DEBRQ = 29ll
};

/// Constant 'EFC_CONTAINER_DEBRS'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_DEBRS = 30ll
};

/// Constant 'EFC_CONTAINER_CRERQ'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_CRERQ = 31ll
};

/// Constant 'EFC_CONTAINER_CRERS'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_CRERS = 32ll
};

/// Constant 'EFC_CONTAINER_EFCCONTEXT'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_EFCCONTEXT = 33ll
};

/// Constant 'EFC_CONTAINER_CONTSER'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_CONTSER = 34ll
};

/// Constant 'EFC_CONTAINER_CONTVAL'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_CONTVAL = 35ll
};

/// Constant 'EFC_CONTAINER_CONTVEH'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_CONTVEH = 36ll
};

/// Constant 'EFC_CONTAINER_CONTAUTH'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_CONTAUTH = 37ll
};

/// Constant 'EFC_CONTAINER_RECSPT'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_RECSPT = 38ll
};

/// Constant 'EFC_CONTAINER_SESSIONCLS'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_SESSIONCLS = 39ll
};

/// Constant 'EFC_CONTAINER_RECSERVSERIALNO'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_RECSERVSERIALNO = 40ll
};

/// Constant 'EFC_CONTAINER_RECCONT'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_RECCONT = 41ll
};

/// Constant 'EFC_CONTAINER_REC_OBUID'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_REC_OBUID = 42ll
};

/// Constant 'EFC_CONTAINER_REC_ICCID'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_REC_ICCID = 43ll
};

/// Constant 'EFC_CONTAINER_RECTEXT'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_RECTEXT = 44ll
};

/// Constant 'EFC_CONTAINER_RECAUTH'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_RECAUTH = 45ll
};

/// Constant 'EFC_CONTAINER_RECDIST'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_RECDIST = 46ll
};

/// Constant 'EFC_CONTAINER_VEHLPN'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_VEHLPN = 47ll
};

/// Constant 'EFC_CONTAINER_VEHID'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_VEHID = 48ll
};

/// Constant 'EFC_CONTAINER_VEHCLASS'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_VEHCLASS = 49ll
};

/// Constant 'EFC_CONTAINER_VEHDIMS'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_VEHDIMS = 50ll
};

/// Constant 'EFC_CONTAINER_VEHAXLES'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_VEHAXLES = 51ll
};

/// Constant 'EFC_CONTAINER_VEHWTLIMS'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_VEHWTLIMS = 52ll
};

/// Constant 'EFC_CONTAINER_VEHWTLADEN'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_VEHWTLADEN = 53ll
};

/// Constant 'EFC_CONTAINER_VEHSPCHARS'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_VEHSPCHARS = 54ll
};

/// Constant 'EFC_CONTAINER_VEHAUTH'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_VEHAUTH = 55ll
};

/// Constant 'EFC_CONTAINER_EQU_OBUID'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_EQU_OBUID = 56ll
};

/// Constant 'EFC_CONTAINER_EQU_ICCID'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_EQU_ICCID = 57ll
};

/// Constant 'EFC_CONTAINER_EQUSTAT'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_EQUSTAT = 58ll
};

/// Constant 'EFC_CONTAINER_DVRCHARS'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_DVRCHARS = 59ll
};

/// Constant 'EFC_CONTAINER_PAYMBAL'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_PAYMBAL = 60ll
};

/// Constant 'EFC_CONTAINER_PAYMUNIT'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_PAYMUNIT = 61ll
};

/// Constant 'EFC_CONTAINER_PAYSECDATA'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_PAYSECDATA = 62ll
};

/// Constant 'EFC_CONTAINER_PAYMEANS'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_PAYMEANS = 63ll
};

/// Constant 'EFC_CONTAINER_RECDATA1'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_RECDATA1 = 64ll
};

/// Constant 'EFC_CONTAINER_RECDATA2'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_RECDATA2 = 65ll
};

/// Constant 'EFC_CONTAINER_VALOFCON'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_VALOFCON = 66ll
};

/// Constant 'EFC_CONTAINER_RECFINPT'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_RECFINPT = 67ll
};

/// Constant 'EFC_CONTAINER_SETMMIRQ'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_SETMMIRQ = 68ll
};

/// Constant 'EFC_CONTAINER_AWL'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_AWL = 69ll
};

/// Constant 'EFC_CONTAINER_PACA'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_PACA = 70ll
};

/// Constant 'EFC_CONTAINER_ENG'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_ENG = 71ll
};

/// Constant 'EFC_CONTAINER_SL'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_SL = 72ll
};

/// Constant 'EFC_CONTAINER_EEV'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_EEV = 73ll
};

/// Constant 'EFC_CONTAINER_DEV'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_DEV = 74ll
};

/// Constant 'EFC_CONTAINER_CO2EV'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_CO2EV = 75ll
};

/// Constant 'EFC_CONTAINER_VTD'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_VTD = 76ll
};

/// Constant 'EFC_CONTAINER_TLPN'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_TLPN = 77ll
};

/// Constant 'EFC_CONTAINER_TCH'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_TCH = 78ll
};

/// Constant 'EFC_CONTAINER_ANP'.
enum
{
  v2x_msgs__msg__EfcContainer__EFC_CONTAINER_ANP = 79ll
};

// Include directives for member types
// Member 'octetstring'
// Member 'vector'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'universal_string'
#include "rosidl_runtime_c/string.h"
// Member 'beacon_id'
#include "v2x_msgs/msg/detail/beacon_id__struct.h"
// Member 'dsrc_application_entity_id'
#include "v2x_msgs/msg/detail/dsrc_application_entity_id__struct.h"
// Member 'dsrc_ase_id'
#include "v2x_msgs/msg/detail/dsrc_eid__struct.h"
// Member 'attr_id_list'
#include "v2x_msgs/msg/detail/attribute_id_list__struct.h"
// Member 'attr_list'
#include "v2x_msgs/msg/detail/attribute_list__struct.h"
// Member 'broadcast_pool'
#include "v2x_msgs/msg/detail/broadcast_pool__struct.h"
// Member 'directory'
#include "v2x_msgs/msg/detail/directory__struct.h"
// Member 'file'
#include "v2x_msgs/msg/detail/file__struct.h"
// Member 'file_type'
#include "v2x_msgs/msg/detail/file_type__struct.h"
// Member 'record'
#include "v2x_msgs/msg/detail/record__struct.h"
// Member 'time'
#include "v2x_msgs/msg/detail/time__struct.h"
// Member 'gstrq'
#include "v2x_msgs/msg/detail/get_stamped_rq__struct.h"
// Member 'gstrs'
#include "v2x_msgs/msg/detail/get_stamped_rs__struct.h"
// Member 'sstrq'
#include "v2x_msgs/msg/detail/set_stamped_rq__struct.h"
// Member 'ginrq'
#include "v2x_msgs/msg/detail/get_instance_rq__struct.h"
// Member 'ginrs'
#include "v2x_msgs/msg/detail/get_instance_rs__struct.h"
// Member 'sinrq'
#include "v2x_msgs/msg/detail/set_instance_rq__struct.h"
// Member 'charq'
#include "v2x_msgs/msg/detail/channel_rq__struct.h"
// Member 'chars'
#include "v2x_msgs/msg/detail/channel_rs__struct.h"
// Member 'cpprq'
#include "v2x_msgs/msg/detail/copy_rq__struct.h"
// Member 'subrq'
#include "v2x_msgs/msg/detail/sub_rq__struct.h"
// Member 'addrq'
#include "v2x_msgs/msg/detail/add_rq__struct.h"
// Member 'debrq'
#include "v2x_msgs/msg/detail/debit_rq__struct.h"
// Member 'debrs'
#include "v2x_msgs/msg/detail/debit_rs__struct.h"
// Member 'crerq'
#include "v2x_msgs/msg/detail/credit_rq__struct.h"
// Member 'crers'
#include "v2x_msgs/msg/detail/credit_rs__struct.h"
// Member 'efccontext'
#include "v2x_msgs/msg/detail/efc_context_mark__struct.h"
// Member 'contser'
#include "v2x_msgs/msg/detail/contract_serial_number__struct.h"
// Member 'contval'
#include "v2x_msgs/msg/detail/contract_validity__struct.h"
// Member 'contveh'
#include "v2x_msgs/msg/detail/contract_vehicle__struct.h"
// Member 'contauth'
#include "v2x_msgs/msg/detail/contract_authenticator__struct.h"
// Member 'recspt'
#include "v2x_msgs/msg/detail/receipt_service_part__struct.h"
// Member 'sessioncls'
#include "v2x_msgs/msg/detail/session_class__struct.h"
// Member 'recservserialno'
#include "v2x_msgs/msg/detail/receipt_service_serial_number__struct.h"
// Member 'reccont'
#include "v2x_msgs/msg/detail/receipt_contract__struct.h"
// Member 'rec_obuid'
#include "v2x_msgs/msg/detail/receipt_obu_id__struct.h"
// Member 'rec_iccid'
#include "v2x_msgs/msg/detail/receipt_icc_id__struct.h"
// Member 'rectext'
#include "v2x_msgs/msg/detail/receipt_text__struct.h"
// Member 'recauth'
#include "v2x_msgs/msg/detail/receipt_authenticator__struct.h"
// Member 'recdist'
#include "v2x_msgs/msg/detail/receipt_distance__struct.h"
// Member 'vehlpn'
#include "v2x_msgs/msg/detail/lpn__struct.h"
// Member 'vehid'
#include "v2x_msgs/msg/detail/cs5__struct.h"
// Member 'vehclass'
#include "v2x_msgs/msg/detail/vehicle_class__struct.h"
// Member 'vehdims'
#include "v2x_msgs/msg/detail/vehicle_dimensions__struct.h"
// Member 'vehaxles'
#include "v2x_msgs/msg/detail/vehicle_axles__struct.h"
// Member 'vehwtlims'
#include "v2x_msgs/msg/detail/vehicle_weight_limits__struct.h"
// Member 'vehwtladen'
#include "v2x_msgs/msg/detail/vehicle_weight_laden__struct.h"
// Member 'vehspchars'
#include "v2x_msgs/msg/detail/vehicle_specific_characteristics__struct.h"
// Member 'vehauth'
#include "v2x_msgs/msg/detail/vehicle_authenticator__struct.h"
// Member 'equ_obuid'
#include "v2x_msgs/msg/detail/equipment_obu_id__struct.h"
// Member 'equ_iccid'
#include "v2x_msgs/msg/detail/icc_id__struct.h"
// Member 'equstat'
#include "v2x_msgs/msg/detail/equipment_status__struct.h"
// Member 'dvrchars'
#include "v2x_msgs/msg/detail/driver_characteristics__struct.h"
// Member 'paymbal'
#include "v2x_msgs/msg/detail/payment_means_balance__struct.h"
// Member 'paymunit'
#include "v2x_msgs/msg/detail/payment_means_unit__struct.h"
// Member 'paysecdata'
#include "v2x_msgs/msg/detail/payment_security_data__struct.h"
// Member 'paymeans'
#include "v2x_msgs/msg/detail/payment_means__struct.h"
// Member 'recdata1'
#include "v2x_msgs/msg/detail/receipt_data1__struct.h"
// Member 'recdata2'
#include "v2x_msgs/msg/detail/receipt_data2__struct.h"
// Member 'valofcon'
#include "v2x_msgs/msg/detail/validity_of_contract__struct.h"
// Member 'recfinpt'
#include "v2x_msgs/msg/detail/receipt_financial_part__struct.h"
// Member 'setmmirq'
#include "v2x_msgs/msg/detail/set_mmi_rq__struct.h"
// Member 'awl'
#include "v2x_msgs/msg/detail/axle_weight_limits__struct.h"
// Member 'paca'
#include "v2x_msgs/msg/detail/passenger_capacity__struct.h"
// Member 'eng'
#include "v2x_msgs/msg/detail/engine__struct.h"
// Member 'sl'
#include "v2x_msgs/msg/detail/sound_level__struct.h"
// Member 'eev'
#include "v2x_msgs/msg/detail/exhaust_emission_values__struct.h"
// Member 'dev'
#include "v2x_msgs/msg/detail/diesel_emission_values__struct.h"
// Member 'co2ev'
#include "v2x_msgs/msg/detail/co2_emission_value__struct.h"
// Member 'vtd'
#include "v2x_msgs/msg/detail/vehicle_total_distance__struct.h"
// Member 'tlpn'
#include "v2x_msgs/msg/detail/trailer_licence_plate_number__struct.h"
// Member 'tch'
#include "v2x_msgs/msg/detail/trailer_characteristics__struct.h"
// Member 'anp'
#include "v2x_msgs/msg/detail/actual_number_of_passengers__struct.h"

/// Struct defined in msg/EfcContainer in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__EfcContainer
{
  /// Added some choices & SEQUENCE OF adaptation
  /// CHOICE! - Choose exactly of the containers
  int64_t efc_container_container_select;
  /// container 1
  int64_t integer;
  /// container 2
  int64_t bitstring;
  /// container 3
  rosidl_runtime_c__int64__Sequence octetstring;
  /// container 4
  rosidl_runtime_c__String universal_string;
  /// container 5
  v2x_msgs__msg__BeaconID beacon_id;
  ///  container 6
  /// TAPDUs t_apdu
  ///  container 7
  v2x_msgs__msg__DSRCApplicationEntityID dsrc_application_entity_id;
  /// container 8
  v2x_msgs__msg__DsrcEID dsrc_ase_id;
  /// container 9
  v2x_msgs__msg__AttributeIdList attr_id_list;
  /// container 10
  v2x_msgs__msg__AttributeList attr_list;
  /// container 11
  v2x_msgs__msg__BroadcastPool broadcast_pool;
  /// container 12
  v2x_msgs__msg__Directory directory;
  /// container 13
  v2x_msgs__msg__File file;
  /// container 14
  v2x_msgs__msg__FileType file_type;
  /// container 15
  v2x_msgs__msg__Record record;
  /// container 16
  v2x_msgs__msg__Time time;
  ///  container 17
  /// size(0..255)
  rosidl_runtime_c__int64__Sequence vector;
  /// container 18
  v2x_msgs__msg__GetStampedRq gstrq;
  /// container 19
  v2x_msgs__msg__GetStampedRs gstrs;
  /// container 20
  v2x_msgs__msg__SetStampedRq sstrq;
  /// container 21
  v2x_msgs__msg__GetInstanceRq ginrq;
  /// container 22
  v2x_msgs__msg__GetInstanceRs ginrs;
  /// container 23
  v2x_msgs__msg__SetInstanceRq sinrq;
  /// container 24
  v2x_msgs__msg__ChannelRq charq;
  /// container 25
  v2x_msgs__msg__ChannelRs chars;
  /// container 26
  v2x_msgs__msg__CopyRq cpprq;
  /// container 27
  v2x_msgs__msg__SubRq subrq;
  /// container 28
  v2x_msgs__msg__AddRq addrq;
  /// container 29
  v2x_msgs__msg__DebitRq debrq;
  /// container 30
  v2x_msgs__msg__DebitRs debrs;
  /// container 31
  v2x_msgs__msg__CreditRq crerq;
  /// container 32
  v2x_msgs__msg__CreditRs crers;
  /// container 33
  v2x_msgs__msg__EFCContextMark efccontext;
  /// container 34
  v2x_msgs__msg__ContractSerialNumber contser;
  /// container 35
  v2x_msgs__msg__ContractValidity contval;
  /// container 36
  v2x_msgs__msg__ContractVehicle contveh;
  /// container 37
  v2x_msgs__msg__ContractAuthenticator contauth;
  /// container 38
  v2x_msgs__msg__ReceiptServicePart recspt;
  /// container 39
  v2x_msgs__msg__SessionClass sessioncls;
  /// container 40
  v2x_msgs__msg__ReceiptServiceSerialNumber recservserialno;
  /// container 41
  v2x_msgs__msg__ReceiptContract reccont;
  /// container 42
  v2x_msgs__msg__ReceiptOBUId rec_obuid;
  /// container 43
  v2x_msgs__msg__ReceiptICCId rec_iccid;
  /// container 44
  v2x_msgs__msg__ReceiptText rectext;
  /// container 45
  v2x_msgs__msg__ReceiptAuthenticator recauth;
  /// container 46
  v2x_msgs__msg__ReceiptDistance recdist;
  /// container 47
  v2x_msgs__msg__LPN vehlpn;
  /// container 48
  v2x_msgs__msg__CS5 vehid;
  /// container 49
  v2x_msgs__msg__VehicleClass vehclass;
  /// container 50
  v2x_msgs__msg__VehicleDimensions vehdims;
  /// container 51
  v2x_msgs__msg__VehicleAxles vehaxles;
  /// container 52
  v2x_msgs__msg__VehicleWeightLimits vehwtlims;
  /// container 53
  v2x_msgs__msg__VehicleWeightLaden vehwtladen;
  /// container 54
  v2x_msgs__msg__VehicleSpecificCharacteristics vehspchars;
  /// container 55
  v2x_msgs__msg__VehicleAuthenticator vehauth;
  /// container 56
  v2x_msgs__msg__EquipmentOBUId equ_obuid;
  /// container 57
  v2x_msgs__msg__ICCId equ_iccid;
  /// container 58
  v2x_msgs__msg__EquipmentStatus equstat;
  /// container 59
  v2x_msgs__msg__DriverCharacteristics dvrchars;
  /// container 60
  v2x_msgs__msg__PaymentMeansBalance paymbal;
  /// container 61
  v2x_msgs__msg__PaymentMeansUnit paymunit;
  /// container 62
  v2x_msgs__msg__PaymentSecurityData paysecdata;
  /// container 63
  v2x_msgs__msg__PaymentMeans paymeans;
  /// container 64
  v2x_msgs__msg__ReceiptData1 recdata1;
  /// container 65
  v2x_msgs__msg__ReceiptData2 recdata2;
  /// container 66
  v2x_msgs__msg__ValidityOfContract valofcon;
  /// container 67
  v2x_msgs__msg__ReceiptFinancialPart recfinpt;
  /// container 68
  v2x_msgs__msg__SetMMIRq setmmirq;
  /// container 69
  v2x_msgs__msg__AxleWeightLimits awl;
  /// container 70
  v2x_msgs__msg__PassengerCapacity paca;
  /// container 71
  v2x_msgs__msg__Engine eng;
  /// container 72
  v2x_msgs__msg__SoundLevel sl;
  /// container 73
  v2x_msgs__msg__ExhaustEmissionValues eev;
  /// container 74
  v2x_msgs__msg__DieselEmissionValues dev;
  /// container 75
  v2x_msgs__msg__CO2EmissionValue co2ev;
  /// container 76
  v2x_msgs__msg__VehicleTotalDistance vtd;
  /// container 77
  v2x_msgs__msg__TrailerLicencePlateNumber tlpn;
  /// container 78
  v2x_msgs__msg__TrailerCharacteristics tch;
  /// container 79
  v2x_msgs__msg__ActualNumberOfPassengers anp;
} v2x_msgs__msg__EfcContainer;

// Struct for a sequence of v2x_msgs__msg__EfcContainer.
typedef struct v2x_msgs__msg__EfcContainer__Sequence
{
  v2x_msgs__msg__EfcContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EfcContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EFC_CONTAINER__STRUCT_H_
