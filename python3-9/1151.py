# -*- coding: utf-8 -*-

N = int(input())
f1, f2 = 0, 1

for i in range(N):
	if i != N-1:
		print(f1, end=' ')
	else:
		print(f1)
	f1, f2 = f2, f1+f2