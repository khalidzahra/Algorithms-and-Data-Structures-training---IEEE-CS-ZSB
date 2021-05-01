def next_bigger(n):
    d = str(n)
    nums = []
    for i in range(len(d) - 1, -1, -1):
        for j in range(len(d) - 1, -1, -1):
            if i > j:
                if j < len(d) - 1:
                    t = d[:j] + d[i] + d[j + 1:i] + d[j] + d[i + 1:]
                else:
                    t = d[:j] + d[i]
            else:
                if i < len(d) - 1:
                    t = d[:i] + d[j] + d[i + 1:j] + d[i] + d[j + 1:]
                else:
                    t = d[:i] + d[j]

            nums.append(int(t))
    while len(nums) > 0:
        num = min(nums)
        if num > n and len(str(num)) == len(d):
            return num
        nums.remove(num)

    return -1
