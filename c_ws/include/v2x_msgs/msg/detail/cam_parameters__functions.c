// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/CamParameters.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/cam_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `basic_container`
#include "v2x_msgs/msg/detail/basic_container__functions.h"
// Member `high_frequency_container`
#include "v2x_msgs/msg/detail/high_frequency_container__functions.h"
// Member `low_frequency_container`
#include "v2x_msgs/msg/detail/low_frequency_container__functions.h"
// Member `special_vehicle_container`
#include "v2x_msgs/msg/detail/special_vehicle_container__functions.h"

bool
v2x_msgs__msg__CamParameters__init(v2x_msgs__msg__CamParameters * msg)
{
  if (!msg) {
    return false;
  }
  // basic_container
  if (!v2x_msgs__msg__BasicContainer__init(&msg->basic_container)) {
    v2x_msgs__msg__CamParameters__fini(msg);
    return false;
  }
  // high_frequency_container
  if (!v2x_msgs__msg__HighFrequencyContainer__init(&msg->high_frequency_container)) {
    v2x_msgs__msg__CamParameters__fini(msg);
    return false;
  }
  // low_frequency_container_present
  msg->low_frequency_container_present = false;
  // low_frequency_container
  if (!v2x_msgs__msg__LowFrequencyContainer__init(&msg->low_frequency_container)) {
    v2x_msgs__msg__CamParameters__fini(msg);
    return false;
  }
  // special_vehicle_container_present
  msg->special_vehicle_container_present = false;
  // special_vehicle_container
  if (!v2x_msgs__msg__SpecialVehicleContainer__init(&msg->special_vehicle_container)) {
    v2x_msgs__msg__CamParameters__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__CamParameters__fini(v2x_msgs__msg__CamParameters * msg)
{
  if (!msg) {
    return;
  }
  // basic_container
  v2x_msgs__msg__BasicContainer__fini(&msg->basic_container);
  // high_frequency_container
  v2x_msgs__msg__HighFrequencyContainer__fini(&msg->high_frequency_container);
  // low_frequency_container_present
  // low_frequency_container
  v2x_msgs__msg__LowFrequencyContainer__fini(&msg->low_frequency_container);
  // special_vehicle_container_present
  // special_vehicle_container
  v2x_msgs__msg__SpecialVehicleContainer__fini(&msg->special_vehicle_container);
}

bool
v2x_msgs__msg__CamParameters__are_equal(const v2x_msgs__msg__CamParameters * lhs, const v2x_msgs__msg__CamParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // basic_container
  if (!v2x_msgs__msg__BasicContainer__are_equal(
      &(lhs->basic_container), &(rhs->basic_container)))
  {
    return false;
  }
  // high_frequency_container
  if (!v2x_msgs__msg__HighFrequencyContainer__are_equal(
      &(lhs->high_frequency_container), &(rhs->high_frequency_container)))
  {
    return false;
  }
  // low_frequency_container_present
  if (lhs->low_frequency_container_present != rhs->low_frequency_container_present) {
    return false;
  }
  // low_frequency_container
  if (!v2x_msgs__msg__LowFrequencyContainer__are_equal(
      &(lhs->low_frequency_container), &(rhs->low_frequency_container)))
  {
    return false;
  }
  // special_vehicle_container_present
  if (lhs->special_vehicle_container_present != rhs->special_vehicle_container_present) {
    return false;
  }
  // special_vehicle_container
  if (!v2x_msgs__msg__SpecialVehicleContainer__are_equal(
      &(lhs->special_vehicle_container), &(rhs->special_vehicle_container)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__CamParameters__copy(
  const v2x_msgs__msg__CamParameters * input,
  v2x_msgs__msg__CamParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // basic_container
  if (!v2x_msgs__msg__BasicContainer__copy(
      &(input->basic_container), &(output->basic_container)))
  {
    return false;
  }
  // high_frequency_container
  if (!v2x_msgs__msg__HighFrequencyContainer__copy(
      &(input->high_frequency_container), &(output->high_frequency_container)))
  {
    return false;
  }
  // low_frequency_container_present
  output->low_frequency_container_present = input->low_frequency_container_present;
  // low_frequency_container
  if (!v2x_msgs__msg__LowFrequencyContainer__copy(
      &(input->low_frequency_container), &(output->low_frequency_container)))
  {
    return false;
  }
  // special_vehicle_container_present
  output->special_vehicle_container_present = input->special_vehicle_container_present;
  // special_vehicle_container
  if (!v2x_msgs__msg__SpecialVehicleContainer__copy(
      &(input->special_vehicle_container), &(output->special_vehicle_container)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__CamParameters *
v2x_msgs__msg__CamParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CamParameters * msg = (v2x_msgs__msg__CamParameters *)allocator.allocate(sizeof(v2x_msgs__msg__CamParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__CamParameters));
  bool success = v2x_msgs__msg__CamParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__CamParameters__destroy(v2x_msgs__msg__CamParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__CamParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__CamParameters__Sequence__init(v2x_msgs__msg__CamParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CamParameters * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__CamParameters *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__CamParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__CamParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__CamParameters__fini(&data[i - 1]);
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
v2x_msgs__msg__CamParameters__Sequence__fini(v2x_msgs__msg__CamParameters__Sequence * array)
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
      v2x_msgs__msg__CamParameters__fini(&array->data[i]);
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

v2x_msgs__msg__CamParameters__Sequence *
v2x_msgs__msg__CamParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CamParameters__Sequence * array = (v2x_msgs__msg__CamParameters__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__CamParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__CamParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__CamParameters__Sequence__destroy(v2x_msgs__msg__CamParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__CamParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__CamParameters__Sequence__are_equal(const v2x_msgs__msg__CamParameters__Sequence * lhs, const v2x_msgs__msg__CamParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__CamParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__CamParameters__Sequence__copy(
  const v2x_msgs__msg__CamParameters__Sequence * input,
  v2x_msgs__msg__CamParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__CamParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__CamParameters * data =
      (v2x_msgs__msg__CamParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__CamParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__CamParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__CamParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
