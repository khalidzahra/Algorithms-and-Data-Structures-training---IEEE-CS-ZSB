def unequal(arr):
    return len(set(arr)) != 1

def addNumExcept(arr, num, index):
    for i in range(len(arr)):
        if index != i:
            arr[i] += num

def equal(arr):
    operations = 0
    while unequal(arr):
        sm = min(arr)
        smIndex = arr.index(sm)
        lg = max(arr)
        lgIndex = arr.index(lg)
        if lg - sm == 5:
            addNumExcept(arr, 5, lgIndex)
        elif (lg - sm) % 2 == 0:
            addNumExcept(arr, 2, lgIndex)
        else:
            addNumExcept(arr, 1, lgIndex)
        operations += 1
    return operations