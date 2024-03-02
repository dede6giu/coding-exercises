# -*- coding: utf-8 -*-

i = 0
even = 0
while i < 5:
	if int(input()) % 2 == 0:
		even += 1
	i += 1

print(f'{even} valores pares')