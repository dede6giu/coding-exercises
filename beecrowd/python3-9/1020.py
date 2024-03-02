# -*- coding: utf-8 -*-

day = int(input())
year = day // 365
day %= 365
month = day // 30
day %= 30

print(f'{year} ano(s)')
print(f'{month} mes(es)')
print(f'{day} dia(s)')