n, m = map(int, input().split())

nodes = list(map(int, input().split()))

highest = 0

for i in range(m):
    a, b, e = map(int, input().split())
    val = (nodes[a-1] + nodes[b-1])/e
    if highest < val:
        highest = val

print("{0:.9f}".format(highest))