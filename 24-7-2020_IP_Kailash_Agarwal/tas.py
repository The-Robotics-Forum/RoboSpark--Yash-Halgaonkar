import cv2
import numpy as np


img = cv2.imread("rose_flower.jpg")
res = cv2.resize(img,(240,400))

bgrl = np.array([90,0,200],np.uint8)
bgrh = np.array([215,255,255],np.uint8)
mask = cv2.inRange(res,bgrl,bgrh)

kernel = np.array(([0,0,0],[0,1,0],[0,0,0]),np.uint8)

blur = cv2.filter2D(res,-1,kernel)
avg = cv2.blur(res,(7,7))
gaus = cv2.GaussianBlur(res,(5,5),0)
med = cv2.medianBlur(res,3)
bif = cv2.bilateralFilter(res,7,111,111)

img = cv2.rectangle(res,(0,250),(120,300),(0,0,0),-1)
img = cv2.circle(img,(56,335),65,(0,0,0),-1)
font = cv2.FONT_HERSHEY_COMPLEX
cv2.putText(img,"Flower",(0,275),font ,1,(255,255,255),1)


cv2.imshow("flow",res)
cv2.imshow("mask",mask)
cv2.imshow("blur",blur)
cv2.imshow("average",avg)
cv2.imshow("gaus",gaus)
cv2.imshow("med",med)
cv2.imshow("bilateral",bif)
cv2.imshow("flower pot",img)

cv2.imwrite("D:\TRF\Task Day 2/mask.jpg",mask)
cv2.imwrite("D:\TRF\Task Day 2/blur.jpg",blur)
cv2.imwrite("D:\TRF\Task Day 2/avg.jpg",avg)
cv2.imwrite("D:\TRF\Task Day 2/gaus.jpg",gaus)
cv2.imwrite("D:\TRF\Task Day 2/med.jpg",med)
cv2.imwrite("D:\TRF\Task Day 2/bif.jpg",bif)
cv2.imwrite("D:\TRF\Task Day 2/text.jpg",img)
cv2.waitKey(0)