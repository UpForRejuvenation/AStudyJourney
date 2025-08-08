from torch.utils.tensorboard import SummaryWriter
from PIL import Image
import numpy as np

# 创建SummaryWriter对象，用于写入TensorBoard日志到"logs"目录
writer = SummaryWriter("logs")

# 定义图像路径并打开图像文件
img_path = 'dataset/train/bees/16838648_415acd9e3f.jpg'
img = Image.open(img_path)

# 将PIL图像转换为numpy数组
img_numpy = np.array(img)

# 打印图像数组的形状（高度、宽度、通道数）
print(img_numpy.shape)

# 将图像添加到TensorBoard日志中
# 参数说明：
# "test" - 图像在TensorBoard中的标签名
# img_numpy - 图像数据（numpy数组）
# 2 - 全局步骤值（用于时间序列展示）
# dataformats="HWC" - 指定数据格式为高度(H)、宽度(W)、通道(C)
writer.add_image("test", img_numpy, 2, dataformats="HWC")

# 循环添加100个标量数据点到TensorBoard日志中
# 每个数据点表示y=x的关系，x和y值均为循环变量i
for i in range(100):
    writer.add_scalar("y=x", i, i)

# 关闭SummaryWriter对象，确保所有数据写入磁盘
writer.close()