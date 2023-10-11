# -*- coding: utf-8 -*-

A, B, C = map(float, input().split())

triangulo = (A*C)/2
circulo = 3.14159 * (C**2)
trapezio = ((A+B) * C) / 2
quadrado = B**2
rectangulo = A*B

print(f'TRIANGULO: {triangulo:.3f}')
print(f'CIRCULO: {circulo:.3f}')
print(f'TRAPEZIO: {trapezio:.3f}')
print(f'QUADRADO: {quadrado:.3f}')
print(f'RETANGULO: {rectangulo:.3f}')
