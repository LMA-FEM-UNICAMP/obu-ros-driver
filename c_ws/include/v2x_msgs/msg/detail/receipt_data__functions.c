// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ReceiptData.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/receipt_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `session_time`
#include "v2x_msgs/msg/detail/date_and_time__functions.h"
// Member `session_service_provider`
// Member `session_contract_provider`
#include "v2x_msgs/msg/detail/provider__functions.h"
// Member `location_of_station`
#include "v2x_msgs/msg/detail/int2__functions.h"
// Member `session_location`
#include "v2x_msgs/msg/detail/session_location__functions.h"
// Member `session_type`
// Member `session_tariff_class`
// Member `session_claimed_class`
#include "v2x_msgs/msg/detail/int1__functions.h"
// Member `session_result`
#include "v2x_msgs/msg/detail/result_op__functions.h"
// Member `session_fee`
#include "v2x_msgs/msg/detail/payment_fee__functions.h"
// Member `session_type_of_contract`
// Member `receipt_data_authenticator`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
v2x_msgs__msg__ReceiptData__init(v2x_msgs__msg__ReceiptData * msg)
{
  if (!msg) {
    return false;
  }
  // session_time
  if (!v2x_msgs__msg__DateAndTime__init(&msg->session_time)) {
    v2x_msgs__msg__ReceiptData__fini(msg);
    return false;
  }
  // session_service_provider
  if (!v2x_msgs__msg__Provider__init(&msg->session_service_provider)) {
    v2x_msgs__msg__ReceiptData__fini(msg);
    return false;
  }
  // location_of_station
  if (!v2x_msgs__msg__Int2__init(&msg->location_of_station)) {
    v2x_msgs__msg__ReceiptData__fini(msg);
    return false;
  }
  // session_location
  if (!v2x_msgs__msg__SessionLocation__init(&msg->session_location)) {
    v2x_msgs__msg__ReceiptData__fini(msg);
    return false;
  }
  // session_type
  if (!v2x_msgs__msg__Int1__init(&msg->session_type)) {
    v2x_msgs__msg__ReceiptData__fini(msg);
    return false;
  }
  // session_result
  if (!v2x_msgs__msg__ResultOp__init(&msg->session_result)) {
    v2x_msgs__msg__ReceiptData__fini(msg);
    return false;
  }
  // session_tariff_class
  if (!v2x_msgs__msg__Int1__init(&msg->session_tariff_class)) {
    v2x_msgs__msg__ReceiptData__fini(msg);
    return false;
  }
  // session_claimed_class
  if (!v2x_msgs__msg__Int1__init(&msg->session_claimed_class)) {
    v2x_msgs__msg__ReceiptData__fini(msg);
    return false;
  }
  // session_fee
  if (!v2x_msgs__msg__PaymentFee__init(&msg->session_fee)) {
    v2x_msgs__msg__ReceiptData__fini(msg);
    return false;
  }
  // session_contract_provider
  if (!v2x_msgs__msg__Provider__init(&msg->session_contract_provider)) {
    v2x_msgs__msg__ReceiptData__fini(msg);
    return false;
  }
  // session_type_of_contract
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->session_type_of_contract, 0)) {
    v2x_msgs__msg__ReceiptData__fini(msg);
    return false;
  }
  // session_context_version
  // receipt_data_authenticator
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->receipt_data_authenticator, 0)) {
    v2x_msgs__msg__ReceiptData__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ReceiptData__fini(v2x_msgs__msg__ReceiptData * msg)
{
  if (!msg) {
    return;
  }
  // session_time
  v2x_msgs__msg__DateAndTime__fini(&msg->session_time);
  // session_service_provider
  v2x_msgs__msg__Provider__fini(&msg->session_service_provider);
  // location_of_station
  v2x_msgs__msg__Int2__fini(&msg->location_of_station);
  // session_location
  v2x_msgs__msg__SessionLocation__fini(&msg->session_location);
  // session_type
  v2x_msgs__msg__Int1__fini(&msg->session_type);
  // session_result
  v2x_msgs__msg__ResultOp__fini(&msg->session_result);
  // session_tariff_class
  v2x_msgs__msg__Int1__fini(&msg->session_tariff_class);
  // session_claimed_class
  v2x_msgs__msg__Int1__fini(&msg->session_claimed_class);
  // session_fee
  v2x_msgs__msg__PaymentFee__fini(&msg->session_fee);
  // session_contract_provider
  v2x_msgs__msg__Provider__fini(&msg->session_contract_provider);
  // session_type_of_contract
  rosidl_runtime_c__int64__Sequence__fini(&msg->session_type_of_contract);
  // session_context_version
  // receipt_data_authenticator
  rosidl_runtime_c__int64__Sequence__fini(&msg->receipt_data_authenticator);
}

bool
v2x_msgs__msg__ReceiptData__are_equal(const v2x_msgs__msg__ReceiptData * lhs, const v2x_msgs__msg__ReceiptData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // session_time
  if (!v2x_msgs__msg__DateAndTime__are_equal(
      &(lhs->session_time), &(rhs->session_time)))
  {
    return false;
  }
  // session_service_provider
  if (!v2x_msgs__msg__Provider__are_equal(
      &(lhs->session_service_provider), &(rhs->session_service_provider)))
  {
    return false;
  }
  // location_of_station
  if (!v2x_msgs__msg__Int2__are_equal(
      &(lhs->location_of_station), &(rhs->location_of_station)))
  {
    return false;
  }
  // session_location
  if (!v2x_msgs__msg__SessionLocation__are_equal(
      &(lhs->session_location), &(rhs->session_location)))
  {
    return false;
  }
  // session_type
  if (!v2x_msgs__msg__Int1__are_equal(
      &(lhs->session_type), &(rhs->session_type)))
  {
    return false;
  }
  // session_result
  if (!v2x_msgs__msg__ResultOp__are_equal(
      &(lhs->session_result), &(rhs->session_result)))
  {
    return false;
  }
  // session_tariff_class
  if (!v2x_msgs__msg__Int1__are_equal(
      &(lhs->session_tariff_class), &(rhs->session_tariff_class)))
  {
    return false;
  }
  // session_claimed_class
  if (!v2x_msgs__msg__Int1__are_equal(
      &(lhs->session_claimed_class), &(rhs->session_claimed_class)))
  {
    return false;
  }
  // session_fee
  if (!v2x_msgs__msg__PaymentFee__are_equal(
      &(lhs->session_fee), &(rhs->session_fee)))
  {
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
  // session_context_version
  if (lhs->session_context_version != rhs->session_context_version) {
    return false;
  }
  // receipt_data_authenticator
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->receipt_data_authenticator), &(rhs->receipt_data_authenticator)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ReceiptData__copy(
  const v2x_msgs__msg__ReceiptData * input,
  v2x_msgs__msg__ReceiptData * output)
{
  if (!input || !output) {
    return false;
  }
  // session_time
  if (!v2x_msgs__msg__DateAndTime__copy(
      &(input->session_time), &(output->session_time)))
  {
    return false;
  }
  // session_service_provider
  if (!v2x_msgs__msg__Provider__copy(
      &(input->session_service_provider), &(output->session_service_provider)))
  {
    return false;
  }
  // location_of_station
  if (!v2x_msgs__msg__Int2__copy(
      &(input->location_of_station), &(output->location_of_station)))
  {
    return false;
  }
  // session_location
  if (!v2x_msgs__msg__SessionLocation__copy(
      &(input->session_location), &(output->session_location)))
  {
    return false;
  }
  // session_type
  if (!v2x_msgs__msg__Int1__copy(
      &(input->session_type), &(output->session_type)))
  {
    return false;
  }
  // session_result
  if (!v2x_msgs__msg__ResultOp__copy(
      &(input->session_result), &(output->session_result)))
  {
    return false;
  }
  // session_tariff_class
  if (!v2x_msgs__msg__Int1__copy(
      &(input->session_tariff_class), &(output->session_tariff_class)))
  {
    return false;
  }
  // session_claimed_class
  if (!v2x_msgs__msg__Int1__copy(
      &(input->session_claimed_class), &(output->session_claimed_class)))
  {
    return false;
  }
  // session_fee
  if (!v2x_msgs__msg__PaymentFee__copy(
      &(input->session_fee), &(output->session_fee)))
  {
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
  // session_context_version
  output->session_context_version = input->session_context_version;
  // receipt_data_authenticator
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->receipt_data_authenticator), &(output->receipt_data_authenticator)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ReceiptData *
v2x_msgs__msg__ReceiptData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ReceiptData * msg = (v2x_msgs__msg__ReceiptData *)allocator.allocate(sizeof(v2x_msgs__msg__ReceiptData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ReceiptData));
  bool success = v2x_msgs__msg__ReceiptData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ReceiptData__destroy(v2x_msgs__msg__ReceiptData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ReceiptData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ReceiptData__Sequence__init(v2x_msgs__msg__ReceiptData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ReceiptData * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ReceiptData *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ReceiptData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ReceiptData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ReceiptData__fini(&data[i - 1]);
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
v2x_msgs__msg__ReceiptData__Sequence__fini(v2x_msgs__msg__ReceiptData__Sequence * array)
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
      v2x_msgs__msg__ReceiptData__fini(&array->data[i]);
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

v2x_msgs__msg__ReceiptData__Sequence *
v2x_msgs__msg__ReceiptData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ReceiptData__Sequence * array = (v2x_msgs__msg__ReceiptData__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ReceiptData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ReceiptData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ReceiptData__Sequence__destroy(v2x_msgs__msg__ReceiptData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ReceiptData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ReceiptData__Sequence__are_equal(const v2x_msgs__msg__ReceiptData__Sequence * lhs, const v2x_msgs__msg__ReceiptData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ReceiptData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ReceiptData__Sequence__copy(
  const v2x_msgs__msg__ReceiptData__Sequence * input,
  v2x_msgs__msg__ReceiptData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ReceiptData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ReceiptData * data =
      (v2x_msgs__msg__ReceiptData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ReceiptData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ReceiptData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ReceiptData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
