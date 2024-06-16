import matplotlib.pyplot as plt

# 读取文件并绘制数据
def read_and_plot(filename, savefig_path):
    longitudes = []
    latitudes = []

    # 打开并读取文件
    with open(filename, 'r') as file:
        for line in file:
            # 分割行以提取经度和纬度
            if "经度:" in line:
                parts = line.split("经度: ")[1].split("纬度: ")[0].strip()
                longitudes.append(float(parts))
            if "纬度:" in line:
                parts = line.split("纬度: ")[1].strip()
                latitudes.append(float(parts))

    # 绘制散点图
    plt.figure()
    plt.plot(longitudes, latitudes)  # 绘制蓝色的散点图
    plt.title('Longitude and Latitude Scatter Plot')  # 图像标题
    plt.xlabel('Longitude')  # X轴标签
    plt.ylabel('Latitude')   # Y轴标签

    # 保存图像
    plt.savefig(savefig_path, format='png')  # 保存图像到文件

    # # 显示图像
    # plt.show()

# 调用函数，传入文件名和保存图像的路径
read_and_plot("/home/nvidia/GoalPlanning/src/location/src/location/src/lujing.txt", 
"/home/nvidia/GoalPlanning/src/location/src/location/src/GPSPoint.png")