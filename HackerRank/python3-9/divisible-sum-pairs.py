n, k = map(int, input().split())
ar = list(map(int, input().split()))
pair_list = []

for i in range(n):
    for j in range(i + 1, n):
        pair_list.append((i, j))

cur = 0
for p in pair_list:
    if p[0] < p[1] and (ar[p[0]] + ar[p[1]]) % k == 0:
        cur += 1

print(cur)