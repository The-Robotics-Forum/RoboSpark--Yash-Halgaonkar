import cv2
cap = cv2.VideoCapture(0)
ret,old = cap.read(0)

while True:
    ret,new = cap.read(0)

    diff = cv2.absdiff(old,new,3)
    print(diff)
    if diff.any():
        cv2.putText(diff, 'Left to right',(25,25), cv2.FONT_HERSHEY_TRIPLEX, 1,(255,0,0))

    #cv2.imshow('Original old',old)
    cv2.imshow('Original',new)
    cv2.imshow('Motion_detection',diff)

    old = new
    if cv2.waitKey(1) == 32:
        break
cap.release()
cv2.waitKey(0)
cv2.destroyAllWindows()