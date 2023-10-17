# -*- coding: utf-8 -*-

while True:
	M, N = map(int, input().split())
	if M <= 0 or N <= 0:
		break
	
	if M > N:
		M, N = N, M
	
	S = 0
	for i in range(M, N + 1):
		S += i
		print(i, end=' ')
	print(f'Sum={S}')