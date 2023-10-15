# -*- coding: utf-8 -*-

for i in range(int(input())):
	numbers = input().split()
	for j in range(len(numbers)):
		numbers[j] = float(numbers[j])
	print(f'{(1/10) * (numbers[0] * 2 + numbers[1] * 3 + numbers[2] * 5):.1f}')