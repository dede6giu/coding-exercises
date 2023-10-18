# -*- coding: utf-8 -*-

scores = []
while True:
	if len(scores) == 2:
		print(f'media = {(1/2) * (scores[0] + scores[1])}')
		break
	else:
		newscore = float(input())
		if newscore >= 0 and newscore <= 10:
			scores.append(newscore)
		else:
			print('nota invalida')