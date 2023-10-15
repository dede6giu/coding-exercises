# -*- coding: utf-8 -*-

value1 = int(input())
value2 = int(input())

if value1 > value2:
	value1, value2 = value2, value1

if value1 % 2 == 0:
	value1 += 1
else:
	value1 += 2

result = 0
for i in range(value1, value2, 2):
	result += i

print(result)