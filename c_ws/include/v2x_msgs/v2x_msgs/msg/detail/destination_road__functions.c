// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/DestinationRoad.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/destination_road__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `der_type`
#include "v2x_msgs/msg/detail/destination_road_type__functions.h"
// Member `road_number_text`
#include "rosidl_runtime_c/string_functions.h"

bool
v2x_msgs__msg__DestinationRoad__init(v2x_msgs__msg__DestinationRoad * msg)
{
  if (!msg) {
    return false;
  }
  // der_type
  if (!v2x_msgs__msg__DestinationRoadType__init(&msg->der_type)) {
    v2x_msgs__msg__DestinationRoad__fini(msg);
    return false;
  }
  // road_number_identifier_present
  msg->road_number_identifier_present = false;
  // road_number_identifier
  // road_number_text_present
  msg->road_number_text_present = false;
  // road_number_text
  if (!rosidl_runtime_c__String__init(&msg->road_number_text)) {
    v2x_msgs__msg__DestinationRoad__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__DestinationRoad__fini(v2x_msgs__msg__DestinationRoad * msg)
{
  if (!msg) {
    return;
  }
  // der_type
  v2x_msgs__msg__DestinationRoadType__fini(&msg->der_type);
  // road_number_identifier_present
  // road_number_identifier
  // road_number_text_present
  // road_number_text
  rosidl_runtime_c__String__fini(&msg->road_number_text);
}

bool
v2x_msgs__msg__DestinationRoad__are_equal(const v2x_msgs__msg__DestinationRoad * lhs, const v2x_msgs__msg__DestinationRoad * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // der_type
  if (!v2x_msgs__msg__DestinationRoadType__are_equal(
      &(lhs->der_type), &(rhs->der_type)))
  {
    return false;
  }
  // road_number_identifier_present
  if (lhs->road_number_identifier_present != rhs->road_number_identifier_present) {
    return false;
  }
  // road_number_identifier
  if (lhs->road_number_identifier != rhs->road_number_identifier) {
    return false;
  }
  // road_number_text_present
  if (lhs->road_number_text_present != rhs->road_number_text_present) {
    return false;
  }
  // road_number_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->road_number_text), &(rhs->road_number_text)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__DestinationRoad__copy(
  const v2x_msgs__msg__DestinationRoad * input,
  v2x_msgs__msg__DestinationRoad * output)
{
  if (!input || !output) {
    return false;
  }
  // der_type
  if (!v2x_msgs__msg__DestinationRoadType__copy(
      &(input->der_type), &(output->der_type)))
  {
    return false;
  }
  // road_number_identifier_present
  output->road_number_identifier_present = input->road_number_identifier_present;
  // road_number_identifier
  output->road_number_identifier = input->road_number_identifier;
  // road_number_text_present
  output->road_number_text_present = input->road_number_text_present;
  // road_number_text
  if (!rosidl_runtime_c__String__copy(
      &(input->road_number_text), &(output->road_number_text)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__DestinationRoad *
v2x_msgs__msg__DestinationRoad__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DestinationRoad * msg = (v2x_msgs__msg__DestinationRoad *)allocator.allocate(sizeof(v2x_msgs__msg__DestinationRoad), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__DestinationRoad));
  bool success = v2x_msgs__msg__DestinationRoad__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__DestinationRoad__destroy(v2x_msgs__msg__DestinationRoad * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__DestinationRoad__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__DestinationRoad__Sequence__init(v2x_msgs__msg__DestinationRoad__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DestinationRoad * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__DestinationRoad *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__DestinationRoad), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__DestinationRoad__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__DestinationRoad__fini(&data[i - 1]);
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
v2x_msgs__msg__DestinationRoad__Sequence__fini(v2x_msgs__msg__DestinationRoad__Sequence * array)
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
      v2x_msgs__msg__DestinationRoad__fini(&array->data[i]);
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

v2x_msgs__msg__DestinationRoad__Sequence *
v2x_msgs__msg__DestinationRoad__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DestinationRoad__Sequence * array = (v2x_msgs__msg__DestinationRoad__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__DestinationRoad__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__DestinationRoad__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__DestinationRoad__Sequence__destroy(v2x_msgs__msg__DestinationRoad__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__DestinationRoad__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__DestinationRoad__Sequence__are_equal(const v2x_msgs__msg__DestinationRoad__Sequence * lhs, const v2x_msgs__msg__DestinationRoad__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__DestinationRoad__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__DestinationRoad__Sequence__copy(
  const v2x_msgs__msg__DestinationRoad__Sequence * input,
  v2x_msgs__msg__DestinationRoad__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__DestinationRoad);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__DestinationRoad * data =
      (v2x_msgs__msg__DestinationRoad *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__DestinationRoad__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__DestinationRoad__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__DestinationRoad__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
