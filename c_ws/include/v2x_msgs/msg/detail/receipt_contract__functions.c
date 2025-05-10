// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ReceiptContract.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/receipt_contract__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `session_contract_provider`
#include "v2x_msgs/msg/detail/provider__functions.h"
// Member `session_type_of_contract`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `session_contract_serial_number`
#include "v2x_msgs/msg/detail/int4__functions.h"

bool
v2x_msgs__msg__ReceiptContract__init(v2x_msgs__msg__ReceiptContract * msg)
{
  if (!msg) {
    return false;
  }
  // session_contract_provider
  if (!v2x_msgs__msg__Provider__init(&msg->session_contract_provider)) {
    v2x_msgs__msg__ReceiptContract__fini(msg);
    return false;
  }
  // session_type_of_contract
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->session_type_of_contract, 0)) {
    v2x_msgs__msg__ReceiptContract__fini(msg);
    return false;
  }
  // session_contract_serial_number
  if (!v2x_msgs__msg__Int4__init(&msg->session_contract_serial_number)) {
    v2x_msgs__msg__ReceiptContract__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ReceiptContract__fini(v2x_msgs__msg__ReceiptContract * msg)
{
  if (!msg) {
    return;
  }
  // session_contract_provider
  v2x_msgs__msg__Provider__fini(&msg->session_contract_provider);
  // session_type_of_contract
  rosidl_runtime_c__int64__Sequence__fini(&msg->session_type_of_contract);
  // session_contract_serial_number
  v2x_msgs__msg__Int4__fini(&msg->session_contract_serial_number);
}

bool
v2x_msgs__msg__ReceiptContract__are_equal(const v2x_msgs__msg__ReceiptContract * lhs, const v2x_msgs__msg__ReceiptContract * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // session_contract_provider
  if (!v2x_msgs__msg__Provider__are_equal(
      &(lhs->session_contract_provider), &(rhs->session_contract_provider)))
  {
    return false;
  }
  // session_type_of_contract
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->session_type_of_contract), &(rhs->session_type_of_contract)))
  {
    return false;
  }
  // session_contract_serial_number
  if (!v2x_msgs__msg__Int4__are_equal(
      &(lhs->session_contract_serial_number), &(rhs->session_contract_serial_number)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ReceiptContract__copy(
  const v2x_msgs__msg__ReceiptContract * input,
  v2x_msgs__msg__ReceiptContract * output)
{
  if (!input || !output) {
    return false;
  }
  // session_contract_provider
  if (!v2x_msgs__msg__Provider__copy(
      &(input->session_contract_provider), &(output->session_contract_provider)))
  {
    return false;
  }
  // session_type_of_contract
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->session_type_of_contract), &(output->session_type_of_contract)))
  {
    return false;
  }
  // session_contract_serial_number
  if (!v2x_msgs__msg__Int4__copy(
      &(input->session_contract_serial_number), &(output->session_contract_serial_number)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ReceiptContract *
v2x_msgs__msg__ReceiptContract__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ReceiptContract * msg = (v2x_msgs__msg__ReceiptContract *)allocator.allocate(sizeof(v2x_msgs__msg__ReceiptContract), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ReceiptContract));
  bool success = v2x_msgs__msg__ReceiptContract__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ReceiptContract__destroy(v2x_msgs__msg__ReceiptContract * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ReceiptContract__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ReceiptContract__Sequence__init(v2x_msgs__msg__ReceiptContract__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ReceiptContract * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ReceiptContract *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ReceiptContract), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ReceiptContract__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ReceiptContract__fini(&data[i - 1]);
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
v2x_msgs__msg__ReceiptContract__Sequence__fini(v2x_msgs__msg__ReceiptContract__Sequence * array)
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
      v2x_msgs__msg__ReceiptContract__fini(&array->data[i]);
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

v2x_msgs__msg__ReceiptContract__Sequence *
v2x_msgs__msg__ReceiptContract__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ReceiptContract__Sequence * array = (v2x_msgs__msg__ReceiptContract__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ReceiptContract__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ReceiptContract__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ReceiptContract__Sequence__destroy(v2x_msgs__msg__ReceiptContract__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ReceiptContract__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ReceiptContract__Sequence__are_equal(const v2x_msgs__msg__ReceiptContract__Sequence * lhs, const v2x_msgs__msg__ReceiptContract__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ReceiptContract__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ReceiptContract__Sequence__copy(
  const v2x_msgs__msg__ReceiptContract__Sequence * input,
  v2x_msgs__msg__ReceiptContract__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ReceiptContract);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ReceiptContract * data =
      (v2x_msgs__msg__ReceiptContract *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ReceiptContract__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ReceiptContract__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ReceiptContract__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
