# -*- coding: utf-8 -*-

def factorial(x):
    if x == 1:
        return 1
    return x * factorial(x - 1)

print(factorial(int(input())))