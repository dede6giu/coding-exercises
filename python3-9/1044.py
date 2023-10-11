# -*- coding: utf-8 -*-

a, b = map(int, input().split())

def multiplos(maior, menor):
    if maior % menor == 0:
        print('Sao Multiplos')
    else:
        print('Nao sao Multiplos')

if a > b:
    multiplos(a, b)
elif a < b:
    multiplos(b, a)
else:
    print('Nao sao Multiplos')