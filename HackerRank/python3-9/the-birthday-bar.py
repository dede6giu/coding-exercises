n = int(input())
s = list(map(int, input().split()))
d, m = map(int, input().split())
strip_list = []

for i in range(n - m + 1):
    strip_list.append(tuple(s[i:i+m]))

cur = 0
aux = 0
for s in strip_list:
    aux = 0
    for i in s:
        aux += i
    cur += 1 if aux == d else 0

print(cur)