def getSoldProducts(p, c):
    return p if c > p else c


n, f = map(int, input().split())

data = []
maxSold = 0
diff = []

for i in range(n):
    data.append(tuple(map(int, input().split())))

for i, p in enumerate(data):
    diff.append((getSoldProducts(2 * p[0], p[1]) - getSoldProducts(p[0], p[1]), i))

diff.sort(reverse=True)

for p in diff:
    if f > 0:
        maxSold += getSoldProducts(2 * data[p[1]][0], data[p[1]][1])
        f -= 1
    else:
        maxSold += getSoldProducts(data[p[1]][0], data[p[1]][1])

print(maxSold)