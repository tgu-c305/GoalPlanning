// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from car_msg:msg/CmdMsg.idl
// generated code does not contain a copyright notice

#ifndef CAR_MSG__MSG__DETAIL__CMD_MSG__FUNCTIONS_H_
#define CAR_MSG__MSG__DETAIL__CMD_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "car_msg/msg/rosidl_generator_c__visibility_control.h"

#include "car_msg/msg/detail/cmd_msg__struct.h"

/// Initialize msg/CmdMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * car_msg__msg__CmdMsg
 * )) before or use
 * car_msg__msg__CmdMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_car_msg
bool
car_msg__msg__CmdMsg__init(car_msg__msg__CmdMsg * msg);

/// Finalize msg/CmdMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_msg
void
car_msg__msg__CmdMsg__fini(car_msg__msg__CmdMsg * msg);

/// Create msg/CmdMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * car_msg__msg__CmdMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_car_msg
car_msg__msg__CmdMsg *
car_msg__msg__CmdMsg__create();

/// Destroy msg/CmdMsg message.
/**
 * It calls
 * car_msg__msg__CmdMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_msg
void
car_msg__msg__CmdMsg__destroy(car_msg__msg__CmdMsg * msg);

/// Check for msg/CmdMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_msg
bool
car_msg__msg__CmdMsg__are_equal(const car_msg__msg__CmdMsg * lhs, const car_msg__msg__CmdMsg * rhs);

/// Copy a msg/CmdMsg message.
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
ROSIDL_GENERATOR_C_PUBLIC_car_msg
bool
car_msg__msg__CmdMsg__copy(
  const car_msg__msg__CmdMsg * input,
  car_msg__msg__CmdMsg * output);

/// Initialize array of msg/CmdMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * car_msg__msg__CmdMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_msg
bool
car_msg__msg__CmdMsg__Sequence__init(car_msg__msg__CmdMsg__Sequence * array, size_t size);

/// Finalize array of msg/CmdMsg messages.
/**
 * It calls
 * car_msg__msg__CmdMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_msg
void
car_msg__msg__CmdMsg__Sequence__fini(car_msg__msg__CmdMsg__Sequence * array);

/// Create array of msg/CmdMsg messages.
/**
 * It allocates the memory for the array and calls
 * car_msg__msg__CmdMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_car_msg
car_msg__msg__CmdMsg__Sequence *
car_msg__msg__CmdMsg__Sequence__create(size_t size);

/// Destroy array of msg/CmdMsg messages.
/**
 * It calls
 * car_msg__msg__CmdMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_msg
void
car_msg__msg__CmdMsg__Sequence__destroy(car_msg__msg__CmdMsg__Sequence * array);

/// Check for msg/CmdMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_msg
bool
car_msg__msg__CmdMsg__Sequence__are_equal(const car_msg__msg__CmdMsg__Sequence * lhs, const car_msg__msg__CmdMsg__Sequence * rhs);

/// Copy an array of msg/CmdMsg messages.
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
ROSIDL_GENERATOR_C_PUBLIC_car_msg
bool
car_msg__msg__CmdMsg__Sequence__copy(
  const car_msg__msg__CmdMsg__Sequence * input,
  car_msg__msg__CmdMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAR_MSG__MSG__DETAIL__CMD_MSG__FUNCTIONS_H_
