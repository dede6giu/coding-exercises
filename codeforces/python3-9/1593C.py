t = int(input())

while t > 0:
    n, k = map(int, input().split())
    mices = list(map(int, input().split()))
    escaped = 0
    bank = n - 1

    mices.sort()

    for i in range(len(mices)):
        aux = mices.pop()
        if bank >= n - aux:
            bank -= (n - aux)
            escaped += 1
    
    print(escaped)

    t -= 1