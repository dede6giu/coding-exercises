# -*- coding: utf-8 -*-

score = int(input())

if score > 85:
    print('A')
elif score > 60:
    print('B')
elif score > 35:
    print('C')
elif score > 0:
    print('D')
else:
    print('E')