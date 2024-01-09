# -*- coding: utf-8 -*-

while True:

    B, N = map(int, input().split())
    
    if B == 0 and N == 0:
        break

    banks_money = list(map(int, input().split()))

    while N > 0:
        D, C, V = map(int, input().split())
        banks_money[D-1] -= V
        banks_money[C-1] += V
        N -= 1

    aux = False
    for i in banks_money:
        if i < 0:
            print('N')
            aux = True
            break

    if aux == False:
        print('S')