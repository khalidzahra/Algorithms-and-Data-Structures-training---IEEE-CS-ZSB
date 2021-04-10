n, k = map(int, input().split())
v = list(map(int, input().split()))


def getPossibilities(index, ratio, lst, length=0):
    p = 0
    for i in range(index + 1, len(lst), 1):
        if lst[i] / lst[index] == ratio:
            if length + 1 == 2:
                p += 1
            else:
                p += getPossibilities(i, ratio, lst, length + 1)
    return p


total = 0
for i in range(n):
    total += getPossibilities(i, k, v)

print(total)
