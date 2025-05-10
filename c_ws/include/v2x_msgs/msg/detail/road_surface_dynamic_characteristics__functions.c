// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RoadSurfaceDynamicCharacteristics.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/road_surface_dynamic_characteristics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `condition`
#include "v2x_msgs/msg/detail/condition__functions.h"
// Member `temperature`
#include "v2x_msgs/msg/detail/temperature__functions.h"
// Member `ice_or_water_depth`
#include "v2x_msgs/msg/detail/depth__functions.h"
// Member `treatment`
#include "v2x_msgs/msg/detail/treatment_type__functions.h"

bool
v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__init(v2x_msgs__msg__RoadSurfaceDynamicCharacteristics * msg)
{
  if (!msg) {
    return false;
  }
  // condition
  if (!v2x_msgs__msg__Condition__init(&msg->condition)) {
    v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__fini(msg);
    return false;
  }
  // temperature
  if (!v2x_msgs__msg__Temperature__init(&msg->temperature)) {
    v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__fini(msg);
    return false;
  }
  // ice_or_water_depth
  if (!v2x_msgs__msg__Depth__init(&msg->ice_or_water_depth)) {
    v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__fini(msg);
    return false;
  }
  // treatment
  if (!v2x_msgs__msg__TreatmentType__init(&msg->treatment)) {
    v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__fini(v2x_msgs__msg__RoadSurfaceDynamicCharacteristics * msg)
{
  if (!msg) {
    return;
  }
  // condition
  v2x_msgs__msg__Condition__fini(&msg->condition);
  // temperature
  v2x_msgs__msg__Temperature__fini(&msg->temperature);
  // ice_or_water_depth
  v2x_msgs__msg__Depth__fini(&msg->ice_or_water_depth);
  // treatment
  v2x_msgs__msg__TreatmentType__fini(&msg->treatment);
}

bool
v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__are_equal(const v2x_msgs__msg__RoadSurfaceDynamicCharacteristics * lhs, const v2x_msgs__msg__RoadSurfaceDynamicCharacteristics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // condition
  if (!v2x_msgs__msg__Condition__are_equal(
      &(lhs->condition), &(rhs->condition)))
  {
    return false;
  }
  // temperature
  if (!v2x_msgs__msg__Temperature__are_equal(
      &(lhs->temperature), &(rhs->temperature)))
  {
    return false;
  }
  // ice_or_water_depth
  if (!v2x_msgs__msg__Depth__are_equal(
      &(lhs->ice_or_water_depth), &(rhs->ice_or_water_depth)))
  {
    return false;
  }
  // treatment
  if (!v2x_msgs__msg__TreatmentType__are_equal(
      &(lhs->treatment), &(rhs->treatment)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__copy(
  const v2x_msgs__msg__RoadSurfaceDynamicCharacteristics * input,
  v2x_msgs__msg__RoadSurfaceDynamicCharacteristics * output)
{
  if (!input || !output) {
    return false;
  }
  // condition
  if (!v2x_msgs__msg__Condition__copy(
      &(input->condition), &(output->condition)))
  {
    return false;
  }
  // temperature
  if (!v2x_msgs__msg__Temperature__copy(
      &(input->temperature), &(output->temperature)))
  {
    return false;
  }
  // ice_or_water_depth
  if (!v2x_msgs__msg__Depth__copy(
      &(input->ice_or_water_depth), &(output->ice_or_water_depth)))
  {
    return false;
  }
  // treatment
  if (!v2x_msgs__msg__TreatmentType__copy(
      &(input->treatment), &(output->treatment)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RoadSurfaceDynamicCharacteristics *
v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadSurfaceDynamicCharacteristics * msg = (v2x_msgs__msg__RoadSurfaceDynamicCharacteristics *)allocator.allocate(sizeof(v2x_msgs__msg__RoadSurfaceDynamicCharacteristics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RoadSurfaceDynamicCharacteristics));
  bool success = v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__destroy(v2x_msgs__msg__RoadSurfaceDynamicCharacteristics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence__init(v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadSurfaceDynamicCharacteristics * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RoadSurfaceDynamicCharacteristics *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RoadSurfaceDynamicCharacteristics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__fini(&data[i - 1]);
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
v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence__fini(v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence * array)
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
      v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__fini(&array->data[i]);
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

v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence *
v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence * array = (v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence__destroy(v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence__are_equal(const v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence * lhs, const v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence__copy(
  const v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence * input,
  v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RoadSurfaceDynamicCharacteristics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RoadSurfaceDynamicCharacteristics * data =
      (v2x_msgs__msg__RoadSurfaceDynamicCharacteristics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
