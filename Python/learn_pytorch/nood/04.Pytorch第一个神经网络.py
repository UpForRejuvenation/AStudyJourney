# import torch
# import torch.nn as nn
# import matplotlib.pyplot as plt
#
# n_in, n_h, n_out, batch_size = 10, 5, 1, 10
#
# x = torch.randn(batch_size, n_in)
# y = torch.tensor([[1.0],[0.0],[0.0],
#                   [1.0],[1.0],[1.0],
#                   [0.0],[0.0],[1.0],[1.0]])
#
# model = nn.Sequential(
#     nn.Linear(n_in, n_h),
#     nn.ReLU(),
#     nn.Linear(n_h, n_out),
#     nn.Sigmoid()
# )
# # 打印前3个权重
# print("First layer weight before training:", model[0].weight[0, :3])
#
# criterion = torch.nn.MSELoss()
# optimizer = torch.optim.SGD(model.parameters(), lr = 0.01)
#
# losses = []
#
# for epoch in range(5000):
#     y_pred = model(x)
#     loss = criterion(y_pred, y)
#     losses.append(loss.item())
#     if epoch%100 == 0:
#         print('epoch:',epoch,'loss:',loss.item())
#
#     optimizer.zero_grad()
#     loss.backward()
#     optimizer.step()
#
# # 打印训练后权重
# print("First layer weight after training:", model[0].weight[0, :3])
#
# # 可视化损失变化曲线
# plt.figure(figsize=(8, 5))
# plt.plot(range(1, 5001), losses, label='Loss')
# plt.xlabel('Epoch')
# plt.ylabel('Loss')
# plt.title('Training Loss Over Epochs')
# plt.legend() # 显示图例
# plt.grid() # 添加网格线
# plt.show()
#
# # 可视化预测结果与实际目标值对比
# y_pred_final = model(x).detach().numpy()  # 最终预测值
# y_actual = y.numpy()  # 实际值
#
# plt.figure(figsize=(8, 5))
# plt.plot(range(1, batch_size + 1), y_actual, 'o-', label='Actual', color='blue')
# plt.plot(range(1, batch_size + 1), y_pred_final, 'x--', label='Predicted', color='red')
# plt.xlabel('Sample Index')
# plt.ylabel('Value')
# plt.title('Actual vs Predicted Values')
# plt.legend()
# plt.grid()
# plt.show()

# -----------------------------------------------------------------------------------------------------
# -----------------------------------------------------------------------------------------------------

import torch
import torch.nn as nn
import torch.optim as optim
import matplotlib.pyplot as plt

# 生成一些随机数据
n_samples = 100
data = torch.randn(n_samples, 2)  # 生成 100 个二维数据点
labels = (data[:, 0]**2 + data[:, 1]**2 < 1).float().unsqueeze(1)  # 点在圆内为1，圆外为0

# 可视化数据
plt.scatter(data[:, 0], data[:, 1], c=labels.squeeze(), cmap='coolwarm')
plt.title("Generated Data")
plt.xlabel("Feature 1")
plt.ylabel("Feature 2")
plt.show()

class SimpleNN(nn.Module):
    def __init__(self):
        super(SimpleNN, self).__init__()
        # 定义神经网络的层
        self.fc1 = nn.Linear(2, 4)  # 输入层有 2 个特征，隐藏层有 4 个神经元
        self.fc2 = nn.Linear(4, 1)  # 隐藏层输出到 1 个神经元（用于二分类）
        self.sigmoid = nn.Sigmoid()  # 二分类激活函数

    def forward(self, x):
        x = torch.relu(self.fc1(x))  # 使用 ReLU 激活函数
        x = self.sigmoid(self.fc2(x))  # 输出层使用 Sigmoid 激活函数
        return x

# 实例化模型
model = SimpleNN()

# 定义二分类的损失函数和优化器
criterion = nn.BCELoss()  # 二元交叉熵损失
optimizer = optim.SGD(model.parameters(), lr=0.1)  # 使用随机梯度下降优化器

# 训练
epochs = 100
for epoch in range(epochs):
    # 前向传播
    outputs = model(data)
    loss = criterion(outputs, labels)

    # 反向传播
    optimizer.zero_grad()
    loss.backward()
    optimizer.step()

    # 每 10 轮打印一次损失
    if (epoch + 1) % 10 == 0:
        print(f'Epoch [{epoch + 1}/{epochs}], Loss: {loss.item():.4f}')

# 可视化决策边界
def plot_decision_boundary(model, data):
    x_min, x_max = data[:, 0].min() - 1, data[:, 0].max() + 1
    y_min, y_max = data[:, 1].min() - 1, data[:, 1].max() + 1
    xx, yy = torch.meshgrid(torch.arange(x_min, x_max, 0.1), torch.arange(y_min, y_max, 0.1), indexing='ij')
    grid = torch.cat([xx.reshape(-1, 1), yy.reshape(-1, 1)], dim=1)
    predictions = model(grid).detach().numpy().reshape(xx.shape)
    plt.contourf(xx, yy, predictions, levels=[0, 0.5, 1], cmap='coolwarm', alpha=0.7)
    plt.scatter(data[:, 0], data[:, 1], c=labels.squeeze(), cmap='coolwarm', edgecolors='k')
    plt.title("Decision Boundary")
    plt.show()

plot_decision_boundary(model, data)