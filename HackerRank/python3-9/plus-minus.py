arr = [];
n = 0;
pos, zer, neg = 0, 0, 0;

n = int(input());
arr = list(map(int, input().split()));

for i in arr:
    if i < 0:
        neg += 1;
    elif i == 0:
        zer += 1;
    else:
        pos += 1;

print(f'{pos / n:.6f}');
print(f'{neg / n:.6f}');
print(f'{zer / n:.6f}');