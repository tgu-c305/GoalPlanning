// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imu_msgs:msg/AG072.idl
// generated code does not contain a copyright notice
#include "imu_msgs/msg/detail/ag072__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
imu_msgs__msg__AG072__init(imu_msgs__msg__AG072 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    imu_msgs__msg__AG072__fini(msg);
    return false;
  }
  // gx
  // gy
  // gz
  // ax
  // ay
  // az
  // temperature
  // status
  // frame_count
  return true;
}

void
imu_msgs__msg__AG072__fini(imu_msgs__msg__AG072 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // gx
  // gy
  // gz
  // ax
  // ay
  // az
  // temperature
  // status
  // frame_count
}

bool
imu_msgs__msg__AG072__are_equal(const imu_msgs__msg__AG072 * lhs, const imu_msgs__msg__AG072 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // gx
  if (lhs->gx != rhs->gx) {
    return false;
  }
  // gy
  if (lhs->gy != rhs->gy) {
    return false;
  }
  // gz
  if (lhs->gz != rhs->gz) {
    return false;
  }
  // ax
  if (lhs->ax != rhs->ax) {
    return false;
  }
  // ay
  if (lhs->ay != rhs->ay) {
    return false;
  }
  // az
  if (lhs->az != rhs->az) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // frame_count
  if (lhs->frame_count != rhs->frame_count) {
    return false;
  }
  return true;
}

bool
imu_msgs__msg__AG072__copy(
  const imu_msgs__msg__AG072 * input,
  imu_msgs__msg__AG072 * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // gx
  output->gx = input->gx;
  // gy
  output->gy = input->gy;
  // gz
  output->gz = input->gz;
  // ax
  output->ax = input->ax;
  // ay
  output->ay = input->ay;
  // az
  output->az = input->az;
  // temperature
  output->temperature = input->temperature;
  // status
  output->status = input->status;
  // frame_count
  output->frame_count = input->frame_count;
  return true;
}

imu_msgs__msg__AG072 *
imu_msgs__msg__AG072__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_msgs__msg__AG072 * msg = (imu_msgs__msg__AG072 *)allocator.allocate(sizeof(imu_msgs__msg__AG072), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imu_msgs__msg__AG072));
  bool success = imu_msgs__msg__AG072__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imu_msgs__msg__AG072__destroy(imu_msgs__msg__AG072 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imu_msgs__msg__AG072__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imu_msgs__msg__AG072__Sequence__init(imu_msgs__msg__AG072__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_msgs__msg__AG072 * data = NULL;

  if (size) {
    data = (imu_msgs__msg__AG072 *)allocator.zero_allocate(size, sizeof(imu_msgs__msg__AG072), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imu_msgs__msg__AG072__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imu_msgs__msg__AG072__fini(&data[i - 1]);
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
imu_msgs__msg__AG072__Sequence__fini(imu_msgs__msg__AG072__Sequence * array)
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
      imu_msgs__msg__AG072__fini(&array->data[i]);
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

imu_msgs__msg__AG072__Sequence *
imu_msgs__msg__AG072__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_msgs__msg__AG072__Sequence * array = (imu_msgs__msg__AG072__Sequence *)allocator.allocate(sizeof(imu_msgs__msg__AG072__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imu_msgs__msg__AG072__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imu_msgs__msg__AG072__Sequence__destroy(imu_msgs__msg__AG072__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imu_msgs__msg__AG072__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imu_msgs__msg__AG072__Sequence__are_equal(const imu_msgs__msg__AG072__Sequence * lhs, const imu_msgs__msg__AG072__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imu_msgs__msg__AG072__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imu_msgs__msg__AG072__Sequence__copy(
  const imu_msgs__msg__AG072__Sequence * input,
  imu_msgs__msg__AG072__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imu_msgs__msg__AG072);
    imu_msgs__msg__AG072 * data =
      (imu_msgs__msg__AG072 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imu_msgs__msg__AG072__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          imu_msgs__msg__AG072__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imu_msgs__msg__AG072__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
