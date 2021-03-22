n, m, k = map(int, input().split())

armies = []
for i in range(m + 1):
    armies.append(int(input()))

friends = 0
for i in range(m):
    num = 0
    fedor = armies[m]
    while armies[i] > 0 or fedor > 0:
        if armies[i] & 1 != fedor & 1:
            num += 1
        armies[i] = armies[i] >> 1
        fedor = fedor >> 1
    if num <= k:
        friends += 1

print(friends)
