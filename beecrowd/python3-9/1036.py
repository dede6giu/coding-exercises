# -*- coding: utf-8 -*-

import math

A, B, C = map(float, input().split())

delta = B**2 - 4*A*C

if delta < 0:
    print('Impossivel calcular')
elif A == 0:
    print('Impossivel calcular')
else:
    root1 = (-B + math.sqrt(delta)) / (2*A)
    root2 = (-B - math.sqrt(delta)) / (2*A)
    print(f'R1 = {root1:.5f}')
    print(f'R2 = {root2:.5f}')