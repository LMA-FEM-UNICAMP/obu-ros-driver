// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/map_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_stamp`
#include "v2x_msgs/msg/detail/minute_of_the_year__functions.h"
// Member `msg_issue_revision`
#include "v2x_msgs/msg/detail/msg_count__functions.h"
// Member `layer_type`
#include "v2x_msgs/msg/detail/layer_type__functions.h"
// Member `layer_id`
#include "v2x_msgs/msg/detail/layer_id__functions.h"
// Member `intersections`
#include "v2x_msgs/msg/detail/intersection_geometry_list__functions.h"
// Member `road_segments`
#include "v2x_msgs/msg/detail/road_segment_list__functions.h"
// Member `data_parameters`
#include "v2x_msgs/msg/detail/data_parameters__functions.h"
// Member `restriction_list`
#include "v2x_msgs/msg/detail/restriction_class_list__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_map_data__functions.h"

bool
v2x_msgs__msg__MapData__init(v2x_msgs__msg__MapData * msg)
{
  if (!msg) {
    return false;
  }
  // time_stamp_present
  msg->time_stamp_present = false;
  // time_stamp
  if (!v2x_msgs__msg__MinuteOfTheYear__init(&msg->time_stamp)) {
    v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // msg_issue_revision
  if (!v2x_msgs__msg__MsgCount__init(&msg->msg_issue_revision)) {
    v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // layer_type_present
  msg->layer_type_present = false;
  // layer_type
  if (!v2x_msgs__msg__LayerType__init(&msg->layer_type)) {
    v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // layer_id_present
  msg->layer_id_present = false;
  // layer_id
  if (!v2x_msgs__msg__LayerID__init(&msg->layer_id)) {
    v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // intersections_present
  msg->intersections_present = false;
  // intersections
  if (!v2x_msgs__msg__IntersectionGeometryList__init(&msg->intersections)) {
    v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // road_segments_present
  msg->road_segments_present = false;
  // road_segments
  if (!v2x_msgs__msg__RoadSegmentList__init(&msg->road_segments)) {
    v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // data_parameters_present
  msg->data_parameters_present = false;
  // data_parameters
  if (!v2x_msgs__msg__DataParameters__init(&msg->data_parameters)) {
    v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // restriction_list_present
  msg->restriction_list_present = false;
  // restriction_list
  if (!v2x_msgs__msg__RestrictionClassList__init(&msg->restriction_list)) {
    v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegMapData__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__MapData__fini(v2x_msgs__msg__MapData * msg)
{
  if (!msg) {
    return;
  }
  // time_stamp_present
  // time_stamp
  v2x_msgs__msg__MinuteOfTheYear__fini(&msg->time_stamp);
  // msg_issue_revision
  v2x_msgs__msg__MsgCount__fini(&msg->msg_issue_revision);
  // layer_type_present
  // layer_type
  v2x_msgs__msg__LayerType__fini(&msg->layer_type);
  // layer_id_present
  // layer_id
  v2x_msgs__msg__LayerID__fini(&msg->layer_id);
  // intersections_present
  // intersections
  v2x_msgs__msg__IntersectionGeometryList__fini(&msg->intersections);
  // road_segments_present
  // road_segments
  v2x_msgs__msg__RoadSegmentList__fini(&msg->road_segments);
  // data_parameters_present
  // data_parameters
  v2x_msgs__msg__DataParameters__fini(&msg->data_parameters);
  // restriction_list_present
  // restriction_list
  v2x_msgs__msg__RestrictionClassList__fini(&msg->restriction_list);
  // regional_present
  // regional
  v2x_msgs__msg__RegMapData__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__MapData__are_equal(const v2x_msgs__msg__MapData * lhs, const v2x_msgs__msg__MapData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_stamp_present
  if (lhs->time_stamp_present != rhs->time_stamp_present) {
    return false;
  }
  // time_stamp
  if (!v2x_msgs__msg__MinuteOfTheYear__are_equal(
      &(lhs->time_stamp), &(rhs->time_stamp)))
  {
    return false;
  }
  // msg_issue_revision
  if (!v2x_msgs__msg__MsgCount__are_equal(
      &(lhs->msg_issue_revision), &(rhs->msg_issue_revision)))
  {
    return false;
  }
  // layer_type_present
  if (lhs->layer_type_present != rhs->layer_type_present) {
    return false;
  }
  // layer_type
  if (!v2x_msgs__msg__LayerType__are_equal(
      &(lhs->layer_type), &(rhs->layer_type)))
  {
    return false;
  }
  // layer_id_present
  if (lhs->layer_id_present != rhs->layer_id_present) {
    return false;
  }
  // layer_id
  if (!v2x_msgs__msg__LayerID__are_equal(
      &(lhs->layer_id), &(rhs->layer_id)))
  {
    return false;
  }
  // intersections_present
  if (lhs->intersections_present != rhs->intersections_present) {
    return false;
  }
  // intersections
  if (!v2x_msgs__msg__IntersectionGeometryList__are_equal(
      &(lhs->intersections), &(rhs->intersections)))
  {
    return false;
  }
  // road_segments_present
  if (lhs->road_segments_present != rhs->road_segments_present) {
    return false;
  }
  // road_segments
  if (!v2x_msgs__msg__RoadSegmentList__are_equal(
      &(lhs->road_segments), &(rhs->road_segments)))
  {
    return false;
  }
  // data_parameters_present
  if (lhs->data_parameters_present != rhs->data_parameters_present) {
    return false;
  }
  // data_parameters
  if (!v2x_msgs__msg__DataParameters__are_equal(
      &(lhs->data_parameters), &(rhs->data_parameters)))
  {
    return false;
  }
  // restriction_list_present
  if (lhs->restriction_list_present != rhs->restriction_list_present) {
    return false;
  }
  // restriction_list
  if (!v2x_msgs__msg__RestrictionClassList__are_equal(
      &(lhs->restriction_list), &(rhs->restriction_list)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegMapData__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__MapData__copy(
  const v2x_msgs__msg__MapData * input,
  v2x_msgs__msg__MapData * output)
{
  if (!input || !output) {
    return false;
  }
  // time_stamp_present
  output->time_stamp_present = input->time_stamp_present;
  // time_stamp
  if (!v2x_msgs__msg__MinuteOfTheYear__copy(
      &(input->time_stamp), &(output->time_stamp)))
  {
    return false;
  }
  // msg_issue_revision
  if (!v2x_msgs__msg__MsgCount__copy(
      &(input->msg_issue_revision), &(output->msg_issue_revision)))
  {
    return false;
  }
  // layer_type_present
  output->layer_type_present = input->layer_type_present;
  // layer_type
  if (!v2x_msgs__msg__LayerType__copy(
      &(input->layer_type), &(output->layer_type)))
  {
    return false;
  }
  // layer_id_present
  output->layer_id_present = input->layer_id_present;
  // layer_id
  if (!v2x_msgs__msg__LayerID__copy(
      &(input->layer_id), &(output->layer_id)))
  {
    return false;
  }
  // intersections_present
  output->intersections_present = input->intersections_present;
  // intersections
  if (!v2x_msgs__msg__IntersectionGeometryList__copy(
      &(input->intersections), &(output->intersections)))
  {
    return false;
  }
  // road_segments_present
  output->road_segments_present = input->road_segments_present;
  // road_segments
  if (!v2x_msgs__msg__RoadSegmentList__copy(
      &(input->road_segments), &(output->road_segments)))
  {
    return false;
  }
  // data_parameters_present
  output->data_parameters_present = input->data_parameters_present;
  // data_parameters
  if (!v2x_msgs__msg__DataParameters__copy(
      &(input->data_parameters), &(output->data_parameters)))
  {
    return false;
  }
  // restriction_list_present
  output->restriction_list_present = input->restriction_list_present;
  // restriction_list
  if (!v2x_msgs__msg__RestrictionClassList__copy(
      &(input->restriction_list), &(output->restriction_list)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegMapData__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__MapData *
v2x_msgs__msg__MapData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__MapData * msg = (v2x_msgs__msg__MapData *)allocator.allocate(sizeof(v2x_msgs__msg__MapData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__MapData));
  bool success = v2x_msgs__msg__MapData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__MapData__destroy(v2x_msgs__msg__MapData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__MapData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__MapData__Sequence__init(v2x_msgs__msg__MapData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__MapData * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__MapData *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__MapData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__MapData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__MapData__fini(&data[i - 1]);
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
v2x_msgs__msg__MapData__Sequence__fini(v2x_msgs__msg__MapData__Sequence * array)
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
      v2x_msgs__msg__MapData__fini(&array->data[i]);
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

v2x_msgs__msg__MapData__Sequence *
v2x_msgs__msg__MapData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__MapData__Sequence * array = (v2x_msgs__msg__MapData__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__MapData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__MapData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__MapData__Sequence__destroy(v2x_msgs__msg__MapData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__MapData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__MapData__Sequence__are_equal(const v2x_msgs__msg__MapData__Sequence * lhs, const v2x_msgs__msg__MapData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__MapData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__MapData__Sequence__copy(
  const v2x_msgs__msg__MapData__Sequence * input,
  v2x_msgs__msg__MapData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__MapData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__MapData * data =
      (v2x_msgs__msg__MapData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__MapData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__MapData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__MapData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
