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
	inWait = 0
	while inWait == 0:
		print('novo calculo (1-sim 2-nao)')
		try:
			inWait = int(input())
			if inWait == 1 or inWait == 2:
				break
			else:
				inWait = 0
				continue
		except:
			continue
	if inWait == 1:
		continue
	else:
		break