// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/DebitRq.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/debit_rq__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `debit_payment_fee`
#include "v2x_msgs/msg/detail/payment_fee__functions.h"
// Member `nonce`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
v2x_msgs__msg__DebitRq__init(v2x_msgs__msg__DebitRq * msg)
{
  if (!msg) {
    return false;
  }
  // debit_payment_fee
  if (!v2x_msgs__msg__PaymentFee__init(&msg->debit_payment_fee)) {
    v2x_msgs__msg__DebitRq__fini(msg);
    return false;
  }
  // nonce
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->nonce, 0)) {
    v2x_msgs__msg__DebitRq__fini(msg);
    return false;
  }
  // key_ref
  return true;
}

void
v2x_msgs__msg__DebitRq__fini(v2x_msgs__msg__DebitRq * msg)
{
  if (!msg) {
    return;
  }
  // debit_payment_fee
  v2x_msgs__msg__PaymentFee__fini(&msg->debit_payment_fee);
  // nonce
  rosidl_runtime_c__int64__Sequence__fini(&msg->nonce);
  // key_ref
}

bool
v2x_msgs__msg__DebitRq__are_equal(const v2x_msgs__msg__DebitRq * lhs, const v2x_msgs__msg__DebitRq * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // debit_payment_fee
  if (!v2x_msgs__msg__PaymentFee__are_equal(
      &(lhs->debit_payment_fee), &(rhs->debit_payment_fee)))
  {
    return false;
  }
  // nonce
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->nonce), &(rhs->nonce)))
  {
    return false;
  }
  // key_ref
  if (lhs->key_ref != rhs->key_ref) {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__DebitRq__copy(
  const v2x_msgs__msg__DebitRq * input,
  v2x_msgs__msg__DebitRq * output)
{
  if (!input || !output) {
    return false;
  }
  // debit_payment_fee
  if (!v2x_msgs__msg__PaymentFee__copy(
      &(input->debit_payment_fee), &(output->debit_payment_fee)))
  {
    return false;
  }
  // nonce
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->nonce), &(output->nonce)))
  {
    return false;
  }
  // key_ref
  output->key_ref = input->key_ref;
  return true;
}

v2x_msgs__msg__DebitRq *
v2x_msgs__msg__DebitRq__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DebitRq * msg = (v2x_msgs__msg__DebitRq *)allocator.allocate(sizeof(v2x_msgs__msg__DebitRq), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__DebitRq));
  bool success = v2x_msgs__msg__DebitRq__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__DebitRq__destroy(v2x_msgs__msg__DebitRq * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__DebitRq__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__DebitRq__Sequence__init(v2x_msgs__msg__DebitRq__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DebitRq * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__DebitRq *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__DebitRq), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__DebitRq__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__DebitRq__fini(&data[i - 1]);
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
v2x_msgs__msg__DebitRq__Sequence__fini(v2x_msgs__msg__DebitRq__Sequence * array)
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
      v2x_msgs__msg__DebitRq__fini(&array->data[i]);
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

v2x_msgs__msg__DebitRq__Sequence *
v2x_msgs__msg__DebitRq__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DebitRq__Sequence * array = (v2x_msgs__msg__DebitRq__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__DebitRq__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__DebitRq__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__DebitRq__Sequence__destroy(v2x_msgs__msg__DebitRq__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__DebitRq__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__DebitRq__Sequence__are_equal(const v2x_msgs__msg__DebitRq__Sequence * lhs, const v2x_msgs__msg__DebitRq__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__DebitRq__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__DebitRq__Sequence__copy(
  const v2x_msgs__msg__DebitRq__Sequence * input,
  v2x_msgs__msg__DebitRq__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__DebitRq);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__DebitRq * data =
      (v2x_msgs__msg__DebitRq *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__DebitRq__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__DebitRq__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__DebitRq__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
