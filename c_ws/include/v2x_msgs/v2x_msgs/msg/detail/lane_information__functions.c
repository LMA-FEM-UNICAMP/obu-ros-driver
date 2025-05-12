// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/LaneInformation.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/lane_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane_number`
#include "v2x_msgs/msg/detail/lane_position__functions.h"
// Member `direction`
#include "v2x_msgs/msg/detail/direction__functions.h"
// Member `validity`
#include "v2x_msgs/msg/detail/international_sign_applicable_period__functions.h"
// Member `lane_type`
#include "v2x_msgs/msg/detail/lane_type__functions.h"
// Member `lane_type_qualifier`
#include "v2x_msgs/msg/detail/complete_vehicle_characteristics__functions.h"
// Member `lane_status`
#include "v2x_msgs/msg/detail/lane_status__functions.h"
// Member `lane_width`
#include "v2x_msgs/msg/detail/ivi_lane_width__functions.h"
// Member `detection_zone_ids`
// Member `relevance_zone_ids`
#include "v2x_msgs/msg/detail/zone_ids__functions.h"
// Member `lane_characteristics`
#include "v2x_msgs/msg/detail/lane_characteristics__functions.h"
// Member `lane_surface_static_characteristics`
#include "v2x_msgs/msg/detail/road_surface_static_characteristics__functions.h"
// Member `lane_surface_dynamic_characteristics`
#include "v2x_msgs/msg/detail/road_surface_dynamic_characteristics__functions.h"

