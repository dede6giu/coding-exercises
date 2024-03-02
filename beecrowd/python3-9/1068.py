# -*- coding: utf-8 -*-

expressions = []
try:
	for i in range(1, 10001):
		expressions.append(input())
except:
	pass

for e in expressions:
	if e.count('(') != e.count(')'):
		print('incorrect')
	else:
		P_open = 0
		for i in range(len(e)):
			if P_open < 0:
				print('incorrect')
				break
			elif e[i] == '(':
				P_open += 1
			elif e[i] == ')':
				P_open -= 1
			if i == len(e) - 1:
				print('correct')