// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/AnyCatalogue.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/any_catalogue__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `owner`
#include "v2x_msgs/msg/detail/provider__functions.h"
// Member `unit`
#include "v2x_msgs/msg/detail/rsc_unit__functions.h"
// Member `attributes`
#include "v2x_msgs/msg/detail/iso14823_attributes__functions.h"

bool
v2x_msgs__msg__AnyCatalogue__init(v2x_msgs__msg__AnyCatalogue * msg)
{
  if (!msg) {
    return false;
  }
  // owner
  if (!v2x_msgs__msg__Provider__init(&msg->owner)) {
    v2x_msgs__msg__AnyCatalogue__fini(msg);
    return false;
  }
  // version
  // pictogram_code
  // value_present
  msg->value_present = false;
  // value
  // unit_present
  msg->unit_present = false;
  // unit
  if (!v2x_msgs__msg__RSCUnit__init(&msg->unit)) {
    v2x_msgs__msg__AnyCatalogue__fini(msg);
    return false;
  }
  // attributes_present
  msg->attributes_present = false;
  // attributes
  if (!v2x_msgs__msg__ISO14823Attributes__init(&msg->attributes)) {
    v2x_msgs__msg__AnyCatalogue__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__AnyCatalogue__fini(v2x_msgs__msg__AnyCatalogue * msg)
{
  if (!msg) {
    return;
  }
  // owner
  v2x_msgs__msg__Provider__fini(&msg->owner);
  // version
  // pictogram_code
  // value_present
  // value
  // unit_present
  // unit
  v2x_msgs__msg__RSCUnit__fini(&msg->unit);
  // attributes_present
  // attributes
  v2x_msgs__msg__ISO14823Attributes__fini(&msg->attributes);
}

bool
v2x_msgs__msg__AnyCatalogue__are_equal(const v2x_msgs__msg__AnyCatalogue * lhs, const v2x_msgs__msg__AnyCatalogue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // owner
  if (!v2x_msgs__msg__Provider__are_equal(
      &(lhs->owner), &(rhs->owner)))
  {
    return false;
  }
  // version
  if (lhs->version != rhs->version) {
    return false;
  }
  // pictogram_code
  if (lhs->pictogram_code != rhs->pictogram_code) {
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
  // attributes_present
  if (lhs->attributes_present != rhs->attributes_present) {
    return false;
  }
  // attributes
  if (!v2x_msgs__msg__ISO14823Attributes__are_equal(
      &(lhs->attributes), &(rhs->attributes)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__AnyCatalogue__copy(
  const v2x_msgs__msg__AnyCatalogue * input,
  v2x_msgs__msg__AnyCatalogue * output)
{
  if (!input || !output) {
    return false;
  }
  // owner
  if (!v2x_msgs__msg__Provider__copy(
      &(input->owner), &(output->owner)))
  {
    return false;
  }
  // version
  output->version = input->version;
  // pictogram_code
  output->pictogram_code = input->pictogram_code;
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
  // attributes_present
  output->attributes_present = input->attributes_present;
  // attributes
  if (!v2x_msgs__msg__ISO14823Attributes__copy(
      &(input->attributes), &(output->attributes)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__AnyCatalogue *
v2x_msgs__msg__AnyCatalogue__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AnyCatalogue * msg = (v2x_msgs__msg__AnyCatalogue *)allocator.allocate(sizeof(v2x_msgs__msg__AnyCatalogue), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__AnyCatalogue));
  bool success = v2x_msgs__msg__AnyCatalogue__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__AnyCatalogue__destroy(v2x_msgs__msg__AnyCatalogue * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__AnyCatalogue__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__AnyCatalogue__Sequence__init(v2x_msgs__msg__AnyCatalogue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AnyCatalogue * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__AnyCatalogue *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__AnyCatalogue), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__AnyCatalogue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__AnyCatalogue__fini(&data[i - 1]);
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
v2x_msgs__msg__AnyCatalogue__Sequence__fini(v2x_msgs__msg__AnyCatalogue__Sequence * array)
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
      v2x_msgs__msg__AnyCatalogue__fini(&array->data[i]);
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

v2x_msgs__msg__AnyCatalogue__Sequence *
v2x_msgs__msg__AnyCatalogue__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AnyCatalogue__Sequence * array = (v2x_msgs__msg__AnyCatalogue__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__AnyCatalogue__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__AnyCatalogue__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__AnyCatalogue__Sequence__destroy(v2x_msgs__msg__AnyCatalogue__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__AnyCatalogue__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__AnyCatalogue__Sequence__are_equal(const v2x_msgs__msg__AnyCatalogue__Sequence * lhs, const v2x_msgs__msg__AnyCatalogue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__AnyCatalogue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__AnyCatalogue__Sequence__copy(
  const v2x_msgs__msg__AnyCatalogue__Sequence * input,
  v2x_msgs__msg__AnyCatalogue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__AnyCatalogue);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__AnyCatalogue * data =
      (v2x_msgs__msg__AnyCatalogue *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__AnyCatalogue__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__AnyCatalogue__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__AnyCatalogue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
