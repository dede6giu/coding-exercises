t = int(input())

while t > 0:
    n = int(input())
    b = input()
    result = ''
    letters = []
    
    for i in b:
        letters.append(i)
    
    letters = list(set(letters))
    letters.sort()
    nn = len(letters)-1
    
    for i in b:
        aux = letters.index(i)
        result += letters[nn-aux]
    
    print(result)
    
    t -= 1
