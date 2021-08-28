n, k = map(int, input().split())

heights = list(map(int, input().split()))
stabilities = [max(heights) - min(heights)]
pos = [(0, 0)]

for i in range(k):
    higher = heights.index(max(heights))
    lower = heights.index(min(heights))
    heights[higher] -= 1
    heights[lower] += 1
    stabilities.append(max(heights) - min(heights))
    pos.append((higher + 1, lower + 1))

smallest = min(stabilities)
operations = stabilities.index(smallest)

print(smallest, operations)
for i in range(operations):
    print(*pos[i + 1])
