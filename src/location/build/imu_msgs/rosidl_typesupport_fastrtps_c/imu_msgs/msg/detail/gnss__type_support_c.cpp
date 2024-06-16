// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from imu_msgs:msg/Gnss.idl
// generated code does not contain a copyright notice
#include "imu_msgs/msg/detail/gnss__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "imu_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "imu_msgs/msg/detail/gnss__struct.h"
#include "imu_msgs/msg/detail/gnss__functions.h"
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


using _Gnss__ros_msg_type = imu_msgs__msg__Gnss;

static bool _Gnss__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Gnss__ros_msg_type * ros_message = static_cast<const _Gnss__ros_msg_type *>(untyped_ros_message);
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

  // Field name: gnss_lon
  {
    cdr << ros_message->gnss_lon;
  }

  // Field name: gnss_lat
  {
    cdr << ros_message->gnss_lat;
  }

  // Field name: gnss_alt
  {
    cdr << ros_message->gnss_alt;
  }

  // Field name: gnss_lon_sigma
  {
    cdr << ros_message->gnss_lon_sigma;
  }

  // Field name: gnss_lat_sigma
  {
    cdr << ros_message->gnss_lat_sigma;
  }

  // Field name: gnss_alt_sigma
  {
    cdr << ros_message->gnss_alt_sigma;
  }

  // Field name: gnss_ve
  {
    cdr << ros_message->gnss_ve;
  }

  // Field name: gnss_vn
  {
    cdr << ros_message->gnss_vn;
  }

  // Field name: gnss_vu
  {
    cdr << ros_message->gnss_vu;
  }

  // Field name: gnss_ve_sigma
  {
    cdr << ros_message->gnss_ve_sigma;
  }

  // Field name: gnss_vn_sigma
  {
    cdr << ros_message->gnss_vn_sigma;
  }

  // Field name: gnss_vu_sigma
  {
    cdr << ros_message->gnss_vu_sigma;
  }

  // Field name: gnss_age
  {
    cdr << ros_message->gnss_age;
  }

  // Field name: gnss_hdop
  {
    cdr << ros_message->gnss_hdop;
  }

  // Field name: gnss_vdop
  {
    cdr << ros_message->gnss_vdop;
  }

  // Field name: gnss_mas_antusedsatnum
  {
    cdr << ros_message->gnss_mas_antusedsatnum;
  }

  // Field name: gnss_satnum
  {
    cdr << ros_message->gnss_satnum;
  }

  // Field name: gnss_mas_anthighqualitysatnum
  {
    cdr << ros_message->gnss_mas_anthighqualitysatnum;
  }

  // Field name: gnss_time
  {
    cdr << ros_message->gnss_time;
  }

  // Field name: gnss_trk
  {
    cdr << ros_message->gnss_trk;
  }

  // Field name: gnss_stat
  {
    cdr << ros_message->gnss_stat;
  }

  // Field name: pos_up
  {
    cdr << ros_message->pos_up;
  }

  // Field name: pos_east
  {
    cdr << ros_message->pos_east;
  }

  // Field name: pos_north
  {
    cdr << ros_message->pos_north;
  }

  return true;
}

