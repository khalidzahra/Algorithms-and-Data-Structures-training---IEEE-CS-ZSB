n, k = map(int, input().split())
heights = list(map(int, input().split()))

heights.sort(reverse=True)

slices = 0
currSum = 0
for i in range(len(heights)):
    if i + 1 < len(heights) and heights[i] != heights[len(heights) - 1]:
        currSum += (heights[i] - heights[i + 1]) * (i + 1)
        if currSum > k:
            slices += 1
            currSum = (heights[i] - heights[i + 1]) * (i + 1)
    else:
        slices += 1
print(slices)
