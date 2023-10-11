# -*- coding: utf-8 -*-

product, amount = map(int, input().split())

if product == 1:
    print(f'Total: R$ {4 * amount:.2f}')
elif product == 2:
    print(f'Total: R$ {4.5 * amount:.2f}')
elif product == 3:
    print(f'Total: R$ {5 * amount:.2f}')
elif product == 4:
    print(f'Total: R$ {2 * amount:.2f}')
else:
    print(f'Total: R$ {1.5 * amount:.2f}')