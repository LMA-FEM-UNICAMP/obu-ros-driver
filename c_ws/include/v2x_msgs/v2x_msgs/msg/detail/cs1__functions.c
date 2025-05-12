// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/CS1.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/cs1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `country_code`
#include "v2x_msgs/msg/detail/country_code__functions.h"
// Member `issuer_identifier`
#include "v2x_msgs/msg/detail/issuer_identifier__functions.h"
// Member `service_number`
#include "v2x_msgs/msg/detail/service_number__functions.h"

bool
v2x_msgs__msg__CS1__init(v2x_msgs__msg__CS1 * msg)
{
  if (!msg) {
    return false;
  }
  // country_code
  if (!v2x_msgs__msg__CountryCode__init(&msg->country_code)) {
    v2x_msgs__msg__CS1__fini(msg);
    return false;
  }
  // issuer_identifier
  if (!v2x_msgs__msg__IssuerIdentifier__init(&msg->issuer_identifier)) {
    v2x_msgs__msg__CS1__fini(msg);
    return false;
  }
  // service_number
  if (!v2x_msgs__msg__ServiceNumber__init(&msg->service_number)) {
    v2x_msgs__msg__CS1__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__CS1__fini(v2x_msgs__msg__CS1 * msg)
{
  if (!msg) {
    return;
  }
  // country_code
  v2x_msgs__msg__CountryCode__fini(&msg->country_code);
  // issuer_identifier
  v2x_msgs__msg__IssuerIdentifier__fini(&msg->issuer_identifier);
  // service_number
  v2x_msgs__msg__ServiceNumber__fini(&msg->service_number);
}

bool
v2x_msgs__msg__CS1__are_equal(const v2x_msgs__msg__CS1 * lhs, const v2x_msgs__msg__CS1 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // country_code
  if (!v2x_msgs__msg__CountryCode__are_equal(
      &(lhs->country_code), &(rhs->country_code)))
  {
    return false;
  }
  // issuer_identifier
  if (!v2x_msgs__msg__IssuerIdentifier__are_equal(
      &(lhs->issuer_identifier), &(rhs->issuer_identifier)))
  {
    return false;
  }
  // service_number
  if (!v2x_msgs__msg__ServiceNumber__are_equal(
      &(lhs->service_number), &(rhs->service_number)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__CS1__copy(
  const v2x_msgs__msg__CS1 * input,
  v2x_msgs__msg__CS1 * output)
{
  if (!input || !output) {
    return false;
  }
  // country_code
  if (!v2x_msgs__msg__CountryCode__copy(
      &(input->country_code), &(output->country_code)))
  {
    return false;
  }
  // issuer_identifier
  if (!v2x_msgs__msg__IssuerIdentifier__copy(
      &(input->issuer_identifier), &(output->issuer_identifier)))
  {
    return false;
  }
  // service_number
  if (!v2x_msgs__msg__ServiceNumber__copy(
      &(input->service_number), &(output->service_number)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__CS1 *
v2x_msgs__msg__CS1__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CS1 * msg = (v2x_msgs__msg__CS1 *)allocator.allocate(sizeof(v2x_msgs__msg__CS1), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__CS1));
  bool success = v2x_msgs__msg__CS1__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__CS1__destroy(v2x_msgs__msg__CS1 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__CS1__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__CS1__Sequence__init(v2x_msgs__msg__CS1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CS1 * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__CS1 *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__CS1), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__CS1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__CS1__fini(&data[i - 1]);
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
v2x_msgs__msg__CS1__Sequence__fini(v2x_msgs__msg__CS1__Sequence * array)
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
      v2x_msgs__msg__CS1__fini(&array->data[i]);
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

v2x_msgs__msg__CS1__Sequence *
v2x_msgs__msg__CS1__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CS1__Sequence * array = (v2x_msgs__msg__CS1__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__CS1__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__CS1__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__CS1__Sequence__destroy(v2x_msgs__msg__CS1__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__CS1__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__CS1__Sequence__are_equal(const v2x_msgs__msg__CS1__Sequence * lhs, const v2x_msgs__msg__CS1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__CS1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__CS1__Sequence__copy(
  const v2x_msgs__msg__CS1__Sequence * input,
  v2x_msgs__msg__CS1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__CS1);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__CS1 * data =
      (v2x_msgs__msg__CS1 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__CS1__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__CS1__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__CS1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
