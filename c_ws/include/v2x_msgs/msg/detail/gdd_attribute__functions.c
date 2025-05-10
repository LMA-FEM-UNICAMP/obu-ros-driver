// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/GddAttribute.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/gdd_attribute__functions.h"

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
// Member `set`
#include "v2x_msgs/msg/detail/international_sign_section__functions.h"
// Member `nol`
#include "v2x_msgs/msg/detail/international_sign_number_of_lane__functions.h"

bool
v2x_msgs__msg__GddAttribute__init(v2x_msgs__msg__GddAttribute * msg)
{
  if (!msg) {
    return false;
  }
  // gdd_attribute_container_select
  msg->gdd_attribute_container_select = 0ll;
  // dtm
  if (!v2x_msgs__msg__InternationalSignApplicablePeriod__init(&msg->dtm)) {
    v2x_msgs__msg__GddAttribute__fini(msg);
    return false;
  }
  // edt
  if (!v2x_msgs__msg__InternationalSignExemptedApplicablePeriod__init(&msg->edt)) {
    v2x_msgs__msg__GddAttribute__fini(msg);
    return false;
  }
  // dfl
  if (!v2x_msgs__msg__InternationalSignDirectionalFlowOfLane__init(&msg->dfl)) {
    v2x_msgs__msg__GddAttribute__fini(msg);
    return false;
  }
  // ved
  if (!v2x_msgs__msg__InternationalSignApplicableVehicleDimensions__init(&msg->ved)) {
    v2x_msgs__msg__GddAttribute__fini(msg);
    return false;
  }
  // spe
  if (!v2x_msgs__msg__InternationalSignSpeedLimits__init(&msg->spe)) {
    v2x_msgs__msg__GddAttribute__fini(msg);
    return false;
  }
  // roi
  if (!v2x_msgs__msg__InternationalSignRateOfIncline__init(&msg->roi)) {
    v2x_msgs__msg__GddAttribute__fini(msg);
    return false;
  }
  // dbv
  if (!v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__init(&msg->dbv)) {
    v2x_msgs__msg__GddAttribute__fini(msg);
    return false;
  }
  // ddd
  if (!v2x_msgs__msg__InternationalSignDestinationInformation__init(&msg->ddd)) {
    v2x_msgs__msg__GddAttribute__fini(msg);
    return false;
  }
  // set
  if (!v2x_msgs__msg__InternationalSignSection__init(&msg->set)) {
    v2x_msgs__msg__GddAttribute__fini(msg);
    return false;
  }
  // nol
  if (!v2x_msgs__msg__InternationalSignNumberOfLane__init(&msg->nol)) {
    v2x_msgs__msg__GddAttribute__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__GddAttribute__fini(v2x_msgs__msg__GddAttribute * msg)
{
  if (!msg) {
    return;
  }
  // gdd_attribute_container_select
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
  // set
  v2x_msgs__msg__InternationalSignSection__fini(&msg->set);
  // nol
  v2x_msgs__msg__InternationalSignNumberOfLane__fini(&msg->nol);
}

bool
v2x_msgs__msg__GddAttribute__are_equal(const v2x_msgs__msg__GddAttribute * lhs, const v2x_msgs__msg__GddAttribute * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gdd_attribute_container_select
  if (lhs->gdd_attribute_container_select != rhs->gdd_attribute_container_select) {
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
  // set
  if (!v2x_msgs__msg__InternationalSignSection__are_equal(
      &(lhs->set), &(rhs->set)))
  {
    return false;
  }
  // nol
  if (!v2x_msgs__msg__InternationalSignNumberOfLane__are_equal(
      &(lhs->nol), &(rhs->nol)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__GddAttribute__copy(
  const v2x_msgs__msg__GddAttribute * input,
  v2x_msgs__msg__GddAttribute * output)
{
  if (!input || !output) {
    return false;
  }
  // gdd_attribute_container_select
  output->gdd_attribute_container_select = input->gdd_attribute_container_select;
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
  // set
  if (!v2x_msgs__msg__InternationalSignSection__copy(
      &(input->set), &(output->set)))
  {
    return false;
  }
  // nol
  if (!v2x_msgs__msg__InternationalSignNumberOfLane__copy(
      &(input->nol), &(output->nol)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__GddAttribute *
v2x_msgs__msg__GddAttribute__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__GddAttribute * msg = (v2x_msgs__msg__GddAttribute *)allocator.allocate(sizeof(v2x_msgs__msg__GddAttribute), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__GddAttribute));
  bool success = v2x_msgs__msg__GddAttribute__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__GddAttribute__destroy(v2x_msgs__msg__GddAttribute * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__GddAttribute__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__GddAttribute__Sequence__init(v2x_msgs__msg__GddAttribute__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__GddAttribute * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__GddAttribute *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__GddAttribute), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__GddAttribute__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__GddAttribute__fini(&data[i - 1]);
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
v2x_msgs__msg__GddAttribute__Sequence__fini(v2x_msgs__msg__GddAttribute__Sequence * array)
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
      v2x_msgs__msg__GddAttribute__fini(&array->data[i]);
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

v2x_msgs__msg__GddAttribute__Sequence *
v2x_msgs__msg__GddAttribute__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__GddAttribute__Sequence * array = (v2x_msgs__msg__GddAttribute__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__GddAttribute__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__GddAttribute__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__GddAttribute__Sequence__destroy(v2x_msgs__msg__GddAttribute__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__GddAttribute__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__GddAttribute__Sequence__are_equal(const v2x_msgs__msg__GddAttribute__Sequence * lhs, const v2x_msgs__msg__GddAttribute__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__GddAttribute__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__GddAttribute__Sequence__copy(
  const v2x_msgs__msg__GddAttribute__Sequence * input,
  v2x_msgs__msg__GddAttribute__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__GddAttribute);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__GddAttribute * data =
      (v2x_msgs__msg__GddAttribute *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__GddAttribute__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__GddAttribute__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__GddAttribute__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
