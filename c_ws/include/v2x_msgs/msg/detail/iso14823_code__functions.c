// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ISO14823Code.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/iso14823_code__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `country_code`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `attributes`
#include "v2x_msgs/msg/detail/iso14823_attributes__functions.h"

bool
v2x_msgs__msg__ISO14823Code__init(v2x_msgs__msg__ISO14823Code * msg)
{
  if (!msg) {
    return false;
  }
  // country_code_present
  msg->country_code_present = false;
  // country_code
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->country_code, 0)) {
    v2x_msgs__msg__ISO14823Code__fini(msg);
    return false;
  }
  // service_category_code_container_select
  msg->service_category_code_container_select = 0ll;
  // traffic_sign_pictogram
  // public_facilities_pictorgram
  // ambient_or_road_condition_pictogram
  // nature
  // serial_number
  // attributes_present
  msg->attributes_present = false;
  // attributes
  if (!v2x_msgs__msg__ISO14823Attributes__init(&msg->attributes)) {
    v2x_msgs__msg__ISO14823Code__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ISO14823Code__fini(v2x_msgs__msg__ISO14823Code * msg)
{
  if (!msg) {
    return;
  }
  // country_code_present
  // country_code
  rosidl_runtime_c__int64__Sequence__fini(&msg->country_code);
  // service_category_code_container_select
  // traffic_sign_pictogram
  // public_facilities_pictorgram
  // ambient_or_road_condition_pictogram
  // nature
  // serial_number
  // attributes_present
  // attributes
  v2x_msgs__msg__ISO14823Attributes__fini(&msg->attributes);
}

bool
v2x_msgs__msg__ISO14823Code__are_equal(const v2x_msgs__msg__ISO14823Code * lhs, const v2x_msgs__msg__ISO14823Code * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // country_code_present
  if (lhs->country_code_present != rhs->country_code_present) {
    return false;
  }
  // country_code
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->country_code), &(rhs->country_code)))
  {
    return false;
  }
  // service_category_code_container_select
  if (lhs->service_category_code_container_select != rhs->service_category_code_container_select) {
    return false;
  }
  // traffic_sign_pictogram
  if (lhs->traffic_sign_pictogram != rhs->traffic_sign_pictogram) {
    return false;
  }
  // public_facilities_pictorgram
  if (lhs->public_facilities_pictorgram != rhs->public_facilities_pictorgram) {
    return false;
  }
  // ambient_or_road_condition_pictogram
  if (lhs->ambient_or_road_condition_pictogram != rhs->ambient_or_road_condition_pictogram) {
    return false;
  }
  // nature
  if (lhs->nature != rhs->nature) {
    return false;
  }
  // serial_number
  if (lhs->serial_number != rhs->serial_number) {
    return false;
  }
  // attributes_present
  if (lhs->attributes_present != rhs->attributes_present) {
    return false;
  }
  // attributes
  if (!v2x_msgs__msg__ISO14823Attributes__are_equal(
      &(lhs->attributes), &(rhs->attributes)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ISO14823Code__copy(
  const v2x_msgs__msg__ISO14823Code * input,
  v2x_msgs__msg__ISO14823Code * output)
{
  if (!input || !output) {
    return false;
  }
  // country_code_present
  output->country_code_present = input->country_code_present;
  // country_code
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->country_code), &(output->country_code)))
  {
    return false;
  }
  // service_category_code_container_select
  output->service_category_code_container_select = input->service_category_code_container_select;
  // traffic_sign_pictogram
  output->traffic_sign_pictogram = input->traffic_sign_pictogram;
  // public_facilities_pictorgram
  output->public_facilities_pictorgram = input->public_facilities_pictorgram;
  // ambient_or_road_condition_pictogram
  output->ambient_or_road_condition_pictogram = input->ambient_or_road_condition_pictogram;
  // nature
  output->nature = input->nature;
  // serial_number
  output->serial_number = input->serial_number;
  // attributes_present
  output->attributes_present = input->attributes_present;
  // attributes
  if (!v2x_msgs__msg__ISO14823Attributes__copy(
      &(input->attributes), &(output->attributes)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ISO14823Code *
v2x_msgs__msg__ISO14823Code__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ISO14823Code * msg = (v2x_msgs__msg__ISO14823Code *)allocator.allocate(sizeof(v2x_msgs__msg__ISO14823Code), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ISO14823Code));
  bool success = v2x_msgs__msg__ISO14823Code__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ISO14823Code__destroy(v2x_msgs__msg__ISO14823Code * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ISO14823Code__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ISO14823Code__Sequence__init(v2x_msgs__msg__ISO14823Code__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ISO14823Code * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ISO14823Code *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ISO14823Code), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ISO14823Code__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ISO14823Code__fini(&data[i - 1]);
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
v2x_msgs__msg__ISO14823Code__Sequence__fini(v2x_msgs__msg__ISO14823Code__Sequence * array)
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
      v2x_msgs__msg__ISO14823Code__fini(&array->data[i]);
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

v2x_msgs__msg__ISO14823Code__Sequence *
v2x_msgs__msg__ISO14823Code__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ISO14823Code__Sequence * array = (v2x_msgs__msg__ISO14823Code__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ISO14823Code__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ISO14823Code__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ISO14823Code__Sequence__destroy(v2x_msgs__msg__ISO14823Code__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ISO14823Code__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ISO14823Code__Sequence__are_equal(const v2x_msgs__msg__ISO14823Code__Sequence * lhs, const v2x_msgs__msg__ISO14823Code__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ISO14823Code__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ISO14823Code__Sequence__copy(
  const v2x_msgs__msg__ISO14823Code__Sequence * input,
  v2x_msgs__msg__ISO14823Code__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ISO14823Code);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ISO14823Code * data =
      (v2x_msgs__msg__ISO14823Code *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ISO14823Code__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ISO14823Code__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ISO14823Code__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
