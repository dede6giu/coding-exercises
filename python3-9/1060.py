# -*- coding: utf-8 -*-

i = 0
positive = 0
while i < 6:
	if float(input()) > 0:
		positive += 1
	i += 1

print(f'{positive} valores positivos')