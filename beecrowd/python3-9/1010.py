# -*- coding: utf-8 -*-

product1 = input().split()
product2 = input().split()

total = int(product1[1])*float(product1[2])
total += int(product2[1])*float(product2[2])

print(f'VALOR A PAGAR: R$ {total:.2f}')
