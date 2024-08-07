def goBack(n):
    if n == 1:
        return 1
    else:
        return n + goBack(n // 2)

if __name__ == '__main__':
    t = int(input())

    while t > 0:
        n = int(input())

        print(goBack(n))

        t -= 1