bool
v2x_msgs__msg__LaneInformation__init(v2x_msgs__msg__LaneInformation * msg)
{
  if (!msg) {
    return false;
  }
  // lane_number
  if (!v2x_msgs__msg__LanePosition__init(&msg->lane_number)) {
    v2x_msgs__msg__LaneInformation__fini(msg);
    return false;
  }
  // direction
  if (!v2x_msgs__msg__Direction__init(&msg->direction)) {
    v2x_msgs__msg__LaneInformation__fini(msg);
    return false;
  }
  // validity_present
  msg->validity_present = false;
  // validity
  if (!v2x_msgs__msg__InternationalSignApplicablePeriod__init(&msg->validity)) {
    v2x_msgs__msg__LaneInformation__fini(msg);
    return false;
  }
  // lane_type
  if (!v2x_msgs__msg__LaneType__init(&msg->lane_type)) {
    v2x_msgs__msg__LaneInformation__fini(msg);
    return false;
  }
  // lane_type_qualifier_present
  msg->lane_type_qualifier_present = false;
  // lane_type_qualifier
  if (!v2x_msgs__msg__CompleteVehicleCharacteristics__init(&msg->lane_type_qualifier)) {
    v2x_msgs__msg__LaneInformation__fini(msg);
    return false;
  }
  // lane_status
  if (!v2x_msgs__msg__LaneStatus__init(&msg->lane_status)) {
    v2x_msgs__msg__LaneInformation__fini(msg);
    return false;
  }
  // lane_width_present
  msg->lane_width_present = false;
  // lane_width
  if (!v2x_msgs__msg__IviLaneWidth__init(&msg->lane_width)) {
    v2x_msgs__msg__LaneInformation__fini(msg);
    return false;
  }
  // detection_zone_ids_present
  msg->detection_zone_ids_present = false;
  // detection_zone_ids
  if (!v2x_msgs__msg__ZoneIds__init(&msg->detection_zone_ids)) {
    v2x_msgs__msg__LaneInformation__fini(msg);
    return false;
  }
  // relevance_zone_ids_present
  msg->relevance_zone_ids_present = false;
  // relevance_zone_ids
  if (!v2x_msgs__msg__ZoneIds__init(&msg->relevance_zone_ids)) {
    v2x_msgs__msg__LaneInformation__fini(msg);
    return false;
  }
  // lane_characteristics_present
  msg->lane_characteristics_present = false;
  // lane_characteristics
  if (!v2x_msgs__msg__LaneCharacteristics__init(&msg->lane_characteristics)) {
    v2x_msgs__msg__LaneInformation__fini(msg);
    return false;
  }
  // lane_surface_static_characteristics_present
  msg->lane_surface_static_characteristics_present = false;
  // lane_surface_static_characteristics
  if (!v2x_msgs__msg__RoadSurfaceStaticCharacteristics__init(&msg->lane_surface_static_characteristics)) {
    v2x_msgs__msg__LaneInformation__fini(msg);
    return false;
  }
  // lane_surface_dynamic_characteristics_present
  msg->lane_surface_dynamic_characteristics_present = false;
  // lane_surface_dynamic_characteristics
  if (!v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__init(&msg->lane_surface_dynamic_characteristics)) {
    v2x_msgs__msg__LaneInformation__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__LaneInformation__fini(v2x_msgs__msg__LaneInformation * msg)
{
  if (!msg) {
    return;
  }
  // lane_number
  v2x_msgs__msg__LanePosition__fini(&msg->lane_number);
  // direction
  v2x_msgs__msg__Direction__fini(&msg->direction);
  // validity_present
  // validity
  v2x_msgs__msg__InternationalSignApplicablePeriod__fini(&msg->validity);
  // lane_type
  v2x_msgs__msg__LaneType__fini(&msg->lane_type);
  // lane_type_qualifier_present
  // lane_type_qualifier
  v2x_msgs__msg__CompleteVehicleCharacteristics__fini(&msg->lane_type_qualifier);
  // lane_status
  v2x_msgs__msg__LaneStatus__fini(&msg->lane_status);
  // lane_width_present
  // lane_width
  v2x_msgs__msg__IviLaneWidth__fini(&msg->lane_width);
  // detection_zone_ids_present
  // detection_zone_ids
  v2x_msgs__msg__ZoneIds__fini(&msg->detection_zone_ids);
  // relevance_zone_ids_present
  // relevance_zone_ids
  v2x_msgs__msg__ZoneIds__fini(&msg->relevance_zone_ids);
  // lane_characteristics_present
  // lane_characteristics
  v2x_msgs__msg__LaneCharacteristics__fini(&msg->lane_characteristics);
  // lane_surface_static_characteristics_present
  // lane_surface_static_characteristics
  v2x_msgs__msg__RoadSurfaceStaticCharacteristics__fini(&msg->lane_surface_static_characteristics);
  // lane_surface_dynamic_characteristics_present
  // lane_surface_dynamic_characteristics
  v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__fini(&msg->lane_surface_dynamic_characteristics);
}

bool
v2x_msgs__msg__LaneInformation__are_equal(const v2x_msgs__msg__LaneInformation * lhs, const v2x_msgs__msg__LaneInformation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_number
  if (!v2x_msgs__msg__LanePosition__are_equal(
      &(lhs->lane_number), &(rhs->lane_number)))
  {
    return false;
  }
  // direction
  if (!v2x_msgs__msg__Direction__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // validity_present
  if (lhs->validity_present != rhs->validity_present) {
    return false;
  }
  // validity
  if (!v2x_msgs__msg__InternationalSignApplicablePeriod__are_equal(
      &(lhs->validity), &(rhs->validity)))
  {
    return false;
  }
  // lane_type
  if (!v2x_msgs__msg__LaneType__are_equal(
      &(lhs->lane_type), &(rhs->lane_type)))
  {
    return false;
  }
  // lane_type_qualifier_present
  if (lhs->lane_type_qualifier_present != rhs->lane_type_qualifier_present) {
    return false;
  }
  // lane_type_qualifier
  if (!v2x_msgs__msg__CompleteVehicleCharacteristics__are_equal(
      &(lhs->lane_type_qualifier), &(rhs->lane_type_qualifier)))
  {
    return false;
  }
  // lane_status
  if (!v2x_msgs__msg__LaneStatus__are_equal(
      &(lhs->lane_status), &(rhs->lane_status)))
  {
    return false;
  }
  // lane_width_present
  if (lhs->lane_width_present != rhs->lane_width_present) {
    return false;
  }
  // lane_width
  if (!v2x_msgs__msg__IviLaneWidth__are_equal(
      &(lhs->lane_width), &(rhs->lane_width)))
  {
    return false;
  }
  // detection_zone_ids_present
  if (lhs->detection_zone_ids_present != rhs->detection_zone_ids_present) {
    return false;
  }
  // detection_zone_ids
  if (!v2x_msgs__msg__ZoneIds__are_equal(
      &(lhs->detection_zone_ids), &(rhs->detection_zone_ids)))
  {
    return false;
  }
  // relevance_zone_ids_present
  if (lhs->relevance_zone_ids_present != rhs->relevance_zone_ids_present) {
    return false;
  }
  // relevance_zone_ids
  if (!v2x_msgs__msg__ZoneIds__are_equal(
      &(lhs->relevance_zone_ids), &(rhs->relevance_zone_ids)))
  {
    return false;
  }
  // lane_characteristics_present
  if (lhs->lane_characteristics_present != rhs->lane_characteristics_present) {
    return false;
  }
  // lane_characteristics
  if (!v2x_msgs__msg__LaneCharacteristics__are_equal(
      &(lhs->lane_characteristics), &(rhs->lane_characteristics)))
  {
    return false;
  }
  // lane_surface_static_characteristics_present
  if (lhs->lane_surface_static_characteristics_present != rhs->lane_surface_static_characteristics_present) {
    return false;
  }
  // lane_surface_static_characteristics
  if (!v2x_msgs__msg__RoadSurfaceStaticCharacteristics__are_equal(
      &(lhs->lane_surface_static_characteristics), &(rhs->lane_surface_static_characteristics)))
  {
    return false;
  }
  // lane_surface_dynamic_characteristics_present
  if (lhs->lane_surface_dynamic_characteristics_present != rhs->lane_surface_dynamic_characteristics_present) {
    return false;
  }
  // lane_surface_dynamic_characteristics
  if (!v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__are_equal(
      &(lhs->lane_surface_dynamic_characteristics), &(rhs->lane_surface_dynamic_characteristics)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__LaneInformation__copy(
  const v2x_msgs__msg__LaneInformation * input,
  v2x_msgs__msg__LaneInformation * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_number
  if (!v2x_msgs__msg__LanePosition__copy(
      &(input->lane_number), &(output->lane_number)))
  {
    return false;
  }
  // direction
  if (!v2x_msgs__msg__Direction__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // validity_present
  output->validity_present = input->validity_present;
  // validity
  if (!v2x_msgs__msg__InternationalSignApplicablePeriod__copy(
      &(input->validity), &(output->validity)))
  {
    return false;
  }
  // lane_type
  if (!v2x_msgs__msg__LaneType__copy(
      &(input->lane_type), &(output->lane_type)))
  {
    return false;
  }
  // lane_type_qualifier_present
  output->lane_type_qualifier_present = input->lane_type_qualifier_present;
  // lane_type_qualifier
  if (!v2x_msgs__msg__CompleteVehicleCharacteristics__copy(
      &(input->lane_type_qualifier), &(output->lane_type_qualifier)))
  {
    return false;
  }
  // lane_status
  if (!v2x_msgs__msg__LaneStatus__copy(
      &(input->lane_status), &(output->lane_status)))
  {
    return false;
  }
  // lane_width_present
  output->lane_width_present = input->lane_width_present;
  // lane_width
  if (!v2x_msgs__msg__IviLaneWidth__copy(
      &(input->lane_width), &(output->lane_width)))
  {
    return false;
  }
  // detection_zone_ids_present
  output->detection_zone_ids_present = input->detection_zone_ids_present;
  // detection_zone_ids
  if (!v2x_msgs__msg__ZoneIds__copy(
      &(input->detection_zone_ids), &(output->detection_zone_ids)))
  {
    return false;
  }
  // relevance_zone_ids_present
  output->relevance_zone_ids_present = input->relevance_zone_ids_present;
  // relevance_zone_ids
  if (!v2x_msgs__msg__ZoneIds__copy(
      &(input->relevance_zone_ids), &(output->relevance_zone_ids)))
  {
    return false;
  }
  // lane_characteristics_present
  output->lane_characteristics_present = input->lane_characteristics_present;
  // lane_characteristics
  if (!v2x_msgs__msg__LaneCharacteristics__copy(
      &(input->lane_characteristics), &(output->lane_characteristics)))
  {
    return false;
  }
  // lane_surface_static_characteristics_present
  output->lane_surface_static_characteristics_present = input->lane_surface_static_characteristics_present;
  // lane_surface_static_characteristics
  if (!v2x_msgs__msg__RoadSurfaceStaticCharacteristics__copy(
      &(input->lane_surface_static_characteristics), &(output->lane_surface_static_characteristics)))
  {
    return false;
  }
  // lane_surface_dynamic_characteristics_present
  output->lane_surface_dynamic_characteristics_present = input->lane_surface_dynamic_characteristics_present;
  // lane_surface_dynamic_characteristics
  if (!v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__copy(
      &(input->lane_surface_dynamic_characteristics), &(output->lane_surface_dynamic_characteristics)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__LaneInformation *
v2x_msgs__msg__LaneInformation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LaneInformation * msg = (v2x_msgs__msg__LaneInformation *)allocator.allocate(sizeof(v2x_msgs__msg__LaneInformation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__LaneInformation));
  bool success = v2x_msgs__msg__LaneInformation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__LaneInformation__destroy(v2x_msgs__msg__LaneInformation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__LaneInformation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__LaneInformation__Sequence__init(v2x_msgs__msg__LaneInformation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LaneInformation * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__LaneInformation *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__LaneInformation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__LaneInformation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__LaneInformation__fini(&data[i - 1]);
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
v2x_msgs__msg__LaneInformation__Sequence__fini(v2x_msgs__msg__LaneInformation__Sequence * array)
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
      v2x_msgs__msg__LaneInformation__fini(&array->data[i]);
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

v2x_msgs__msg__LaneInformation__Sequence *
v2x_msgs__msg__LaneInformation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LaneInformation__Sequence * array = (v2x_msgs__msg__LaneInformation__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__LaneInformation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__LaneInformation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__LaneInformation__Sequence__destroy(v2x_msgs__msg__LaneInformation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__LaneInformation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__LaneInformation__Sequence__are_equal(const v2x_msgs__msg__LaneInformation__Sequence * lhs, const v2x_msgs__msg__LaneInformation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__LaneInformation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__LaneInformation__Sequence__copy(
  const v2x_msgs__msg__LaneInformation__Sequence * input,
  v2x_msgs__msg__LaneInformation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__LaneInformation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__LaneInformation * data =
      (v2x_msgs__msg__LaneInformation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__LaneInformation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__LaneInformation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__LaneInformation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
