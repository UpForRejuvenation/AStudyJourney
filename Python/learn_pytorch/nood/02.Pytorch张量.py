# -------------------------------------------------------------------------创建张量
# -------------------------------------------------------------------------创建张量
#import torch

# tensor_rand = torch.rand(2,3)
# print(tensor_rand)
#
# tensor_randn = torch.randn(2,3)
# print(tensor_randn)

# tensor_arange = torch.arange(0,10,2)
# print(tensor_arange)

# x = torch.eye(3)
# x = torch.tensor([[1, 2], [3, 4]])
# print(x)

# import numpy as np
#
# np_array = np.array([1, 2, 3])
# tensor = torch.tensor(np_array)
# print(tensor)

# ------------------------------------------------------------------------------------张量的属性
# ------------------------------------------------------------------------------------张量的属性
# tensor_2d = torch.tensor([
#     [-9, 4, 2, 5, 7],
#     [3, 0, 12, 8, 6],
#     [1, 23, -6, 45, 2],
#     [22, 3, -1, 72, 6]
# ])
# # print("2D Tensor (Matrix):\n", tensor_2d)
# # print("Shape:", tensor_2d.shape)  # 形状
#
# tensor_3d = torch.stack([tensor_2d, tensor_2d + 10, tensor_2d - 5])  # 堆叠 3 个 2D 张量
# # print("3D Tensor (Cube):\n", tensor_3d)
# # print("Shape:", tensor_3d.shape)  # 形状
#
# tensor_4d = torch.stack([tensor_3d, tensor_3d + 100])  # 堆叠 2 个 3D 张量
# # print("4D Tensor (Vector of Cubes):\n", tensor_4d)
# # print("Shape:", tensor_4d.shape)  # 形状
#
# # 创建 5D 张量（矩阵的立方体）
# tensor_5d = torch.stack([tensor_4d, tensor_4d+10])  # 堆叠 2 个 4D 张量
# print("5D Tensor (Matrix of Cubes):\n", tensor_5d)
# # print("Shape:", tensor_5d.shape)  # 形状
#
#
# # print(tensor_5d.device)
# # print(tensor_5d.dim())
# # tensor_5d = tensor_5d.float()
# # tensor_5d.requires_grad = True
# # print("Requires Grad:", tensor_5d.requires_grad)  # 是否启用梯度
# print(tensor_5d.numel())


# ----------------------------------------------------------------------------------量的张操作
# ----------------------------------------------------------------------------------张量的操作
# import torch
#
# tensor_1 = torch.tensor([[1,1],[1,1]])
# tensor_2 = torch.tensor([[1,2],[3,5]])
# tensor_3 = tensor_1 + tensor_2
# tensor_3 = tensor_3.float()
# tensor_matmul = torch.matmul(tensor_1,tensor_2)
# print(tensor_3)
# # print(tensor_matmul)
#
# tensor_sum = torch.sum(tensor_2)
# # print(tensor_sum)
#
# print(torch.argmax(tensor_3))
# print(torch.softmax(tensor_3,1))

