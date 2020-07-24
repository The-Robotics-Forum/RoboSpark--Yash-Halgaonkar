#89,98,120
#215,255,255

import cv2
import numpy as np

img = cv2.imread('rose_flower.jpg')
img_res = cv2.resize(img,(300,500))

#Values from color masking of Rose_flower
bgrl = np.array([89,98,129], np.uint8)
bgrh = np.array([215,255,255],np.uint8)

mask = cv2.inRange(img_res,bgrl,bgrh,)
mask1 = cv2.inRange(img_res,bgrl,bgrh,)

kernel = np.array(([1,2,2],[1,1,1],[1,0,0]))

#Filter2D
filter_2D = cv2.filter2D(mask,-1,kernel,)

#Average Blur
filter_avg = cv2.blur(mask,(5,5))

#Gaussian Blur
filter_gauss = cv2.GaussianBlur(mask,(5,5),3)

#Median Blur
filter_median = cv2.medianBlur(mask,3)

#Bilateral filter
filter_bilateral = cv2.bilateralFilter(mask,5,60,60)


#Drawing flower pot on Bilateral filter image
pts = np.array([[25, 270], [65, 480],
                 [160, 480],
                [200,270]
                ],
               np.int32)


color = (175,80,100)
img_pot = cv2.fillPoly(mask,[pts],color)

img_pot = cv2.putText(mask,'Rose Flower',(50,25),cv2.FONT_HERSHEY_TRIPLEX,1,color,2)



#Saving images
cv2.imwrite('Mask.png',mask1)
cv2.imwrite('Filter_2D.png',filter_2D)
cv2.imwrite('Average_Blur.png',filter_avg)
cv2.imwrite('Gaussian_Blur.png',filter_gauss)
cv2.imwrite('Median_Blur.png',filter_median)
cv2.imwrite('Bilateral_Filter.png',filter_bilateral)
cv2.imwrite('Flowerpot_Text.png',img_pot)

cv2.imshow('Original Image',img_res)
cv2.imshow('Mask Image',mask1)
cv2.imshow('Filter 2D',filter_2D)
cv2.imshow('Average Blur',filter_avg)
cv2.imshow('Gaussian Blur',filter_gauss)
cv2.imshow('Median Blur',filter_median)
cv2.imshow('Bilateral Filter',filter_bilateral)
cv2.imshow('Flower Pot ',img_pot)


cv2.waitKey(0)
cv2.destroyAllWindows()