// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from car_msg:msg/CmdMsg.idl
// generated code does not contain a copyright notice
#include "car_msg/msg/detail/cmd_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "car_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "car_msg/msg/detail/cmd_msg__struct.h"
#include "car_msg/msg/detail/cmd_msg__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // led
#include "rosidl_runtime_c/string_functions.h"  // led

// forward declare type support functions


using _CmdMsg__ros_msg_type = car_msg__msg__CmdMsg;

static bool _CmdMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CmdMsg__ros_msg_type * ros_message = static_cast<const _CmdMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: velocity
  {
    cdr << ros_message->velocity;
  }

  // Field name: steering
  {
    cdr << ros_message->steering;
  }

  // Field name: brake
  {
    cdr << ros_message->brake;
  }

  // Field name: gears
  {
    cdr << ros_message->gears;
  }

  // Field name: led
  {
    const rosidl_runtime_c__String * str = &ros_message->led;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _CmdMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CmdMsg__ros_msg_type * ros_message = static_cast<_CmdMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: velocity
  {
    cdr >> ros_message->velocity;
  }

  // Field name: steering
  {
    cdr >> ros_message->steering;
  }

  // Field name: brake
  {
    cdr >> ros_message->brake;
  }

  // Field name: gears
  {
    cdr >> ros_message->gears;
  }

  // Field name: led
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->led.data) {
      rosidl_runtime_c__String__init(&ros_message->led);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->led,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'led'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_msg
size_t get_serialized_size_car_msg__msg__CmdMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CmdMsg__ros_msg_type * ros_message = static_cast<const _CmdMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name velocity
  {
    size_t item_size = sizeof(ros_message->velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering
  {
    size_t item_size = sizeof(ros_message->steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake
  {
    size_t item_size = sizeof(ros_message->brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gears
  {
    size_t item_size = sizeof(ros_message->gears);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name led
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->led.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _CmdMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_car_msg__msg__CmdMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_msg
size_t max_serialized_size_car_msg__msg__CmdMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gears
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: led
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CmdMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_car_msg__msg__CmdMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CmdMsg = {
  "car_msg::msg",
  "CmdMsg",
  _CmdMsg__cdr_serialize,
  _CmdMsg__cdr_deserialize,
  _CmdMsg__get_serialized_size,
  _CmdMsg__max_serialized_size
};

static rosidl_message_type_support_t _CmdMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CmdMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_msg, msg, CmdMsg)() {
  return &_CmdMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
