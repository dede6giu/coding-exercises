def addInLine(time, toAdd, line):
    i = 0
    while i < len(toAdd):
        if toAdd[i][0] == time:
            line.append(toAdd[i])
            toAdd.pop(i)
        else:
            i += 1

testCase = int(input())
while testCase > 0:
    n = int(input())
    students = []
    for i in range(n):
        aux = list(map(int, input().split()))
        aux.append(i)
        students.append(aux)
    sec = 0
    line = []
    results = [0 for _ in students]

    while True:
        sec += 1

        addInLine(sec, students, line)

        while True:
            if len(line) == 0:
                break
            elif line[0][1] < sec:
                line.pop(0)
            else:
                results[line[0][2]] = sec
                line.pop(0)
                break
        
        if len(line) + len(students) == 0:
            break

    results = map(str, results)
    print(' '.join(results))

    testCase -= 1