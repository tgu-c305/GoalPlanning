#include <rclcpp/rclcpp.hpp>
#include <imu_msgs/msg/imu.hpp>
#include <imu_msgs/msg/gnss.hpp>
#include <iostream>
#include <fstream>

// 地球半径，单位：米
const double EARTH_RADIUS = 6378137.0;

struct GPSPoint {
    double latitude; // 纬度，单位：度
    double longitude; // 经度，单位：度
    double altitude; // 高度，单位：米
};
struct ENUPoint {
    double east; // 东坐标，单位：米
    double north; // 北坐标，单位：米
    double up; // 上坐标，单位：米
};

class location : public rclcpp::Node {
  public:

    location()
    : Node("subscriber") {

      gnss_publisher_ = this->create_publisher<imu_msgs::msg::Gnss>("Gnss_ENU", 500);//500

      imu_subscription_ = this->create_subscription<imu_msgs::msg::Imu>(
        "Imu_Pub",  // Topic name
        rclcpp::QoS(10),
        std::bind(&location::imu_topic_callback, this, std::placeholders::_1));

      gnss_subscription_ = this->create_subscription<imu_msgs::msg::Gnss>(
        "Gnss_Pub",  // Topic name
        rclcpp::QoS(10),
        std::bind(&location::gnss_topic_callback, this, std::placeholders::_1));

      //std::cout << "Subscribed to topic Imu_Pub" << std::endl;
    }

    // 将角度转换为弧度
    double deg2rad(double deg) {
        return deg * M_PI / 180.0;
    }

    // // 将WGS84坐标转换为ENU坐标
    // ENUPoint wgs84ToEnu(const GPSPoint& wgs84, const GPSPoint& reference) {
    //     // 转换为弧度
    //     double lat1 = deg2rad(reference.latitude);
    //     double lon1 = deg2rad(reference.longitude);
    //     double lat2 = deg2rad(wgs84.latitude);
    //     double lon2 = deg2rad(wgs84.longitude);

    //     // 计算两点间的差值
    //     double dlat = lat2 - lat1;
    //     double dlon = lon2 - lon1;

    //     // 计算两点间的球面距离
    //     double a1 = sin(dlat / 2) * sin(dlat / 2) +
    //                 cos(lat1) * cos(lat2) *
    //                 sin(dlon / 2) * sin(dlon / 2);
    //     double a = 2 * atan2(sqrt(a1), sqrt(1 - a1));

    //     // 计算ENU坐标
    //     ENUPoint enu;
    //     enu.east = EARTH_RADIUS * a * cos(a1) * sin(lat1) * cos(dlon);
    //     enu.north = EARTH_RADIUS * a * cos(a1) * cos(lat1) * cos(dlon);
    //     enu.up = wgs84.altitude - reference.altitude;

    //     return enu;
    // }


