# -*- coding: utf-8 -*-

money = float(input())

print('NOTAS:')

print(f'{money // 100:.0f} nota(s) de R$ 100.00')
money %= 100

print(f'{money // 50:.0f} nota(s) de R$ 50.00')
money %= 50

print(f'{money // 20:.0f} nota(s) de R$ 20.00')
money %= 20

print(f'{money // 10:.0f} nota(s) de R$ 10.00')
money %= 10

print(f'{money // 5:.0f} nota(s) de R$ 5.00')
money %= 5

print(f'{money // 2:.0f} nota(s) de R$ 2.00')
money %= 2

print('MOEDAS:')

print(f'{money // 1:.0f} moeda(s) de R$ 1.00')
money %= 1

print(f'{money // .5:.0f} moeda(s) de R$ 0.50')
money %= 0.5

print(f'{money // .25:.0f} moeda(s) de R$ 0.25')
money %= 0.25

print(f'{money // .10:.0f} moeda(s) de R$ 0.10')
money %= 0.10

print(f'{money // .05:.0f} moeda(s) de R$ 0.05')
money %= 0.05

"""
O beecrowd rejeita essa linha, mas ela está correta.
print(f'{money // .01:.0f} moeda(s) de R$ 0.01')
"""

print(f'{money * 100:.0f} moeda(s) de R$ 0.01')