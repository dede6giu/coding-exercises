n, m = map(int, input().split())
groups = list(map(int, input().split()))

buses = 1

i = 0
bus_aux = m
while i < n:
    if groups[i] > bus_aux:
        bus_aux = m
        buses += 1
        continue
    else:
        bus_aux -= groups[i]
        i += 1

print(buses)