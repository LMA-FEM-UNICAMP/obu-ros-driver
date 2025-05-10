// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RxInfo.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/rx_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "v2x_msgs/msg/detail/time_val__functions.h"
// Member `security`
#include "v2x_msgs/msg/detail/rx_security__functions.h"
// Member `position_info`
#include "v2x_msgs/msg/detail/position_info__functions.h"
// Member `area_type_info`
#include "v2x_msgs/msg/detail/area_type_info__functions.h"
// Member `source_mac_address`
#include "v2x_msgs/msg/detail/mac_address__functions.h"

bool
v2x_msgs__msg__RxInfo__init(v2x_msgs__msg__RxInfo * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!v2x_msgs__msg__TimeVal__init(&msg->timestamp)) {
    v2x_msgs__msg__RxInfo__fini(msg);
    return false;
  }
  // rssi
  // data_rate
  // traffic_class_id
  // remain_hop_limit
  // security
  if (!v2x_msgs__msg__RxSecurity__init(&msg->security)) {
    v2x_msgs__msg__RxInfo__fini(msg);
    return false;
  }
  // position_info
  if (!v2x_msgs__msg__PositionInfo__init(&msg->position_info)) {
    v2x_msgs__msg__RxInfo__fini(msg);
    return false;
  }
  // area_type_info
  if (!v2x_msgs__msg__AreaTypeInfo__init(&msg->area_type_info)) {
    v2x_msgs__msg__RxInfo__fini(msg);
    return false;
  }
  // source_mac_address
  if (!v2x_msgs__msg__MACAddress__init(&msg->source_mac_address)) {
    v2x_msgs__msg__RxInfo__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RxInfo__fini(v2x_msgs__msg__RxInfo * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  v2x_msgs__msg__TimeVal__fini(&msg->timestamp);
  // rssi
  // data_rate
  // traffic_class_id
  // remain_hop_limit
  // security
  v2x_msgs__msg__RxSecurity__fini(&msg->security);
  // position_info
  v2x_msgs__msg__PositionInfo__fini(&msg->position_info);
  // area_type_info
  v2x_msgs__msg__AreaTypeInfo__fini(&msg->area_type_info);
  // source_mac_address
  v2x_msgs__msg__MACAddress__fini(&msg->source_mac_address);
}

bool
v2x_msgs__msg__RxInfo__are_equal(const v2x_msgs__msg__RxInfo * lhs, const v2x_msgs__msg__RxInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!v2x_msgs__msg__TimeVal__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // rssi
  if (lhs->rssi != rhs->rssi) {
    return false;
  }
  // data_rate
  if (lhs->data_rate != rhs->data_rate) {
    return false;
  }
  // traffic_class_id
  if (lhs->traffic_class_id != rhs->traffic_class_id) {
    return false;
  }
  // remain_hop_limit
  if (lhs->remain_hop_limit != rhs->remain_hop_limit) {
    return false;
  }
  // security
  if (!v2x_msgs__msg__RxSecurity__are_equal(
      &(lhs->security), &(rhs->security)))
  {
    return false;
  }
  // position_info
  if (!v2x_msgs__msg__PositionInfo__are_equal(
      &(lhs->position_info), &(rhs->position_info)))
  {
    return false;
  }
  // area_type_info
  if (!v2x_msgs__msg__AreaTypeInfo__are_equal(
      &(lhs->area_type_info), &(rhs->area_type_info)))
  {
    return false;
  }
  // source_mac_address
  if (!v2x_msgs__msg__MACAddress__are_equal(
      &(lhs->source_mac_address), &(rhs->source_mac_address)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RxInfo__copy(
  const v2x_msgs__msg__RxInfo * input,
  v2x_msgs__msg__RxInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!v2x_msgs__msg__TimeVal__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // rssi
  output->rssi = input->rssi;
  // data_rate
  output->data_rate = input->data_rate;
  // traffic_class_id
  output->traffic_class_id = input->traffic_class_id;
  // remain_hop_limit
  output->remain_hop_limit = input->remain_hop_limit;
  // security
  if (!v2x_msgs__msg__RxSecurity__copy(
      &(input->security), &(output->security)))
  {
    return false;
  }
  // position_info
  if (!v2x_msgs__msg__PositionInfo__copy(
      &(input->position_info), &(output->position_info)))
  {
    return false;
  }
  // area_type_info
  if (!v2x_msgs__msg__AreaTypeInfo__copy(
      &(input->area_type_info), &(output->area_type_info)))
  {
    return false;
  }
  // source_mac_address
  if (!v2x_msgs__msg__MACAddress__copy(
      &(input->source_mac_address), &(output->source_mac_address)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RxInfo *
v2x_msgs__msg__RxInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RxInfo * msg = (v2x_msgs__msg__RxInfo *)allocator.allocate(sizeof(v2x_msgs__msg__RxInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RxInfo));
  bool success = v2x_msgs__msg__RxInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RxInfo__destroy(v2x_msgs__msg__RxInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RxInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RxInfo__Sequence__init(v2x_msgs__msg__RxInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RxInfo * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RxInfo *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RxInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RxInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RxInfo__fini(&data[i - 1]);
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
v2x_msgs__msg__RxInfo__Sequence__fini(v2x_msgs__msg__RxInfo__Sequence * array)
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
      v2x_msgs__msg__RxInfo__fini(&array->data[i]);
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

v2x_msgs__msg__RxInfo__Sequence *
v2x_msgs__msg__RxInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RxInfo__Sequence * array = (v2x_msgs__msg__RxInfo__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RxInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RxInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RxInfo__Sequence__destroy(v2x_msgs__msg__RxInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RxInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RxInfo__Sequence__are_equal(const v2x_msgs__msg__RxInfo__Sequence * lhs, const v2x_msgs__msg__RxInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RxInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RxInfo__Sequence__copy(
  const v2x_msgs__msg__RxInfo__Sequence * input,
  v2x_msgs__msg__RxInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RxInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RxInfo * data =
      (v2x_msgs__msg__RxInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RxInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RxInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RxInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
