# -*- coding: utf-8 -*-

for i in range(int(input())):
	X, Y = map(int, input().split())
	if X > Y:
		X, Y = Y, X
	S = 0
	for j in range(X + 1, Y):
		if j % 2 ==1:
			S += j
	print(S)