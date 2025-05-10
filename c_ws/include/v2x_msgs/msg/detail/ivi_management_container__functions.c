// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/IviManagementContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/ivi_management_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_provider_id`
#include "v2x_msgs/msg/detail/provider__functions.h"
// Member `ivi_identification_number`
#include "v2x_msgs/msg/detail/ivi_identification_number__functions.h"
// Member `time_stamp`
// Member `valid_from`
// Member `valid_to`
#include "v2x_msgs/msg/detail/timestamp_its__functions.h"
// Member `connected_ivi_structures`
#include "v2x_msgs/msg/detail/ivi_identification_numbers__functions.h"
// Member `ivi_status`
#include "v2x_msgs/msg/detail/ivi_status__functions.h"
// Member `connected_denms`
#include "v2x_msgs/msg/detail/connected_denms__functions.h"

bool
v2x_msgs__msg__IviManagementContainer__init(v2x_msgs__msg__IviManagementContainer * msg)
{
  if (!msg) {
    return false;
  }
  // service_provider_id
  if (!v2x_msgs__msg__Provider__init(&msg->service_provider_id)) {
    v2x_msgs__msg__IviManagementContainer__fini(msg);
    return false;
  }
  // ivi_identification_number
  if (!v2x_msgs__msg__IviIdentificationNumber__init(&msg->ivi_identification_number)) {
    v2x_msgs__msg__IviManagementContainer__fini(msg);
    return false;
  }
  // time_stamp_present
  msg->time_stamp_present = false;
  // time_stamp
  if (!v2x_msgs__msg__TimestampIts__init(&msg->time_stamp)) {
    v2x_msgs__msg__IviManagementContainer__fini(msg);
    return false;
  }
  // valid_from_present
  msg->valid_from_present = false;
  // valid_from
  if (!v2x_msgs__msg__TimestampIts__init(&msg->valid_from)) {
    v2x_msgs__msg__IviManagementContainer__fini(msg);
    return false;
  }
  // valid_to_present
  msg->valid_to_present = false;
  // valid_to
  if (!v2x_msgs__msg__TimestampIts__init(&msg->valid_to)) {
    v2x_msgs__msg__IviManagementContainer__fini(msg);
    return false;
  }
  // connected_ivi_structures_present
  msg->connected_ivi_structures_present = false;
  // connected_ivi_structures
  if (!v2x_msgs__msg__IviIdentificationNumbers__init(&msg->connected_ivi_structures)) {
    v2x_msgs__msg__IviManagementContainer__fini(msg);
    return false;
  }
  // ivi_status
  if (!v2x_msgs__msg__IviStatus__init(&msg->ivi_status)) {
    v2x_msgs__msg__IviManagementContainer__fini(msg);
    return false;
  }
  // connected_denms_present
  msg->connected_denms_present = false;
  // connected_denms
  if (!v2x_msgs__msg__ConnectedDenms__init(&msg->connected_denms)) {
    v2x_msgs__msg__IviManagementContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__IviManagementContainer__fini(v2x_msgs__msg__IviManagementContainer * msg)
{
  if (!msg) {
    return;
  }
  // service_provider_id
  v2x_msgs__msg__Provider__fini(&msg->service_provider_id);
  // ivi_identification_number
  v2x_msgs__msg__IviIdentificationNumber__fini(&msg->ivi_identification_number);
  // time_stamp_present
  // time_stamp
  v2x_msgs__msg__TimestampIts__fini(&msg->time_stamp);
  // valid_from_present
  // valid_from
  v2x_msgs__msg__TimestampIts__fini(&msg->valid_from);
  // valid_to_present
  // valid_to
  v2x_msgs__msg__TimestampIts__fini(&msg->valid_to);
  // connected_ivi_structures_present
  // connected_ivi_structures
  v2x_msgs__msg__IviIdentificationNumbers__fini(&msg->connected_ivi_structures);
  // ivi_status
  v2x_msgs__msg__IviStatus__fini(&msg->ivi_status);
  // connected_denms_present
  // connected_denms
  v2x_msgs__msg__ConnectedDenms__fini(&msg->connected_denms);
}

bool
v2x_msgs__msg__IviManagementContainer__are_equal(const v2x_msgs__msg__IviManagementContainer * lhs, const v2x_msgs__msg__IviManagementContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // service_provider_id
  if (!v2x_msgs__msg__Provider__are_equal(
      &(lhs->service_provider_id), &(rhs->service_provider_id)))
  {
    return false;
  }
  // ivi_identification_number
  if (!v2x_msgs__msg__IviIdentificationNumber__are_equal(
      &(lhs->ivi_identification_number), &(rhs->ivi_identification_number)))
  {
    return false;
  }
  // time_stamp_present
  if (lhs->time_stamp_present != rhs->time_stamp_present) {
    return false;
  }
  // time_stamp
  if (!v2x_msgs__msg__TimestampIts__are_equal(
      &(lhs->time_stamp), &(rhs->time_stamp)))
  {
    return false;
  }
  // valid_from_present
  if (lhs->valid_from_present != rhs->valid_from_present) {
    return false;
  }
  // valid_from
  if (!v2x_msgs__msg__TimestampIts__are_equal(
      &(lhs->valid_from), &(rhs->valid_from)))
  {
    return false;
  }
  // valid_to_present
  if (lhs->valid_to_present != rhs->valid_to_present) {
    return false;
  }
  // valid_to
  if (!v2x_msgs__msg__TimestampIts__are_equal(
      &(lhs->valid_to), &(rhs->valid_to)))
  {
    return false;
  }
  // connected_ivi_structures_present
  if (lhs->connected_ivi_structures_present != rhs->connected_ivi_structures_present) {
    return false;
  }
  // connected_ivi_structures
  if (!v2x_msgs__msg__IviIdentificationNumbers__are_equal(
      &(lhs->connected_ivi_structures), &(rhs->connected_ivi_structures)))
  {
    return false;
  }
  // ivi_status
  if (!v2x_msgs__msg__IviStatus__are_equal(
      &(lhs->ivi_status), &(rhs->ivi_status)))
  {
    return false;
  }
  // connected_denms_present
  if (lhs->connected_denms_present != rhs->connected_denms_present) {
    return false;
  }
  // connected_denms
  if (!v2x_msgs__msg__ConnectedDenms__are_equal(
      &(lhs->connected_denms), &(rhs->connected_denms)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__IviManagementContainer__copy(
  const v2x_msgs__msg__IviManagementContainer * input,
  v2x_msgs__msg__IviManagementContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // service_provider_id
  if (!v2x_msgs__msg__Provider__copy(
      &(input->service_provider_id), &(output->service_provider_id)))
  {
    return false;
  }
  // ivi_identification_number
  if (!v2x_msgs__msg__IviIdentificationNumber__copy(
      &(input->ivi_identification_number), &(output->ivi_identification_number)))
  {
    return false;
  }
  // time_stamp_present
  output->time_stamp_present = input->time_stamp_present;
  // time_stamp
  if (!v2x_msgs__msg__TimestampIts__copy(
      &(input->time_stamp), &(output->time_stamp)))
  {
    return false;
  }
  // valid_from_present
  output->valid_from_present = input->valid_from_present;
  // valid_from
  if (!v2x_msgs__msg__TimestampIts__copy(
      &(input->valid_from), &(output->valid_from)))
  {
    return false;
  }
  // valid_to_present
  output->valid_to_present = input->valid_to_present;
  // valid_to
  if (!v2x_msgs__msg__TimestampIts__copy(
      &(input->valid_to), &(output->valid_to)))
  {
    return false;
  }
  // connected_ivi_structures_present
  output->connected_ivi_structures_present = input->connected_ivi_structures_present;
  // connected_ivi_structures
  if (!v2x_msgs__msg__IviIdentificationNumbers__copy(
      &(input->connected_ivi_structures), &(output->connected_ivi_structures)))
  {
    return false;
  }
  // ivi_status
  if (!v2x_msgs__msg__IviStatus__copy(
      &(input->ivi_status), &(output->ivi_status)))
  {
    return false;
  }
  // connected_denms_present
  output->connected_denms_present = input->connected_denms_present;
  // connected_denms
  if (!v2x_msgs__msg__ConnectedDenms__copy(
      &(input->connected_denms), &(output->connected_denms)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__IviManagementContainer *
v2x_msgs__msg__IviManagementContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IviManagementContainer * msg = (v2x_msgs__msg__IviManagementContainer *)allocator.allocate(sizeof(v2x_msgs__msg__IviManagementContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__IviManagementContainer));
  bool success = v2x_msgs__msg__IviManagementContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__IviManagementContainer__destroy(v2x_msgs__msg__IviManagementContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__IviManagementContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__IviManagementContainer__Sequence__init(v2x_msgs__msg__IviManagementContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IviManagementContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__IviManagementContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__IviManagementContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__IviManagementContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__IviManagementContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__IviManagementContainer__Sequence__fini(v2x_msgs__msg__IviManagementContainer__Sequence * array)
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
      v2x_msgs__msg__IviManagementContainer__fini(&array->data[i]);
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

v2x_msgs__msg__IviManagementContainer__Sequence *
v2x_msgs__msg__IviManagementContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IviManagementContainer__Sequence * array = (v2x_msgs__msg__IviManagementContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__IviManagementContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__IviManagementContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__IviManagementContainer__Sequence__destroy(v2x_msgs__msg__IviManagementContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__IviManagementContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__IviManagementContainer__Sequence__are_equal(const v2x_msgs__msg__IviManagementContainer__Sequence * lhs, const v2x_msgs__msg__IviManagementContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__IviManagementContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__IviManagementContainer__Sequence__copy(
  const v2x_msgs__msg__IviManagementContainer__Sequence * input,
  v2x_msgs__msg__IviManagementContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__IviManagementContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__IviManagementContainer * data =
      (v2x_msgs__msg__IviManagementContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__IviManagementContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__IviManagementContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__IviManagementContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
