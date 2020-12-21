n, k, q = map(int, input().split())

nums = [0] * (200000 + 9)

for _ in range(n):
    l, r = map(int, input().split())
    nums[l] += 1
    nums[r + 1] -= 1

for i in range(1, len(nums)):
    nums[i] = nums[i] + nums[i - 1]

if nums[0] >= k:
    nums[0] = 1
else:
    nums[0] = 0

for i in range(1, len(nums)):
    if nums[i] >= k:
        nums[i] = nums[i - 1] + 1
    else:
        nums[i] = nums[i - 1]

for _ in range(q):
    l, r = map(int, input().split())
    count = nums[r] - nums[l - 1]
    print(count)
