// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/CpmParameters.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/cpm_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `management_container`
#include "v2x_msgs/msg/detail/cpm_management_container__functions.h"
// Member `station_data_container`
#include "v2x_msgs/msg/detail/station_data_container__functions.h"
// Member `sensor_information_container`
#include "v2x_msgs/msg/detail/sensor_information_container__functions.h"
// Member `perceived_object_container`
#include "v2x_msgs/msg/detail/perceived_object_container__functions.h"
// Member `free_space_addendum_container`
#include "v2x_msgs/msg/detail/free_space_addendum_container__functions.h"
// Member `number_of_perceived_objects`
#include "v2x_msgs/msg/detail/number_of_perceived_objects__functions.h"

bool
v2x_msgs__msg__CpmParameters__init(v2x_msgs__msg__CpmParameters * msg)
{
  if (!msg) {
    return false;
  }
  // management_container
  if (!v2x_msgs__msg__CpmManagementContainer__init(&msg->management_container)) {
    v2x_msgs__msg__CpmParameters__fini(msg);
    return false;
  }
  // station_data_container_present
  msg->station_data_container_present = false;
  // station_data_container
  if (!v2x_msgs__msg__StationDataContainer__init(&msg->station_data_container)) {
    v2x_msgs__msg__CpmParameters__fini(msg);
    return false;
  }
  // sensor_information_container_present
  msg->sensor_information_container_present = false;
  // sensor_information_container
  if (!v2x_msgs__msg__SensorInformationContainer__init(&msg->sensor_information_container)) {
    v2x_msgs__msg__CpmParameters__fini(msg);
    return false;
  }
  // perceived_object_container_present
  msg->perceived_object_container_present = false;
  // perceived_object_container
  if (!v2x_msgs__msg__PerceivedObjectContainer__init(&msg->perceived_object_container)) {
    v2x_msgs__msg__CpmParameters__fini(msg);
    return false;
  }
  // free_space_addendum_container_present
  msg->free_space_addendum_container_present = false;
  // free_space_addendum_container
  if (!v2x_msgs__msg__FreeSpaceAddendumContainer__init(&msg->free_space_addendum_container)) {
    v2x_msgs__msg__CpmParameters__fini(msg);
    return false;
  }
  // number_of_perceived_objects
  if (!v2x_msgs__msg__NumberOfPerceivedObjects__init(&msg->number_of_perceived_objects)) {
    v2x_msgs__msg__CpmParameters__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__CpmParameters__fini(v2x_msgs__msg__CpmParameters * msg)
{
  if (!msg) {
    return;
  }
  // management_container
  v2x_msgs__msg__CpmManagementContainer__fini(&msg->management_container);
  // station_data_container_present
  // station_data_container
  v2x_msgs__msg__StationDataContainer__fini(&msg->station_data_container);
  // sensor_information_container_present
  // sensor_information_container
  v2x_msgs__msg__SensorInformationContainer__fini(&msg->sensor_information_container);
  // perceived_object_container_present
  // perceived_object_container
  v2x_msgs__msg__PerceivedObjectContainer__fini(&msg->perceived_object_container);
  // free_space_addendum_container_present
  // free_space_addendum_container
  v2x_msgs__msg__FreeSpaceAddendumContainer__fini(&msg->free_space_addendum_container);
  // number_of_perceived_objects
  v2x_msgs__msg__NumberOfPerceivedObjects__fini(&msg->number_of_perceived_objects);
}

bool
v2x_msgs__msg__CpmParameters__are_equal(const v2x_msgs__msg__CpmParameters * lhs, const v2x_msgs__msg__CpmParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // management_container
  if (!v2x_msgs__msg__CpmManagementContainer__are_equal(
      &(lhs->management_container), &(rhs->management_container)))
  {
    return false;
  }
  // station_data_container_present
  if (lhs->station_data_container_present != rhs->station_data_container_present) {
    return false;
  }
  // station_data_container
  if (!v2x_msgs__msg__StationDataContainer__are_equal(
      &(lhs->station_data_container), &(rhs->station_data_container)))
  {
    return false;
  }
  // sensor_information_container_present
  if (lhs->sensor_information_container_present != rhs->sensor_information_container_present) {
    return false;
  }
  // sensor_information_container
  if (!v2x_msgs__msg__SensorInformationContainer__are_equal(
      &(lhs->sensor_information_container), &(rhs->sensor_information_container)))
  {
    return false;
  }
  // perceived_object_container_present
  if (lhs->perceived_object_container_present != rhs->perceived_object_container_present) {
    return false;
  }
  // perceived_object_container
  if (!v2x_msgs__msg__PerceivedObjectContainer__are_equal(
      &(lhs->perceived_object_container), &(rhs->perceived_object_container)))
  {
    return false;
  }
  // free_space_addendum_container_present
  if (lhs->free_space_addendum_container_present != rhs->free_space_addendum_container_present) {
    return false;
  }
  // free_space_addendum_container
  if (!v2x_msgs__msg__FreeSpaceAddendumContainer__are_equal(
      &(lhs->free_space_addendum_container), &(rhs->free_space_addendum_container)))
  {
    return false;
  }
  // number_of_perceived_objects
  if (!v2x_msgs__msg__NumberOfPerceivedObjects__are_equal(
      &(lhs->number_of_perceived_objects), &(rhs->number_of_perceived_objects)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__CpmParameters__copy(
  const v2x_msgs__msg__CpmParameters * input,
  v2x_msgs__msg__CpmParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // management_container
  if (!v2x_msgs__msg__CpmManagementContainer__copy(
      &(input->management_container), &(output->management_container)))
  {
    return false;
  }
  // station_data_container_present
  output->station_data_container_present = input->station_data_container_present;
  // station_data_container
  if (!v2x_msgs__msg__StationDataContainer__copy(
      &(input->station_data_container), &(output->station_data_container)))
  {
    return false;
  }
  // sensor_information_container_present
  output->sensor_information_container_present = input->sensor_information_container_present;
  // sensor_information_container
  if (!v2x_msgs__msg__SensorInformationContainer__copy(
      &(input->sensor_information_container), &(output->sensor_information_container)))
  {
    return false;
  }
  // perceived_object_container_present
  output->perceived_object_container_present = input->perceived_object_container_present;
  // perceived_object_container
  if (!v2x_msgs__msg__PerceivedObjectContainer__copy(
      &(input->perceived_object_container), &(output->perceived_object_container)))
  {
    return false;
  }
  // free_space_addendum_container_present
  output->free_space_addendum_container_present = input->free_space_addendum_container_present;
  // free_space_addendum_container
  if (!v2x_msgs__msg__FreeSpaceAddendumContainer__copy(
      &(input->free_space_addendum_container), &(output->free_space_addendum_container)))
  {
    return false;
  }
  // number_of_perceived_objects
  if (!v2x_msgs__msg__NumberOfPerceivedObjects__copy(
      &(input->number_of_perceived_objects), &(output->number_of_perceived_objects)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__CpmParameters *
v2x_msgs__msg__CpmParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CpmParameters * msg = (v2x_msgs__msg__CpmParameters *)allocator.allocate(sizeof(v2x_msgs__msg__CpmParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__CpmParameters));
  bool success = v2x_msgs__msg__CpmParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__CpmParameters__destroy(v2x_msgs__msg__CpmParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__CpmParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__CpmParameters__Sequence__init(v2x_msgs__msg__CpmParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CpmParameters * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__CpmParameters *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__CpmParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__CpmParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__CpmParameters__fini(&data[i - 1]);
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
v2x_msgs__msg__CpmParameters__Sequence__fini(v2x_msgs__msg__CpmParameters__Sequence * array)
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
      v2x_msgs__msg__CpmParameters__fini(&array->data[i]);
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

v2x_msgs__msg__CpmParameters__Sequence *
v2x_msgs__msg__CpmParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CpmParameters__Sequence * array = (v2x_msgs__msg__CpmParameters__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__CpmParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__CpmParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__CpmParameters__Sequence__destroy(v2x_msgs__msg__CpmParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__CpmParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__CpmParameters__Sequence__are_equal(const v2x_msgs__msg__CpmParameters__Sequence * lhs, const v2x_msgs__msg__CpmParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__CpmParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__CpmParameters__Sequence__copy(
  const v2x_msgs__msg__CpmParameters__Sequence * input,
  v2x_msgs__msg__CpmParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__CpmParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__CpmParameters * data =
      (v2x_msgs__msg__CpmParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__CpmParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__CpmParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__CpmParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
