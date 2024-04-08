n = int(input())
arr = list(map(int, input().split()))
m = int(input())
brr = list(map(int, input().split()))

min_brr = min(brr)
max_brr = max(brr)
hash = max_brr - min_brr + 1
crr = [0]*hash

aux = 0
for number in brr:
    aux = number % hash
    crr[aux] += 1

for number in arr:
    aux = number % hash
    crr[aux] -= 1

results = []
for i in range(len(crr)):
    if crr[i] > 0:
        aux = (max_brr // hash) * hash
        aux = aux + i if i <= max_brr % hash else aux - hash + i
        results.append(aux)

results.sort()
results = map(str, results)

print(' '.join(results))