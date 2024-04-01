full_str = input()
full_str = input()
result_str = []
char_str = []
pair_list = []

def checkViable(word):
    for i in range(2, len(word)):
        if word[i] != word[i-2]:
            return False
    return True

def inverseRemoveDouble(word, c1, c2):
    res = ''
    for c in word:
        if c == c1:
            res += c1
        elif c == c2:
            res += c2
    return res


for i in full_str:
    if char_str.count(i) == 0:
        char_str.append(i)

n = len(char_str)
for i in range(n):
    for j in range(i + 1, n):
        pair_list.append((char_str[i], char_str[j]))

cur = 0
for i in pair_list:
    res = inverseRemoveDouble(full_str, i[0], i[1])
    if len(res) > cur and checkViable(res):
        cur = len(res)

print(cur)