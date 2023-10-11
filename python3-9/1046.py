# -*- coding: utf-8 -*-

start, end = map(int, input().split())

if end > start:
    time = end - start
else:
    time = 24 - abs(end - start)

print(f'O JOGO DUROU {time} HORA(S)')