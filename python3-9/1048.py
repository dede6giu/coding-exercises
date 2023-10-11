# -*- coding: utf-8 -*-

salary = float(input())

if salary <= 400:
    newsalary = salary*1.15
    percent = '15'
elif salary <= 800:
    newsalary = salary*1.12
    percent = '12'
elif salary <= 1200:
    newsalary = salary*1.10
    percent = '10'
elif salary <= 2000:
    newsalary = salary*1.07
    percent = '7'
else:
    newsalary = salary*1.04
    percent = '4'
    

print(f'Novo salario: {newsalary:.2f}')
print(f'Reajuste ganho: {newsalary - salary:.2f}')
print(f'Em percentual: {percent} %')