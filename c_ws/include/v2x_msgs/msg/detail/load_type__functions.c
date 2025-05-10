// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/LoadType.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/load_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `goods_type`
#include "v2x_msgs/msg/detail/goods_type__functions.h"
// Member `dangerous_goods_type`
#include "v2x_msgs/msg/detail/dangerous_goods_basic__functions.h"
// Member `special_transport_type`
#include "v2x_msgs/msg/detail/special_transport_type__functions.h"

bool
v2x_msgs__msg__LoadType__init(v2x_msgs__msg__LoadType * msg)
{
  if (!msg) {
    return false;
  }
  // goods_type
  if (!v2x_msgs__msg__GoodsType__init(&msg->goods_type)) {
    v2x_msgs__msg__LoadType__fini(msg);
    return false;
  }
  // dangerous_goods_type
  if (!v2x_msgs__msg__DangerousGoodsBasic__init(&msg->dangerous_goods_type)) {
    v2x_msgs__msg__LoadType__fini(msg);
    return false;
  }
  // special_transport_type
  if (!v2x_msgs__msg__SpecialTransportType__init(&msg->special_transport_type)) {
    v2x_msgs__msg__LoadType__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__LoadType__fini(v2x_msgs__msg__LoadType * msg)
{
  if (!msg) {
    return;
  }
  // goods_type
  v2x_msgs__msg__GoodsType__fini(&msg->goods_type);
  // dangerous_goods_type
  v2x_msgs__msg__DangerousGoodsBasic__fini(&msg->dangerous_goods_type);
  // special_transport_type
  v2x_msgs__msg__SpecialTransportType__fini(&msg->special_transport_type);
}

bool
v2x_msgs__msg__LoadType__are_equal(const v2x_msgs__msg__LoadType * lhs, const v2x_msgs__msg__LoadType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goods_type
  if (!v2x_msgs__msg__GoodsType__are_equal(
      &(lhs->goods_type), &(rhs->goods_type)))
  {
    return false;
  }
  // dangerous_goods_type
  if (!v2x_msgs__msg__DangerousGoodsBasic__are_equal(
      &(lhs->dangerous_goods_type), &(rhs->dangerous_goods_type)))
  {
    return false;
  }
  // special_transport_type
  if (!v2x_msgs__msg__SpecialTransportType__are_equal(
      &(lhs->special_transport_type), &(rhs->special_transport_type)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__LoadType__copy(
  const v2x_msgs__msg__LoadType * input,
  v2x_msgs__msg__LoadType * output)
{
  if (!input || !output) {
    return false;
  }
  // goods_type
  if (!v2x_msgs__msg__GoodsType__copy(
      &(input->goods_type), &(output->goods_type)))
  {
    return false;
  }
  // dangerous_goods_type
  if (!v2x_msgs__msg__DangerousGoodsBasic__copy(
      &(input->dangerous_goods_type), &(output->dangerous_goods_type)))
  {
    return false;
  }
  // special_transport_type
  if (!v2x_msgs__msg__SpecialTransportType__copy(
      &(input->special_transport_type), &(output->special_transport_type)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__LoadType *
v2x_msgs__msg__LoadType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LoadType * msg = (v2x_msgs__msg__LoadType *)allocator.allocate(sizeof(v2x_msgs__msg__LoadType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__LoadType));
  bool success = v2x_msgs__msg__LoadType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__LoadType__destroy(v2x_msgs__msg__LoadType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__LoadType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__LoadType__Sequence__init(v2x_msgs__msg__LoadType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LoadType * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__LoadType *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__LoadType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__LoadType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__LoadType__fini(&data[i - 1]);
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
v2x_msgs__msg__LoadType__Sequence__fini(v2x_msgs__msg__LoadType__Sequence * array)
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
      v2x_msgs__msg__LoadType__fini(&array->data[i]);
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

v2x_msgs__msg__LoadType__Sequence *
v2x_msgs__msg__LoadType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LoadType__Sequence * array = (v2x_msgs__msg__LoadType__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__LoadType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__LoadType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__LoadType__Sequence__destroy(v2x_msgs__msg__LoadType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__LoadType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__LoadType__Sequence__are_equal(const v2x_msgs__msg__LoadType__Sequence * lhs, const v2x_msgs__msg__LoadType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__LoadType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__LoadType__Sequence__copy(
  const v2x_msgs__msg__LoadType__Sequence * input,
  v2x_msgs__msg__LoadType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__LoadType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__LoadType * data =
      (v2x_msgs__msg__LoadType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__LoadType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__LoadType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__LoadType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
