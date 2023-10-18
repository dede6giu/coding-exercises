# -*- coding: utf-8 -*-

while True:
	# average calculation
	scores = []
	while True:
		if len(scores) == 2:
			print(f'media = {(1/2) * (scores[0] + scores[1]):.2f}')
			break
		else:
			try:
				newscore = float(input())
				if newscore >= 0 and newscore <= 10:
					scores.append(newscore)
				else:
					print('nota invalida')
			except:
				print('nota invalida')

	# continue prompt
	while True:
		try:
			repeat = int(input('novo calculo (1-sim 2-nao)\n'))
			if repeat == 1 or repeat == 2:
				break
			else:
				continue
		except:
			continue
	if repeat == 1:
		continue
	else:
		break
