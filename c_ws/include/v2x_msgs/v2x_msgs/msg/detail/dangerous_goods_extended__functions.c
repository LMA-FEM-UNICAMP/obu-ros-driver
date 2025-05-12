// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/DangerousGoodsExtended.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/dangerous_goods_extended__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `dangerous_goods_type`
#include "v2x_msgs/msg/detail/dangerous_goods_basic__functions.h"
// Member `emergency_action_code`
// Member `company_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `phone_number`
#include "v2x_msgs/msg/detail/phone_number__functions.h"

bool
v2x_msgs__msg__DangerousGoodsExtended__init(v2x_msgs__msg__DangerousGoodsExtended * msg)
{
  if (!msg) {
    return false;
  }
  // dangerous_goods_type
  if (!v2x_msgs__msg__DangerousGoodsBasic__init(&msg->dangerous_goods_type)) {
    v2x_msgs__msg__DangerousGoodsExtended__fini(msg);
    return false;
  }
  // un_number
  // elevated_temperature
  // tunnels_restricted
  // limited_quantity
  // emergency_action_code_present
  msg->emergency_action_code_present = false;
  // emergency_action_code
  if (!rosidl_runtime_c__String__init(&msg->emergency_action_code)) {
    v2x_msgs__msg__DangerousGoodsExtended__fini(msg);
    return false;
  }
  // phone_number_present
  msg->phone_number_present = false;
  // phone_number
  if (!v2x_msgs__msg__PhoneNumber__init(&msg->phone_number)) {
    v2x_msgs__msg__DangerousGoodsExtended__fini(msg);
    return false;
  }
  // company_name_present
  msg->company_name_present = false;
  // company_name
  if (!rosidl_runtime_c__String__init(&msg->company_name)) {
    v2x_msgs__msg__DangerousGoodsExtended__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__DangerousGoodsExtended__fini(v2x_msgs__msg__DangerousGoodsExtended * msg)
{
  if (!msg) {
    return;
  }
  // dangerous_goods_type
  v2x_msgs__msg__DangerousGoodsBasic__fini(&msg->dangerous_goods_type);
  // un_number
  // elevated_temperature
  // tunnels_restricted
  // limited_quantity
  // emergency_action_code_present
  // emergency_action_code
  rosidl_runtime_c__String__fini(&msg->emergency_action_code);
  // phone_number_present
  // phone_number
  v2x_msgs__msg__PhoneNumber__fini(&msg->phone_number);
  // company_name_present
  // company_name
  rosidl_runtime_c__String__fini(&msg->company_name);
}

bool
v2x_msgs__msg__DangerousGoodsExtended__are_equal(const v2x_msgs__msg__DangerousGoodsExtended * lhs, const v2x_msgs__msg__DangerousGoodsExtended * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dangerous_goods_type
  if (!v2x_msgs__msg__DangerousGoodsBasic__are_equal(
      &(lhs->dangerous_goods_type), &(rhs->dangerous_goods_type)))
  {
    return false;
  }
  // un_number
  if (lhs->un_number != rhs->un_number) {
    return false;
  }
  // elevated_temperature
  if (lhs->elevated_temperature != rhs->elevated_temperature) {
    return false;
  }
  // tunnels_restricted
  if (lhs->tunnels_restricted != rhs->tunnels_restricted) {
    return false;
  }
  // limited_quantity
  if (lhs->limited_quantity != rhs->limited_quantity) {
    return false;
  }
  // emergency_action_code_present
  if (lhs->emergency_action_code_present != rhs->emergency_action_code_present) {
    return false;
  }
  // emergency_action_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->emergency_action_code), &(rhs->emergency_action_code)))
  {
    return false;
  }
  // phone_number_present
  if (lhs->phone_number_present != rhs->phone_number_present) {
    return false;
  }
  // phone_number
  if (!v2x_msgs__msg__PhoneNumber__are_equal(
      &(lhs->phone_number), &(rhs->phone_number)))
  {
    return false;
  }
  // company_name_present
  if (lhs->company_name_present != rhs->company_name_present) {
    return false;
  }
  // company_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->company_name), &(rhs->company_name)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__DangerousGoodsExtended__copy(
  const v2x_msgs__msg__DangerousGoodsExtended * input,
  v2x_msgs__msg__DangerousGoodsExtended * output)
{
  if (!input || !output) {
    return false;
  }
  // dangerous_goods_type
  if (!v2x_msgs__msg__DangerousGoodsBasic__copy(
      &(input->dangerous_goods_type), &(output->dangerous_goods_type)))
  {
    return false;
  }
  // un_number
  output->un_number = input->un_number;
  // elevated_temperature
  output->elevated_temperature = input->elevated_temperature;
  // tunnels_restricted
  output->tunnels_restricted = input->tunnels_restricted;
  // limited_quantity
  output->limited_quantity = input->limited_quantity;
  // emergency_action_code_present
  output->emergency_action_code_present = input->emergency_action_code_present;
  // emergency_action_code
  if (!rosidl_runtime_c__String__copy(
      &(input->emergency_action_code), &(output->emergency_action_code)))
  {
    return false;
  }
  // phone_number_present
  output->phone_number_present = input->phone_number_present;
  // phone_number
  if (!v2x_msgs__msg__PhoneNumber__copy(
      &(input->phone_number), &(output->phone_number)))
  {
    return false;
  }
  // company_name_present
  output->company_name_present = input->company_name_present;
  // company_name
  if (!rosidl_runtime_c__String__copy(
      &(input->company_name), &(output->company_name)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__DangerousGoodsExtended *
v2x_msgs__msg__DangerousGoodsExtended__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DangerousGoodsExtended * msg = (v2x_msgs__msg__DangerousGoodsExtended *)allocator.allocate(sizeof(v2x_msgs__msg__DangerousGoodsExtended), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__DangerousGoodsExtended));
  bool success = v2x_msgs__msg__DangerousGoodsExtended__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__DangerousGoodsExtended__destroy(v2x_msgs__msg__DangerousGoodsExtended * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__DangerousGoodsExtended__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__DangerousGoodsExtended__Sequence__init(v2x_msgs__msg__DangerousGoodsExtended__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DangerousGoodsExtended * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__DangerousGoodsExtended *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__DangerousGoodsExtended), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__DangerousGoodsExtended__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__DangerousGoodsExtended__fini(&data[i - 1]);
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
v2x_msgs__msg__DangerousGoodsExtended__Sequence__fini(v2x_msgs__msg__DangerousGoodsExtended__Sequence * array)
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
      v2x_msgs__msg__DangerousGoodsExtended__fini(&array->data[i]);
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

v2x_msgs__msg__DangerousGoodsExtended__Sequence *
v2x_msgs__msg__DangerousGoodsExtended__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DangerousGoodsExtended__Sequence * array = (v2x_msgs__msg__DangerousGoodsExtended__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__DangerousGoodsExtended__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__DangerousGoodsExtended__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__DangerousGoodsExtended__Sequence__destroy(v2x_msgs__msg__DangerousGoodsExtended__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__DangerousGoodsExtended__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__DangerousGoodsExtended__Sequence__are_equal(const v2x_msgs__msg__DangerousGoodsExtended__Sequence * lhs, const v2x_msgs__msg__DangerousGoodsExtended__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__DangerousGoodsExtended__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__DangerousGoodsExtended__Sequence__copy(
  const v2x_msgs__msg__DangerousGoodsExtended__Sequence * input,
  v2x_msgs__msg__DangerousGoodsExtended__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__DangerousGoodsExtended);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__DangerousGoodsExtended * data =
      (v2x_msgs__msg__DangerousGoodsExtended *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__DangerousGoodsExtended__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__DangerousGoodsExtended__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__DangerousGoodsExtended__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
