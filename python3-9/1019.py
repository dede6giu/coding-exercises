# -*- coding: utf-8 -*-

s = int(input())
h = s // (3600)
s %= 3600
m = s // 60
s %= 60

print(f'{h}:{m}:{s}')