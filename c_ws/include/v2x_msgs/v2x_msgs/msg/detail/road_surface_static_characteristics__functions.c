// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RoadSurfaceStaticCharacteristics.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/road_surface_static_characteristics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `friction_coefficient`
#include "v2x_msgs/msg/detail/friction_coefficient__functions.h"
// Member `material`
#include "v2x_msgs/msg/detail/material_type__functions.h"
// Member `wear`
#include "v2x_msgs/msg/detail/wear_level__functions.h"
// Member `av_banking_angle`
#include "v2x_msgs/msg/detail/banking_angle__functions.h"

bool
v2x_msgs__msg__RoadSurfaceStaticCharacteristics__init(v2x_msgs__msg__RoadSurfaceStaticCharacteristics * msg)
{
  if (!msg) {
    return false;
  }
  // friction_coefficient
  if (!v2x_msgs__msg__FrictionCoefficient__init(&msg->friction_coefficient)) {
    v2x_msgs__msg__RoadSurfaceStaticCharacteristics__fini(msg);
    return false;
  }
  // material
  if (!v2x_msgs__msg__MaterialType__init(&msg->material)) {
    v2x_msgs__msg__RoadSurfaceStaticCharacteristics__fini(msg);
    return false;
  }
  // wear
  if (!v2x_msgs__msg__WearLevel__init(&msg->wear)) {
    v2x_msgs__msg__RoadSurfaceStaticCharacteristics__fini(msg);
    return false;
  }
  // av_banking_angle
  if (!v2x_msgs__msg__BankingAngle__init(&msg->av_banking_angle)) {
    v2x_msgs__msg__RoadSurfaceStaticCharacteristics__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RoadSurfaceStaticCharacteristics__fini(v2x_msgs__msg__RoadSurfaceStaticCharacteristics * msg)
{
  if (!msg) {
    return;
  }
  // friction_coefficient
  v2x_msgs__msg__FrictionCoefficient__fini(&msg->friction_coefficient);
  // material
  v2x_msgs__msg__MaterialType__fini(&msg->material);
  // wear
  v2x_msgs__msg__WearLevel__fini(&msg->wear);
  // av_banking_angle
  v2x_msgs__msg__BankingAngle__fini(&msg->av_banking_angle);
}

bool
v2x_msgs__msg__RoadSurfaceStaticCharacteristics__are_equal(const v2x_msgs__msg__RoadSurfaceStaticCharacteristics * lhs, const v2x_msgs__msg__RoadSurfaceStaticCharacteristics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // friction_coefficient
  if (!v2x_msgs__msg__FrictionCoefficient__are_equal(
      &(lhs->friction_coefficient), &(rhs->friction_coefficient)))
  {
    return false;
  }
  // material
  if (!v2x_msgs__msg__MaterialType__are_equal(
      &(lhs->material), &(rhs->material)))
  {
    return false;
  }
  // wear
  if (!v2x_msgs__msg__WearLevel__are_equal(
      &(lhs->wear), &(rhs->wear)))
  {
    return false;
  }
  // av_banking_angle
  if (!v2x_msgs__msg__BankingAngle__are_equal(
      &(lhs->av_banking_angle), &(rhs->av_banking_angle)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RoadSurfaceStaticCharacteristics__copy(
  const v2x_msgs__msg__RoadSurfaceStaticCharacteristics * input,
  v2x_msgs__msg__RoadSurfaceStaticCharacteristics * output)
{
  if (!input || !output) {
    return false;
  }
  // friction_coefficient
  if (!v2x_msgs__msg__FrictionCoefficient__copy(
      &(input->friction_coefficient), &(output->friction_coefficient)))
  {
    return false;
  }
  // material
  if (!v2x_msgs__msg__MaterialType__copy(
      &(input->material), &(output->material)))
  {
    return false;
  }
  // wear
  if (!v2x_msgs__msg__WearLevel__copy(
      &(input->wear), &(output->wear)))
  {
    return false;
  }
  // av_banking_angle
  if (!v2x_msgs__msg__BankingAngle__copy(
      &(input->av_banking_angle), &(output->av_banking_angle)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RoadSurfaceStaticCharacteristics *
v2x_msgs__msg__RoadSurfaceStaticCharacteristics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadSurfaceStaticCharacteristics * msg = (v2x_msgs__msg__RoadSurfaceStaticCharacteristics *)allocator.allocate(sizeof(v2x_msgs__msg__RoadSurfaceStaticCharacteristics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RoadSurfaceStaticCharacteristics));
  bool success = v2x_msgs__msg__RoadSurfaceStaticCharacteristics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RoadSurfaceStaticCharacteristics__destroy(v2x_msgs__msg__RoadSurfaceStaticCharacteristics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RoadSurfaceStaticCharacteristics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence__init(v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadSurfaceStaticCharacteristics * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RoadSurfaceStaticCharacteristics *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RoadSurfaceStaticCharacteristics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RoadSurfaceStaticCharacteristics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RoadSurfaceStaticCharacteristics__fini(&data[i - 1]);
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
v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence__fini(v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence * array)
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
      v2x_msgs__msg__RoadSurfaceStaticCharacteristics__fini(&array->data[i]);
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

v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence *
v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence * array = (v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence__destroy(v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence__are_equal(const v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence * lhs, const v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RoadSurfaceStaticCharacteristics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence__copy(
  const v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence * input,
  v2x_msgs__msg__RoadSurfaceStaticCharacteristics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RoadSurfaceStaticCharacteristics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RoadSurfaceStaticCharacteristics * data =
      (v2x_msgs__msg__RoadSurfaceStaticCharacteristics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RoadSurfaceStaticCharacteristics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RoadSurfaceStaticCharacteristics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RoadSurfaceStaticCharacteristics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
