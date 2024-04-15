def bubbleSortChanges(array):
    changes = 0
    while True:
        stateChange = False
        for i in range(len(array)-1):
            if array[i] > array[i+1]:
                changes += 1
                stateChange = True
                array[i], array[i+1] = array[i+1], array[i]
        
        if not stateChange:
            break
    
    return changes


t = int(input())
for i in range(t):
    n = int(input())
    unsortedArray = list(map(int, input().split()))
    amnt = bubbleSortChanges(unsortedArray)
    print(amnt)