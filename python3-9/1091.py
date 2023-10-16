# -*- coding: utf-8 -*-

while True:
	K = int(input())

	if K == 0:
		break

	dp = input().split()  # [X,Y]
	dp[0] = int(dp[0])
	dp[1] = int(dp[1])

	for i in range(K):
		residence = input().split()       # [X,Y]
		residence[0] = int(residence[0])
		residence[1] = int(residence[1])

		if residence[0] == dp[0] or residence[1] == dp[1]:
			print('divisa')
		elif residence[0] > dp[0] and residence[1] > dp[1]:
			print('NE')
		elif residence[0] < dp[0] and residence[1] > dp[1]:
			print('NO')
		elif residence[0] < dp[0] and residence[1] < dp[1]:
			print('SO')
		else:
			print('SE')