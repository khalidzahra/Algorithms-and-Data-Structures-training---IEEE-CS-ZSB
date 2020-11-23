import math


def bin_to_int(b):
    pow = num = 0
    while b > 0:
        curr = b % 10
        if curr == 1:
            num += 2 ** pow
        b = b // 10
        pow += 1
    return num


def find_trains_missed(time):
    if time == 0:
        return 0
    trains = math.log(time, 4)

    if trains > int(trains):
        return int(trains) + 1
    else:
        return int(trains)


print(find_trains_missed(bin_to_int(int(input()))))
