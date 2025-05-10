// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ReceiptServicePart.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/receipt_service_part__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `session_time`
#include "v2x_msgs/msg/detail/date_and_time__functions.h"
// Member `session_service_provider`
#include "v2x_msgs/msg/detail/provider__functions.h"
// Member `type_of_session`
#include "v2x_msgs/msg/detail/station_type__functions.h"
// Member `session_result_operational`
#include "v2x_msgs/msg/detail/result_op__functions.h"
// Member `session_result_financial`
#include "v2x_msgs/msg/detail/result_fin__functions.h"

bool
v2x_msgs__msg__ReceiptServicePart__init(v2x_msgs__msg__ReceiptServicePart * msg)
{
  if (!msg) {
    return false;
  }
  // session_time
  if (!v2x_msgs__msg__DateAndTime__init(&msg->session_time)) {
    v2x_msgs__msg__ReceiptServicePart__fini(msg);
    return false;
  }
  // session_service_provider
  if (!v2x_msgs__msg__Provider__init(&msg->session_service_provider)) {
    v2x_msgs__msg__ReceiptServicePart__fini(msg);
    return false;
  }
  // station_location
  // session_location
  // type_of_session
  if (!v2x_msgs__msg__StationType__init(&msg->type_of_session)) {
    v2x_msgs__msg__ReceiptServicePart__fini(msg);
    return false;
  }
  // session_result_operational
  if (!v2x_msgs__msg__ResultOp__init(&msg->session_result_operational)) {
    v2x_msgs__msg__ReceiptServicePart__fini(msg);
    return false;
  }
  // session_result_financial
  if (!v2x_msgs__msg__ResultFin__init(&msg->session_result_financial)) {
    v2x_msgs__msg__ReceiptServicePart__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ReceiptServicePart__fini(v2x_msgs__msg__ReceiptServicePart * msg)
{
  if (!msg) {
    return;
  }
  // session_time
  v2x_msgs__msg__DateAndTime__fini(&msg->session_time);
  // session_service_provider
  v2x_msgs__msg__Provider__fini(&msg->session_service_provider);
  // station_location
  // session_location
  // type_of_session
  v2x_msgs__msg__StationType__fini(&msg->type_of_session);
  // session_result_operational
  v2x_msgs__msg__ResultOp__fini(&msg->session_result_operational);
  // session_result_financial
  v2x_msgs__msg__ResultFin__fini(&msg->session_result_financial);
}

bool
v2x_msgs__msg__ReceiptServicePart__are_equal(const v2x_msgs__msg__ReceiptServicePart * lhs, const v2x_msgs__msg__ReceiptServicePart * rhs)
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
  // station_location
  if (lhs->station_location != rhs->station_location) {
    return false;
  }
  // session_location
  if (lhs->session_location != rhs->session_location) {
    return false;
  }
  // type_of_session
  if (!v2x_msgs__msg__StationType__are_equal(
      &(lhs->type_of_session), &(rhs->type_of_session)))
  {
    return false;
  }
  // session_result_operational
  if (!v2x_msgs__msg__ResultOp__are_equal(
      &(lhs->session_result_operational), &(rhs->session_result_operational)))
  {
    return false;
  }
  // session_result_financial
  if (!v2x_msgs__msg__ResultFin__are_equal(
      &(lhs->session_result_financial), &(rhs->session_result_financial)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ReceiptServicePart__copy(
  const v2x_msgs__msg__ReceiptServicePart * input,
  v2x_msgs__msg__ReceiptServicePart * output)
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
  // station_location
  output->station_location = input->station_location;
  // session_location
  output->session_location = input->session_location;
  // type_of_session
  if (!v2x_msgs__msg__StationType__copy(
      &(input->type_of_session), &(output->type_of_session)))
  {
    return false;
  }
  // session_result_operational
  if (!v2x_msgs__msg__ResultOp__copy(
      &(input->session_result_operational), &(output->session_result_operational)))
  {
    return false;
  }
  // session_result_financial
  if (!v2x_msgs__msg__ResultFin__copy(
      &(input->session_result_financial), &(output->session_result_financial)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ReceiptServicePart *
v2x_msgs__msg__ReceiptServicePart__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ReceiptServicePart * msg = (v2x_msgs__msg__ReceiptServicePart *)allocator.allocate(sizeof(v2x_msgs__msg__ReceiptServicePart), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ReceiptServicePart));
  bool success = v2x_msgs__msg__ReceiptServicePart__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ReceiptServicePart__destroy(v2x_msgs__msg__ReceiptServicePart * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ReceiptServicePart__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ReceiptServicePart__Sequence__init(v2x_msgs__msg__ReceiptServicePart__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ReceiptServicePart * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ReceiptServicePart *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ReceiptServicePart), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ReceiptServicePart__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ReceiptServicePart__fini(&data[i - 1]);
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
v2x_msgs__msg__ReceiptServicePart__Sequence__fini(v2x_msgs__msg__ReceiptServicePart__Sequence * array)
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
      v2x_msgs__msg__ReceiptServicePart__fini(&array->data[i]);
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

v2x_msgs__msg__ReceiptServicePart__Sequence *
v2x_msgs__msg__ReceiptServicePart__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ReceiptServicePart__Sequence * array = (v2x_msgs__msg__ReceiptServicePart__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ReceiptServicePart__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ReceiptServicePart__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ReceiptServicePart__Sequence__destroy(v2x_msgs__msg__ReceiptServicePart__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ReceiptServicePart__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ReceiptServicePart__Sequence__are_equal(const v2x_msgs__msg__ReceiptServicePart__Sequence * lhs, const v2x_msgs__msg__ReceiptServicePart__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ReceiptServicePart__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ReceiptServicePart__Sequence__copy(
  const v2x_msgs__msg__ReceiptServicePart__Sequence * input,
  v2x_msgs__msg__ReceiptServicePart__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ReceiptServicePart);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ReceiptServicePart * data =
      (v2x_msgs__msg__ReceiptServicePart *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ReceiptServicePart__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ReceiptServicePart__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ReceiptServicePart__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
