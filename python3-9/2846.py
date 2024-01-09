# -*- coding: utf-8 -*-

K = int(input())

def fibListToN(N):
    aux = N*4
    result = list(range(1, aux + 1))
    a, b = 2, 1

    while (N + 5) > 0 and b < aux:
        result.remove(b)
        a, b = a+b, a
        N -= 1
    return result

print(fibListToN(K)[K-1])