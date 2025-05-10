// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/CreditRs.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/credit_rs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `credit_result`
#include "v2x_msgs/msg/detail/result_fin__functions.h"
// Member `credit_authenticator`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
v2x_msgs__msg__CreditRs__init(v2x_msgs__msg__CreditRs * msg)
{
  if (!msg) {
    return false;
  }
  // credit_result
  if (!v2x_msgs__msg__ResultFin__init(&msg->credit_result)) {
    v2x_msgs__msg__CreditRs__fini(msg);
    return false;
  }
  // credit_authenticator
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->credit_authenticator, 0)) {
    v2x_msgs__msg__CreditRs__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__CreditRs__fini(v2x_msgs__msg__CreditRs * msg)
{
  if (!msg) {
    return;
  }
  // credit_result
  v2x_msgs__msg__ResultFin__fini(&msg->credit_result);
  // credit_authenticator
  rosidl_runtime_c__int64__Sequence__fini(&msg->credit_authenticator);
}

bool
v2x_msgs__msg__CreditRs__are_equal(const v2x_msgs__msg__CreditRs * lhs, const v2x_msgs__msg__CreditRs * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // credit_result
  if (!v2x_msgs__msg__ResultFin__are_equal(
      &(lhs->credit_result), &(rhs->credit_result)))
  {
    return false;
  }
  // credit_authenticator
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->credit_authenticator), &(rhs->credit_authenticator)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__CreditRs__copy(
  const v2x_msgs__msg__CreditRs * input,
  v2x_msgs__msg__CreditRs * output)
{
  if (!input || !output) {
    return false;
  }
  // credit_result
  if (!v2x_msgs__msg__ResultFin__copy(
      &(input->credit_result), &(output->credit_result)))
  {
    return false;
  }
  // credit_authenticator
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->credit_authenticator), &(output->credit_authenticator)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__CreditRs *
v2x_msgs__msg__CreditRs__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CreditRs * msg = (v2x_msgs__msg__CreditRs *)allocator.allocate(sizeof(v2x_msgs__msg__CreditRs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__CreditRs));
  bool success = v2x_msgs__msg__CreditRs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__CreditRs__destroy(v2x_msgs__msg__CreditRs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__CreditRs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__CreditRs__Sequence__init(v2x_msgs__msg__CreditRs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CreditRs * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__CreditRs *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__CreditRs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__CreditRs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__CreditRs__fini(&data[i - 1]);
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
v2x_msgs__msg__CreditRs__Sequence__fini(v2x_msgs__msg__CreditRs__Sequence * array)
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
      v2x_msgs__msg__CreditRs__fini(&array->data[i]);
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

v2x_msgs__msg__CreditRs__Sequence *
v2x_msgs__msg__CreditRs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CreditRs__Sequence * array = (v2x_msgs__msg__CreditRs__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__CreditRs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__CreditRs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__CreditRs__Sequence__destroy(v2x_msgs__msg__CreditRs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__CreditRs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__CreditRs__Sequence__are_equal(const v2x_msgs__msg__CreditRs__Sequence * lhs, const v2x_msgs__msg__CreditRs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__CreditRs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__CreditRs__Sequence__copy(
  const v2x_msgs__msg__CreditRs__Sequence * input,
  v2x_msgs__msg__CreditRs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__CreditRs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__CreditRs * data =
      (v2x_msgs__msg__CreditRs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__CreditRs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__CreditRs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__CreditRs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
