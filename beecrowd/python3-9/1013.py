# -*- coding: utf-8 -*-

A, B, C = map(int, input().split())

maior1 = (A + B + abs(A - B)) / 2
maior2 = (C + maior1 + abs(C - maior1)) / 2

print(f'{maior2:.0f} eh o maior')
