# -*- coding: utf-8 -*-

mines = []
for i in range(int(input())):
	mines.append(input())
	mines[i] = mines[i].replace('.', '')

for m in mines:
	diamonds = 0
	while m.count('<>') > 0:
		diamonds += m.count('<>')
		m = m.replace('<>', '')
	print(diamonds)