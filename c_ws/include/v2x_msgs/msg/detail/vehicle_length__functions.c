// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/VehicleLength.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/vehicle_length__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vehicle_length_value`
#include "v2x_msgs/msg/detail/vehicle_length_value__functions.h"
// Member `vehicle_length_confidence_indication`
#include "v2x_msgs/msg/detail/vehicle_length_confidence_indication__functions.h"

bool
v2x_msgs__msg__VehicleLength__init(v2x_msgs__msg__VehicleLength * msg)
{
  if (!msg) {
    return false;
  }
  // vehicle_length_value
  if (!v2x_msgs__msg__VehicleLengthValue__init(&msg->vehicle_length_value)) {
    v2x_msgs__msg__VehicleLength__fini(msg);
    return false;
  }
  // vehicle_length_confidence_indication
  if (!v2x_msgs__msg__VehicleLengthConfidenceIndication__init(&msg->vehicle_length_confidence_indication)) {
    v2x_msgs__msg__VehicleLength__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__VehicleLength__fini(v2x_msgs__msg__VehicleLength * msg)
{
  if (!msg) {
    return;
  }
  // vehicle_length_value
  v2x_msgs__msg__VehicleLengthValue__fini(&msg->vehicle_length_value);
  // vehicle_length_confidence_indication
  v2x_msgs__msg__VehicleLengthConfidenceIndication__fini(&msg->vehicle_length_confidence_indication);
}

bool
v2x_msgs__msg__VehicleLength__are_equal(const v2x_msgs__msg__VehicleLength * lhs, const v2x_msgs__msg__VehicleLength * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vehicle_length_value
  if (!v2x_msgs__msg__VehicleLengthValue__are_equal(
      &(lhs->vehicle_length_value), &(rhs->vehicle_length_value)))
  {
    return false;
  }
  // vehicle_length_confidence_indication
  if (!v2x_msgs__msg__VehicleLengthConfidenceIndication__are_equal(
      &(lhs->vehicle_length_confidence_indication), &(rhs->vehicle_length_confidence_indication)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__VehicleLength__copy(
  const v2x_msgs__msg__VehicleLength * input,
  v2x_msgs__msg__VehicleLength * output)
{
  if (!input || !output) {
    return false;
  }
  // vehicle_length_value
  if (!v2x_msgs__msg__VehicleLengthValue__copy(
      &(input->vehicle_length_value), &(output->vehicle_length_value)))
  {
    return false;
  }
  // vehicle_length_confidence_indication
  if (!v2x_msgs__msg__VehicleLengthConfidenceIndication__copy(
      &(input->vehicle_length_confidence_indication), &(output->vehicle_length_confidence_indication)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__VehicleLength *
v2x_msgs__msg__VehicleLength__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleLength * msg = (v2x_msgs__msg__VehicleLength *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleLength), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__VehicleLength));
  bool success = v2x_msgs__msg__VehicleLength__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__VehicleLength__destroy(v2x_msgs__msg__VehicleLength * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__VehicleLength__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__VehicleLength__Sequence__init(v2x_msgs__msg__VehicleLength__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleLength * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__VehicleLength *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__VehicleLength), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__VehicleLength__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__VehicleLength__fini(&data[i - 1]);
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
v2x_msgs__msg__VehicleLength__Sequence__fini(v2x_msgs__msg__VehicleLength__Sequence * array)
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
      v2x_msgs__msg__VehicleLength__fini(&array->data[i]);
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

v2x_msgs__msg__VehicleLength__Sequence *
v2x_msgs__msg__VehicleLength__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleLength__Sequence * array = (v2x_msgs__msg__VehicleLength__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleLength__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__VehicleLength__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__VehicleLength__Sequence__destroy(v2x_msgs__msg__VehicleLength__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__VehicleLength__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__VehicleLength__Sequence__are_equal(const v2x_msgs__msg__VehicleLength__Sequence * lhs, const v2x_msgs__msg__VehicleLength__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__VehicleLength__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__VehicleLength__Sequence__copy(
  const v2x_msgs__msg__VehicleLength__Sequence * input,
  v2x_msgs__msg__VehicleLength__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__VehicleLength);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__VehicleLength * data =
      (v2x_msgs__msg__VehicleLength *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__VehicleLength__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__VehicleLength__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__VehicleLength__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
