// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from imu_msgs:msg/AG041.idl
// generated code does not contain a copyright notice

#ifndef IMU_MSGS__MSG__DETAIL__AG041__FUNCTIONS_H_
#define IMU_MSGS__MSG__DETAIL__AG041__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "imu_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "imu_msgs/msg/detail/ag041__struct.h"

/// Initialize msg/AG041 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * imu_msgs__msg__AG041
 * )) before or use
 * imu_msgs__msg__AG041__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
bool
imu_msgs__msg__AG041__init(imu_msgs__msg__AG041 * msg);

/// Finalize msg/AG041 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
void
imu_msgs__msg__AG041__fini(imu_msgs__msg__AG041 * msg);

/// Create msg/AG041 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * imu_msgs__msg__AG041__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
imu_msgs__msg__AG041 *
imu_msgs__msg__AG041__create();

/// Destroy msg/AG041 message.
/**
 * It calls
 * imu_msgs__msg__AG041__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
void
imu_msgs__msg__AG041__destroy(imu_msgs__msg__AG041 * msg);

/// Check for msg/AG041 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
bool
imu_msgs__msg__AG041__are_equal(const imu_msgs__msg__AG041 * lhs, const imu_msgs__msg__AG041 * rhs);

/// Copy a msg/AG041 message.
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
imu_msgs__msg__AG041__copy(
  const imu_msgs__msg__AG041 * input,
  imu_msgs__msg__AG041 * output);

/// Initialize array of msg/AG041 messages.
/**
 * It allocates the memory for the number of elements and calls
 * imu_msgs__msg__AG041__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
bool
imu_msgs__msg__AG041__Sequence__init(imu_msgs__msg__AG041__Sequence * array, size_t size);

/// Finalize array of msg/AG041 messages.
/**
 * It calls
 * imu_msgs__msg__AG041__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
void
imu_msgs__msg__AG041__Sequence__fini(imu_msgs__msg__AG041__Sequence * array);

/// Create array of msg/AG041 messages.
/**
 * It allocates the memory for the array and calls
 * imu_msgs__msg__AG041__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
imu_msgs__msg__AG041__Sequence *
imu_msgs__msg__AG041__Sequence__create(size_t size);

/// Destroy array of msg/AG041 messages.
/**
 * It calls
 * imu_msgs__msg__AG041__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
void
imu_msgs__msg__AG041__Sequence__destroy(imu_msgs__msg__AG041__Sequence * array);

/// Check for msg/AG041 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_msgs
bool
imu_msgs__msg__AG041__Sequence__are_equal(const imu_msgs__msg__AG041__Sequence * lhs, const imu_msgs__msg__AG041__Sequence * rhs);

/// Copy an array of msg/AG041 messages.
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
imu_msgs__msg__AG041__Sequence__copy(
  const imu_msgs__msg__AG041__Sequence * input,
  imu_msgs__msg__AG041__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IMU_MSGS__MSG__DETAIL__AG041__FUNCTIONS_H_
