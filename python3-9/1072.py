# -*- coding: utf-8 -*-

cases = int(input())
in1020 = 0
for i in range(cases):
	a = int(input())
	if a >= 10 and a <= 20:
		in1020 += 1

print(f'{in1020} in')
print(f'{cases - in1020} out')