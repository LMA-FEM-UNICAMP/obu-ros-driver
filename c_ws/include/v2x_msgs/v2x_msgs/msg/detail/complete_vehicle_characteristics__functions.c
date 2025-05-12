// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/CompleteVehicleCharacteristics.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/complete_vehicle_characteristics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tractor`
#include "v2x_msgs/msg/detail/tractor_characteristics__functions.h"
// Member `trailer`
#include "v2x_msgs/msg/detail/trailer_characteristics_list__functions.h"
// Member `train`
#include "v2x_msgs/msg/detail/train_characteristics__functions.h"

bool
v2x_msgs__msg__CompleteVehicleCharacteristics__init(v2x_msgs__msg__CompleteVehicleCharacteristics * msg)
{
  if (!msg) {
    return false;
  }
  // tractor_present
  msg->tractor_present = false;
  // tractor
  if (!v2x_msgs__msg__TractorCharacteristics__init(&msg->tractor)) {
    v2x_msgs__msg__CompleteVehicleCharacteristics__fini(msg);
    return false;
  }
  // trailer_present
  msg->trailer_present = false;
  // trailer
  if (!v2x_msgs__msg__TrailerCharacteristicsList__init(&msg->trailer)) {
    v2x_msgs__msg__CompleteVehicleCharacteristics__fini(msg);
    return false;
  }
  // train_present
  msg->train_present = false;
  // train
  if (!v2x_msgs__msg__TrainCharacteristics__init(&msg->train)) {
    v2x_msgs__msg__CompleteVehicleCharacteristics__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__CompleteVehicleCharacteristics__fini(v2x_msgs__msg__CompleteVehicleCharacteristics * msg)
{
  if (!msg) {
    return;
  }
  // tractor_present
  // tractor
  v2x_msgs__msg__TractorCharacteristics__fini(&msg->tractor);
  // trailer_present
  // trailer
  v2x_msgs__msg__TrailerCharacteristicsList__fini(&msg->trailer);
  // train_present
  // train
  v2x_msgs__msg__TrainCharacteristics__fini(&msg->train);
}

bool
v2x_msgs__msg__CompleteVehicleCharacteristics__are_equal(const v2x_msgs__msg__CompleteVehicleCharacteristics * lhs, const v2x_msgs__msg__CompleteVehicleCharacteristics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tractor_present
  if (lhs->tractor_present != rhs->tractor_present) {
    return false;
  }
  // tractor
  if (!v2x_msgs__msg__TractorCharacteristics__are_equal(
      &(lhs->tractor), &(rhs->tractor)))
  {
    return false;
  }
  // trailer_present
  if (lhs->trailer_present != rhs->trailer_present) {
    return false;
  }
  // trailer
  if (!v2x_msgs__msg__TrailerCharacteristicsList__are_equal(
      &(lhs->trailer), &(rhs->trailer)))
  {
    return false;
  }
  // train_present
  if (lhs->train_present != rhs->train_present) {
    return false;
  }
  // train
  if (!v2x_msgs__msg__TrainCharacteristics__are_equal(
      &(lhs->train), &(rhs->train)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__CompleteVehicleCharacteristics__copy(
  const v2x_msgs__msg__CompleteVehicleCharacteristics * input,
  v2x_msgs__msg__CompleteVehicleCharacteristics * output)
{
  if (!input || !output) {
    return false;
  }
  // tractor_present
  output->tractor_present = input->tractor_present;
  // tractor
  if (!v2x_msgs__msg__TractorCharacteristics__copy(
      &(input->tractor), &(output->tractor)))
  {
    return false;
  }
  // trailer_present
  output->trailer_present = input->trailer_present;
  // trailer
  if (!v2x_msgs__msg__TrailerCharacteristicsList__copy(
      &(input->trailer), &(output->trailer)))
  {
    return false;
  }
  // train_present
  output->train_present = input->train_present;
  // train
  if (!v2x_msgs__msg__TrainCharacteristics__copy(
      &(input->train), &(output->train)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__CompleteVehicleCharacteristics *
v2x_msgs__msg__CompleteVehicleCharacteristics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CompleteVehicleCharacteristics * msg = (v2x_msgs__msg__CompleteVehicleCharacteristics *)allocator.allocate(sizeof(v2x_msgs__msg__CompleteVehicleCharacteristics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__CompleteVehicleCharacteristics));
  bool success = v2x_msgs__msg__CompleteVehicleCharacteristics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__CompleteVehicleCharacteristics__destroy(v2x_msgs__msg__CompleteVehicleCharacteristics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__CompleteVehicleCharacteristics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence__init(v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CompleteVehicleCharacteristics * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__CompleteVehicleCharacteristics *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__CompleteVehicleCharacteristics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__CompleteVehicleCharacteristics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__CompleteVehicleCharacteristics__fini(&data[i - 1]);
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
v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence__fini(v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence * array)
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
      v2x_msgs__msg__CompleteVehicleCharacteristics__fini(&array->data[i]);
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

v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence *
v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence * array = (v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence__destroy(v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence__are_equal(const v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence * lhs, const v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__CompleteVehicleCharacteristics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence__copy(
  const v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence * input,
  v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__CompleteVehicleCharacteristics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__CompleteVehicleCharacteristics * data =
      (v2x_msgs__msg__CompleteVehicleCharacteristics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__CompleteVehicleCharacteristics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__CompleteVehicleCharacteristics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__CompleteVehicleCharacteristics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
