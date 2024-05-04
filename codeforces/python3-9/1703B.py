if __name__ == '__main__':
    t = int(input())
    while t > 0:
        hashChars = [False for _ in range(26)]
        n = int(input())
        word = input()
        bloons = 0

        for i in range(len(word)):
            auxIndex = ord(word[i]) - ord('A')
            if hashChars[auxIndex]:
                bloons += 1
            else:
                hashChars[auxIndex] = True
                bloons += 2

        print(bloons)

        t -= 1