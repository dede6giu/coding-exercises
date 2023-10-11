# -*- coding: utf-8 -*-

time = int(input()) # hours
velocity = int(input()) # km/h

liters = (velocity * time) / (12)

print(f'{liters:.3f}')