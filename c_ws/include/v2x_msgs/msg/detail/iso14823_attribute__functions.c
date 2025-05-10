// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ISO14823Attribute.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/iso14823_attribute__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `dtm`
#include "v2x_msgs/msg/detail/international_sign_applicable_period__functions.h"
// Member `edt`
#include "v2x_msgs/msg/detail/international_sign_exempted_applicable_period__functions.h"
// Member `dfl`
#include "v2x_msgs/msg/detail/international_sign_directional_flow_of_lane__functions.h"
// Member `ved`
#include "v2x_msgs/msg/detail/international_sign_applicable_vehicle_dimensions__functions.h"
// Member `spe`
#include "v2x_msgs/msg/detail/international_sign_speed_limits__functions.h"
// Member `roi`
#include "v2x_msgs/msg/detail/international_sign_rate_of_incline__functions.h"
// Member `dbv`
#include "v2x_msgs/msg/detail/international_sign_distance_between_vehicles__functions.h"
// Member `ddd`
#include "v2x_msgs/msg/detail/international_sign_destination_information__functions.h"

bool
v2x_msgs__msg__ISO14823Attribute__init(v2x_msgs__msg__ISO14823Attribute * msg)
{
  if (!msg) {
    return false;
  }
  // iso14823attribute_container_select
  msg->iso14823attribute_container_select = 0ll;
  // dtm
  if (!v2x_msgs__msg__InternationalSignApplicablePeriod__init(&msg->dtm)) {
    v2x_msgs__msg__ISO14823Attribute__fini(msg);
    return false;
  }
  // edt
  if (!v2x_msgs__msg__InternationalSignExemptedApplicablePeriod__init(&msg->edt)) {
    v2x_msgs__msg__ISO14823Attribute__fini(msg);
    return false;
  }
  // dfl
  if (!v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__init(&msg->dfl)) {
    v2x_msgs__msg__ISO14823Attribute__fini(msg);
    return false;
  }
  // ved
  if (!v2x_msgs__msg__InternationalSignApplicableVehicleDimensions__init(&msg->ved)) {
    v2x_msgs__msg__ISO14823Attribute__fini(msg);
    return false;
  }
  // spe
  if (!v2x_msgs__msg__InternationalSignSpeedLimits__init(&msg->spe)) {
    v2x_msgs__msg__ISO14823Attribute__fini(msg);
    return false;
  }
  // roi
  if (!v2x_msgs__msg__InternationalSignRateOfIncline__init(&msg->roi)) {
    v2x_msgs__msg__ISO14823Attribute__fini(msg);
    return false;
  }
  // dbv
  if (!v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__init(&msg->dbv)) {
    v2x_msgs__msg__ISO14823Attribute__fini(msg);
    return false;
  }
  // ddd
  if (!v2x_msgs__msg__InternationalSignDestinationInformation__init(&msg->ddd)) {
    v2x_msgs__msg__ISO14823Attribute__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ISO14823Attribute__fini(v2x_msgs__msg__ISO14823Attribute * msg)
{
  if (!msg) {
    return;
  }
  // iso14823attribute_container_select
  // dtm
  v2x_msgs__msg__InternationalSignApplicablePeriod__fini(&msg->dtm);
  // edt
  v2x_msgs__msg__InternationalSignExemptedApplicablePeriod__fini(&msg->edt);
  // dfl
  v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__fini(&msg->dfl);
  // ved
  v2x_msgs__msg__InternationalSignApplicableVehicleDimensions__fini(&msg->ved);
  // spe
  v2x_msgs__msg__InternationalSignSpeedLimits__fini(&msg->spe);
  // roi
  v2x_msgs__msg__InternationalSignRateOfIncline__fini(&msg->roi);
  // dbv
  v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__fini(&msg->dbv);
  // ddd
  v2x_msgs__msg__InternationalSignDestinationInformation__fini(&msg->ddd);
}

bool
v2x_msgs__msg__ISO14823Attribute__are_equal(const v2x_msgs__msg__ISO14823Attribute * lhs, const v2x_msgs__msg__ISO14823Attribute * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // iso14823attribute_container_select
  if (lhs->iso14823attribute_container_select != rhs->iso14823attribute_container_select) {
    return false;
  }
  // dtm
  if (!v2x_msgs__msg__InternationalSignApplicablePeriod__are_equal(
      &(lhs->dtm), &(rhs->dtm)))
  {
    return false;
  }
  // edt
  if (!v2x_msgs__msg__InternationalSignExemptedApplicablePeriod__are_equal(
      &(lhs->edt), &(rhs->edt)))
  {
    return false;
  }
  // dfl
  if (!v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__are_equal(
      &(lhs->dfl), &(rhs->dfl)))
  {
    return false;
  }
  // ved
  if (!v2x_msgs__msg__InternationalSignApplicableVehicleDimensions__are_equal(
      &(lhs->ved), &(rhs->ved)))
  {
    return false;
  }
  // spe
  if (!v2x_msgs__msg__InternationalSignSpeedLimits__are_equal(
      &(lhs->spe), &(rhs->spe)))
  {
    return false;
  }
  // roi
  if (!v2x_msgs__msg__InternationalSignRateOfIncline__are_equal(
      &(lhs->roi), &(rhs->roi)))
  {
    return false;
  }
  // dbv
  if (!v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__are_equal(
      &(lhs->dbv), &(rhs->dbv)))
  {
    return false;
  }
  // ddd
  if (!v2x_msgs__msg__InternationalSignDestinationInformation__are_equal(
      &(lhs->ddd), &(rhs->ddd)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ISO14823Attribute__copy(
  const v2x_msgs__msg__ISO14823Attribute * input,
  v2x_msgs__msg__ISO14823Attribute * output)
{
  if (!input || !output) {
    return false;
  }
  // iso14823attribute_container_select
  output->iso14823attribute_container_select = input->iso14823attribute_container_select;
  // dtm
  if (!v2x_msgs__msg__InternationalSignApplicablePeriod__copy(
      &(input->dtm), &(output->dtm)))
  {
    return false;
  }
  // edt
  if (!v2x_msgs__msg__InternationalSignExemptedApplicablePeriod__copy(
      &(input->edt), &(output->edt)))
  {
    return false;
  }
  // dfl
  if (!v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__copy(
      &(input->dfl), &(output->dfl)))
  {
    return false;
  }
  // ved
  if (!v2x_msgs__msg__InternationalSignApplicableVehicleDimensions__copy(
      &(input->ved), &(output->ved)))
  {
    return false;
  }
  // spe
  if (!v2x_msgs__msg__InternationalSignSpeedLimits__copy(
      &(input->spe), &(output->spe)))
  {
    return false;
  }
  // roi
  if (!v2x_msgs__msg__InternationalSignRateOfIncline__copy(
      &(input->roi), &(output->roi)))
  {
    return false;
  }
  // dbv
  if (!v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__copy(
      &(input->dbv), &(output->dbv)))
  {
    return false;
  }
  // ddd
  if (!v2x_msgs__msg__InternationalSignDestinationInformation__copy(
      &(input->ddd), &(output->ddd)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ISO14823Attribute *
v2x_msgs__msg__ISO14823Attribute__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ISO14823Attribute * msg = (v2x_msgs__msg__ISO14823Attribute *)allocator.allocate(sizeof(v2x_msgs__msg__ISO14823Attribute), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ISO14823Attribute));
  bool success = v2x_msgs__msg__ISO14823Attribute__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ISO14823Attribute__destroy(v2x_msgs__msg__ISO14823Attribute * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ISO14823Attribute__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ISO14823Attribute__Sequence__init(v2x_msgs__msg__ISO14823Attribute__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ISO14823Attribute * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ISO14823Attribute *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ISO14823Attribute), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ISO14823Attribute__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ISO14823Attribute__fini(&data[i - 1]);
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
v2x_msgs__msg__ISO14823Attribute__Sequence__fini(v2x_msgs__msg__ISO14823Attribute__Sequence * array)
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
      v2x_msgs__msg__ISO14823Attribute__fini(&array->data[i]);
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

v2x_msgs__msg__ISO14823Attribute__Sequence *
v2x_msgs__msg__ISO14823Attribute__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ISO14823Attribute__Sequence * array = (v2x_msgs__msg__ISO14823Attribute__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ISO14823Attribute__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ISO14823Attribute__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ISO14823Attribute__Sequence__destroy(v2x_msgs__msg__ISO14823Attribute__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ISO14823Attribute__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ISO14823Attribute__Sequence__are_equal(const v2x_msgs__msg__ISO14823Attribute__Sequence * lhs, const v2x_msgs__msg__ISO14823Attribute__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ISO14823Attribute__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ISO14823Attribute__Sequence__copy(
  const v2x_msgs__msg__ISO14823Attribute__Sequence * input,
  v2x_msgs__msg__ISO14823Attribute__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ISO14823Attribute);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ISO14823Attribute * data =
      (v2x_msgs__msg__ISO14823Attribute *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ISO14823Attribute__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ISO14823Attribute__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ISO14823Attribute__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
