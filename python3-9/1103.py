# -*- coding: utf-8 -*-

while True:
	H1, M1, H2, M2 = map(int, input().split())
	if H1 == 0 and H2 == 0 and M1 == 0 and M2 == 0:
		break
	
	time1 = H1*60 + M1
	time2 = H2*60 + M2

	if (H1 > H2) or (H1 == H2 and M1 > M2):
		print(1440 - abs(time1 - time2))
	else:
		print(time2 - time1)