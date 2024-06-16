#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>
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



int main() {
    std::string filename = "/home/nvidia/ht/lujing.txt"; // 你的文件名
    std::ifstream file(filename);
    std::vector<double> longitudes, latitudes;
    std::fstream EnuPoint_clear("/home/nvidia/GoalPlanning/src/location/src/location/src/EnuPoint.txt", std::ios::trunc);
    EnuPoint_clear.close();

    if (!file.is_open()) {
        std::cerr << "无法打开文件: " << filename << std::endl;
        return 1;
    }

    std::string line;

    std::vector<GPSPoint> GpsVec;
    while (getline(file, line)) {
        std::istringstream iss(line);
        double longitude, latitude;
        std::string temp;

        // 读取经度
        getline(iss, temp, ':');
        iss >> longitude;

        // 读取纬度
        getline(iss, temp, ':');
        iss >> latitude;

        longitudes.push_back(longitude);
        latitudes.push_back(latitude);
        GPSPoint currentGps;
        currentGps.latitude = latitude;
        currentGps.longitude = longitude;
        currentGps.altitude = 5;
        GpsVec.push_back(currentGps);
    }

    file.close();

    // // 打印结果
    // for (size_t i = 0; i < longitudes.size(); ++i) {
    //     std::cout << "经度: " << longitudes[i] << " 纬度: " << latitudes[i] << std::endl;
    // }

    std::vector<ENUPoint> ENUVec;
    //保存路径到txt中
    std::fstream EnuPoint_save("/home/nvidia/GoalPlanning/src/location/src/location/src/EnuPoint.txt", std::ios::app);
    // for (int i = 0; i < GpsVec.size(); i++)
    // {
    //     ENUPoint currentEnu = wgs84ToEnu(GpsVec[i], GpsVec[0]);
    //     ENUVec.push_back(currentEnu);
    //     //std::cout << currentEnu.east << " " << currentEnu.north << " " << currentEnu.up << std::endl;
    //     EnuPoint_save << currentEnu.east << " " << currentEnu.north << " " << currentEnu.up << std::endl;
    // }
    // EnuPoint_save.close();

    //调用另一个函数进行坐标转换
    for (int i = 0; i < GpsVec.size(); i++)
    {
        ENUPoint currentEnu;
        WGS_TO_ENU(GpsVec[i], GpsVec[0], currentEnu);
        ENUVec.push_back(currentEnu);
        std::cout << currentEnu.east << " " << currentEnu.north << " " << currentEnu.up << std::endl;
        EnuPoint_save << currentEnu.east << " " << currentEnu.north << " " << currentEnu.up << std::endl;
    }


    
    return 0;
}