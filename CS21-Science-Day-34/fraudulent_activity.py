def activityNotifications(expenditure, d):
    count = 0
    for i in range(d, len(expenditure)):
        prev = expenditure[i - d: i]
        prev = sorted(prev)
        median = 0
        pos = (d - 1)//2
        if d % 2 == 0:
            median = (prev[pos] + prev[pos + 1]) / 2
        else:
            median = prev[pos]
        if expenditure[i] >= 2*median:
            count += 1
    return count