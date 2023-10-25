# -*- coding: utf-8 -*-

register = []
for i in range(int(input())):
    a = input().split()
    register.append(int(a[0]))
    register.append(int(a[1]))

sum = 0
for i in range(round(len(register) / 2)):
    sum += register[2*i] * register[2*i + 1]

print(sum)