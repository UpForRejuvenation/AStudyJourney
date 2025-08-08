import torch

# 测试 PyTorch 是否可以创建张量并进行基本运算
def test_pytorch():
    # 创建两个张量
    a = torch.tensor([1.0, 2.0, 3.0])
    b = torch.tensor([4.0, 5.0, 6.0])

    # 进行加法运算
    c = a + b

    # 打印结果
    print("Tensor addition result:", c)

    # 检查是否有可用的 GPU
    if torch.cuda.is_available():
        print("CUDA is available! Running on GPU.")
        # 将张量移动到 GPU 上
        a_gpu = a.to('cuda')
        b_gpu = b.to('cuda')
        c_gpu = a_gpu + b_gpu
        print("Tensor addition on GPU:", c_gpu)
    else:
        print("CUDA is not available. Running on CPU.")

if __name__ == "__main__":
    print(torch.cuda.is_available())
    test_pytorch()
