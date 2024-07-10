t = int(input())
b = 'acdefghijklmnopqrstuvwxyz'
B = b.upper()

while t > 0:
    s = input()
    upp = []
    low = []
    result = ''
    x = 0
    lnn = 0
    unn = 0
    
    for i in s:
        if i in b:
            low.append((i, x))
            lnn += 1
        elif i in B:
            upp.append((i, x))
            unn += 1
        elif i == "b" and lnn != 0:
            low.pop()
            lnn -= 1
        elif i == "B" and unn != 0:
            upp.pop()
            unn -= 1
            
        x += 1
    

    while lnn != 0 and unn != 0:
        if low[-1][1] > upp[-1][1]:
            result += low.pop()[0]
            lnn -= 1
        else:
            result += upp.pop()[0]
            unn -= 1
    
    while lnn != 0:
        result += low.pop()[0]
        lnn -= 1
    while unn != 0:
        result += upp.pop()[0]
        unn -= 1
    
    result = result[::-1]
    print(result)
    
    t -= 1