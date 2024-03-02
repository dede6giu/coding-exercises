# -*- coding: utf-8 -*-

# a função .sort() por algum motivo não funcionou. então eu implementei manualmente

sides = input().split()
sides[0] = float(sides[0])
sides[1] = float(sides[1])
sides[2] = float(sides[2])
if sides[0] < sides[2]:
    sides[0], sides[2] = sides[2], sides[0]
if sides[1] < sides[2]:
    sides[1], sides[2] = sides[2], sides[1]
if sides[0] < sides[1]:
    sides[0], sides[1] = sides[1], sides[0]

a = sides[0]
b = sides[1]
c = sides[2]

if a >= b + c:
    print('NAO FORMA TRIANGULO')
else:
    if a**2 == (b**2 + c**2):
        print('TRIANGULO RETANGULO')
    elif a**2 > b**2 + c**2:
        print('TRIANGULO OBTUSANGULO')
    else:
        print('TRIANGULO ACUTANGULO')
    
    if a == b == c:
        print('TRIANGULO EQUILATERO')
    elif a == b or a == c or b == c:
        print('TRIANGULO ISOSCELES')