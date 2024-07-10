t = int(input())

while t > 0:
    n, f, k = map(int, input().split())
    
    cubes = list(map(int, input().split()))
    
    f = cubes[f-1]
    
    amount = cubes.count(f)
    
    cubes.sort()
    cubes.reverse()
    
    cubes = cubes[k:]
    
    if len(cubes) == 0:
        print("YES")
    elif amount == 1:
        if cubes[0] >= f:
            print("NO")
        else:
            print("YES")
    else:
        if cubes[0] > f:
            print("NO")
        elif cubes[0] == f and amount == cubes.count(f):
            print("NO")
        elif cubes[0] == f:
            print("MAYBE")
        else:
            print("YES")
        
    
    t -= 1
