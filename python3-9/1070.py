# -*- coding: utf-8 -*-

amount = int(input())
if amount % 2 == 0:
	amount += 1
for i in range(amount, amount + 12, 2):
	print(i)