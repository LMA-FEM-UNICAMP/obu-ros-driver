// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RoadWorksContainerBasic.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/road_works_container_basic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `roadworks_sub_cause_code`
#include "v2x_msgs/msg/detail/roadworks_sub_cause_code__functions.h"
// Member `light_bar_siren_in_use`
#include "v2x_msgs/msg/detail/light_bar_siren_in_use__functions.h"
// Member `closed_lanes`
#include "v2x_msgs/msg/detail/closed_lanes__functions.h"

bool
v2x_msgs__msg__RoadWorksContainerBasic__init(v2x_msgs__msg__RoadWorksContainerBasic * msg)
{
  if (!msg) {
    return false;
  }
  // roadworks_sub_cause_code_present
  msg->roadworks_sub_cause_code_present = false;
  // roadworks_sub_cause_code
  if (!v2x_msgs__msg__RoadworksSubCauseCode__init(&msg->roadworks_sub_cause_code)) {
    v2x_msgs__msg__RoadWorksContainerBasic__fini(msg);
    return false;
  }
  // light_bar_siren_in_use
  if (!v2x_msgs__msg__LightBarSirenInUse__init(&msg->light_bar_siren_in_use)) {
    v2x_msgs__msg__RoadWorksContainerBasic__fini(msg);
    return false;
  }
  // closed_lanes_present
  msg->closed_lanes_present = false;
  // closed_lanes
  if (!v2x_msgs__msg__ClosedLanes__init(&msg->closed_lanes)) {
    v2x_msgs__msg__RoadWorksContainerBasic__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RoadWorksContainerBasic__fini(v2x_msgs__msg__RoadWorksContainerBasic * msg)
{
  if (!msg) {
    return;
  }
  // roadworks_sub_cause_code_present
  // roadworks_sub_cause_code
  v2x_msgs__msg__RoadworksSubCauseCode__fini(&msg->roadworks_sub_cause_code);
  // light_bar_siren_in_use
  v2x_msgs__msg__LightBarSirenInUse__fini(&msg->light_bar_siren_in_use);
  // closed_lanes_present
  // closed_lanes
  v2x_msgs__msg__ClosedLanes__fini(&msg->closed_lanes);
}

bool
v2x_msgs__msg__RoadWorksContainerBasic__are_equal(const v2x_msgs__msg__RoadWorksContainerBasic * lhs, const v2x_msgs__msg__RoadWorksContainerBasic * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roadworks_sub_cause_code_present
  if (lhs->roadworks_sub_cause_code_present != rhs->roadworks_sub_cause_code_present) {
    return false;
  }
  // roadworks_sub_cause_code
  if (!v2x_msgs__msg__RoadworksSubCauseCode__are_equal(
      &(lhs->roadworks_sub_cause_code), &(rhs->roadworks_sub_cause_code)))
  {
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
  return true;
}

bool
v2x_msgs__msg__RoadWorksContainerBasic__copy(
  const v2x_msgs__msg__RoadWorksContainerBasic * input,
  v2x_msgs__msg__RoadWorksContainerBasic * output)
{
  if (!input || !output) {
    return false;
  }
  // roadworks_sub_cause_code_present
  output->roadworks_sub_cause_code_present = input->roadworks_sub_cause_code_present;
  // roadworks_sub_cause_code
  if (!v2x_msgs__msg__RoadworksSubCauseCode__copy(
      &(input->roadworks_sub_cause_code), &(output->roadworks_sub_cause_code)))
  {
    return false;
  }
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
  return true;
}

v2x_msgs__msg__RoadWorksContainerBasic *
v2x_msgs__msg__RoadWorksContainerBasic__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadWorksContainerBasic * msg = (v2x_msgs__msg__RoadWorksContainerBasic *)allocator.allocate(sizeof(v2x_msgs__msg__RoadWorksContainerBasic), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RoadWorksContainerBasic));
  bool success = v2x_msgs__msg__RoadWorksContainerBasic__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RoadWorksContainerBasic__destroy(v2x_msgs__msg__RoadWorksContainerBasic * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RoadWorksContainerBasic__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RoadWorksContainerBasic__Sequence__init(v2x_msgs__msg__RoadWorksContainerBasic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadWorksContainerBasic * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RoadWorksContainerBasic *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RoadWorksContainerBasic), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RoadWorksContainerBasic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RoadWorksContainerBasic__fini(&data[i - 1]);
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
v2x_msgs__msg__RoadWorksContainerBasic__Sequence__fini(v2x_msgs__msg__RoadWorksContainerBasic__Sequence * array)
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
      v2x_msgs__msg__RoadWorksContainerBasic__fini(&array->data[i]);
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

v2x_msgs__msg__RoadWorksContainerBasic__Sequence *
v2x_msgs__msg__RoadWorksContainerBasic__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadWorksContainerBasic__Sequence * array = (v2x_msgs__msg__RoadWorksContainerBasic__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RoadWorksContainerBasic__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RoadWorksContainerBasic__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RoadWorksContainerBasic__Sequence__destroy(v2x_msgs__msg__RoadWorksContainerBasic__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RoadWorksContainerBasic__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RoadWorksContainerBasic__Sequence__are_equal(const v2x_msgs__msg__RoadWorksContainerBasic__Sequence * lhs, const v2x_msgs__msg__RoadWorksContainerBasic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RoadWorksContainerBasic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RoadWorksContainerBasic__Sequence__copy(
  const v2x_msgs__msg__RoadWorksContainerBasic__Sequence * input,
  v2x_msgs__msg__RoadWorksContainerBasic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RoadWorksContainerBasic);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RoadWorksContainerBasic * data =
      (v2x_msgs__msg__RoadWorksContainerBasic *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RoadWorksContainerBasic__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RoadWorksContainerBasic__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RoadWorksContainerBasic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