    void WGS_TO_ENU(GPSPoint& currentGps, GPSPoint& referenceGps, ENUPoint& currentEnu)
    {
        double lat = currentGps.latitude;
        double lon = currentGps.longitude;
        double h = currentGps.altitude;
        double lat0 = referenceGps.latitude;
        double lon0 = referenceGps.longitude;
        double h0 = referenceGps.altitude;

        double a, b, f, e_sq, pi;
        pi = 3.14159265359;
        a = 6378137;
        b = 6356752.3142;
        f = (a - b) / a;
        e_sq = f * (2 - f);
        // 站点（非原点）
        double lamb, phi, s, N, sin_lambda, cos_lambda, sin_phi, cos_phi, x, y, z;
        lamb = lat/180.0*pi;  
        phi = lon/180.0*pi;
        s = sin(lamb);
        N = a / sqrt(1 - e_sq * s * s);
    
        sin_lambda = sin(lamb);
        cos_lambda = cos(lamb);
        sin_phi = sin(phi);
        cos_phi = cos(phi);
    
        x = (h + N) * cos_lambda * cos_phi;
        y = (h + N) * cos_lambda * sin_phi;
        z = (h + (1 - e_sq) * N) * sin_lambda;
        // 原点坐标转换
        double lamb0, phi0, s0, N0, sin_lambda0, cos_lambda0, sin_phi0, cos_phi0, x0, y0, z0;
        lamb0 = lat0/180.0*pi;
        phi0 = lon0/180.0*pi;
        s0 = sin(lamb0);
        N0 = a / sqrt(1 - e_sq * s0 * s0);
    
        sin_lambda0 = sin(lamb0);
        cos_lambda0 = cos(lamb0);
        sin_phi0 = sin(phi0);
        cos_phi0 = cos(phi0);
    
        x0 = (h0 + N0) * cos_lambda0 * cos_phi0;
        y0 = (h0 + N0) * cos_lambda0 * sin_phi0;
        z0 = (h0 + (1 - e_sq) * N0) * sin_lambda0;
        // ECEF 转 ENU
        double xd, yd, zd, t;
        xd = x - x0;
        yd = y - y0;
        zd = z - z0;
        t = -cos_phi0 * xd - sin_phi0 * yd;
    
        currentEnu.east = -sin_phi0 * xd + cos_phi0 * yd;
        currentEnu.north = t * sin_lambda0 + cos_lambda0 * zd;
        currentEnu.up = cos_lambda0 * cos_phi0 * xd + cos_lambda0 * sin_phi0 * yd + sin_lambda0 * zd;

    }


  private:
    void imu_topic_callback(const imu_msgs::msg::Imu::SharedPtr msg) {
      // std::cout << "Received IMU message!" << std::endl;
      // std::cout << "Angular Velocity: [" 
      //           << msg->imu_msg.x_angular_velocity << ", " 
      //           << msg->imu_msg.y_angular_velocity << ", " 
      //           << msg->imu_msg.z_angular_velocity << "]" << std::endl;
      // Add more processing here if needed
    }

    void gnss_topic_callback(const imu_msgs::msg::Gnss::SharedPtr msg) {

      // Add more processing here if needed
      std::cout <<"gnss_topic_callback: "<<  msg->gnss_lon << std::endl;

      GPSPoint currentGps;
      imu_msgs::msg::Gnss gnss_msg = *msg;
      currentGps.latitude = msg->gnss_lat;
      currentGps.longitude = msg->gnss_lon;
      currentGps.altitude = msg->gnss_alt;

      GPSPoint referenceGps;

      //注意这里初始位置的设定，我选用的是第一次录取到的位置，使用时可以根据需要更改
      //比如预先定义一个位置，之后都用这个位置
      static bool initial_Reference_point = false;
      if (!initial_Reference_point)
      {
        initial_Reference_point = true;
        referenceGps = currentGps;
      }

      ENUPoint currentEnu;
      WGS_TO_ENU(currentGps, referenceGps, currentEnu);
      

      std::cout << "东向坐标: " << currentEnu.east << std::endl;
      //写入文件
      // std::ofstream PositionSave("/home/nvidia/GoalPlanning/src/location/position.txt", std::ios::app);
      // PositionSave.precision(12);
      // PositionSave << currentEnu.east << " " <<  currentEnu.north << " " << currentEnu.up << std::endl;
      // PositionSave.close();

      gnss_msg.pos_east = currentEnu.east;
      gnss_msg.pos_north = currentEnu.north;
      gnss_msg.pos_up = currentEnu.up;
      gnss_publisher_->publish(std::move(gnss_msg));
    }



    rclcpp::Subscription<imu_msgs::msg::Imu>::SharedPtr imu_subscription_;
    rclcpp::Subscription<imu_msgs::msg::Gnss>::SharedPtr gnss_subscription_;
    rclcpp::Publisher<imu_msgs::msg::Gnss>::SharedPtr gnss_publisher_;

};


int main(int argc, char **argv) {
  std::ofstream PositionClear("/home/nvidia/GoalPlanning/src/location/position.txt", std::ios::trunc);
  PositionClear.close();
  rclcpp::init(argc, argv);
  auto location_node = std::make_shared<location>();
  rclcpp::spin(location_node);
  rclcpp::shutdown();
  return 0;
}