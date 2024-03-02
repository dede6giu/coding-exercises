# -*- coding: utf-8 -*-

salary = float(input())

if salary <= 2000:
	print('Isento')
elif salary <= 3000:
	taxes = (salary - 2000) * (0.08)
	print(f'R$ {taxes:.2f}')
elif salary <= 4500:
	taxes = (1000 * 0.08) + (salary - 3000) * (0.18)
	print(f'R$ {taxes:.2f}')
else:
	taxes = (1000 * 0.08) + (1500 * 0.18) + (salary - 4500) * (0.28)
	print(f'R$ {taxes:.2f}')