# -*- coding: utf-8 -*-

value = float(input())

if value < 0:
    print('Fora de intervalo')
elif value >= 0 and value <= 25:
    print(f'Intervalo [0,25]')
elif value <= 50:
    print(f'Intervalo (25,50]')
elif value <= 75:
    print(f'Intervalo (50,75]')
elif value <= 100:
    print(f'Intervalo (75,100]')
else:
    print('Fora de intervalo')