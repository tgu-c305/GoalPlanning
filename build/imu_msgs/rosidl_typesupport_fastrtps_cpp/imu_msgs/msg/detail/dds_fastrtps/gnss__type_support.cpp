// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from imu_msgs:msg/Gnss.idl
// generated code does not contain a copyright notice
#include "imu_msgs/msg/detail/gnss__rosidl_typesupport_fastrtps_cpp.hpp"
#include "imu_msgs/msg/detail/gnss__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace imu_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imu_msgs
cdr_serialize(
  const imu_msgs::msg::Gnss & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: gnss_lon
  cdr << ros_message.gnss_lon;
  // Member: gnss_lat
  cdr << ros_message.gnss_lat;
  // Member: gnss_alt
  cdr << ros_message.gnss_alt;
  // Member: gnss_lon_sigma
  cdr << ros_message.gnss_lon_sigma;
  // Member: gnss_lat_sigma
  cdr << ros_message.gnss_lat_sigma;
  // Member: gnss_alt_sigma
  cdr << ros_message.gnss_alt_sigma;
  // Member: gnss_ve
  cdr << ros_message.gnss_ve;
  // Member: gnss_vn
  cdr << ros_message.gnss_vn;
  // Member: gnss_vu
  cdr << ros_message.gnss_vu;
  // Member: gnss_ve_sigma
  cdr << ros_message.gnss_ve_sigma;
  // Member: gnss_vn_sigma
  cdr << ros_message.gnss_vn_sigma;
  // Member: gnss_vu_sigma
  cdr << ros_message.gnss_vu_sigma;
  // Member: gnss_age
  cdr << ros_message.gnss_age;
  // Member: gnss_hdop
  cdr << ros_message.gnss_hdop;
  // Member: gnss_vdop
  cdr << ros_message.gnss_vdop;
  // Member: gnss_mas_antusedsatnum
  cdr << ros_message.gnss_mas_antusedsatnum;
  // Member: gnss_satnum
  cdr << ros_message.gnss_satnum;
  // Member: gnss_mas_anthighqualitysatnum
  cdr << ros_message.gnss_mas_anthighqualitysatnum;
  // Member: gnss_time
  cdr << ros_message.gnss_time;
  // Member: gnss_trk
  cdr << ros_message.gnss_trk;
  // Member: gnss_stat
  cdr << ros_message.gnss_stat;
  // Member: pos_up
  cdr << ros_message.pos_up;
  // Member: pos_east
  cdr << ros_message.pos_east;
  // Member: pos_north
  cdr << ros_message.pos_north;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imu_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  imu_msgs::msg::Gnss & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: gnss_lon
  cdr >> ros_message.gnss_lon;

  // Member: gnss_lat
  cdr >> ros_message.gnss_lat;

  // Member: gnss_alt
  cdr >> ros_message.gnss_alt;

  // Member: gnss_lon_sigma
  cdr >> ros_message.gnss_lon_sigma;

  // Member: gnss_lat_sigma
  cdr >> ros_message.gnss_lat_sigma;

  // Member: gnss_alt_sigma
  cdr >> ros_message.gnss_alt_sigma;

  // Member: gnss_ve
  cdr >> ros_message.gnss_ve;

  // Member: gnss_vn
  cdr >> ros_message.gnss_vn;

  // Member: gnss_vu
  cdr >> ros_message.gnss_vu;

  // Member: gnss_ve_sigma
  cdr >> ros_message.gnss_ve_sigma;

  // Member: gnss_vn_sigma
  cdr >> ros_message.gnss_vn_sigma;

  // Member: gnss_vu_sigma
  cdr >> ros_message.gnss_vu_sigma;

  // Member: gnss_age
  cdr >> ros_message.gnss_age;

  // Member: gnss_hdop
  cdr >> ros_message.gnss_hdop;

  // Member: gnss_vdop
  cdr >> ros_message.gnss_vdop;

  // Member: gnss_mas_antusedsatnum
  cdr >> ros_message.gnss_mas_antusedsatnum;

  // Member: gnss_satnum
  cdr >> ros_message.gnss_satnum;

  // Member: gnss_mas_anthighqualitysatnum
  cdr >> ros_message.gnss_mas_anthighqualitysatnum;

  // Member: gnss_time
  cdr >> ros_message.gnss_time;

  // Member: gnss_trk
  cdr >> ros_message.gnss_trk;

  // Member: gnss_stat
  cdr >> ros_message.gnss_stat;

  // Member: pos_up
  cdr >> ros_message.pos_up;

  // Member: pos_east
  cdr >> ros_message.pos_east;

  // Member: pos_north
  cdr >> ros_message.pos_north;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imu_msgs
get_serialized_size(
  const imu_msgs::msg::Gnss & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: gnss_lon
  {
    size_t item_size = sizeof(ros_message.gnss_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_lat
  {
    size_t item_size = sizeof(ros_message.gnss_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_alt
  {
    size_t item_size = sizeof(ros_message.gnss_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_lon_sigma
  {
    size_t item_size = sizeof(ros_message.gnss_lon_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_lat_sigma
  {
    size_t item_size = sizeof(ros_message.gnss_lat_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_alt_sigma
  {
    size_t item_size = sizeof(ros_message.gnss_alt_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_ve
  {
    size_t item_size = sizeof(ros_message.gnss_ve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_vn
  {
    size_t item_size = sizeof(ros_message.gnss_vn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_vu
  {
    size_t item_size = sizeof(ros_message.gnss_vu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_ve_sigma
  {
    size_t item_size = sizeof(ros_message.gnss_ve_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_vn_sigma
  {
    size_t item_size = sizeof(ros_message.gnss_vn_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_vu_sigma
  {
    size_t item_size = sizeof(ros_message.gnss_vu_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_age
  {
    size_t item_size = sizeof(ros_message.gnss_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_hdop
  {
    size_t item_size = sizeof(ros_message.gnss_hdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_vdop
  {
    size_t item_size = sizeof(ros_message.gnss_vdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_mas_antusedsatnum
  {
    size_t item_size = sizeof(ros_message.gnss_mas_antusedsatnum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_satnum
  {
    size_t item_size = sizeof(ros_message.gnss_satnum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_mas_anthighqualitysatnum
  {
    size_t item_size = sizeof(ros_message.gnss_mas_anthighqualitysatnum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_time
  {
    size_t item_size = sizeof(ros_message.gnss_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_trk
  {
    size_t item_size = sizeof(ros_message.gnss_trk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_stat
  {
    size_t item_size = sizeof(ros_message.gnss_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_up
  {
    size_t item_size = sizeof(ros_message.pos_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_east
  {
    size_t item_size = sizeof(ros_message.pos_east);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_north
  {
    size_t item_size = sizeof(ros_message.pos_north);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imu_msgs
max_serialized_size_Gnss(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: gnss_lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gnss_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gnss_alt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gnss_lon_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_lat_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_alt_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_ve
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_vn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_vu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_ve_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_vn_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_vu_sigma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: gnss_hdop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_vdop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_mas_antusedsatnum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gnss_satnum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gnss_mas_anthighqualitysatnum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gnss_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gnss_trk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_stat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pos_up
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_east
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_north
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Gnss__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const imu_msgs::msg::Gnss *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Gnss__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<imu_msgs::msg::Gnss *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Gnss__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const imu_msgs::msg::Gnss *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Gnss__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Gnss(full_bounded, 0);
}

static message_type_support_callbacks_t _Gnss__callbacks = {
  "imu_msgs::msg",
  "Gnss",
  _Gnss__cdr_serialize,
  _Gnss__cdr_deserialize,
  _Gnss__get_serialized_size,
  _Gnss__max_serialized_size
};

static rosidl_message_type_support_t _Gnss__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Gnss__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace imu_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_imu_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<imu_msgs::msg::Gnss>()
{
  return &imu_msgs::msg::typesupport_fastrtps_cpp::_Gnss__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, imu_msgs, msg, Gnss)() {
  return &imu_msgs::msg::typesupport_fastrtps_cpp::_Gnss__handle;
}

#ifdef __cplusplus
}
#endif
