# import torch
# from torch.utils.data import Dataset
# from torch.utils.data import DataLoader
#
# # 自定义数据集类
# class MyDataset(Dataset):
#     def __init__(self, X_data, Y_data):
#         """
#         初始化数据集，X_data 和 Y_data 是两个列表或数组
#         X_data: 输入特征
#         Y_data: 目标标签
#         """
#         self.X_data = X_data
#         self.Y_data = Y_data
#
#     def __len__(self):
#         """返回数据集的大小"""
#         return len(self.X_data)
#
#     def __getitem__(self, idx):
#         """返回指定索引的数据"""
#         x = torch.tensor(self.X_data[idx], dtype=torch.float32)  # 转换为 Tensor
#         y = torch.tensor(self.Y_data[idx], dtype=torch.float32)
#         return x, y
#
# # 示例数据
# X_data = [[1, 2], [3, 4], [5, 6], [7, 8]]  # 输入特征
# Y_data = [1, 0, 1, 0]  # 目标标签
#
# # 创建数据集实例
# dataset = MyDataset(X_data, Y_data)
#
# # 创建 DataLoader 实例，batch_size 设置每次加载的样本数量
# # shuffle是一个布尔值，控制在每个epoch开始时是否进行混洗
# dataloader = DataLoader(dataset, batch_size=2, shuffle=True)
#
# # 打印加载的数据
# for epoch in range(1):
#     # enumerate 函数会为每次迭代提供一个索引 (batch_idx) 和对应的值 ((inputs, labels))。
#     for batch_idx, (inputs, labels) in enumerate(dataloader):
#         print(f'Batch {batch_idx + 1}:')
#         print(f'Inputs: {inputs}')
#         print(f'Labels: {labels}')
# ----------------------------------------------------------------------------------------
# ----------------------------------------------------------------------------------------
# import torch
# import torchvision.transforms as transforms
# from PIL import Image
# import numpy as np
#
# # 定义数据预处理的流水线
# transform = transforms.Compose([
#     transforms.Resize((128, 128)),  # 将图像调整为 128x128
#     transforms.ToTensor(),  # 将图像转换为张量
#     transforms.Normalize(mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225])  # 标准化
# ])
#
# # 加载图像
# image = Image.open('pytorch.jpg')
#
# image_numpy = np.array(image)
# print(image_numpy.shape)
#
# image_tensor2 = torch.tensor(image_numpy)
# print(image_tensor2.shape)
# # # 应用预处理
# image_tensor = transform(image)
# print(image_tensor.shape)  # 输出张量的形状
#-------------------------------------------------------------------------------------------
#-------------------------------------------------------------------------------------------
import torchvision.datasets as datasets
import torchvision.transforms as transforms
from torch.utils.data import DataLoader

# 定义预处理操作
transform = transforms.Compose([
    transforms.ToTensor(),
    transforms.Normalize((0.5,), (0.5,))  # 对灰度图像进行标准化
])

# 下载并加载 MNIST 数据集
train_dataset = datasets.MNIST(root='./data', train=True, download=True, transform=transform)
test_dataset = datasets.MNIST(root='./data', train=False, download=True, transform=transform)

# 创建 DataLoader
train_loader = DataLoader(train_dataset, batch_size=64, shuffle=True)
test_loader = DataLoader(test_dataset, batch_size=64, shuffle=False)

# 迭代训练数据
for inputs, labels in train_loader:
    print(inputs.shape)  # 每个批次的输入据形状
    print(labels.shape)  # 每个批次的标签形状数