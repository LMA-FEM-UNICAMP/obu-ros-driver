// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/PaymentFee.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/payment_fee__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `payment_fee_amount`
#include "v2x_msgs/msg/detail/int2__functions.h"
// Member `payment_fee_unit`
#include "v2x_msgs/msg/detail/pay_unit__functions.h"

bool
v2x_msgs__msg__PaymentFee__init(v2x_msgs__msg__PaymentFee * msg)
{
  if (!msg) {
    return false;
  }
  // payment_fee_amount
  if (!v2x_msgs__msg__Int2__init(&msg->payment_fee_amount)) {
    v2x_msgs__msg__PaymentFee__fini(msg);
    return false;
  }
  // payment_fee_unit
  if (!v2x_msgs__msg__PayUnit__init(&msg->payment_fee_unit)) {
    v2x_msgs__msg__PaymentFee__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__PaymentFee__fini(v2x_msgs__msg__PaymentFee * msg)
{
  if (!msg) {
    return;
  }
  // payment_fee_amount
  v2x_msgs__msg__Int2__fini(&msg->payment_fee_amount);
  // payment_fee_unit
  v2x_msgs__msg__PayUnit__fini(&msg->payment_fee_unit);
}

bool
v2x_msgs__msg__PaymentFee__are_equal(const v2x_msgs__msg__PaymentFee * lhs, const v2x_msgs__msg__PaymentFee * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // payment_fee_amount
  if (!v2x_msgs__msg__Int2__are_equal(
      &(lhs->payment_fee_amount), &(rhs->payment_fee_amount)))
  {
    return false;
  }
  // payment_fee_unit
  if (!v2x_msgs__msg__PayUnit__are_equal(
      &(lhs->payment_fee_unit), &(rhs->payment_fee_unit)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__PaymentFee__copy(
  const v2x_msgs__msg__PaymentFee * input,
  v2x_msgs__msg__PaymentFee * output)
{
  if (!input || !output) {
    return false;
  }
  // payment_fee_amount
  if (!v2x_msgs__msg__Int2__copy(
      &(input->payment_fee_amount), &(output->payment_fee_amount)))
  {
    return false;
  }
  // payment_fee_unit
  if (!v2x_msgs__msg__PayUnit__copy(
      &(input->payment_fee_unit), &(output->payment_fee_unit)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__PaymentFee *
v2x_msgs__msg__PaymentFee__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PaymentFee * msg = (v2x_msgs__msg__PaymentFee *)allocator.allocate(sizeof(v2x_msgs__msg__PaymentFee), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__PaymentFee));
  bool success = v2x_msgs__msg__PaymentFee__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__PaymentFee__destroy(v2x_msgs__msg__PaymentFee * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__PaymentFee__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__PaymentFee__Sequence__init(v2x_msgs__msg__PaymentFee__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PaymentFee * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__PaymentFee *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__PaymentFee), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__PaymentFee__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__PaymentFee__fini(&data[i - 1]);
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
v2x_msgs__msg__PaymentFee__Sequence__fini(v2x_msgs__msg__PaymentFee__Sequence * array)
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
      v2x_msgs__msg__PaymentFee__fini(&array->data[i]);
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

v2x_msgs__msg__PaymentFee__Sequence *
v2x_msgs__msg__PaymentFee__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PaymentFee__Sequence * array = (v2x_msgs__msg__PaymentFee__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__PaymentFee__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__PaymentFee__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__PaymentFee__Sequence__destroy(v2x_msgs__msg__PaymentFee__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__PaymentFee__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__PaymentFee__Sequence__are_equal(const v2x_msgs__msg__PaymentFee__Sequence * lhs, const v2x_msgs__msg__PaymentFee__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__PaymentFee__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__PaymentFee__Sequence__copy(
  const v2x_msgs__msg__PaymentFee__Sequence * input,
  v2x_msgs__msg__PaymentFee__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__PaymentFee);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__PaymentFee * data =
      (v2x_msgs__msg__PaymentFee *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__PaymentFee__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__PaymentFee__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__PaymentFee__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
