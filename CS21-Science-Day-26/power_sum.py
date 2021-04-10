def getCombinations(num, power, currSum, currNum):
    if currSum == num:
        return 1
    else:
        currNum += 1
        combinations = 0
        while currSum + currNum ** power <= num:
            combinations += getCombinations(num, power, currSum + currNum ** power, currNum)
            currNum += 1
        return combinations


def powerSum(X, N):
    return getCombinations(X, N, 0, 0)
