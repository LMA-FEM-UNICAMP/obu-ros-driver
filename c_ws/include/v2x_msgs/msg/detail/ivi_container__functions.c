// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/IviContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/ivi_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `glc`
#include "v2x_msgs/msg/detail/geographic_location_container__functions.h"
// Member `giv`
#include "v2x_msgs/msg/detail/general_ivi_container__functions.h"
// Member `rcc`
#include "v2x_msgs/msg/detail/road_configuration_container__functions.h"
// Member `tc`
#include "v2x_msgs/msg/detail/text_container__functions.h"
// Member `lac`
#include "v2x_msgs/msg/detail/layout_container__functions.h"
// Member `avc`
#include "v2x_msgs/msg/detail/automated_vehicle_container__functions.h"
// Member `mlc`
#include "v2x_msgs/msg/detail/map_location_container__functions.h"
// Member `rsc`
#include "v2x_msgs/msg/detail/road_surface_container__functions.h"

bool
v2x_msgs__msg__IviContainer__init(v2x_msgs__msg__IviContainer * msg)
{
  if (!msg) {
    return false;
  }
  // ivi_container_container_select
  msg->ivi_container_container_select = 0ll;
  // glc
  if (!v2x_msgs__msg__GeographicLocationContainer__init(&msg->glc)) {
    v2x_msgs__msg__IviContainer__fini(msg);
    return false;
  }
  // giv
  if (!v2x_msgs__msg__GeneralIviContainer__init(&msg->giv)) {
    v2x_msgs__msg__IviContainer__fini(msg);
    return false;
  }
  // rcc
  if (!v2x_msgs__msg__RoadConfigurationContainer__init(&msg->rcc)) {
    v2x_msgs__msg__IviContainer__fini(msg);
    return false;
  }
  // tc
  if (!v2x_msgs__msg__TextContainer__init(&msg->tc)) {
    v2x_msgs__msg__IviContainer__fini(msg);
    return false;
  }
  // lac
  if (!v2x_msgs__msg__LayoutContainer__init(&msg->lac)) {
    v2x_msgs__msg__IviContainer__fini(msg);
    return false;
  }
  // avc
  if (!v2x_msgs__msg__AutomatedVehicleContainer__init(&msg->avc)) {
    v2x_msgs__msg__IviContainer__fini(msg);
    return false;
  }
  // mlc
  if (!v2x_msgs__msg__MapLocationContainer__init(&msg->mlc)) {
    v2x_msgs__msg__IviContainer__fini(msg);
    return false;
  }
  // rsc
  if (!v2x_msgs__msg__RoadSurfaceContainer__init(&msg->rsc)) {
    v2x_msgs__msg__IviContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__IviContainer__fini(v2x_msgs__msg__IviContainer * msg)
{
  if (!msg) {
    return;
  }
  // ivi_container_container_select
  // glc
  v2x_msgs__msg__GeographicLocationContainer__fini(&msg->glc);
  // giv
  v2x_msgs__msg__GeneralIviContainer__fini(&msg->giv);
  // rcc
  v2x_msgs__msg__RoadConfigurationContainer__fini(&msg->rcc);
  // tc
  v2x_msgs__msg__TextContainer__fini(&msg->tc);
  // lac
  v2x_msgs__msg__LayoutContainer__fini(&msg->lac);
  // avc
  v2x_msgs__msg__AutomatedVehicleContainer__fini(&msg->avc);
  // mlc
  v2x_msgs__msg__MapLocationContainer__fini(&msg->mlc);
  // rsc
  v2x_msgs__msg__RoadSurfaceContainer__fini(&msg->rsc);
}

bool
v2x_msgs__msg__IviContainer__are_equal(const v2x_msgs__msg__IviContainer * lhs, const v2x_msgs__msg__IviContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ivi_container_container_select
  if (lhs->ivi_container_container_select != rhs->ivi_container_container_select) {
    return false;
  }
  // glc
  if (!v2x_msgs__msg__GeographicLocationContainer__are_equal(
      &(lhs->glc), &(rhs->glc)))
  {
    return false;
  }
  // giv
  if (!v2x_msgs__msg__GeneralIviContainer__are_equal(
      &(lhs->giv), &(rhs->giv)))
  {
    return false;
  }
  // rcc
  if (!v2x_msgs__msg__RoadConfigurationContainer__are_equal(
      &(lhs->rcc), &(rhs->rcc)))
  {
    return false;
  }
  // tc
  if (!v2x_msgs__msg__TextContainer__are_equal(
      &(lhs->tc), &(rhs->tc)))
  {
    return false;
  }
  // lac
  if (!v2x_msgs__msg__LayoutContainer__are_equal(
      &(lhs->lac), &(rhs->lac)))
  {
    return false;
  }
  // avc
  if (!v2x_msgs__msg__AutomatedVehicleContainer__are_equal(
      &(lhs->avc), &(rhs->avc)))
  {
    return false;
  }
  // mlc
  if (!v2x_msgs__msg__MapLocationContainer__are_equal(
      &(lhs->mlc), &(rhs->mlc)))
  {
    return false;
  }
  // rsc
  if (!v2x_msgs__msg__RoadSurfaceContainer__are_equal(
      &(lhs->rsc), &(rhs->rsc)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__IviContainer__copy(
  const v2x_msgs__msg__IviContainer * input,
  v2x_msgs__msg__IviContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // ivi_container_container_select
  output->ivi_container_container_select = input->ivi_container_container_select;
  // glc
  if (!v2x_msgs__msg__GeographicLocationContainer__copy(
      &(input->glc), &(output->glc)))
  {
    return false;
  }
  // giv
  if (!v2x_msgs__msg__GeneralIviContainer__copy(
      &(input->giv), &(output->giv)))
  {
    return false;
  }
  // rcc
  if (!v2x_msgs__msg__RoadConfigurationContainer__copy(
      &(input->rcc), &(output->rcc)))
  {
    return false;
  }
  // tc
  if (!v2x_msgs__msg__TextContainer__copy(
      &(input->tc), &(output->tc)))
  {
    return false;
  }
  // lac
  if (!v2x_msgs__msg__LayoutContainer__copy(
      &(input->lac), &(output->lac)))
  {
    return false;
  }
  // avc
  if (!v2x_msgs__msg__AutomatedVehicleContainer__copy(
      &(input->avc), &(output->avc)))
  {
    return false;
  }
  // mlc
  if (!v2x_msgs__msg__MapLocationContainer__copy(
      &(input->mlc), &(output->mlc)))
  {
    return false;
  }
  // rsc
  if (!v2x_msgs__msg__RoadSurfaceContainer__copy(
      &(input->rsc), &(output->rsc)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__IviContainer *
v2x_msgs__msg__IviContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IviContainer * msg = (v2x_msgs__msg__IviContainer *)allocator.allocate(sizeof(v2x_msgs__msg__IviContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__IviContainer));
  bool success = v2x_msgs__msg__IviContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__IviContainer__destroy(v2x_msgs__msg__IviContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__IviContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__IviContainer__Sequence__init(v2x_msgs__msg__IviContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IviContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__IviContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__IviContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__IviContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__IviContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__IviContainer__Sequence__fini(v2x_msgs__msg__IviContainer__Sequence * array)
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
      v2x_msgs__msg__IviContainer__fini(&array->data[i]);
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

v2x_msgs__msg__IviContainer__Sequence *
v2x_msgs__msg__IviContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IviContainer__Sequence * array = (v2x_msgs__msg__IviContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__IviContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__IviContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__IviContainer__Sequence__destroy(v2x_msgs__msg__IviContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__IviContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__IviContainer__Sequence__are_equal(const v2x_msgs__msg__IviContainer__Sequence * lhs, const v2x_msgs__msg__IviContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__IviContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__IviContainer__Sequence__copy(
  const v2x_msgs__msg__IviContainer__Sequence * input,
  v2x_msgs__msg__IviContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__IviContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__IviContainer * data =
      (v2x_msgs__msg__IviContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__IviContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__IviContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__IviContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
