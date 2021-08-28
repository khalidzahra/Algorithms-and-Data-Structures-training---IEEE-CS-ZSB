n, k = map(int, input().split())
fence = list(map(int, input().split()))

cumulative = []
cumulative.append(fence[0])

for i in range(1, len(fence)):
    cumulative.append(cumulative[i - 1] + fence[i])

smallest = cumulative[k-1]
index = 0

for i in range(k, len(cumulative)):
    curr = cumulative[i] - cumulative[i-k]
    if curr < smallest:
        smallest = curr
        index = i - k + 1
print(index + 1)
