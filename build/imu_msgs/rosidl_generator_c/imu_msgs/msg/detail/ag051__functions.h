// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from imu_msgs:msg/AG051.idl
// generated code does not contain a copyright notice

#ifndef IMU_MSGS__MSG__DETAIL__AG051__FUNCTIONS_H_
#define IMU_MSGS__MSG__DETAIL__AG051__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "imu_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "imu_msgs/msg/detail/ag051__struct.h"

/// Initialize msg/AG051 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * imu_msgs__msg__AG051
 * )) before or use
 * imu_msgs__msg__AG051__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
bool
imu_msgs__msg__AG051__init(imu_msgs__msg__AG051 * msg);

/// Finalize msg/AG051 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
void
imu_msgs__msg__AG051__fini(imu_msgs__msg__AG051 * msg);

/// Create msg/AG051 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * imu_msgs__msg__AG051__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
imu_msgs__msg__AG051 *
imu_msgs__msg__AG051__create();

/// Destroy msg/AG051 message.
/**
 * It calls
 * imu_msgs__msg__AG051__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
void
imu_msgs__msg__AG051__destroy(imu_msgs__msg__AG051 * msg);

/// Check for msg/AG051 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
bool
imu_msgs__msg__AG051__are_equal(const imu_msgs__msg__AG051 * lhs, const imu_msgs__msg__AG051 * rhs);

/// Copy a msg/AG051 message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
bool
imu_msgs__msg__AG051__copy(
  const imu_msgs__msg__AG051 * input,
  imu_msgs__msg__AG051 * output);

/// Initialize array of msg/AG051 messages.
/**
 * It allocates the memory for the number of elements and calls
 * imu_msgs__msg__AG051__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
bool
imu_msgs__msg__AG051__Sequence__init(imu_msgs__msg__AG051__Sequence * array, size_t size);

/// Finalize array of msg/AG051 messages.
/**
 * It calls
 * imu_msgs__msg__AG051__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
void
imu_msgs__msg__AG051__Sequence__fini(imu_msgs__msg__AG051__Sequence * array);

/// Create array of msg/AG051 messages.
/**
 * It allocates the memory for the array and calls
 * imu_msgs__msg__AG051__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
imu_msgs__msg__AG051__Sequence *
imu_msgs__msg__AG051__Sequence__create(size_t size);

/// Destroy array of msg/AG051 messages.
/**
 * It calls
 * imu_msgs__msg__AG051__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
void
imu_msgs__msg__AG051__Sequence__destroy(imu_msgs__msg__AG051__Sequence * array);

/// Check for msg/AG051 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
bool
imu_msgs__msg__AG051__Sequence__are_equal(const imu_msgs__msg__AG051__Sequence * lhs, const imu_msgs__msg__AG051__Sequence * rhs);

/// Copy an array of msg/AG051 messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
bool
imu_msgs__msg__AG051__Sequence__copy(
  const imu_msgs__msg__AG051__Sequence * input,
  imu_msgs__msg__AG051__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IMU_MSGS__MSG__DETAIL__AG051__FUNCTIONS_H_
