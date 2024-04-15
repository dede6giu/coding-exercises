n = int(input())
values = [ [] for _ in range(101) ]

for i in range(n // 2):
    aux = input().split()
    values[int(aux[0])].append('-')

for i in range(n // 2, n):
    aux = input().split()
    values[int(aux[0])].append(aux[1])

result = ' '.join(' '.join(sub) for sub in values).strip()
print(result)