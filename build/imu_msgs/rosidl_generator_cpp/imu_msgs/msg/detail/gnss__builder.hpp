// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imu_msgs:msg/Gnss.idl
// generated code does not contain a copyright notice

#ifndef IMU_MSGS__MSG__DETAIL__GNSS__BUILDER_HPP_
#define IMU_MSGS__MSG__DETAIL__GNSS__BUILDER_HPP_

#include "imu_msgs/msg/detail/gnss__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace imu_msgs
{

namespace msg
{

namespace builder
{

class Init_Gnss_pos_north
{
public:
  explicit Init_Gnss_pos_north(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  ::imu_msgs::msg::Gnss pos_north(::imu_msgs::msg::Gnss::_pos_north_type arg)
  {
    msg_.pos_north = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_pos_east
{
public:
  explicit Init_Gnss_pos_east(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_pos_north pos_east(::imu_msgs::msg::Gnss::_pos_east_type arg)
  {
    msg_.pos_east = std::move(arg);
    return Init_Gnss_pos_north(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_pos_up
{
public:
  explicit Init_Gnss_pos_up(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_pos_east pos_up(::imu_msgs::msg::Gnss::_pos_up_type arg)
  {
    msg_.pos_up = std::move(arg);
    return Init_Gnss_pos_east(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_stat
{
public:
  explicit Init_Gnss_gnss_stat(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_pos_up gnss_stat(::imu_msgs::msg::Gnss::_gnss_stat_type arg)
  {
    msg_.gnss_stat = std::move(arg);
    return Init_Gnss_pos_up(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_trk
{
public:
  explicit Init_Gnss_gnss_trk(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_stat gnss_trk(::imu_msgs::msg::Gnss::_gnss_trk_type arg)
  {
    msg_.gnss_trk = std::move(arg);
    return Init_Gnss_gnss_stat(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_time
{
public:
  explicit Init_Gnss_gnss_time(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_trk gnss_time(::imu_msgs::msg::Gnss::_gnss_time_type arg)
  {
    msg_.gnss_time = std::move(arg);
    return Init_Gnss_gnss_trk(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_mas_anthighqualitysatnum
{
public:
  explicit Init_Gnss_gnss_mas_anthighqualitysatnum(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_time gnss_mas_anthighqualitysatnum(::imu_msgs::msg::Gnss::_gnss_mas_anthighqualitysatnum_type arg)
  {
    msg_.gnss_mas_anthighqualitysatnum = std::move(arg);
    return Init_Gnss_gnss_time(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_satnum
{
public:
  explicit Init_Gnss_gnss_satnum(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_mas_anthighqualitysatnum gnss_satnum(::imu_msgs::msg::Gnss::_gnss_satnum_type arg)
  {
    msg_.gnss_satnum = std::move(arg);
    return Init_Gnss_gnss_mas_anthighqualitysatnum(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_mas_antusedsatnum
{
public:
  explicit Init_Gnss_gnss_mas_antusedsatnum(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_satnum gnss_mas_antusedsatnum(::imu_msgs::msg::Gnss::_gnss_mas_antusedsatnum_type arg)
  {
    msg_.gnss_mas_antusedsatnum = std::move(arg);
    return Init_Gnss_gnss_satnum(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_vdop
{
public:
  explicit Init_Gnss_gnss_vdop(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_mas_antusedsatnum gnss_vdop(::imu_msgs::msg::Gnss::_gnss_vdop_type arg)
  {
    msg_.gnss_vdop = std::move(arg);
    return Init_Gnss_gnss_mas_antusedsatnum(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_hdop
{
public:
  explicit Init_Gnss_gnss_hdop(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_vdop gnss_hdop(::imu_msgs::msg::Gnss::_gnss_hdop_type arg)
  {
    msg_.gnss_hdop = std::move(arg);
    return Init_Gnss_gnss_vdop(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_age
{
public:
  explicit Init_Gnss_gnss_age(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_hdop gnss_age(::imu_msgs::msg::Gnss::_gnss_age_type arg)
  {
    msg_.gnss_age = std::move(arg);
    return Init_Gnss_gnss_hdop(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_vu_sigma
{
public:
  explicit Init_Gnss_gnss_vu_sigma(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_age gnss_vu_sigma(::imu_msgs::msg::Gnss::_gnss_vu_sigma_type arg)
  {
    msg_.gnss_vu_sigma = std::move(arg);
    return Init_Gnss_gnss_age(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_vn_sigma
{
public:
  explicit Init_Gnss_gnss_vn_sigma(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_vu_sigma gnss_vn_sigma(::imu_msgs::msg::Gnss::_gnss_vn_sigma_type arg)
  {
    msg_.gnss_vn_sigma = std::move(arg);
    return Init_Gnss_gnss_vu_sigma(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_ve_sigma
{
public:
  explicit Init_Gnss_gnss_ve_sigma(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_vn_sigma gnss_ve_sigma(::imu_msgs::msg::Gnss::_gnss_ve_sigma_type arg)
  {
    msg_.gnss_ve_sigma = std::move(arg);
    return Init_Gnss_gnss_vn_sigma(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_vu
{
public:
  explicit Init_Gnss_gnss_vu(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_ve_sigma gnss_vu(::imu_msgs::msg::Gnss::_gnss_vu_type arg)
  {
    msg_.gnss_vu = std::move(arg);
    return Init_Gnss_gnss_ve_sigma(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_vn
{
public:
  explicit Init_Gnss_gnss_vn(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_vu gnss_vn(::imu_msgs::msg::Gnss::_gnss_vn_type arg)
  {
    msg_.gnss_vn = std::move(arg);
    return Init_Gnss_gnss_vu(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_ve
{
public:
  explicit Init_Gnss_gnss_ve(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_vn gnss_ve(::imu_msgs::msg::Gnss::_gnss_ve_type arg)
  {
    msg_.gnss_ve = std::move(arg);
    return Init_Gnss_gnss_vn(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_alt_sigma
{
public:
  explicit Init_Gnss_gnss_alt_sigma(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_ve gnss_alt_sigma(::imu_msgs::msg::Gnss::_gnss_alt_sigma_type arg)
  {
    msg_.gnss_alt_sigma = std::move(arg);
    return Init_Gnss_gnss_ve(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_lat_sigma
{
public:
  explicit Init_Gnss_gnss_lat_sigma(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_alt_sigma gnss_lat_sigma(::imu_msgs::msg::Gnss::_gnss_lat_sigma_type arg)
  {
    msg_.gnss_lat_sigma = std::move(arg);
    return Init_Gnss_gnss_alt_sigma(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_lon_sigma
{
public:
  explicit Init_Gnss_gnss_lon_sigma(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_lat_sigma gnss_lon_sigma(::imu_msgs::msg::Gnss::_gnss_lon_sigma_type arg)
  {
    msg_.gnss_lon_sigma = std::move(arg);
    return Init_Gnss_gnss_lat_sigma(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_alt
{
public:
  explicit Init_Gnss_gnss_alt(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_lon_sigma gnss_alt(::imu_msgs::msg::Gnss::_gnss_alt_type arg)
  {
    msg_.gnss_alt = std::move(arg);
    return Init_Gnss_gnss_lon_sigma(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_lat
{
public:
  explicit Init_Gnss_gnss_lat(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_alt gnss_lat(::imu_msgs::msg::Gnss::_gnss_lat_type arg)
  {
    msg_.gnss_lat = std::move(arg);
    return Init_Gnss_gnss_alt(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_gnss_lon
{
public:
  explicit Init_Gnss_gnss_lon(::imu_msgs::msg::Gnss & msg)
  : msg_(msg)
  {}
  Init_Gnss_gnss_lat gnss_lon(::imu_msgs::msg::Gnss::_gnss_lon_type arg)
  {
    msg_.gnss_lon = std::move(arg);
    return Init_Gnss_gnss_lat(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

class Init_Gnss_header
{
public:
  Init_Gnss_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gnss_gnss_lon header(::imu_msgs::msg::Gnss::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gnss_gnss_lon(msg_);
  }

private:
  ::imu_msgs::msg::Gnss msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imu_msgs::msg::Gnss>()
{
  return imu_msgs::msg::builder::Init_Gnss_header();
}

}  // namespace imu_msgs

#endif  // IMU_MSGS__MSG__DETAIL__GNSS__BUILDER_HPP_
