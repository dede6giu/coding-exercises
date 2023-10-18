# -*- coding: utf-8 -*-

while True:
	n = int(input())
	if n == 0:
		break
	deck = [*range(1, n+1)]
	deck = list(map(str, deck))
	
	discarded = []
	while len(deck) > 1:
		discarded.append(deck[0])
		deck.pop(0)
		deck.append(deck.pop(0))
	
	print(f'Discarded cards: {", ".join(discarded)}')
	print(f'Remaining card: {deck[0]}')