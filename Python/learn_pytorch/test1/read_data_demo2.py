from torch.utils.data import Dataset
from PIL import Image
import os

class MyData(Dataset):

    def __init__(self, root_dir, img_dir, label_dir):
        self.root_dir = root_dir
        self.img_dir = img_dir
        self.label_dir = label_dir

        self.img_file = os.path.join(root_dir, img_dir) #文件夹
        self.img_path = os.listdir(self.img_file) # 包含每一个图片名的list

        self.label_file = os.path.join(root_dir2, label_dir)
        self.label_path = os.listdir(self.label_file)

        label_list=[]
        for label_path in self.label_path:
            label_full_path = os.path.join(self.label_file, label_path)
            # 读取标签内容（假设每行只有一个数字）
            with open(label_full_path, 'r') as f:
                label = f.read().strip()  # 去除首尾空白字符
                label_list.append(label)  # 添加到列表中
        self.label_list = label_list

    def __getitem__(self, idx):
        img_name = self.img_path[idx]
        img_item_path = os.path.join(self.root_dir, self.img_dir, img_name)
        img=Image.open(img_item_path)
        return img

    def __len__(self):
        return len(self.img_path)

root_dir2 = "D:\\software\\pycharm\\project\\learn_pytorch\\test1\\dataset2\\train"
img_dir2 = "ants_image"

label_dir2 = "ants_label"


ants_img2 = MyData(root_dir2, img_dir2, label_dir2)

ants_img2[0].show()