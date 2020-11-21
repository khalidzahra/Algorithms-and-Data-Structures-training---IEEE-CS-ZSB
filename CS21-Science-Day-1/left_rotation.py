def rotateLeft(d, arr):
    rotated = []
    index = d
    for _ in range(len(arr)):
        if index >= len(arr):
            index = 0
        rotated.append(arr[index])
        index += 1
    return rotated


print(rotateLeft(4, [1, 2, 3, 4, 5]))
