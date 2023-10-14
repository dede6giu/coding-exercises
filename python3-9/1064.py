# -*- coding: utf-8 -*-

i = 0
positive = 0
total = 0
while i < 6:
	a = float(input())
	if a > 0:
		positive += 1
		total += a
	i += 1

print(f'{positive} valores positivos')
print(f'{total / positive:.1f}')