static bool _Gnss__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Gnss__ros_msg_type * ros_message = static_cast<_Gnss__ros_msg_type *>(untyped_ros_message);
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

  // Field name: gnss_lon
  {
    cdr >> ros_message->gnss_lon;
  }

  // Field name: gnss_lat
  {
    cdr >> ros_message->gnss_lat;
  }

  // Field name: gnss_alt
  {
    cdr >> ros_message->gnss_alt;
  }

  // Field name: gnss_lon_sigma
  {
    cdr >> ros_message->gnss_lon_sigma;
  }

  // Field name: gnss_lat_sigma
  {
    cdr >> ros_message->gnss_lat_sigma;
  }

  // Field name: gnss_alt_sigma
  {
    cdr >> ros_message->gnss_alt_sigma;
  }

  // Field name: gnss_ve
  {
    cdr >> ros_message->gnss_ve;
  }

  // Field name: gnss_vn
  {
    cdr >> ros_message->gnss_vn;
  }

  // Field name: gnss_vu
  {
    cdr >> ros_message->gnss_vu;
  }

  // Field name: gnss_ve_sigma
  {
    cdr >> ros_message->gnss_ve_sigma;
  }

  // Field name: gnss_vn_sigma
  {
    cdr >> ros_message->gnss_vn_sigma;
  }

  // Field name: gnss_vu_sigma
  {
    cdr >> ros_message->gnss_vu_sigma;
  }

  // Field name: gnss_age
  {
    cdr >> ros_message->gnss_age;
  }

  // Field name: gnss_hdop
  {
    cdr >> ros_message->gnss_hdop;
  }

  // Field name: gnss_vdop
  {
    cdr >> ros_message->gnss_vdop;
  }

  // Field name: gnss_mas_antusedsatnum
  {
    cdr >> ros_message->gnss_mas_antusedsatnum;
  }

  // Field name: gnss_satnum
  {
    cdr >> ros_message->gnss_satnum;
  }

  // Field name: gnss_mas_anthighqualitysatnum
  {
    cdr >> ros_message->gnss_mas_anthighqualitysatnum;
  }

  // Field name: gnss_time
  {
    cdr >> ros_message->gnss_time;
  }

  // Field name: gnss_trk
  {
    cdr >> ros_message->gnss_trk;
  }

  // Field name: gnss_stat
  {
    cdr >> ros_message->gnss_stat;
  }

  // Field name: pos_up
  {
    cdr >> ros_message->pos_up;
  }

  // Field name: pos_east
  {
    cdr >> ros_message->pos_east;
  }

  // Field name: pos_north
  {
    cdr >> ros_message->pos_north;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imu_msgs
size_t get_serialized_size_imu_msgs__msg__Gnss(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Gnss__ros_msg_type * ros_message = static_cast<const _Gnss__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name gnss_lon
  {
    size_t item_size = sizeof(ros_message->gnss_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_lat
  {
    size_t item_size = sizeof(ros_message->gnss_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_alt
  {
    size_t item_size = sizeof(ros_message->gnss_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_lon_sigma
  {
    size_t item_size = sizeof(ros_message->gnss_lon_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_lat_sigma
  {
    size_t item_size = sizeof(ros_message->gnss_lat_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_alt_sigma
  {
    size_t item_size = sizeof(ros_message->gnss_alt_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_ve
  {
    size_t item_size = sizeof(ros_message->gnss_ve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_vn
  {
    size_t item_size = sizeof(ros_message->gnss_vn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_vu
  {
    size_t item_size = sizeof(ros_message->gnss_vu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_ve_sigma
  {
    size_t item_size = sizeof(ros_message->gnss_ve_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_vn_sigma
  {
    size_t item_size = sizeof(ros_message->gnss_vn_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_vu_sigma
  {
    size_t item_size = sizeof(ros_message->gnss_vu_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_age
  {
    size_t item_size = sizeof(ros_message->gnss_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_hdop
  {
    size_t item_size = sizeof(ros_message->gnss_hdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_vdop
  {
    size_t item_size = sizeof(ros_message->gnss_vdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_mas_antusedsatnum
  {
    size_t item_size = sizeof(ros_message->gnss_mas_antusedsatnum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_satnum
  {
    size_t item_size = sizeof(ros_message->gnss_satnum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_mas_anthighqualitysatnum
  {
    size_t item_size = sizeof(ros_message->gnss_mas_anthighqualitysatnum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_time
  {
    size_t item_size = sizeof(ros_message->gnss_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_trk
  {
    size_t item_size = sizeof(ros_message->gnss_trk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_stat
  {
    size_t item_size = sizeof(ros_message->gnss_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_up
  {
    size_t item_size = sizeof(ros_message->pos_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_east
  {
    size_t item_size = sizeof(ros_message->pos_east);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_north
  {
    size_t item_size = sizeof(ros_message->pos_north);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Gnss__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_imu_msgs__msg__Gnss(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imu_msgs
size_t max_serialized_size_imu_msgs__msg__Gnss(
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
  // member: gnss_lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gnss_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gnss_alt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gnss_lon_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_lat_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_alt_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_ve
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_vn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_vu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_ve_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_vn_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_vu_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: gnss_hdop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_vdop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_mas_antusedsatnum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gnss_satnum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gnss_mas_anthighqualitysatnum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gnss_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gnss_trk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_stat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pos_up
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_east
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_north
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Gnss__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_imu_msgs__msg__Gnss(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Gnss = {
  "imu_msgs::msg",
  "Gnss",
  _Gnss__cdr_serialize,
  _Gnss__cdr_deserialize,
  _Gnss__get_serialized_size,
  _Gnss__max_serialized_size
};

static rosidl_message_type_support_t _Gnss__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Gnss,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, imu_msgs, msg, Gnss)() {
  return &_Gnss__type_support;
}

#if defined(__cplusplus)
}
#endif
