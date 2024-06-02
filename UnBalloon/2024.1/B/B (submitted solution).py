t = int(input())
amnt = 0
    
for i in range(t):
    c, ty = map(str, input().split())
    c = int(c)
    if ty == "F":
        amnt += c * 4
    elif ty == "M":
        amnt += c * 6
    elif ty == "E":
        amnt += c * 9
    
print(amnt)