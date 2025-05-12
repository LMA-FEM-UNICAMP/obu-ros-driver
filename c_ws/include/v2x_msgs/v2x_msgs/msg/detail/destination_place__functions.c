// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/DestinationPlace.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/destination_place__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `dest_type`
#include "v2x_msgs/msg/detail/destination_type__functions.h"
// Member `dest_blob`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `place_name_text`
#include "rosidl_runtime_c/string_functions.h"

bool
v2x_msgs__msg__DestinationPlace__init(v2x_msgs__msg__DestinationPlace * msg)
{
  if (!msg) {
    return false;
  }
  // dest_type
  if (!v2x_msgs__msg__DestinationType__init(&msg->dest_type)) {
    v2x_msgs__msg__DestinationPlace__fini(msg);
    return false;
  }
  // dest_rscode_present
  msg->dest_rscode_present = false;
  // dest_blob_present
  msg->dest_blob_present = false;
  // dest_blob
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->dest_blob, 0)) {
    v2x_msgs__msg__DestinationPlace__fini(msg);
    return false;
  }
  // place_name_identification_present
  msg->place_name_identification_present = false;
  // place_name_identification
  // place_name_text_present
  msg->place_name_text_present = false;
  // place_name_text
  if (!rosidl_runtime_c__String__init(&msg->place_name_text)) {
    v2x_msgs__msg__DestinationPlace__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__DestinationPlace__fini(v2x_msgs__msg__DestinationPlace * msg)
{
  if (!msg) {
    return;
  }
  // dest_type
  v2x_msgs__msg__DestinationType__fini(&msg->dest_type);
  // dest_rscode_present
  // dest_blob_present
  // dest_blob
  rosidl_runtime_c__int64__Sequence__fini(&msg->dest_blob);
  // place_name_identification_present
  // place_name_identification
  // place_name_text_present
  // place_name_text
  rosidl_runtime_c__String__fini(&msg->place_name_text);
}

bool
v2x_msgs__msg__DestinationPlace__are_equal(const v2x_msgs__msg__DestinationPlace * lhs, const v2x_msgs__msg__DestinationPlace * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dest_type
  if (!v2x_msgs__msg__DestinationType__are_equal(
      &(lhs->dest_type), &(rhs->dest_type)))
  {
    return false;
  }
  // dest_rscode_present
  if (lhs->dest_rscode_present != rhs->dest_rscode_present) {
    return false;
  }
  // dest_blob_present
  if (lhs->dest_blob_present != rhs->dest_blob_present) {
    return false;
  }
  // dest_blob
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->dest_blob), &(rhs->dest_blob)))
  {
    return false;
  }
  // place_name_identification_present
  if (lhs->place_name_identification_present != rhs->place_name_identification_present) {
    return false;
  }
  // place_name_identification
  if (lhs->place_name_identification != rhs->place_name_identification) {
    return false;
  }
  // place_name_text_present
  if (lhs->place_name_text_present != rhs->place_name_text_present) {
    return false;
  }
  // place_name_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->place_name_text), &(rhs->place_name_text)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__DestinationPlace__copy(
  const v2x_msgs__msg__DestinationPlace * input,
  v2x_msgs__msg__DestinationPlace * output)
{
  if (!input || !output) {
    return false;
  }
  // dest_type
  if (!v2x_msgs__msg__DestinationType__copy(
      &(input->dest_type), &(output->dest_type)))
  {
    return false;
  }
  // dest_rscode_present
  output->dest_rscode_present = input->dest_rscode_present;
  // dest_blob_present
  output->dest_blob_present = input->dest_blob_present;
  // dest_blob
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->dest_blob), &(output->dest_blob)))
  {
    return false;
  }
  // place_name_identification_present
  output->place_name_identification_present = input->place_name_identification_present;
  // place_name_identification
  output->place_name_identification = input->place_name_identification;
  // place_name_text_present
  output->place_name_text_present = input->place_name_text_present;
  // place_name_text
  if (!rosidl_runtime_c__String__copy(
      &(input->place_name_text), &(output->place_name_text)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__DestinationPlace *
v2x_msgs__msg__DestinationPlace__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DestinationPlace * msg = (v2x_msgs__msg__DestinationPlace *)allocator.allocate(sizeof(v2x_msgs__msg__DestinationPlace), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__DestinationPlace));
  bool success = v2x_msgs__msg__DestinationPlace__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__DestinationPlace__destroy(v2x_msgs__msg__DestinationPlace * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__DestinationPlace__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__DestinationPlace__Sequence__init(v2x_msgs__msg__DestinationPlace__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DestinationPlace * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__DestinationPlace *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__DestinationPlace), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__DestinationPlace__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__DestinationPlace__fini(&data[i - 1]);
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
v2x_msgs__msg__DestinationPlace__Sequence__fini(v2x_msgs__msg__DestinationPlace__Sequence * array)
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
      v2x_msgs__msg__DestinationPlace__fini(&array->data[i]);
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

v2x_msgs__msg__DestinationPlace__Sequence *
v2x_msgs__msg__DestinationPlace__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DestinationPlace__Sequence * array = (v2x_msgs__msg__DestinationPlace__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__DestinationPlace__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__DestinationPlace__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__DestinationPlace__Sequence__destroy(v2x_msgs__msg__DestinationPlace__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__DestinationPlace__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__DestinationPlace__Sequence__are_equal(const v2x_msgs__msg__DestinationPlace__Sequence * lhs, const v2x_msgs__msg__DestinationPlace__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__DestinationPlace__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__DestinationPlace__Sequence__copy(
  const v2x_msgs__msg__DestinationPlace__Sequence * input,
  v2x_msgs__msg__DestinationPlace__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__DestinationPlace);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__DestinationPlace * data =
      (v2x_msgs__msg__DestinationPlace *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__DestinationPlace__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__DestinationPlace__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__DestinationPlace__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
