# -*- coding: utf-8 -*-

biggest = -1
bp = 0

for i in range(100):
    a = int(input())
    if a > biggest:
        biggest = a
        bp = i+1

print(biggest)
print(bp)