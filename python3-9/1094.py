# -*- coding: utf-8 -*-

C, R, S = 0, 0, 0

for i in range(int(input())):
	a = input().split()
	a[0] = int(a[0])
	if a[1] == 'C':
		C += a[0]
	elif a[1] == 'R':
		R += a[0]
	else:
		S += a[0]

print(f'Total: {C+R+S} cobaias')
print(f'Total de coelhos: {C}')
print(f'Total de ratos: {R}')
print(f'Total de sapos: {S}')
print(f'Percentual de coelhos: {100 * C / (C+R+S):.2f} %')
print(f'Percentual de ratos: {100 * R / (C+R+S):.2f} %')
print(f'Percentual de sapos: {100 * S / (C+R+S):.2f} %')