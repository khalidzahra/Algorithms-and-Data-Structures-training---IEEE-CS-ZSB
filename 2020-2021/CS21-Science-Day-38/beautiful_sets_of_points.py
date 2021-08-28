n, m = map(int, input().split())

s = min(n, m)

print(s + 1)
for i in range(s + 1):
    print(i, s - i)
