# -*- coding: utf-8 -*-

x1, y1 = map(float, input().split())
x2, y2 = map(float, input().split())

distance = ((x1-x2)**2 + (y1-y2)**2)**(1/2)

print(f'{distance:.4f}')