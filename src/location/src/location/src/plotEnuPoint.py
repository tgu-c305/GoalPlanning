import matplotlib.pyplot as plt

# 读取文件并存储数据
def read_and_plot(filename, savefig_path):
    with open(filename, 'r') as file:
        data = file.readlines()

    # 初始化x和y坐标列表
    x_coords = []
    y_coords = []

    # 解析每一行数据
    for line in data:
        parts = line.split()  # 以空格分割每一行
        if len(parts) >= 3:  # 确保行中有足够的数据
            x, y = float(parts[0]), float(parts[1])  # 将字符串转换为浮点数
            x_coords.append(x)
            y_coords.append(y)

    # 绘制坐标点
    plt.plot(x_coords, y_coords)
    plt.xlabel('X coordinate')
    plt.ylabel('Y coordinate')
    plt.title('Scatter plot of X and Y coordinates')
    plt.grid(True)
    plt.savefig(savefig_path, format='png')
    plt.show()

# 调用函数，传入你的文件名
read_and_plot("/home/nvidia/GoalPlanning/src/location/src/location/src/EnuPoint.txt", 
"/home/nvidia/GoalPlanning/src/location/src/location/src/ENUPoint.png")