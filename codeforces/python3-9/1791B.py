t = int(input())

while t > 0:
    n = int(input())
    s = input()
    x = 0
    y = 0
    end = False
    
    for i in s:
        if (i == "U"):
            y += 1
        elif (i == "D"):
            y -= 1
        elif (i == "R"):
            x += 1
        elif (i == "L"):
            x -= 1
        
        if (x == 1 and y == 1):
            end = True
            break
        
    if (end):
        print("YES")
    else:
        print('NO')
    
    t -= 1
