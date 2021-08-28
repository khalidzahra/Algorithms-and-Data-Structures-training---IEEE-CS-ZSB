def find_cumulative_sum(arr):
    csum = [arr[0]]
    for i in range(1, len(arr)):
        csum.append(csum[i - 1] + arr[i])
    return csum


def find_num_of_spots(arr):
    spots = 0
    for i in range(len(arr)):
        if i != len(arr) - 1 and arr[i] == arr[len(arr) - 1] - arr[i]:
            spots += 1
    return spots


n, stripe = int(input()), list(map(int, input().split()))

print(find_num_of_spots(find_cumulative_sum(stripe)))
