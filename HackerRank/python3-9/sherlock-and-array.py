def balancedSums(n, arr):
    n -= 1

    # account for cases i = 0 and i = n
    if sum(arr[1:]) == 0 or sum(arr[:n]) == 0:
        return 'YES'

    sumTotal = sum(arr)
    sumRest = sum(arr) - arr[0]

    for i in range(1, n):
        sumRest -= arr[i]
        test = (sumTotal - arr[i]) // 2
        if test == sumRest:
            return 'YES'
    
    return 'NO'

t = int(input())
while t > 0:
    size = int(input())
    array = list(map(int, input().split()))
    print(balancedSums(size, array))
    t -= 1