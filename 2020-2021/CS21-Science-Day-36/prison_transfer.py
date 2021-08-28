n, t, c = map(int, input().split())
p = list(map(int, input().split()))

pCount = count = 0

for i in range(len(p)):
    if p[i] > t:
        pCount = 0
    else:
        pCount += 1
    if pCount == c:
        count += 1
        pCount -= 1

print(count)