t = int(input())

while t > 0:
    n, k = map(int, input().split())
    arrival = list(map(int, input().split()))

    aux = 0
    for i in arrival:
        if i <= 0:
            aux += 1
        
        if aux >= k:
            break
    
    if aux < k:
        print('YES')
    else:
        print('NO')

    t -= 1