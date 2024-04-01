ar = [];
n = 0;
x = 0;

n = int(input());
ar = list(map(int, input().split()));

for i in range(n):
    x += ar[i];
    
print(x);