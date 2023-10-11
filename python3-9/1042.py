# -*- coding: utf-8 -*-

a, b, c = map(int, input().split())

if a < b < c:
    print(f'{a}\n{b}\n{c}\n\n{a}\n{b}\n{c}')
elif a < c < b:
    print(f'{a}\n{c}\n{b}\n\n{a}\n{b}\n{c}')
elif b < a < c:
    print(f'{b}\n{a}\n{c}\n\n{a}\n{b}\n{c}')
elif b < c < a:
    print(f'{b}\n{c}\n{a}\n\n{a}\n{b}\n{c}')
elif c < a < b:
    print(f'{c}\n{a}\n{b}\n\n{a}\n{b}\n{c}')
elif c < b < a:
    print(f'{c}\n{b}\n{a}\n\n{a}\n{b}\n{c}')