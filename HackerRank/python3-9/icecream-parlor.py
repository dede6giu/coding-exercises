class Parlor:
    def __init__(self, amount, cost):
        self.amount = amount
        self.cost = cost
    
    def pairOfCream(self, money):
        for i in range(self.amount):
            for j in range(i+1, self.amount):
                if self.cost[i] + self.cost[j] == money:
                    return (i + 1, j + 1)

t = int(input())
while t > 0:
    money = int(input())
    amnt = int(input())
    cost = list(map(int, input().split()))
    shop = Parlor(amnt, cost)
    
    result = shop.pairOfCream(money)
    print(result[0], result[1])
    
    t -= 1