#-------------------------------------------------------------
# import torch
#
# # 创建一个 2D 张量
# tensor = torch.tensor([[1, 2, 3], [4, 5, 6]], dtype=torch.float32)
# print("原始张量:\n", tensor)
#
# # 1. **索引和切片操作**
# print("\n【索引和切片】")
# print("获取第一行:", tensor[0])  # 获取第一行
# print("获取第一行第一列的元素:", tensor[0, 0])  # 获取特定元素
# print("获取第二列的所有元素:", tensor[:, 1])  # 获取第二列所有元素
#
# # 2. **形状变换操作**
# print("\n【形状变换】")
# reshaped = tensor.view(3, 2)  # 改变张量形状为 3x2
# print("改变形状后的张量:\n", reshaped)
# flattened = tensor.flatten()  # 将张量展平成一维
# print("展平后的张量:\n", flattened)
#
# # 3. **数学运算操作**
# print("\n【数学运算】")
# tensor_add = tensor + 10  # 张量加法
# print("张量加 10:\n", tensor_add)
# tensor_mul = tensor * 2  # 张量乘法
# print("张量乘 2:\n", tensor_mul)
# tensor_sum = tensor.sum()  # 计算所有元素的和
# print("张量元素的和:", tensor_sum.item())
#
# # 4. **与其他张量的操作**
# print("\n【与其他张量操作】")
# tensor2 = torch.tensor([[1, 1, 1], [1, 1, 1]], dtype=torch.float32)
# print("另一个张量:\n", tensor2)
# tensor_dot = torch.matmul(tensor, tensor2.T)  # 张量矩阵乘法
# print("矩阵乘法结果:\n", tensor_dot)
#
# # 5. **条件判断和筛选**
# print("\n【条件判断和筛选】")
# mask = tensor > 3  # 创建一个布尔掩码
# print("大于 3 的元素的布尔掩码:\n", mask)
# filtered_tensor = tensor[tensor > 3]  # 筛选出符合条件的元素
# print("大于 3 的元素:\n", filtered_tensor)
# --------------------------------------------------------------------------------
# import torch
#
# tensor = torch.tensor([[1,2,3],[4,5,6]])
# tensor_2 = torch.tensor([[4,5,6],[1,2,3]])
# tensor_1 = torch.tensor([1,2,3])
# print(tensor)
# print(tensor_2)
#
# # view = tensor.view(6,1)
# # print(view)
# #
# # reshape = tensor.reshape(1,6)
# # print(reshape)
# #
# # T = tensor.t()
# # print(T)
# #
# # unsqueeze = tensor.unsqueeze(1)
# # print(unsqueeze)
# # squeeze = tensor.squeeze(1)
# # print(squeeze)
#
# cat = torch.cat((tensor,tensor_2),-1)
# print(cat)

# --------------------------------------------------------------
# import torch
# import numpy as np
#
# # 1. NumPy 数组转换为 PyTorch 张量
# print("1. NumPy 转为 PyTorch 张量")
# numpy_array = np.array([[1, 2, 3], [4, 5, 6]])
# print("NumPy 数组:\n", numpy_array)
#
# # 使用 torch.from_numpy() 将 NumPy 数组转换为张量
# tensor_from_numpy = torch.from_numpy(numpy_array)
# print("转换后的 PyTorch 张量:\n", tensor_from_numpy)
#
# # 修改 NumPy 数组，观察张量的变化（共享内存）
# numpy_array[0, 0] = 100
# print("修改后的 NumPy 数组:\n", numpy_array)
# print("PyTorch 张量也会同步变化:\n", tensor_from_numpy)
#
# # 2. PyTorch 张量转换为 NumPy 数组
# print("\n2. PyTorch 张量转为 NumPy 数组")
# tensor = torch.tensor([[7, 8, 9], [10, 11, 12]], dtype=torch.float32)
# print("PyTorch 张量:\n", tensor)
#
# # 使用 tensor.numpy() 将张量转换为 NumPy 数组
# numpy_from_tensor = tensor.numpy()
# print("转换后的 NumPy 数组:\n", numpy_from_tensor)
#
# # 修改张量，观察 NumPy 数组的变化（共享内存）
# tensor[0, 0] = 77
# print("修改后的 PyTorch 张量:\n", tensor)
# print("NumPy 数组也会同步变化:\n", numpy_from_tensor)
#
# # 3. 注意：不共享内存的情况（需要复制数据）
# print("\n3. 使用 clone() 保证独立数据")
# tensor_independent = torch.tensor([[13, 14, 15], [16, 17, 18]], dtype=torch.float32)
# numpy_independent = tensor_independent.clone().numpy()  # 使用 clone 复制数据
# print("原始张量:\n", tensor_independent)
# tensor_independent[0, 0] = 0  # 修改张量数据
# print("修改后的张量:\n", tensor_independent)
# print("NumPy 数组（不会同步变化）:\n", numpy_independent)

# --------------------------------------------------------------------------
import torch
import numpy as np

np_array = np.array([[1,2,3],[4,5,6]])

# 1. from_numpy
# 测试发现共享内存
tensor_from_numpy = torch.from_numpy(np_array)

# 2. tensor
# 测试发现内存不共享
tensor_from_tensor = torch.tensor(np_array)
np_array[0,0] = 9
print("np_array:\n", np_array)
print("tensor from numpy:\n",tensor_from_numpy)
print("tensor from tensor:\n", tensor_from_tensor)


