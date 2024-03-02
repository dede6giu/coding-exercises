# -*- coding: utf-8 -*-

for i in range(11):
	if i*0.2 == 0 or i*0.2 == 1 or i*0.2 == 2:
		print(f'I={int(0.2*i)} J={int(1 + 0.2*i)}')
		print(f'I={int(0.2*i)} J={int(2 + 0.2*i)}')
		print(f'I={int(0.2*i)} J={int(3 + 0.2*i)}')
	else:
		print(f'I={0.2*i:.1f} J={1 + 0.2*i:.1f}')
		print(f'I={0.2*i:.1f} J={2 + 0.2*i:.1f}')
		print(f'I={0.2*i:.1f} J={3 + 0.2*i:.1f}')