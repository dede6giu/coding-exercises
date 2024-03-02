# -*- coding: utf-8 -*-

name = input()
salary = float(input())
sold = float(input())

total = salary + (0.15*sold)

print(f'TOTAL = R$ {total:.2f}')
