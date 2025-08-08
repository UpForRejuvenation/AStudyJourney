from PIL import Image
from torch.utils.tensorboard import SummaryWriter
from torchvision import transforms

writer = SummaryWriter("logs")
img_path = "pytorch.jpg"
img = Image.open(img_path)
print(img)

trans_totensor = transforms.ToTensor()
img_totensor = trans_totensor(img)
writer.add_image("ToTensor",img_totensor)

# normalize
print(img_totensor[0][0][0])

trans_norm = transforms.Normalize([2,2,2],[1,1,1])
img_norm = trans_norm(img_totensor)

print(img_norm[0][0][0])

writer.add_image("Normalize",img_norm,3)

trans_resize = transforms.Resize((512,512))
# PIL -> resize
img_resize = trans_resize(img)
# resize -> tensor
img_resize = trans_totensor(img_resize)
writer.add_image("Resize",img_resize)
print(img_resize)

trans_resize_2 = transforms.Resize(512)
trans_compose = transforms.Compose([trans_resize_2, trans_totensor])
img_resize_2 = trans_compose(img)
writer.add_image("Resize",img_resize_2,1)

writer.close()

