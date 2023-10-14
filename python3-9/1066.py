# -*- coding: utf-8 -*-

i = 0
even = 0
positive = 0
negative = 0
while i < 5:
	a = int(input())
	if a % 2 == 0:
		even += 1
	if a > 0:
		positive += 1
	elif a < 0:
		negative += 1
	i += 1

print(f'{even} valor(es) par(es)')
print(f'{5 - even} valor(es) impar(es)')
print(f'{positive} valor(es) positivo(s)')
print(f'{negative} valor(es) negativo(s)')
