s, t = map(int, input().split())
a, b = map(int, input().split())
m, n = map(int, input().split())
app = list(map(int, input().split()))
org = list(map(int, input().split()))
app_h, org_h = 0, 0

for i in app:
    if a + i >= s and a + i <= t:
        app_h += 1

for i in org:
    if b + i >= s and b + i <= t:
        org_h += 1

print(app_h)
print(org_h)