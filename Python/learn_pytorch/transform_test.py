from torch.utils.tensorboard import SummaryWriter
from torchvision import transforms
from PIL import Image
import cv2

img_path = "dataset/train/ants/0013035.jpg"
img = Image.open(img_path)
# print(img)

writer = SummaryWriter("logs")
# 通过transforms.ToTensor()创建工具
tensor_trans = transforms.ToTensor()
tensor_img = tensor_trans(img)
# print(tensor_img)

writer.add_image("Tensor_img", tensor_img)

writer.close()