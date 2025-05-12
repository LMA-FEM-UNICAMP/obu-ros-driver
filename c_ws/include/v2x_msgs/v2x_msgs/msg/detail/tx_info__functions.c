// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/TxInfo.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/tx_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `security`
#include "v2x_msgs/msg/detail/tx_security__functions.h"
// Member `position_info`
#include "v2x_msgs/msg/detail/position_info__functions.h"
// Member `area_type_info`
#include "v2x_msgs/msg/detail/area_type_info__functions.h"

bool
v2x_msgs__msg__TxInfo__init(v2x_msgs__msg__TxInfo * msg)
{
  if (!msg) {
    return false;
  }
  // dest_port
  // data_rate
  // tx_power
  // traffic_class_id
  // security
  if (!v2x_msgs__msg__TxSecurity__init(&msg->security)) {
    v2x_msgs__msg__TxInfo__fini(msg);
    return false;
  }
  // position_info
  if (!v2x_msgs__msg__PositionInfo__init(&msg->position_info)) {
    v2x_msgs__msg__TxInfo__fini(msg);
    return false;
  }
  // area_type_info
  if (!v2x_msgs__msg__AreaTypeInfo__init(&msg->area_type_info)) {
    v2x_msgs__msg__TxInfo__fini(msg);
    return false;
  }
  // dest_port_present
  // data_rate_present
  // tx_power_present
  // traffic_class_idpresent
  // security_present
  // position_info_present
  // area_type_info_present
  return true;
}

void
v2x_msgs__msg__TxInfo__fini(v2x_msgs__msg__TxInfo * msg)
{
  if (!msg) {
    return;
  }
  // dest_port
  // data_rate
  // tx_power
  // traffic_class_id
  // security
  v2x_msgs__msg__TxSecurity__fini(&msg->security);
  // position_info
  v2x_msgs__msg__PositionInfo__fini(&msg->position_info);
  // area_type_info
  v2x_msgs__msg__AreaTypeInfo__fini(&msg->area_type_info);
  // dest_port_present
  // data_rate_present
  // tx_power_present
  // traffic_class_idpresent
  // security_present
  // position_info_present
  // area_type_info_present
}

bool
v2x_msgs__msg__TxInfo__are_equal(const v2x_msgs__msg__TxInfo * lhs, const v2x_msgs__msg__TxInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dest_port
  if (lhs->dest_port != rhs->dest_port) {
    return false;
  }
  // data_rate
  if (lhs->data_rate != rhs->data_rate) {
    return false;
  }
  // tx_power
  if (lhs->tx_power != rhs->tx_power) {
    return false;
  }
  // traffic_class_id
  if (lhs->traffic_class_id != rhs->traffic_class_id) {
    return false;
  }
  // security
  if (!v2x_msgs__msg__TxSecurity__are_equal(
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
  // dest_port_present
  if (lhs->dest_port_present != rhs->dest_port_present) {
    return false;
  }
  // data_rate_present
  if (lhs->data_rate_present != rhs->data_rate_present) {
    return false;
  }
  // tx_power_present
  if (lhs->tx_power_present != rhs->tx_power_present) {
    return false;
  }
  // traffic_class_idpresent
  if (lhs->traffic_class_idpresent != rhs->traffic_class_idpresent) {
    return false;
  }
  // security_present
  if (lhs->security_present != rhs->security_present) {
    return false;
  }
  // position_info_present
  if (lhs->position_info_present != rhs->position_info_present) {
    return false;
  }
  // area_type_info_present
  if (lhs->area_type_info_present != rhs->area_type_info_present) {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__TxInfo__copy(
  const v2x_msgs__msg__TxInfo * input,
  v2x_msgs__msg__TxInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // dest_port
  output->dest_port = input->dest_port;
  // data_rate
  output->data_rate = input->data_rate;
  // tx_power
  output->tx_power = input->tx_power;
  // traffic_class_id
  output->traffic_class_id = input->traffic_class_id;
  // security
  if (!v2x_msgs__msg__TxSecurity__copy(
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
  // dest_port_present
  output->dest_port_present = input->dest_port_present;
  // data_rate_present
  output->data_rate_present = input->data_rate_present;
  // tx_power_present
  output->tx_power_present = input->tx_power_present;
  // traffic_class_idpresent
  output->traffic_class_idpresent = input->traffic_class_idpresent;
  // security_present
  output->security_present = input->security_present;
  // position_info_present
  output->position_info_present = input->position_info_present;
  // area_type_info_present
  output->area_type_info_present = input->area_type_info_present;
  return true;
}

v2x_msgs__msg__TxInfo *
v2x_msgs__msg__TxInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TxInfo * msg = (v2x_msgs__msg__TxInfo *)allocator.allocate(sizeof(v2x_msgs__msg__TxInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__TxInfo));
  bool success = v2x_msgs__msg__TxInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__TxInfo__destroy(v2x_msgs__msg__TxInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__TxInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__TxInfo__Sequence__init(v2x_msgs__msg__TxInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TxInfo * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__TxInfo *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__TxInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__TxInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__TxInfo__fini(&data[i - 1]);
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
v2x_msgs__msg__TxInfo__Sequence__fini(v2x_msgs__msg__TxInfo__Sequence * array)
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
      v2x_msgs__msg__TxInfo__fini(&array->data[i]);
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

v2x_msgs__msg__TxInfo__Sequence *
v2x_msgs__msg__TxInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TxInfo__Sequence * array = (v2x_msgs__msg__TxInfo__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__TxInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__TxInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__TxInfo__Sequence__destroy(v2x_msgs__msg__TxInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__TxInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__TxInfo__Sequence__are_equal(const v2x_msgs__msg__TxInfo__Sequence * lhs, const v2x_msgs__msg__TxInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__TxInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__TxInfo__Sequence__copy(
  const v2x_msgs__msg__TxInfo__Sequence * input,
  v2x_msgs__msg__TxInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__TxInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__TxInfo * data =
      (v2x_msgs__msg__TxInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__TxInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__TxInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__TxInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
