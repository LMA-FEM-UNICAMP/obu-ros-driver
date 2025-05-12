// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/VcCode.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/vc_code__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `road_sign_class`
#include "v2x_msgs/msg/detail/vc_class__functions.h"
// Member `vc_option`
#include "v2x_msgs/msg/detail/vc_option__functions.h"
// Member `validity`
#include "v2x_msgs/msg/detail/validity_periods__functions.h"
// Member `unit`
#include "v2x_msgs/msg/detail/rsc_unit__functions.h"

bool
v2x_msgs__msg__VcCode__init(v2x_msgs__msg__VcCode * msg)
{
  if (!msg) {
    return false;
  }
  // road_sign_class
  if (!v2x_msgs__msg__VcClass__init(&msg->road_sign_class)) {
    v2x_msgs__msg__VcCode__fini(msg);
    return false;
  }
  // road_sign_code
  // vc_option
  if (!v2x_msgs__msg__VcOption__init(&msg->vc_option)) {
    v2x_msgs__msg__VcCode__fini(msg);
    return false;
  }
  // validity_present
  msg->validity_present = false;
  // validity
  if (!v2x_msgs__msg__ValidityPeriods__init(&msg->validity)) {
    v2x_msgs__msg__VcCode__fini(msg);
    return false;
  }
  // value_present
  msg->value_present = false;
  // value
  // unit_present
  msg->unit_present = false;
  // unit
  if (!v2x_msgs__msg__RSCUnit__init(&msg->unit)) {
    v2x_msgs__msg__VcCode__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__VcCode__fini(v2x_msgs__msg__VcCode * msg)
{
  if (!msg) {
    return;
  }
  // road_sign_class
  v2x_msgs__msg__VcClass__fini(&msg->road_sign_class);
  // road_sign_code
  // vc_option
  v2x_msgs__msg__VcOption__fini(&msg->vc_option);
  // validity_present
  // validity
  v2x_msgs__msg__ValidityPeriods__fini(&msg->validity);
  // value_present
  // value
  // unit_present
  // unit
  v2x_msgs__msg__RSCUnit__fini(&msg->unit);
}

bool
v2x_msgs__msg__VcCode__are_equal(const v2x_msgs__msg__VcCode * lhs, const v2x_msgs__msg__VcCode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // road_sign_class
  if (!v2x_msgs__msg__VcClass__are_equal(
      &(lhs->road_sign_class), &(rhs->road_sign_class)))
  {
    return false;
  }
  // road_sign_code
  if (lhs->road_sign_code != rhs->road_sign_code) {
    return false;
  }
  // vc_option
  if (!v2x_msgs__msg__VcOption__are_equal(
      &(lhs->vc_option), &(rhs->vc_option)))
  {
    return false;
  }
  // validity_present
  if (lhs->validity_present != rhs->validity_present) {
    return false;
  }
  // validity
  if (!v2x_msgs__msg__ValidityPeriods__are_equal(
      &(lhs->validity), &(rhs->validity)))
  {
    return false;
  }
  // value_present
  if (lhs->value_present != rhs->value_present) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // unit_present
  if (lhs->unit_present != rhs->unit_present) {
    return false;
  }
  // unit
  if (!v2x_msgs__msg__RSCUnit__are_equal(
      &(lhs->unit), &(rhs->unit)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__VcCode__copy(
  const v2x_msgs__msg__VcCode * input,
  v2x_msgs__msg__VcCode * output)
{
  if (!input || !output) {
    return false;
  }
  // road_sign_class
  if (!v2x_msgs__msg__VcClass__copy(
      &(input->road_sign_class), &(output->road_sign_class)))
  {
    return false;
  }
  // road_sign_code
  output->road_sign_code = input->road_sign_code;
  // vc_option
  if (!v2x_msgs__msg__VcOption__copy(
      &(input->vc_option), &(output->vc_option)))
  {
    return false;
  }
  // validity_present
  output->validity_present = input->validity_present;
  // validity
  if (!v2x_msgs__msg__ValidityPeriods__copy(
      &(input->validity), &(output->validity)))
  {
    return false;
  }
  // value_present
  output->value_present = input->value_present;
  // value
  output->value = input->value;
  // unit_present
  output->unit_present = input->unit_present;
  // unit
  if (!v2x_msgs__msg__RSCUnit__copy(
      &(input->unit), &(output->unit)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__VcCode *
v2x_msgs__msg__VcCode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VcCode * msg = (v2x_msgs__msg__VcCode *)allocator.allocate(sizeof(v2x_msgs__msg__VcCode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__VcCode));
  bool success = v2x_msgs__msg__VcCode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__VcCode__destroy(v2x_msgs__msg__VcCode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__VcCode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__VcCode__Sequence__init(v2x_msgs__msg__VcCode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VcCode * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__VcCode *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__VcCode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__VcCode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__VcCode__fini(&data[i - 1]);
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
v2x_msgs__msg__VcCode__Sequence__fini(v2x_msgs__msg__VcCode__Sequence * array)
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
      v2x_msgs__msg__VcCode__fini(&array->data[i]);
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

v2x_msgs__msg__VcCode__Sequence *
v2x_msgs__msg__VcCode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VcCode__Sequence * array = (v2x_msgs__msg__VcCode__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__VcCode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__VcCode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__VcCode__Sequence__destroy(v2x_msgs__msg__VcCode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__VcCode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__VcCode__Sequence__are_equal(const v2x_msgs__msg__VcCode__Sequence * lhs, const v2x_msgs__msg__VcCode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__VcCode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__VcCode__Sequence__copy(
  const v2x_msgs__msg__VcCode__Sequence * input,
  v2x_msgs__msg__VcCode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__VcCode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__VcCode * data =
      (v2x_msgs__msg__VcCode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__VcCode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__VcCode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__VcCode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
