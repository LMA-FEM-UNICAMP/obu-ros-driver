// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RoadWorksContainerExtended.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/road_works_container_extended__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `light_bar_siren_in_use`
#include "v2x_msgs/msg/detail/light_bar_siren_in_use__functions.h"
// Member `closed_lanes`
#include "v2x_msgs/msg/detail/closed_lanes__functions.h"
// Member `restriction`
#include "v2x_msgs/msg/detail/restricted_types__functions.h"
// Member `speed_limit`
#include "v2x_msgs/msg/detail/speed_limit__functions.h"
// Member `incident_indication`
#include "v2x_msgs/msg/detail/cause_code__functions.h"
// Member `recommended_path`
#include "v2x_msgs/msg/detail/itinerary_path__functions.h"
// Member `starting_point_speed_limit`
#include "v2x_msgs/msg/detail/delta_reference_position__functions.h"
// Member `traffic_flow_rule`
#include "v2x_msgs/msg/detail/traffic_rule__functions.h"
// Member `reference_denms`
#include "v2x_msgs/msg/detail/reference_denms__functions.h"

bool
v2x_msgs__msg__RoadWorksContainerExtended__init(v2x_msgs__msg__RoadWorksContainerExtended * msg)
{
  if (!msg) {
    return false;
  }
  // light_bar_siren_in_use_present
  msg->light_bar_siren_in_use_present = false;
  // light_bar_siren_in_use
  if (!v2x_msgs__msg__LightBarSirenInUse__init(&msg->light_bar_siren_in_use)) {
    v2x_msgs__msg__RoadWorksContainerExtended__fini(msg);
    return false;
  }
  // closed_lanes_present
  msg->closed_lanes_present = false;
  // closed_lanes
  if (!v2x_msgs__msg__ClosedLanes__init(&msg->closed_lanes)) {
    v2x_msgs__msg__RoadWorksContainerExtended__fini(msg);
    return false;
  }
  // restriction_present
  msg->restriction_present = false;
  // restriction
  if (!v2x_msgs__msg__RestrictedTypes__init(&msg->restriction)) {
    v2x_msgs__msg__RoadWorksContainerExtended__fini(msg);
    return false;
  }
  // speed_limit_present
  msg->speed_limit_present = false;
  // speed_limit
  if (!v2x_msgs__msg__SpeedLimit__init(&msg->speed_limit)) {
    v2x_msgs__msg__RoadWorksContainerExtended__fini(msg);
    return false;
  }
  // incident_indication_present
  msg->incident_indication_present = false;
  // incident_indication
  if (!v2x_msgs__msg__CauseCode__init(&msg->incident_indication)) {
    v2x_msgs__msg__RoadWorksContainerExtended__fini(msg);
    return false;
  }
  // recommended_path_present
  msg->recommended_path_present = false;
  // recommended_path
  if (!v2x_msgs__msg__ItineraryPath__init(&msg->recommended_path)) {
    v2x_msgs__msg__RoadWorksContainerExtended__fini(msg);
    return false;
  }
  // starting_point_speed_limit_present
  msg->starting_point_speed_limit_present = false;
  // starting_point_speed_limit
  if (!v2x_msgs__msg__DeltaReferencePosition__init(&msg->starting_point_speed_limit)) {
    v2x_msgs__msg__RoadWorksContainerExtended__fini(msg);
    return false;
  }
  // traffic_flow_rule_present
  msg->traffic_flow_rule_present = false;
  // traffic_flow_rule
  if (!v2x_msgs__msg__TrafficRule__init(&msg->traffic_flow_rule)) {
    v2x_msgs__msg__RoadWorksContainerExtended__fini(msg);
    return false;
  }
  // reference_denms_present
  msg->reference_denms_present = false;
  // reference_denms
  if (!v2x_msgs__msg__ReferenceDenms__init(&msg->reference_denms)) {
    v2x_msgs__msg__RoadWorksContainerExtended__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RoadWorksContainerExtended__fini(v2x_msgs__msg__RoadWorksContainerExtended * msg)
{
  if (!msg) {
    return;
  }
  // light_bar_siren_in_use_present
  // light_bar_siren_in_use
  v2x_msgs__msg__LightBarSirenInUse__fini(&msg->light_bar_siren_in_use);
  // closed_lanes_present
  // closed_lanes
  v2x_msgs__msg__ClosedLanes__fini(&msg->closed_lanes);
  // restriction_present
  // restriction
  v2x_msgs__msg__RestrictedTypes__fini(&msg->restriction);
  // speed_limit_present
  // speed_limit
  v2x_msgs__msg__SpeedLimit__fini(&msg->speed_limit);
  // incident_indication_present
  // incident_indication
  v2x_msgs__msg__CauseCode__fini(&msg->incident_indication);
  // recommended_path_present
  // recommended_path
  v2x_msgs__msg__ItineraryPath__fini(&msg->recommended_path);
  // starting_point_speed_limit_present
  // starting_point_speed_limit
  v2x_msgs__msg__DeltaReferencePosition__fini(&msg->starting_point_speed_limit);
  // traffic_flow_rule_present
  // traffic_flow_rule
  v2x_msgs__msg__TrafficRule__fini(&msg->traffic_flow_rule);
  // reference_denms_present
  // reference_denms
  v2x_msgs__msg__ReferenceDenms__fini(&msg->reference_denms);
}

bool
v2x_msgs__msg__RoadWorksContainerExtended__are_equal(const v2x_msgs__msg__RoadWorksContainerExtended * lhs, const v2x_msgs__msg__RoadWorksContainerExtended * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // light_bar_siren_in_use_present
  if (lhs->light_bar_siren_in_use_present != rhs->light_bar_siren_in_use_present) {
    return false;
  }
  // light_bar_siren_in_use
  if (!v2x_msgs__msg__LightBarSirenInUse__are_equal(
      &(lhs->light_bar_siren_in_use), &(rhs->light_bar_siren_in_use)))
  {
    return false;
  }
  // closed_lanes_present
  if (lhs->closed_lanes_present != rhs->closed_lanes_present) {
    return false;
  }
  // closed_lanes
  if (!v2x_msgs__msg__ClosedLanes__are_equal(
      &(lhs->closed_lanes), &(rhs->closed_lanes)))
  {
    return false;
  }
  // restriction_present
  if (lhs->restriction_present != rhs->restriction_present) {
    return false;
  }
  // restriction
  if (!v2x_msgs__msg__RestrictedTypes__are_equal(
      &(lhs->restriction), &(rhs->restriction)))
  {
    return false;
  }
  // speed_limit_present
  if (lhs->speed_limit_present != rhs->speed_limit_present) {
    return false;
  }
  // speed_limit
  if (!v2x_msgs__msg__SpeedLimit__are_equal(
      &(lhs->speed_limit), &(rhs->speed_limit)))
  {
    return false;
  }
  // incident_indication_present
  if (lhs->incident_indication_present != rhs->incident_indication_present) {
    return false;
  }
  // incident_indication
  if (!v2x_msgs__msg__CauseCode__are_equal(
      &(lhs->incident_indication), &(rhs->incident_indication)))
  {
    return false;
  }
  // recommended_path_present
  if (lhs->recommended_path_present != rhs->recommended_path_present) {
    return false;
  }
  // recommended_path
  if (!v2x_msgs__msg__ItineraryPath__are_equal(
      &(lhs->recommended_path), &(rhs->recommended_path)))
  {
    return false;
  }
  // starting_point_speed_limit_present
  if (lhs->starting_point_speed_limit_present != rhs->starting_point_speed_limit_present) {
    return false;
  }
  // starting_point_speed_limit
  if (!v2x_msgs__msg__DeltaReferencePosition__are_equal(
      &(lhs->starting_point_speed_limit), &(rhs->starting_point_speed_limit)))
  {
    return false;
  }
  // traffic_flow_rule_present
  if (lhs->traffic_flow_rule_present != rhs->traffic_flow_rule_present) {
    return false;
  }
  // traffic_flow_rule
  if (!v2x_msgs__msg__TrafficRule__are_equal(
      &(lhs->traffic_flow_rule), &(rhs->traffic_flow_rule)))
  {
    return false;
  }
  // reference_denms_present
  if (lhs->reference_denms_present != rhs->reference_denms_present) {
    return false;
  }
  // reference_denms
  if (!v2x_msgs__msg__ReferenceDenms__are_equal(
      &(lhs->reference_denms), &(rhs->reference_denms)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RoadWorksContainerExtended__copy(
  const v2x_msgs__msg__RoadWorksContainerExtended * input,
  v2x_msgs__msg__RoadWorksContainerExtended * output)
{
  if (!input || !output) {
    return false;
  }
  // light_bar_siren_in_use_present
  output->light_bar_siren_in_use_present = input->light_bar_siren_in_use_present;
  // light_bar_siren_in_use
  if (!v2x_msgs__msg__LightBarSirenInUse__copy(
      &(input->light_bar_siren_in_use), &(output->light_bar_siren_in_use)))
  {
    return false;
  }
  // closed_lanes_present
  output->closed_lanes_present = input->closed_lanes_present;
  // closed_lanes
  if (!v2x_msgs__msg__ClosedLanes__copy(
      &(input->closed_lanes), &(output->closed_lanes)))
  {
    return false;
  }
  // restriction_present
  output->restriction_present = input->restriction_present;
  // restriction
  if (!v2x_msgs__msg__RestrictedTypes__copy(
      &(input->restriction), &(output->restriction)))
  {
    return false;
  }
  // speed_limit_present
  output->speed_limit_present = input->speed_limit_present;
  // speed_limit
  if (!v2x_msgs__msg__SpeedLimit__copy(
      &(input->speed_limit), &(output->speed_limit)))
  {
    return false;
  }
  // incident_indication_present
  output->incident_indication_present = input->incident_indication_present;
  // incident_indication
  if (!v2x_msgs__msg__CauseCode__copy(
      &(input->incident_indication), &(output->incident_indication)))
  {
    return false;
  }
  // recommended_path_present
  output->recommended_path_present = input->recommended_path_present;
  // recommended_path
  if (!v2x_msgs__msg__ItineraryPath__copy(
      &(input->recommended_path), &(output->recommended_path)))
  {
    return false;
  }
  // starting_point_speed_limit_present
  output->starting_point_speed_limit_present = input->starting_point_speed_limit_present;
  // starting_point_speed_limit
  if (!v2x_msgs__msg__DeltaReferencePosition__copy(
      &(input->starting_point_speed_limit), &(output->starting_point_speed_limit)))
  {
    return false;
  }
  // traffic_flow_rule_present
  output->traffic_flow_rule_present = input->traffic_flow_rule_present;
  // traffic_flow_rule
  if (!v2x_msgs__msg__TrafficRule__copy(
      &(input->traffic_flow_rule), &(output->traffic_flow_rule)))
  {
    return false;
  }
  // reference_denms_present
  output->reference_denms_present = input->reference_denms_present;
  // reference_denms
  if (!v2x_msgs__msg__ReferenceDenms__copy(
      &(input->reference_denms), &(output->reference_denms)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RoadWorksContainerExtended *
v2x_msgs__msg__RoadWorksContainerExtended__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadWorksContainerExtended * msg = (v2x_msgs__msg__RoadWorksContainerExtended *)allocator.allocate(sizeof(v2x_msgs__msg__RoadWorksContainerExtended), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RoadWorksContainerExtended));
  bool success = v2x_msgs__msg__RoadWorksContainerExtended__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RoadWorksContainerExtended__destroy(v2x_msgs__msg__RoadWorksContainerExtended * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RoadWorksContainerExtended__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RoadWorksContainerExtended__Sequence__init(v2x_msgs__msg__RoadWorksContainerExtended__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadWorksContainerExtended * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RoadWorksContainerExtended *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RoadWorksContainerExtended), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RoadWorksContainerExtended__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RoadWorksContainerExtended__fini(&data[i - 1]);
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
v2x_msgs__msg__RoadWorksContainerExtended__Sequence__fini(v2x_msgs__msg__RoadWorksContainerExtended__Sequence * array)
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
      v2x_msgs__msg__RoadWorksContainerExtended__fini(&array->data[i]);
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

v2x_msgs__msg__RoadWorksContainerExtended__Sequence *
v2x_msgs__msg__RoadWorksContainerExtended__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadWorksContainerExtended__Sequence * array = (v2x_msgs__msg__RoadWorksContainerExtended__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RoadWorksContainerExtended__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RoadWorksContainerExtended__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RoadWorksContainerExtended__Sequence__destroy(v2x_msgs__msg__RoadWorksContainerExtended__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RoadWorksContainerExtended__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RoadWorksContainerExtended__Sequence__are_equal(const v2x_msgs__msg__RoadWorksContainerExtended__Sequence * lhs, const v2x_msgs__msg__RoadWorksContainerExtended__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RoadWorksContainerExtended__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RoadWorksContainerExtended__Sequence__copy(
  const v2x_msgs__msg__RoadWorksContainerExtended__Sequence * input,
  v2x_msgs__msg__RoadWorksContainerExtended__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RoadWorksContainerExtended);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RoadWorksContainerExtended * data =
      (v2x_msgs__msg__RoadWorksContainerExtended *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RoadWorksContainerExtended__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RoadWorksContainerExtended__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RoadWorksContainerExtended__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
