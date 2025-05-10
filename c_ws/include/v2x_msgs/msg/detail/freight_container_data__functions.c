// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/FreightContainerData.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/freight_container_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
v2x_msgs__msg__FreightContainerData__init(v2x_msgs__msg__FreightContainerData * msg)
{
  if (!msg) {
    return false;
  }
  // owner_code
  // serial_number
  // check_digit
  // length
  // height
  // width
  // container_type_code
  // maximum_gross_mass
  // tare_mass
  // fill
  return true;
}

void
v2x_msgs__msg__FreightContainerData__fini(v2x_msgs__msg__FreightContainerData * msg)
{
  if (!msg) {
    return;
  }
  // owner_code
  // serial_number
  // check_digit
  // length
  // height
  // width
  // container_type_code
  // maximum_gross_mass
  // tare_mass
  // fill
}

bool
v2x_msgs__msg__FreightContainerData__are_equal(const v2x_msgs__msg__FreightContainerData * lhs, const v2x_msgs__msg__FreightContainerData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // owner_code
  if (lhs->owner_code != rhs->owner_code) {
    return false;
  }
  // serial_number
  if (lhs->serial_number != rhs->serial_number) {
    return false;
  }
  // check_digit
  if (lhs->check_digit != rhs->check_digit) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // container_type_code
  if (lhs->container_type_code != rhs->container_type_code) {
    return false;
  }
  // maximum_gross_mass
  if (lhs->maximum_gross_mass != rhs->maximum_gross_mass) {
    return false;
  }
  // tare_mass
  if (lhs->tare_mass != rhs->tare_mass) {
    return false;
  }
  // fill
  if (lhs->fill != rhs->fill) {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__FreightContainerData__copy(
  const v2x_msgs__msg__FreightContainerData * input,
  v2x_msgs__msg__FreightContainerData * output)
{
  if (!input || !output) {
    return false;
  }
  // owner_code
  output->owner_code = input->owner_code;
  // serial_number
  output->serial_number = input->serial_number;
  // check_digit
  output->check_digit = input->check_digit;
  // length
  output->length = input->length;
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // container_type_code
  output->container_type_code = input->container_type_code;
  // maximum_gross_mass
  output->maximum_gross_mass = input->maximum_gross_mass;
  // tare_mass
  output->tare_mass = input->tare_mass;
  // fill
  output->fill = input->fill;
  return true;
}

v2x_msgs__msg__FreightContainerData *
v2x_msgs__msg__FreightContainerData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__FreightContainerData * msg = (v2x_msgs__msg__FreightContainerData *)allocator.allocate(sizeof(v2x_msgs__msg__FreightContainerData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__FreightContainerData));
  bool success = v2x_msgs__msg__FreightContainerData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__FreightContainerData__destroy(v2x_msgs__msg__FreightContainerData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__FreightContainerData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__FreightContainerData__Sequence__init(v2x_msgs__msg__FreightContainerData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__FreightContainerData * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__FreightContainerData *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__FreightContainerData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__FreightContainerData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__FreightContainerData__fini(&data[i - 1]);
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
v2x_msgs__msg__FreightContainerData__Sequence__fini(v2x_msgs__msg__FreightContainerData__Sequence * array)
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
      v2x_msgs__msg__FreightContainerData__fini(&array->data[i]);
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

v2x_msgs__msg__FreightContainerData__Sequence *
v2x_msgs__msg__FreightContainerData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__FreightContainerData__Sequence * array = (v2x_msgs__msg__FreightContainerData__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__FreightContainerData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__FreightContainerData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__FreightContainerData__Sequence__destroy(v2x_msgs__msg__FreightContainerData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__FreightContainerData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__FreightContainerData__Sequence__are_equal(const v2x_msgs__msg__FreightContainerData__Sequence * lhs, const v2x_msgs__msg__FreightContainerData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__FreightContainerData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__FreightContainerData__Sequence__copy(
  const v2x_msgs__msg__FreightContainerData__Sequence * input,
  v2x_msgs__msg__FreightContainerData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__FreightContainerData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__FreightContainerData * data =
      (v2x_msgs__msg__FreightContainerData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__FreightContainerData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__FreightContainerData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__FreightContainerData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
