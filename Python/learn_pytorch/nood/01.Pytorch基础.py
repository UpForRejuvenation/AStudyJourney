# import torch

# # 创建一个 2x3 的全 0 张量
# a = torch.zeros(2, 3)
# print(a)
#
# # 创建一个 2x3 的全 1 张量
# b = torch.ones(2, 3)
# print(b)
#
# # 创建一个 2x3 的随机数张量
# c = torch.randn(2, 3)
# print(c)
#
# # 从 NumPy 数组创建张量
# import numpy as np
# numpy_array = np.array([[1, 2], [3, 4]])
# print(numpy_array)
# print(type(numpy_array))
#
# tensor_from_numpy = torch.from_numpy(numpy_array)
# print(tensor_from_numpy)
# print(type(tensor_from_numpy))
#
# # 在指定设备（CPU/GPU）上创建张量
# device = "cuda"
# d = torch.randn(2, 3, device=device)
# print(d)

# # 张量相加
# e = torch.randn(2, 3)
# f = torch.randn(2, 3)
# print(e)
# print(f)
# print(e + f)

# 逐元素乘法
# print(e * f)

# 张量的转置
# g = torch.randn(3, 2)
# print(g)
# print(g.t())  # 或者 g.transpose(0, 1)
#
# # 张量的形状
# print(g.shape)  # 返回形状

# # 创建一个需要梯度的张量
# tensor_requires_grad = torch.tensor([1.0], requires_grad=True)
#
# # 进行一些操作
# tensor_result = tensor_requires_grad * 2
#
# # 计算梯度
# tensor_result.backward()
# print(tensor_requires_grad.grad)  # 输出梯度

# tensor_requires_grad_2 = torch.tensor([2.324], requires_grad=True)
# tensor_result_2 = tensor_requires_grad_2 * 3 + 2.28
# tensor_result_2.backward()
# print(tensor_requires_grad_2.grad)

# import torch
# # 创建一个需要计算梯度的张量
# x = torch.randn(2, 2)
# print(x)
#
# # 执行某些操作
# # 使用 torch.no_grad() 禁用梯度计算
#
#
# y = x * 2
# y.requires_grad = True
# z = y * y * 3
# print(y)
# print(z)
#
# # 计算所有元素的平均值
# out = z.mean()
# print(out)
#
# # 反向传播，计算梯度
# out.backward()
#
# # 查看 x 的梯度
# print(y.grad)

# ----------------------------------神经网络
# import torch
# import torch.nn as nn
# import torch.optim as optim
#
#
# # 定义一个简单的全连接神经网络
# class SimpleNN(nn.Module):
#     def __init__(self):
#         super(SimpleNN, self).__init__()
#         self.fc1 = nn.Linear(2, 2)  # 输入层到隐藏层
#         self.fc2 = nn.Linear(2, 1)  # 隐藏层到输出层
#
#     def forward(self, x):
#         x = torch.relu(self.fc1(x))  # ReLU 激活函数
#         x = self.fc2(x)
#         return x
#
#
# # 创建网络实例
# model = SimpleNN()
#
# # 打印模型结构
# print(model)
#
# # 随机输入
# x = torch.randn(1, 2)
#
# # 前向传播
# output = model(x)
# print(output)
#
# optimizer = optim.Adam(model.parameters(), lr=0.001)
#
# # 定义损失函数（例如均方误差 MSE）
# criterion = nn.MSELoss()
#
# # 假设目标值为 1
# target = torch.randn(1, 1)
#
# # 计算损失
# loss = criterion(output, target)
# # 训练步骤
# optimizer.zero_grad()  # 清空梯度
# loss.backward()  # 反向传播
# optimizer.step()  # 更新参数
#
# print(loss)
#
# # 定义优化器（使用 Adam 优化器）

# ---------------------------------------------------神经网络实例
# import torch
# import torch.nn as nn
# import torch.optim as optim
#
# device = "cuda"
#
# # 1. 定义一个简单的神经网络模型
# class SimpleNN(nn.Module):
#     def __init__(self):
#         super(SimpleNN, self).__init__()
#         self.fc1 = nn.Linear(2, 2)  # 输入层到隐藏层
#         self.fc2 = nn.Linear(2, 1)  # 隐藏层到输出层
#
#     def forward(self, x):
#         x = torch.relu(self.fc1(x))  # ReLU 激活函数
#         x = self.fc2(x)
#         return x
#
#
# # 2. 创建模型实例
# model = SimpleNN()
#
# # 3. 定义损失函数和优化器
# criterion = nn.MSELoss()  # 均方误差损失函数
# optimizer = optim.Adam(model.parameters(), lr=0.001)  # Adam 优化器
#
# # 4. 假设我们有训练数据 X 和 Y
# # X = torch.randn(10, 2)  # 10 个样本，2 个特征
# # Y = torch.randn(10, 1)  # 10 个目标值
#
# X = torch.tensor([[1.0, 2.0],
#                   [3.0, 4.0],
#                   [5.0, 6.0],
#                   [7.0, 8.0]], dtype=torch.float32)
#
# Y = torch.tensor([[11.0],
#                   [23.0],
#                   [35.0],
#                   [47.0]], dtype=torch.float32)
# # # 将模型移动到设备
# # model.to(device)
# #
# # # 将数据移动到设备
# # X = X.to(device)
# # Y = Y.to(device)
#
# # 5. 训练循环
# for epoch in range(10000):  # 训练 100 轮
#     optimizer.zero_grad()  # 清空之前的梯度
#     output = model(X)  # 前向传播
#     loss = criterion(output, Y)  # 计算损失
#     loss.backward()  # 反向传播
#     optimizer.step()  # 更新参数
#
#     # 每 10 轮输出一次损失
#     if (epoch + 1) % 10 == 0:
#         print(f'Epoch [{epoch + 1}], Loss: {loss.item():.4f}')