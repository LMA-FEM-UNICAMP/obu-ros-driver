// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RTCMcorrections.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/rtc_mcorrections__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `msg_cnt`
#include "v2x_msgs/msg/detail/msg_count__functions.h"
// Member `rev`
#include "v2x_msgs/msg/detail/rtcm_revision__functions.h"
// Member `time_stamp`
#include "v2x_msgs/msg/detail/minute_of_the_year__functions.h"
// Member `anchor_point`
#include "v2x_msgs/msg/detail/full_position_vector__functions.h"
// Member `rtcm_header`
#include "v2x_msgs/msg/detail/rtc_mheader__functions.h"
// Member `msgs`
#include "v2x_msgs/msg/detail/rtc_mmessage_list__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_rtc_mcorrections__functions.h"

bool
v2x_msgs__msg__RTCMcorrections__init(v2x_msgs__msg__RTCMcorrections * msg)
{
  if (!msg) {
    return false;
  }
  // msg_cnt
  if (!v2x_msgs__msg__MsgCount__init(&msg->msg_cnt)) {
    v2x_msgs__msg__RTCMcorrections__fini(msg);
    return false;
  }
  // rev
  if (!v2x_msgs__msg__RTCMRevision__init(&msg->rev)) {
    v2x_msgs__msg__RTCMcorrections__fini(msg);
    return false;
  }
  // time_stamp_present
  msg->time_stamp_present = false;
  // time_stamp
  if (!v2x_msgs__msg__MinuteOfTheYear__init(&msg->time_stamp)) {
    v2x_msgs__msg__RTCMcorrections__fini(msg);
    return false;
  }
  // anchor_point_present
  msg->anchor_point_present = false;
  // anchor_point
  if (!v2x_msgs__msg__FullPositionVector__init(&msg->anchor_point)) {
    v2x_msgs__msg__RTCMcorrections__fini(msg);
    return false;
  }
  // rtcm_header_present
  msg->rtcm_header_present = false;
  // rtcm_header
  if (!v2x_msgs__msg__RTCMheader__init(&msg->rtcm_header)) {
    v2x_msgs__msg__RTCMcorrections__fini(msg);
    return false;
  }
  // msgs
  if (!v2x_msgs__msg__RTCMmessageList__init(&msg->msgs)) {
    v2x_msgs__msg__RTCMcorrections__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegRTCMcorrections__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__RTCMcorrections__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RTCMcorrections__fini(v2x_msgs__msg__RTCMcorrections * msg)
{
  if (!msg) {
    return;
  }
  // msg_cnt
  v2x_msgs__msg__MsgCount__fini(&msg->msg_cnt);
  // rev
  v2x_msgs__msg__RTCMRevision__fini(&msg->rev);
  // time_stamp_present
  // time_stamp
  v2x_msgs__msg__MinuteOfTheYear__fini(&msg->time_stamp);
  // anchor_point_present
  // anchor_point
  v2x_msgs__msg__FullPositionVector__fini(&msg->anchor_point);
  // rtcm_header_present
  // rtcm_header
  v2x_msgs__msg__RTCMheader__fini(&msg->rtcm_header);
  // msgs
  v2x_msgs__msg__RTCMmessageList__fini(&msg->msgs);
  // regional_present
  // regional
  v2x_msgs__msg__RegRTCMcorrections__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__RTCMcorrections__are_equal(const v2x_msgs__msg__RTCMcorrections * lhs, const v2x_msgs__msg__RTCMcorrections * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // msg_cnt
  if (!v2x_msgs__msg__MsgCount__are_equal(
      &(lhs->msg_cnt), &(rhs->msg_cnt)))
  {
    return false;
  }
  // rev
  if (!v2x_msgs__msg__RTCMRevision__are_equal(
      &(lhs->rev), &(rhs->rev)))
  {
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
  // anchor_point_present
  if (lhs->anchor_point_present != rhs->anchor_point_present) {
    return false;
  }
  // anchor_point
  if (!v2x_msgs__msg__FullPositionVector__are_equal(
      &(lhs->anchor_point), &(rhs->anchor_point)))
  {
    return false;
  }
  // rtcm_header_present
  if (lhs->rtcm_header_present != rhs->rtcm_header_present) {
    return false;
  }
  // rtcm_header
  if (!v2x_msgs__msg__RTCMheader__are_equal(
      &(lhs->rtcm_header), &(rhs->rtcm_header)))
  {
    return false;
  }
  // msgs
  if (!v2x_msgs__msg__RTCMmessageList__are_equal(
      &(lhs->msgs), &(rhs->msgs)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegRTCMcorrections__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RTCMcorrections__copy(
  const v2x_msgs__msg__RTCMcorrections * input,
  v2x_msgs__msg__RTCMcorrections * output)
{
  if (!input || !output) {
    return false;
  }
  // msg_cnt
  if (!v2x_msgs__msg__MsgCount__copy(
      &(input->msg_cnt), &(output->msg_cnt)))
  {
    return false;
  }
  // rev
  if (!v2x_msgs__msg__RTCMRevision__copy(
      &(input->rev), &(output->rev)))
  {
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
  // anchor_point_present
  output->anchor_point_present = input->anchor_point_present;
  // anchor_point
  if (!v2x_msgs__msg__FullPositionVector__copy(
      &(input->anchor_point), &(output->anchor_point)))
  {
    return false;
  }
  // rtcm_header_present
  output->rtcm_header_present = input->rtcm_header_present;
  // rtcm_header
  if (!v2x_msgs__msg__RTCMheader__copy(
      &(input->rtcm_header), &(output->rtcm_header)))
  {
    return false;
  }
  // msgs
  if (!v2x_msgs__msg__RTCMmessageList__copy(
      &(input->msgs), &(output->msgs)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegRTCMcorrections__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RTCMcorrections *
v2x_msgs__msg__RTCMcorrections__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RTCMcorrections * msg = (v2x_msgs__msg__RTCMcorrections *)allocator.allocate(sizeof(v2x_msgs__msg__RTCMcorrections), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RTCMcorrections));
  bool success = v2x_msgs__msg__RTCMcorrections__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RTCMcorrections__destroy(v2x_msgs__msg__RTCMcorrections * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RTCMcorrections__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RTCMcorrections__Sequence__init(v2x_msgs__msg__RTCMcorrections__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RTCMcorrections * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RTCMcorrections *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RTCMcorrections), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RTCMcorrections__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RTCMcorrections__fini(&data[i - 1]);
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
v2x_msgs__msg__RTCMcorrections__Sequence__fini(v2x_msgs__msg__RTCMcorrections__Sequence * array)
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
      v2x_msgs__msg__RTCMcorrections__fini(&array->data[i]);
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

v2x_msgs__msg__RTCMcorrections__Sequence *
v2x_msgs__msg__RTCMcorrections__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RTCMcorrections__Sequence * array = (v2x_msgs__msg__RTCMcorrections__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RTCMcorrections__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RTCMcorrections__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RTCMcorrections__Sequence__destroy(v2x_msgs__msg__RTCMcorrections__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RTCMcorrections__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RTCMcorrections__Sequence__are_equal(const v2x_msgs__msg__RTCMcorrections__Sequence * lhs, const v2x_msgs__msg__RTCMcorrections__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RTCMcorrections__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RTCMcorrections__Sequence__copy(
  const v2x_msgs__msg__RTCMcorrections__Sequence * input,
  v2x_msgs__msg__RTCMcorrections__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RTCMcorrections);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RTCMcorrections * data =
      (v2x_msgs__msg__RTCMcorrections *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RTCMcorrections__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RTCMcorrections__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RTCMcorrections__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
