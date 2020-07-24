import cv2
import numpy as np

img = cv2.imread('rose_flower.jpg')
img_res = cv2.resize(img,(300,500))

cv2.namedWindow('Masking')

def nothing(x):
    pass


bl = 'Blue Low'
gl = 'Green Low'
rl = 'Red Low'
bh = 'Blue High'
gh = 'Green High'
rh = 'Red High'

cv2.createTrackbar(bl, 'Masking', 0, 255, nothing)
cv2.createTrackbar(gl, 'Masking', 0, 255, nothing)
cv2.createTrackbar(rl, 'Masking', 0, 255, nothing)
cv2.createTrackbar(bh, 'Masking', 0, 255, nothing)
cv2.createTrackbar(gh, 'Masking', 0, 255, nothing)
cv2.createTrackbar(rh, 'Masking', 0, 255, nothing)

while True:
    cv2.imshow('Original',img_res)

    btl = cv2.getTrackbarPos(bl, 'Masking')
    gtl = cv2.getTrackbarPos(gl, 'Masking')
    rtl = cv2.getTrackbarPos(rl, 'Masking')
    bth = cv2.getTrackbarPos(bh, 'Masking')
    gth = cv2.getTrackbarPos(gh, 'Masking')
    rth = cv2.getTrackbarPos(rh, 'Masking')

    bgrl = np.array([btl,gtl,rtl],np.uint8)
    bgrh = np.array([bth,gth,rth],np.uint8)

    mask = cv2.inRange(img_res,bgrl,bgrh)
    cv2.imshow('Mask',mask)

    if cv2.waitKey(1) == 32:
        break

cv2.waitKey(0)
cv2.destroyAllWindows()