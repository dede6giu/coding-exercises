# -*- coding: utf-8 -*-

starth, startm, endh, endm = map(int, input().split())

if (starth < endh) or (starth == endh and startm < endm):
    time = (endh*60 + endm) - (starth*60 + startm)
    print(f'O JOGO DUROU {time // 60} HORA(S) E {time % 60} MINUTO(S)')
else:
    time = 24*60 - abs((endh*60 + endm) - (starth*60 + startm))
    print(f'O JOGO DUROU {time // 60} HORA(S) E {time % 60} MINUTO(S)')