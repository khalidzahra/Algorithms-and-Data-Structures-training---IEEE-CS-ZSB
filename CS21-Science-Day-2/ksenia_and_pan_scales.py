scale, unused = input().split("|"), input()


def balance_scale(left_side, right_side, disposal):
    while len(disposal) > 0:
        if len(left_side) < len(right_side):
            left_side += disposal[-1]
        else:
            right_side += disposal[-1]
        disposal = disposal[:-1]
    return left_side + "|" + right_side if len(left_side) == len(right_side) else "Impossible"


print(balance_scale(scale[0], scale[1], unused))
