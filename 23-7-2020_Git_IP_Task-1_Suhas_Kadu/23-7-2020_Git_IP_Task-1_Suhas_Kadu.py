import cv2

img = cv2.imread('text.jpg')

gray_img = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
hsv_img = cv2.cvtColor(img,cv2.COLOR_BGR2HSV)

cv2.imshow('Original image',img)
cv2.imshow('Gray image',gray_img)
cv2.imshow('HSV image',hsv_img)



img_resize = cv2.resize(img,(400,400))


cv2.imshow('Original image', img)
cv2.imshow('Resized image', img_resize)

print("Original Dimensions ", img.shape)
print("Resized Dimensios ", img_resize.shape)


#Simple Threshold
ret, gray_img1 = cv2.threshold(gray_img,155,255,cv2.THRESH_BINARY)
ret, gray_img2 = cv2.threshold(gray_img,150,255,cv2.THRESH_BINARY_INV)
ret, otsu_img = cv2.threshold(gray_img,155,255,cv2.THRESH_OTSU)
ret, tozero_img1 = cv2.threshold(gray_img,155,255,cv2.THRESH_TOZERO)
ret, tozero_img2 = cv2.threshold(gray_img,155,255,cv2.THRESH_TOZERO_INV)
ret, mask_img = cv2.threshold(gray_img,155,255,cv2.THRESH_MASK)
ret, trunc_img = cv2.threshold(gray_img,155,255,cv2.THRESH_TRUNC)
ret, triangle_img = cv2.threshold(gray_img,155,255,cv2.THRESH_TRIANGLE)

#Adaptive Threshold
#Mean method
adaptive_thresh_img1 = cv2.adaptiveThreshold(gray_img,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,7,12)
adaptive_thresh_img2 = cv2.adaptiveThreshold(gray_img,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY_INV,7,12)

#Gaussian method
adaptive_thresh_img3 = cv2.adaptiveThreshold(gray_img,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,7,12)
adaptive_thresh_img4 = cv2.adaptiveThreshold(gray_img,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY_INV,7,12)





#Simple Threshold
cv2.imshow('Binary ',gray_img1)
cv2.imshow('Binary Inv.',gray_img2)
cv2.imshow('Otsu',otsu_img)
cv2.imshow('Tozero',tozero_img1)
cv2.imshow('Tozero Inv.',tozero_img2)
cv2.imshow('Mask',mask_img)
cv2.imshow('Trunc',trunc_img)
cv2.imshow('Triangle',triangle_img)



#Gaussian Threshold
cv2.imshow('Mean-Bin', adaptive_thresh_img1)
cv2.imshow('Mean-Bin Inv.', adaptive_thresh_img2)
cv2.imshow('Gaussian-Bin', adaptive_thresh_img3)
cv2.imshow('Gaussian-Bin Inv.', adaptive_thresh_img4)


#Saving images

cv2.imwrite('Gray_Iamge.jpg',gray_img)
cv2.imwrite('HSV_Image.jpg',hsv_img)

cv2.imwrite('Thresh_Binary.jpg', gray_img1)
cv2.imwrite('Thresh_Binary_Inv.jpg', gray_img2)
cv2.imwrite('Thresh_Otsu.jpg',otsu_img)
cv2.imwrite('Thresh_Tozero.jpg',tozero_img1)
cv2.imwrite('Thresh_Tozero_Inv.jpg',tozero_img2)
cv2.imwrite('Thresh_Trunc.jpg',trunc_img)
cv2.imwrite('Thresh_Triangle.jpg',triangle_img)
cv2.imwrite('Thresh_Mask.jpg',mask_img)

cv2.imwrite('AdaptiveThresh_Mean_Binary.jpg',adaptive_thresh_img1)
cv2.imwrite('AdaptiveThresh_Mean_Binary_Inv.jpg',adaptive_thresh_img2)
cv2.imwrite('Adaptivethresh_Gaussian_Binary.jpg',adaptive_thresh_img3)
cv2.imwrite('AdaptiveThresh_Gaussian_Binary_Inv.jpg',adaptive_thresh_img4)


cv2.waitKey(0)
cv2.destroyAllWindows()


