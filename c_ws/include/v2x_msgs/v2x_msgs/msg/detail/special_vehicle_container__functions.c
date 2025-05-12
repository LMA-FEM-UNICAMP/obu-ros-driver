// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SpecialVehicleContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/special_vehicle_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `public_transport_container`
#include "v2x_msgs/msg/detail/public_transport_container__functions.h"
// Member `special_transport_container`
#include "v2x_msgs/msg/detail/special_transport_container__functions.h"
// Member `dangerous_goods_container`
#include "v2x_msgs/msg/detail/dangerous_goods_container__functions.h"
// Member `road_works_container_basic`
#include "v2x_msgs/msg/detail/road_works_container_basic__functions.h"
// Member `rescue_container`
#include "v2x_msgs/msg/detail/rescue_container__functions.h"
// Member `emergency_container`
#include "v2x_msgs/msg/detail/emergency_container__functions.h"
// Member `safety_car_container`
#include "v2x_msgs/msg/detail/safety_car_container__functions.h"

bool
v2x_msgs__msg__SpecialVehicleContainer__init(v2x_msgs__msg__SpecialVehicleContainer * msg)
{
  if (!msg) {
    return false;
  }
  // special_vehicle_container_container_select
  msg->special_vehicle_container_container_select = 0ll;
  // public_transport_container
  if (!v2x_msgs__msg__PublicTransportContainer__init(&msg->public_transport_container)) {
    v2x_msgs__msg__SpecialVehicleContainer__fini(msg);
    return false;
  }
  // special_transport_container
  if (!v2x_msgs__msg__SpecialTransportContainer__init(&msg->special_transport_container)) {
    v2x_msgs__msg__SpecialVehicleContainer__fini(msg);
    return false;
  }
  // dangerous_goods_container
  if (!v2x_msgs__msg__DangerousGoodsContainer__init(&msg->dangerous_goods_container)) {
    v2x_msgs__msg__SpecialVehicleContainer__fini(msg);
    return false;
  }
  // road_works_container_basic
  if (!v2x_msgs__msg__RoadWorksContainerBasic__init(&msg->road_works_container_basic)) {
    v2x_msgs__msg__SpecialVehicleContainer__fini(msg);
    return false;
  }
  // rescue_container
  if (!v2x_msgs__msg__RescueContainer__init(&msg->rescue_container)) {
    v2x_msgs__msg__SpecialVehicleContainer__fini(msg);
    return false;
  }
  // emergency_container
  if (!v2x_msgs__msg__EmergencyContainer__init(&msg->emergency_container)) {
    v2x_msgs__msg__SpecialVehicleContainer__fini(msg);
    return false;
  }
  // safety_car_container
  if (!v2x_msgs__msg__SafetyCarContainer__init(&msg->safety_car_container)) {
    v2x_msgs__msg__SpecialVehicleContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SpecialVehicleContainer__fini(v2x_msgs__msg__SpecialVehicleContainer * msg)
{
  if (!msg) {
    return;
  }
  // special_vehicle_container_container_select
  // public_transport_container
  v2x_msgs__msg__PublicTransportContainer__fini(&msg->public_transport_container);
  // special_transport_container
  v2x_msgs__msg__SpecialTransportContainer__fini(&msg->special_transport_container);
  // dangerous_goods_container
  v2x_msgs__msg__DangerousGoodsContainer__fini(&msg->dangerous_goods_container);
  // road_works_container_basic
  v2x_msgs__msg__RoadWorksContainerBasic__fini(&msg->road_works_container_basic);
  // rescue_container
  v2x_msgs__msg__RescueContainer__fini(&msg->rescue_container);
  // emergency_container
  v2x_msgs__msg__EmergencyContainer__fini(&msg->emergency_container);
  // safety_car_container
  v2x_msgs__msg__SafetyCarContainer__fini(&msg->safety_car_container);
}

bool
v2x_msgs__msg__SpecialVehicleContainer__are_equal(const v2x_msgs__msg__SpecialVehicleContainer * lhs, const v2x_msgs__msg__SpecialVehicleContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // special_vehicle_container_container_select
  if (lhs->special_vehicle_container_container_select != rhs->special_vehicle_container_container_select) {
    return false;
  }
  // public_transport_container
  if (!v2x_msgs__msg__PublicTransportContainer__are_equal(
      &(lhs->public_transport_container), &(rhs->public_transport_container)))
  {
    return false;
  }
  // special_transport_container
  if (!v2x_msgs__msg__SpecialTransportContainer__are_equal(
      &(lhs->special_transport_container), &(rhs->special_transport_container)))
  {
    return false;
  }
  // dangerous_goods_container
  if (!v2x_msgs__msg__DangerousGoodsContainer__are_equal(
      &(lhs->dangerous_goods_container), &(rhs->dangerous_goods_container)))
  {
    return false;
  }
  // road_works_container_basic
  if (!v2x_msgs__msg__RoadWorksContainerBasic__are_equal(
      &(lhs->road_works_container_basic), &(rhs->road_works_container_basic)))
  {
    return false;
  }
  // rescue_container
  if (!v2x_msgs__msg__RescueContainer__are_equal(
      &(lhs->rescue_container), &(rhs->rescue_container)))
  {
    return false;
  }
  // emergency_container
  if (!v2x_msgs__msg__EmergencyContainer__are_equal(
      &(lhs->emergency_container), &(rhs->emergency_container)))
  {
    return false;
  }
  // safety_car_container
  if (!v2x_msgs__msg__SafetyCarContainer__are_equal(
      &(lhs->safety_car_container), &(rhs->safety_car_container)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__SpecialVehicleContainer__copy(
  const v2x_msgs__msg__SpecialVehicleContainer * input,
  v2x_msgs__msg__SpecialVehicleContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // special_vehicle_container_container_select
  output->special_vehicle_container_container_select = input->special_vehicle_container_container_select;
  // public_transport_container
  if (!v2x_msgs__msg__PublicTransportContainer__copy(
      &(input->public_transport_container), &(output->public_transport_container)))
  {
    return false;
  }
  // special_transport_container
  if (!v2x_msgs__msg__SpecialTransportContainer__copy(
      &(input->special_transport_container), &(output->special_transport_container)))
  {
    return false;
  }
  // dangerous_goods_container
  if (!v2x_msgs__msg__DangerousGoodsContainer__copy(
      &(input->dangerous_goods_container), &(output->dangerous_goods_container)))
  {
    return false;
  }
  // road_works_container_basic
  if (!v2x_msgs__msg__RoadWorksContainerBasic__copy(
      &(input->road_works_container_basic), &(output->road_works_container_basic)))
  {
    return false;
  }
  // rescue_container
  if (!v2x_msgs__msg__RescueContainer__copy(
      &(input->rescue_container), &(output->rescue_container)))
  {
    return false;
  }
  // emergency_container
  if (!v2x_msgs__msg__EmergencyContainer__copy(
      &(input->emergency_container), &(output->emergency_container)))
  {
    return false;
  }
  // safety_car_container
  if (!v2x_msgs__msg__SafetyCarContainer__copy(
      &(input->safety_car_container), &(output->safety_car_container)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__SpecialVehicleContainer *
v2x_msgs__msg__SpecialVehicleContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SpecialVehicleContainer * msg = (v2x_msgs__msg__SpecialVehicleContainer *)allocator.allocate(sizeof(v2x_msgs__msg__SpecialVehicleContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SpecialVehicleContainer));
  bool success = v2x_msgs__msg__SpecialVehicleContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SpecialVehicleContainer__destroy(v2x_msgs__msg__SpecialVehicleContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SpecialVehicleContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SpecialVehicleContainer__Sequence__init(v2x_msgs__msg__SpecialVehicleContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SpecialVehicleContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SpecialVehicleContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SpecialVehicleContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SpecialVehicleContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SpecialVehicleContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__SpecialVehicleContainer__Sequence__fini(v2x_msgs__msg__SpecialVehicleContainer__Sequence * array)
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
      v2x_msgs__msg__SpecialVehicleContainer__fini(&array->data[i]);
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

v2x_msgs__msg__SpecialVehicleContainer__Sequence *
v2x_msgs__msg__SpecialVehicleContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SpecialVehicleContainer__Sequence * array = (v2x_msgs__msg__SpecialVehicleContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SpecialVehicleContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SpecialVehicleContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SpecialVehicleContainer__Sequence__destroy(v2x_msgs__msg__SpecialVehicleContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SpecialVehicleContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SpecialVehicleContainer__Sequence__are_equal(const v2x_msgs__msg__SpecialVehicleContainer__Sequence * lhs, const v2x_msgs__msg__SpecialVehicleContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SpecialVehicleContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SpecialVehicleContainer__Sequence__copy(
  const v2x_msgs__msg__SpecialVehicleContainer__Sequence * input,
  v2x_msgs__msg__SpecialVehicleContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SpecialVehicleContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SpecialVehicleContainer * data =
      (v2x_msgs__msg__SpecialVehicleContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SpecialVehicleContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SpecialVehicleContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SpecialVehicleContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
