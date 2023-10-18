# -*- coding: utf-8 -*-

while True:
	x, y = map(int, input().split())
	if x == y:
		break
	elif x > y:
		print('Decrescente')
	else:
		print('Crescente')