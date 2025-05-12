// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/HazardousLocationDangerousCurveSubCauseCode.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/hazardous_location_dangerous_curve_sub_cause_code__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__init(v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode * msg)
{
  if (!msg) {
    return false;
  }
  // hazardous_location_dangerous_curve_sub_cause_code
  return true;
}

void
v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__fini(v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode * msg)
{
  if (!msg) {
    return;
  }
  // hazardous_location_dangerous_curve_sub_cause_code
}

bool
v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__are_equal(const v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode * lhs, const v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hazardous_location_dangerous_curve_sub_cause_code
  if (lhs->hazardous_location_dangerous_curve_sub_cause_code != rhs->hazardous_location_dangerous_curve_sub_cause_code) {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__copy(
  const v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode * input,
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode * output)
{
  if (!input || !output) {
    return false;
  }
  // hazardous_location_dangerous_curve_sub_cause_code
  output->hazardous_location_dangerous_curve_sub_cause_code = input->hazardous_location_dangerous_curve_sub_cause_code;
  return true;
}

v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode *
v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode * msg = (v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode *)allocator.allocate(sizeof(v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode));
  bool success = v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__destroy(v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence__init(v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__fini(&data[i - 1]);
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
v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence__fini(v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence * array)
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
      v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__fini(&array->data[i]);
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

v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence *
v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence * array = (v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence__destroy(v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence__are_equal(const v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence * lhs, const v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence__copy(
  const v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence * input,
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode * data =
      (v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
