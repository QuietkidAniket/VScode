for i in range(2,101):
    flag = 1
    for j in range(1, int(i/2)+1):
        if( i % j == 0):flag = flag +1
    if(flag > 2):continue
    print(i, end = ', ')
