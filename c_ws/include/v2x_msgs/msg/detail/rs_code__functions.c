// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RSCode.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/rs_code__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vienna_convention`
#include "v2x_msgs/msg/detail/vc_code__functions.h"
// Member `iso14823`
#include "v2x_msgs/msg/detail/iso14823_code__functions.h"
// Member `any_catalogue`
#include "v2x_msgs/msg/detail/any_catalogue__functions.h"

bool
v2x_msgs__msg__RSCode__init(v2x_msgs__msg__RSCode * msg)
{
  if (!msg) {
    return false;
  }
  // layout_component_id_present
  msg->layout_component_id_present = false;
  // layout_component_id
  // code_container_select
  msg->code_container_select = 0ll;
  // vienna_convention
  if (!v2x_msgs__msg__VcCode__init(&msg->vienna_convention)) {
    v2x_msgs__msg__RSCode__fini(msg);
    return false;
  }
  // iso14823
  if (!v2x_msgs__msg__ISO14823Code__init(&msg->iso14823)) {
    v2x_msgs__msg__RSCode__fini(msg);
    return false;
  }
  // itis_codes
  // any_catalogue
  if (!v2x_msgs__msg__AnyCatalogue__init(&msg->any_catalogue)) {
    v2x_msgs__msg__RSCode__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RSCode__fini(v2x_msgs__msg__RSCode * msg)
{
  if (!msg) {
    return;
  }
  // layout_component_id_present
  // layout_component_id
  // code_container_select
  // vienna_convention
  v2x_msgs__msg__VcCode__fini(&msg->vienna_convention);
  // iso14823
  v2x_msgs__msg__ISO14823Code__fini(&msg->iso14823);
  // itis_codes
  // any_catalogue
  v2x_msgs__msg__AnyCatalogue__fini(&msg->any_catalogue);
}

bool
v2x_msgs__msg__RSCode__are_equal(const v2x_msgs__msg__RSCode * lhs, const v2x_msgs__msg__RSCode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // layout_component_id_present
  if (lhs->layout_component_id_present != rhs->layout_component_id_present) {
    return false;
  }
  // layout_component_id
  if (lhs->layout_component_id != rhs->layout_component_id) {
    return false;
  }
  // code_container_select
  if (lhs->code_container_select != rhs->code_container_select) {
    return false;
  }
  // vienna_convention
  if (!v2x_msgs__msg__VcCode__are_equal(
      &(lhs->vienna_convention), &(rhs->vienna_convention)))
  {
    return false;
  }
  // iso14823
  if (!v2x_msgs__msg__ISO14823Code__are_equal(
      &(lhs->iso14823), &(rhs->iso14823)))
  {
    return false;
  }
  // itis_codes
  if (lhs->itis_codes != rhs->itis_codes) {
    return false;
  }
  // any_catalogue
  if (!v2x_msgs__msg__AnyCatalogue__are_equal(
      &(lhs->any_catalogue), &(rhs->any_catalogue)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RSCode__copy(
  const v2x_msgs__msg__RSCode * input,
  v2x_msgs__msg__RSCode * output)
{
  if (!input || !output) {
    return false;
  }
  // layout_component_id_present
  output->layout_component_id_present = input->layout_component_id_present;
  // layout_component_id
  output->layout_component_id = input->layout_component_id;
  // code_container_select
  output->code_container_select = input->code_container_select;
  // vienna_convention
  if (!v2x_msgs__msg__VcCode__copy(
      &(input->vienna_convention), &(output->vienna_convention)))
  {
    return false;
  }
  // iso14823
  if (!v2x_msgs__msg__ISO14823Code__copy(
      &(input->iso14823), &(output->iso14823)))
  {
    return false;
  }
  // itis_codes
  output->itis_codes = input->itis_codes;
  // any_catalogue
  if (!v2x_msgs__msg__AnyCatalogue__copy(
      &(input->any_catalogue), &(output->any_catalogue)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RSCode *
v2x_msgs__msg__RSCode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RSCode * msg = (v2x_msgs__msg__RSCode *)allocator.allocate(sizeof(v2x_msgs__msg__RSCode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RSCode));
  bool success = v2x_msgs__msg__RSCode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RSCode__destroy(v2x_msgs__msg__RSCode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RSCode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RSCode__Sequence__init(v2x_msgs__msg__RSCode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RSCode * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RSCode *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RSCode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RSCode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RSCode__fini(&data[i - 1]);
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
v2x_msgs__msg__RSCode__Sequence__fini(v2x_msgs__msg__RSCode__Sequence * array)
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
      v2x_msgs__msg__RSCode__fini(&array->data[i]);
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

v2x_msgs__msg__RSCode__Sequence *
v2x_msgs__msg__RSCode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RSCode__Sequence * array = (v2x_msgs__msg__RSCode__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RSCode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RSCode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RSCode__Sequence__destroy(v2x_msgs__msg__RSCode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RSCode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RSCode__Sequence__are_equal(const v2x_msgs__msg__RSCode__Sequence * lhs, const v2x_msgs__msg__RSCode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RSCode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RSCode__Sequence__copy(
  const v2x_msgs__msg__RSCode__Sequence * input,
  v2x_msgs__msg__RSCode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RSCode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RSCode * data =
      (v2x_msgs__msg__RSCode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RSCode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RSCode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RSCode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
