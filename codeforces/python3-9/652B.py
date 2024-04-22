import random
import sys
sys.setrecursionlimit(2 * (10**3))

def partition(arr, left, right):
    pivot = random.randint(left, right)
    arr[pivot], arr[right] = arr[right], arr[pivot]
    pivot = arr[right]
    i = left - 1

    for j in range(left, right):
        if arr[j] <= pivot:
            i += 1
            arr[j], arr[i] = arr[i], arr[j]

    arr[i+1], arr[right] = arr[right], arr[i+1]

    return i+1

def quicksort(arr, left, right):
    if left < right:
        pi = partition(arr, left, right)
        quicksort(arr, left, pi-1)
        quicksort(arr, pi+1, right)

def zsort(arr):
    # array must be ordered in CRESCENDING order
    result = []
    while True:
        if len(arr) == 0:
            break
        result.append(arr.pop(0))
        if len(arr) == 0:
            break
        result.append(arr.pop(-1))
    return result

def checkZsort(arr):
    i = 1
    n = len(arr) - 1
    while i < n:
        if arr[i] < arr[i-1] or arr[i] < arr[i+1]:
            return False
        i += 2
    if n+1 % 2 == 0 and arr[n] < arr[n-1]:
        return False
    return True

n = int(input())
numbers = list(map(int, input().split()))

quicksort(numbers, 0, n-1)

numbers = zsort(numbers)

if checkZsort(numbers):
    print(' '.join(map(str, numbers)))
else:
    print('Impossible')