// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from imu_msgs:msg/AG041.idl
// generated code does not contain a copyright notice
#include "imu_msgs/msg/detail/ag041__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "imu_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "imu_msgs/msg/detail/ag041__struct.h"
#include "imu_msgs/msg/detail/ag041__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_imu_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_imu_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_imu_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _AG041__ros_msg_type = imu_msgs__msg__AG041;

static bool _AG041__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AG041__ros_msg_type * ros_message = static_cast<const _AG041__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: gx
  {
    cdr << ros_message->gx;
  }

  // Field name: gy
  {
    cdr << ros_message->gy;
  }

  // Field name: gz
  {
    cdr << ros_message->gz;
  }

  // Field name: ax
  {
    cdr << ros_message->ax;
  }

  // Field name: ay
  {
    cdr << ros_message->ay;
  }

  // Field name: az
  {
    cdr << ros_message->az;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: time
  {
    cdr << ros_message->time;
  }

  // Field name: gps_message
  {
    size_t size = 13;
    auto array_ptr = ros_message->gps_message;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gps_heading_status
  {
    cdr << ros_message->gps_heading_status;
  }

  // Field name: ptype
  {
    cdr << ros_message->ptype;
  }

  // Field name: pdata
  {
    cdr << ros_message->pdata;
  }

  // Field name: ver_pos
  {
    cdr << ros_message->ver_pos;
  }

  // Field name: ver_vel
  {
    cdr << ros_message->ver_vel;
  }

  // Field name: info_byte
  {
    cdr << ros_message->info_byte;
  }

  // Field name: ag041_type
  {
    cdr << ros_message->ag041_type;
  }

  return true;
}

static bool _AG041__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AG041__ros_msg_type * ros_message = static_cast<_AG041__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: gx
  {
    cdr >> ros_message->gx;
  }

  // Field name: gy
  {
    cdr >> ros_message->gy;
  }

  // Field name: gz
  {
    cdr >> ros_message->gz;
  }

  // Field name: ax
  {
    cdr >> ros_message->ax;
  }

  // Field name: ay
  {
    cdr >> ros_message->ay;
  }

  // Field name: az
  {
    cdr >> ros_message->az;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: time
  {
    cdr >> ros_message->time;
  }

  // Field name: gps_message
  {
    size_t size = 13;
    auto array_ptr = ros_message->gps_message;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gps_heading_status
  {
    cdr >> ros_message->gps_heading_status;
  }

  // Field name: ptype
  {
    cdr >> ros_message->ptype;
  }

  // Field name: pdata
  {
    cdr >> ros_message->pdata;
  }

  // Field name: ver_pos
  {
    cdr >> ros_message->ver_pos;
  }

  // Field name: ver_vel
  {
    cdr >> ros_message->ver_vel;
  }

  // Field name: info_byte
  {
    cdr >> ros_message->info_byte;
  }

  // Field name: ag041_type
  {
    cdr >> ros_message->ag041_type;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imu_msgs
size_t get_serialized_size_imu_msgs__msg__AG041(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AG041__ros_msg_type * ros_message = static_cast<const _AG041__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gx
  {
    size_t item_size = sizeof(ros_message->gx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gy
  {
    size_t item_size = sizeof(ros_message->gy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gz
  {
    size_t item_size = sizeof(ros_message->gz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ax
  {
    size_t item_size = sizeof(ros_message->ax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ay
  {
    size_t item_size = sizeof(ros_message->ay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name az
  {
    size_t item_size = sizeof(ros_message->az);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_message
  {
    size_t array_size = 13;
    auto array_ptr = ros_message->gps_message;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_heading_status
  {
    size_t item_size = sizeof(ros_message->gps_heading_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ptype
  {
    size_t item_size = sizeof(ros_message->ptype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pdata
  {
    size_t item_size = sizeof(ros_message->pdata);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ver_pos
  {
    size_t item_size = sizeof(ros_message->ver_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ver_vel
  {
    size_t item_size = sizeof(ros_message->ver_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name info_byte
  {
    size_t item_size = sizeof(ros_message->info_byte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ag041_type
  {
    size_t item_size = sizeof(ros_message->ag041_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AG041__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_imu_msgs__msg__AG041(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imu_msgs
size_t max_serialized_size_imu_msgs__msg__AG041(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ay
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: az
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_message
  {
    size_t array_size = 13;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_heading_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ptype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pdata
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ver_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ver_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: info_byte
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ag041_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AG041__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_imu_msgs__msg__AG041(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AG041 = {
  "imu_msgs::msg",
  "AG041",
  _AG041__cdr_serialize,
  _AG041__cdr_deserialize,
  _AG041__get_serialized_size,
  _AG041__max_serialized_size
};

static rosidl_message_type_support_t _AG041__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AG041,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, imu_msgs, msg, AG041)() {
  return &_AG041__type_support;
}

#if defined(__cplusplus)
}
#endif
