import cv2

#Reading the image

img = cv2.imread("C:/Users/USER/PycharmProjects/untitled/venv/text.jpg",cv2.IMREAD_COLOR)

#converting into HSV and GRAY
hsv = cv2.cvtColor(img,cv2.COLOR_RGB2HSV)
gray = cv2.cvtColor(img,cv2.COLOR_RGB2GRAY)

#printing original size and shape
print("The shape of the original image is :",img.shape)
print("The size of the original image is :",img.size)

#printing the images
cv2.imshow("color",img)
cv2.imshow("gray",gray)
cv2.imshow("hsv",hsv)

#resizing
img = cv2.resize(img,(600,600))
cv2.imshow("resize",img)
print("The shape of the resized image is :",img.shape)
print("The size of the resized image is :",img.size)


#Thresholding
ret ,thr = cv2.threshold(gray,165,255,cv2.THRESH_BINARY)
ret , thr1 = cv2.threshold(gray,165,255,cv2.THRESH_BINARY_INV)
ret , thr2 = cv2.threshold(gray,165,255,cv2.THRESH_OTSU)
ret, thr3 = cv2.threshold(gray,165,255,cv2.ADAPTIVE_THRESH_MEAN_C)

cv2.imshow("thresh",thr)
cv2.imshow("thresh1",thr1)
cv2.imshow("thresh2",thr2)
cv2.imshow("thresh3",thr3)

#saving the images
cv2.imwrite("D:\TRF/task/gray.jpg",gray)
cv2.imwrite("D:\TRF/task/hsv.jpg",hsv)
cv2.imwrite("D:\TRF/task/thr.jpg",thr)
cv2.imwrite("D:\TRF/task/thr1.jpg",thr1)
cv2.imwrite("D:\TRF/task/thr2.jpg",thr2)
cv2.imwrite("D:\TRF/task/thr3.jpg",thr3)

cv2.waitKey(0)