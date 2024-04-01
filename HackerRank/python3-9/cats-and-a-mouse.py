q = int(input())
catA, catB, miceC = 0, 0, 0

for i in range(q):
    catA, catB, miceC = map(int, input().split())
    if abs(catA - miceC) == abs(catB - miceC):
        print("Mouse C")
    elif abs(catA - miceC) > abs(catB - miceC):
        print("Cat B")
    else:
        print("Cat A")