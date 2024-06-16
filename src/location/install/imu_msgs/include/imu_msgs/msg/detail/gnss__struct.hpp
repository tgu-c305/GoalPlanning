// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imu_msgs:msg/Gnss.idl
// generated code does not contain a copyright notice

#ifndef IMU_MSGS__MSG__DETAIL__GNSS__STRUCT_HPP_
#define IMU_MSGS__MSG__DETAIL__GNSS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__imu_msgs__msg__Gnss __attribute__((deprecated))
#else
# define DEPRECATED__imu_msgs__msg__Gnss __declspec(deprecated)
#endif

namespace imu_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gnss_
{
  using Type = Gnss_<ContainerAllocator>;

  explicit Gnss_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gnss_lon = 0.0;
      this->gnss_lat = 0.0;
      this->gnss_alt = 0.0;
      this->gnss_lon_sigma = 0.0f;
      this->gnss_lat_sigma = 0.0f;
      this->gnss_alt_sigma = 0.0f;
      this->gnss_ve = 0.0f;
      this->gnss_vn = 0.0f;
      this->gnss_vu = 0.0f;
      this->gnss_ve_sigma = 0.0f;
      this->gnss_vn_sigma = 0.0f;
      this->gnss_vu_sigma = 0.0f;
      this->gnss_age = 0;
      this->gnss_hdop = 0.0f;
      this->gnss_vdop = 0.0f;
      this->gnss_mas_antusedsatnum = 0;
      this->gnss_satnum = 0;
      this->gnss_mas_anthighqualitysatnum = 0;
      this->gnss_time = 0ull;
      this->gnss_trk = 0.0f;
      this->gnss_stat = 0;
      this->pos_up = 0.0f;
      this->pos_east = 0.0f;
      this->pos_north = 0.0f;
    }
  }

  explicit Gnss_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gnss_lon = 0.0;
      this->gnss_lat = 0.0;
      this->gnss_alt = 0.0;
      this->gnss_lon_sigma = 0.0f;
      this->gnss_lat_sigma = 0.0f;
      this->gnss_alt_sigma = 0.0f;
      this->gnss_ve = 0.0f;
      this->gnss_vn = 0.0f;
      this->gnss_vu = 0.0f;
      this->gnss_ve_sigma = 0.0f;
      this->gnss_vn_sigma = 0.0f;
      this->gnss_vu_sigma = 0.0f;
      this->gnss_age = 0;
      this->gnss_hdop = 0.0f;
      this->gnss_vdop = 0.0f;
      this->gnss_mas_antusedsatnum = 0;
      this->gnss_satnum = 0;
      this->gnss_mas_anthighqualitysatnum = 0;
      this->gnss_time = 0ull;
      this->gnss_trk = 0.0f;
      this->gnss_stat = 0;
      this->pos_up = 0.0f;
      this->pos_east = 0.0f;
      this->pos_north = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gnss_lon_type =
    double;
  _gnss_lon_type gnss_lon;
  using _gnss_lat_type =
    double;
  _gnss_lat_type gnss_lat;
  using _gnss_alt_type =
    double;
  _gnss_alt_type gnss_alt;
  using _gnss_lon_sigma_type =
    float;
  _gnss_lon_sigma_type gnss_lon_sigma;
  using _gnss_lat_sigma_type =
    float;
  _gnss_lat_sigma_type gnss_lat_sigma;
  using _gnss_alt_sigma_type =
    float;
  _gnss_alt_sigma_type gnss_alt_sigma;
  using _gnss_ve_type =
    float;
  _gnss_ve_type gnss_ve;
  using _gnss_vn_type =
    float;
  _gnss_vn_type gnss_vn;
  using _gnss_vu_type =
    float;
  _gnss_vu_type gnss_vu;
  using _gnss_ve_sigma_type =
    float;
  _gnss_ve_sigma_type gnss_ve_sigma;
  using _gnss_vn_sigma_type =
    float;
  _gnss_vn_sigma_type gnss_vn_sigma;
  using _gnss_vu_sigma_type =
    float;
  _gnss_vu_sigma_type gnss_vu_sigma;
  using _gnss_age_type =
    uint16_t;
  _gnss_age_type gnss_age;
  using _gnss_hdop_type =
    float;
  _gnss_hdop_type gnss_hdop;
  using _gnss_vdop_type =
    float;
  _gnss_vdop_type gnss_vdop;
  using _gnss_mas_antusedsatnum_type =
    uint8_t;
  _gnss_mas_antusedsatnum_type gnss_mas_antusedsatnum;
  using _gnss_satnum_type =
    uint8_t;
  _gnss_satnum_type gnss_satnum;
  using _gnss_mas_anthighqualitysatnum_type =
    uint8_t;
  _gnss_mas_anthighqualitysatnum_type gnss_mas_anthighqualitysatnum;
  using _gnss_time_type =
    uint64_t;
  _gnss_time_type gnss_time;
  using _gnss_trk_type =
    float;
  _gnss_trk_type gnss_trk;
  using _gnss_stat_type =
    uint8_t;
  _gnss_stat_type gnss_stat;
  using _pos_up_type =
    float;
  _pos_up_type pos_up;
  using _pos_east_type =
    float;
  _pos_east_type pos_east;
  using _pos_north_type =
    float;
  _pos_north_type pos_north;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gnss_lon(
    const double & _arg)
  {
    this->gnss_lon = _arg;
    return *this;
  }
  Type & set__gnss_lat(
    const double & _arg)
  {
    this->gnss_lat = _arg;
    return *this;
  }
  Type & set__gnss_alt(
    const double & _arg)
  {
    this->gnss_alt = _arg;
    return *this;
  }
  Type & set__gnss_lon_sigma(
    const float & _arg)
  {
    this->gnss_lon_sigma = _arg;
    return *this;
  }
  Type & set__gnss_lat_sigma(
    const float & _arg)
  {
    this->gnss_lat_sigma = _arg;
    return *this;
  }
  Type & set__gnss_alt_sigma(
    const float & _arg)
  {
    this->gnss_alt_sigma = _arg;
    return *this;
  }
  Type & set__gnss_ve(
    const float & _arg)
  {
    this->gnss_ve = _arg;
    return *this;
  }
  Type & set__gnss_vn(
    const float & _arg)
  {
    this->gnss_vn = _arg;
    return *this;
  }
  Type & set__gnss_vu(
    const float & _arg)
  {
    this->gnss_vu = _arg;
    return *this;
  }
  Type & set__gnss_ve_sigma(
    const float & _arg)
  {
    this->gnss_ve_sigma = _arg;
    return *this;
  }
  Type & set__gnss_vn_sigma(
    const float & _arg)
  {
    this->gnss_vn_sigma = _arg;
    return *this;
  }
  Type & set__gnss_vu_sigma(
    const float & _arg)
  {
    this->gnss_vu_sigma = _arg;
    return *this;
  }
  Type & set__gnss_age(
    const uint16_t & _arg)
  {
    this->gnss_age = _arg;
    return *this;
  }
  Type & set__gnss_hdop(
    const float & _arg)
  {
    this->gnss_hdop = _arg;
    return *this;
  }
  Type & set__gnss_vdop(
    const float & _arg)
  {
    this->gnss_vdop = _arg;
    return *this;
  }
  Type & set__gnss_mas_antusedsatnum(
    const uint8_t & _arg)
  {
    this->gnss_mas_antusedsatnum = _arg;
    return *this;
  }
  Type & set__gnss_satnum(
    const uint8_t & _arg)
  {
    this->gnss_satnum = _arg;
    return *this;
  }
  Type & set__gnss_mas_anthighqualitysatnum(
    const uint8_t & _arg)
  {
    this->gnss_mas_anthighqualitysatnum = _arg;
    return *this;
  }
  Type & set__gnss_time(
    const uint64_t & _arg)
  {
    this->gnss_time = _arg;
    return *this;
  }
  Type & set__gnss_trk(
    const float & _arg)
  {
    this->gnss_trk = _arg;
    return *this;
  }
  Type & set__gnss_stat(
    const uint8_t & _arg)
  {
    this->gnss_stat = _arg;
    return *this;
  }
  Type & set__pos_up(
    const float & _arg)
  {
    this->pos_up = _arg;
    return *this;
  }
  Type & set__pos_east(
    const float & _arg)
  {
    this->pos_east = _arg;
    return *this;
  }
  Type & set__pos_north(
    const float & _arg)
  {
    this->pos_north = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imu_msgs::msg::Gnss_<ContainerAllocator> *;
  using ConstRawPtr =
    const imu_msgs::msg::Gnss_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imu_msgs::msg::Gnss_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imu_msgs::msg::Gnss_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imu_msgs::msg::Gnss_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imu_msgs::msg::Gnss_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imu_msgs::msg::Gnss_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imu_msgs::msg::Gnss_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imu_msgs::msg::Gnss_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imu_msgs::msg::Gnss_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imu_msgs__msg__Gnss
    std::shared_ptr<imu_msgs::msg::Gnss_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imu_msgs__msg__Gnss
    std::shared_ptr<imu_msgs::msg::Gnss_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gnss_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gnss_lon != other.gnss_lon) {
      return false;
    }
    if (this->gnss_lat != other.gnss_lat) {
      return false;
    }
    if (this->gnss_alt != other.gnss_alt) {
      return false;
    }
    if (this->gnss_lon_sigma != other.gnss_lon_sigma) {
      return false;
    }
    if (this->gnss_lat_sigma != other.gnss_lat_sigma) {
      return false;
    }
    if (this->gnss_alt_sigma != other.gnss_alt_sigma) {
      return false;
    }
    if (this->gnss_ve != other.gnss_ve) {
      return false;
    }
    if (this->gnss_vn != other.gnss_vn) {
      return false;
    }
    if (this->gnss_vu != other.gnss_vu) {
      return false;
    }
    if (this->gnss_ve_sigma != other.gnss_ve_sigma) {
      return false;
    }
    if (this->gnss_vn_sigma != other.gnss_vn_sigma) {
      return false;
    }
    if (this->gnss_vu_sigma != other.gnss_vu_sigma) {
      return false;
    }
    if (this->gnss_age != other.gnss_age) {
      return false;
    }
    if (this->gnss_hdop != other.gnss_hdop) {
      return false;
    }
    if (this->gnss_vdop != other.gnss_vdop) {
      return false;
    }
    if (this->gnss_mas_antusedsatnum != other.gnss_mas_antusedsatnum) {
      return false;
    }
    if (this->gnss_satnum != other.gnss_satnum) {
      return false;
    }
    if (this->gnss_mas_anthighqualitysatnum != other.gnss_mas_anthighqualitysatnum) {
      return false;
    }
    if (this->gnss_time != other.gnss_time) {
      return false;
    }
    if (this->gnss_trk != other.gnss_trk) {
      return false;
    }
    if (this->gnss_stat != other.gnss_stat) {
      return false;
    }
    if (this->pos_up != other.pos_up) {
      return false;
    }
    if (this->pos_east != other.pos_east) {
      return false;
    }
    if (this->pos_north != other.pos_north) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gnss_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gnss_

// alias to use template instance with default allocator
using Gnss =
  imu_msgs::msg::Gnss_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace imu_msgs

#endif  // IMU_MSGS__MSG__DETAIL__GNSS__STRUCT_HPP_
