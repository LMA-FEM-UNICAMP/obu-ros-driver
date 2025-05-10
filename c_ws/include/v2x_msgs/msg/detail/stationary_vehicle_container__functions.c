// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/StationaryVehicleContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/stationary_vehicle_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stationary_since`
#include "v2x_msgs/msg/detail/stationary_since__functions.h"
// Member `stationary_cause`
#include "v2x_msgs/msg/detail/cause_code__functions.h"
// Member `carrying_dangerous_goods`
#include "v2x_msgs/msg/detail/dangerous_goods_extended__functions.h"
// Member `number_of_occupants`
#include "v2x_msgs/msg/detail/number_of_occupants__functions.h"
// Member `vehicle_identification`
#include "v2x_msgs/msg/detail/vehicle_identification__functions.h"
// Member `energy_storage_type`
#include "v2x_msgs/msg/detail/energy_storage_type__functions.h"

bool
v2x_msgs__msg__StationaryVehicleContainer__init(v2x_msgs__msg__StationaryVehicleContainer * msg)
{
  if (!msg) {
    return false;
  }
  // stationary_since_present
  msg->stationary_since_present = false;
  // stationary_since
  if (!v2x_msgs__msg__StationarySince__init(&msg->stationary_since)) {
    v2x_msgs__msg__StationaryVehicleContainer__fini(msg);
    return false;
  }
  // stationary_cause_present
  msg->stationary_cause_present = false;
  // stationary_cause
  if (!v2x_msgs__msg__CauseCode__init(&msg->stationary_cause)) {
    v2x_msgs__msg__StationaryVehicleContainer__fini(msg);
    return false;
  }
  // carrying_dangerous_goods_present
  msg->carrying_dangerous_goods_present = false;
  // carrying_dangerous_goods
  if (!v2x_msgs__msg__DangerousGoodsExtended__init(&msg->carrying_dangerous_goods)) {
    v2x_msgs__msg__StationaryVehicleContainer__fini(msg);
    return false;
  }
  // number_of_occupants_present
  msg->number_of_occupants_present = false;
  // number_of_occupants
  if (!v2x_msgs__msg__NumberOfOccupants__init(&msg->number_of_occupants)) {
    v2x_msgs__msg__StationaryVehicleContainer__fini(msg);
    return false;
  }
  // vehicle_identification_present
  msg->vehicle_identification_present = false;
  // vehicle_identification
  if (!v2x_msgs__msg__VehicleIdentification__init(&msg->vehicle_identification)) {
    v2x_msgs__msg__StationaryVehicleContainer__fini(msg);
    return false;
  }
  // energy_storage_type_present
  msg->energy_storage_type_present = false;
  // energy_storage_type
  if (!v2x_msgs__msg__EnergyStorageType__init(&msg->energy_storage_type)) {
    v2x_msgs__msg__StationaryVehicleContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__StationaryVehicleContainer__fini(v2x_msgs__msg__StationaryVehicleContainer * msg)
{
  if (!msg) {
    return;
  }
  // stationary_since_present
  // stationary_since
  v2x_msgs__msg__StationarySince__fini(&msg->stationary_since);
  // stationary_cause_present
  // stationary_cause
  v2x_msgs__msg__CauseCode__fini(&msg->stationary_cause);
  // carrying_dangerous_goods_present
  // carrying_dangerous_goods
  v2x_msgs__msg__DangerousGoodsExtended__fini(&msg->carrying_dangerous_goods);
  // number_of_occupants_present
  // number_of_occupants
  v2x_msgs__msg__NumberOfOccupants__fini(&msg->number_of_occupants);
  // vehicle_identification_present
  // vehicle_identification
  v2x_msgs__msg__VehicleIdentification__fini(&msg->vehicle_identification);
  // energy_storage_type_present
  // energy_storage_type
  v2x_msgs__msg__EnergyStorageType__fini(&msg->energy_storage_type);
}

bool
v2x_msgs__msg__StationaryVehicleContainer__are_equal(const v2x_msgs__msg__StationaryVehicleContainer * lhs, const v2x_msgs__msg__StationaryVehicleContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stationary_since_present
  if (lhs->stationary_since_present != rhs->stationary_since_present) {
    return false;
  }
  // stationary_since
  if (!v2x_msgs__msg__StationarySince__are_equal(
      &(lhs->stationary_since), &(rhs->stationary_since)))
  {
    return false;
  }
  // stationary_cause_present
  if (lhs->stationary_cause_present != rhs->stationary_cause_present) {
    return false;
  }
  // stationary_cause
  if (!v2x_msgs__msg__CauseCode__are_equal(
      &(lhs->stationary_cause), &(rhs->stationary_cause)))
  {
    return false;
  }
  // carrying_dangerous_goods_present
  if (lhs->carrying_dangerous_goods_present != rhs->carrying_dangerous_goods_present) {
    return false;
  }
  // carrying_dangerous_goods
  if (!v2x_msgs__msg__DangerousGoodsExtended__are_equal(
      &(lhs->carrying_dangerous_goods), &(rhs->carrying_dangerous_goods)))
  {
    return false;
  }
  // number_of_occupants_present
  if (lhs->number_of_occupants_present != rhs->number_of_occupants_present) {
    return false;
  }
  // number_of_occupants
  if (!v2x_msgs__msg__NumberOfOccupants__are_equal(
      &(lhs->number_of_occupants), &(rhs->number_of_occupants)))
  {
    return false;
  }
  // vehicle_identification_present
  if (lhs->vehicle_identification_present != rhs->vehicle_identification_present) {
    return false;
  }
  // vehicle_identification
  if (!v2x_msgs__msg__VehicleIdentification__are_equal(
      &(lhs->vehicle_identification), &(rhs->vehicle_identification)))
  {
    return false;
  }
  // energy_storage_type_present
  if (lhs->energy_storage_type_present != rhs->energy_storage_type_present) {
    return false;
  }
  // energy_storage_type
  if (!v2x_msgs__msg__EnergyStorageType__are_equal(
      &(lhs->energy_storage_type), &(rhs->energy_storage_type)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__StationaryVehicleContainer__copy(
  const v2x_msgs__msg__StationaryVehicleContainer * input,
  v2x_msgs__msg__StationaryVehicleContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // stationary_since_present
  output->stationary_since_present = input->stationary_since_present;
  // stationary_since
  if (!v2x_msgs__msg__StationarySince__copy(
      &(input->stationary_since), &(output->stationary_since)))
  {
    return false;
  }
  // stationary_cause_present
  output->stationary_cause_present = input->stationary_cause_present;
  // stationary_cause
  if (!v2x_msgs__msg__CauseCode__copy(
      &(input->stationary_cause), &(output->stationary_cause)))
  {
    return false;
  }
  // carrying_dangerous_goods_present
  output->carrying_dangerous_goods_present = input->carrying_dangerous_goods_present;
  // carrying_dangerous_goods
  if (!v2x_msgs__msg__DangerousGoodsExtended__copy(
      &(input->carrying_dangerous_goods), &(output->carrying_dangerous_goods)))
  {
    return false;
  }
  // number_of_occupants_present
  output->number_of_occupants_present = input->number_of_occupants_present;
  // number_of_occupants
  if (!v2x_msgs__msg__NumberOfOccupants__copy(
      &(input->number_of_occupants), &(output->number_of_occupants)))
  {
    return false;
  }
  // vehicle_identification_present
  output->vehicle_identification_present = input->vehicle_identification_present;
  // vehicle_identification
  if (!v2x_msgs__msg__VehicleIdentification__copy(
      &(input->vehicle_identification), &(output->vehicle_identification)))
  {
    return false;
  }
  // energy_storage_type_present
  output->energy_storage_type_present = input->energy_storage_type_present;
  // energy_storage_type
  if (!v2x_msgs__msg__EnergyStorageType__copy(
      &(input->energy_storage_type), &(output->energy_storage_type)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__StationaryVehicleContainer *
v2x_msgs__msg__StationaryVehicleContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__StationaryVehicleContainer * msg = (v2x_msgs__msg__StationaryVehicleContainer *)allocator.allocate(sizeof(v2x_msgs__msg__StationaryVehicleContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__StationaryVehicleContainer));
  bool success = v2x_msgs__msg__StationaryVehicleContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__StationaryVehicleContainer__destroy(v2x_msgs__msg__StationaryVehicleContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__StationaryVehicleContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__StationaryVehicleContainer__Sequence__init(v2x_msgs__msg__StationaryVehicleContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__StationaryVehicleContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__StationaryVehicleContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__StationaryVehicleContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__StationaryVehicleContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__StationaryVehicleContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__StationaryVehicleContainer__Sequence__fini(v2x_msgs__msg__StationaryVehicleContainer__Sequence * array)
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
      v2x_msgs__msg__StationaryVehicleContainer__fini(&array->data[i]);
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

v2x_msgs__msg__StationaryVehicleContainer__Sequence *
v2x_msgs__msg__StationaryVehicleContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__StationaryVehicleContainer__Sequence * array = (v2x_msgs__msg__StationaryVehicleContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__StationaryVehicleContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__StationaryVehicleContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__StationaryVehicleContainer__Sequence__destroy(v2x_msgs__msg__StationaryVehicleContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__StationaryVehicleContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__StationaryVehicleContainer__Sequence__are_equal(const v2x_msgs__msg__StationaryVehicleContainer__Sequence * lhs, const v2x_msgs__msg__StationaryVehicleContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__StationaryVehicleContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__StationaryVehicleContainer__Sequence__copy(
  const v2x_msgs__msg__StationaryVehicleContainer__Sequence * input,
  v2x_msgs__msg__StationaryVehicleContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__StationaryVehicleContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__StationaryVehicleContainer * data =
      (v2x_msgs__msg__StationaryVehicleContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__StationaryVehicleContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__StationaryVehicleContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__StationaryVehicleContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
