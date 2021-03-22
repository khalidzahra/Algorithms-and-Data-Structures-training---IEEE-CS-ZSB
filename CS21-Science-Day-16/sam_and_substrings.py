def substrings(n):
    nums = [int(n[0])]
    total = int(n[0])
    for d in n[1:]:
        for i in range(len(nums)):
            nums[i] = nums[i] * 10 + int(d)
        nums.append(int(d))
        total += sum(nums)

    return total % 1000000007
