import cv2
cap = cv2.VideoCapture(0)
ret,old = cap.read(0)

old_gray = cv2.cvtColor(old, cv2.COLOR_BGR2GRAY)

feature_params = dict( maxCorners=100,
                       qualityLevel=0.3,
                       minDistance=7,
                       blockSize=7)

# Parameters for lucas kanade optical flow
lucas_params = dict( winSize=(15, 15),
                  maxLevel=2,
                  criteria=(cv2.TERM_CRITERIA_EPS | cv2.TERM_CRITERIA_COUNT, 10, 0.03))

color = np.random.randint(0, 255, (100, 3))  #color

p0 = cv2.goodFeaturesToTrack(old_gray, mask = None, **feature_params)
mask = np.zeros_like(old)


while True:
    ret,new = cap.read(0)
    new_gray = cv2.cvtColor(new,cv2.COLOR_BGR2GRAY)
    
    # calculate optical flow
    p1, st, err = cv2.calcOpticalFlowPyrLK(old_gray, new_gray, p0, None, **lucas_params)

    # Point selection
    good_new = p1[st == 1]
    good_old = p0[st == 1]

    # draw the tracks
    for i, (new1, old1) in enumerate(zip(good_new, good_old)):
        a, b = new1.ravel()
        c, d = old1.ravel()
        if a > c:
            print('Left')
        elif c > a:
            print('Right')
        else:
            print('Same')
        mask = cv2.line(mask, (a, b), (c, d), color[i].tolist(), 2)
        new = cv2.circle(new, (a, b), 5, color[i].tolist(), -1)
   
    img = cv2.add(new,mask)
    #cv2.imshow('Original old',old)
    cv2.imshow('Original',new)
    cv2.imshow('Motion_detection',img)

    
    if cv2.waitKey(1) == 32:
        break
cap.release()
cv2.waitKey(0)
cv2.destroyAllWindows()
