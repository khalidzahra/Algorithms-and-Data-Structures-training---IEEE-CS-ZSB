# def isSwappable(p, n):
#     return (p == '1' and n == '0') or (p == '0' and n == '1') or (p == '1' and n == '2') or (p == '2' and n == '1')
#
#
# def swap(s, pIndex, nIndex):
#     s = s[:pIndex] + s[nIndex] + s[pIndex + 1:nIndex] + s[pIndex] + s[nIndex + 1:]
#     return s
#
#
# s = input()
#
# if len(s) != 1:
#     for i in range(0, len(s)):
#         if i + 1 < len(s):
#             if isSwappable(s[i], s[i + 1]) and int(s[i]) > int(s[i + 1]):
#                 s = swap(s, i, i + 1)
#                 for j in range(i, 0, -1):
#                     if j - 1 > -1 and isSwappable(s[j], s[j - 1]) and int(s[j]) < int(s[j - 1]):
#                         s = swap(s, j - 1, j)
#
# print(s)
#
# TLE approach
#

s = input()

if len(set(s)) == 1:
    print(s)
else:
    noOnes = ""

    oneCount = 0

    for i in range(len(s)):
        if s[i] == '1':
            oneCount += 1
        else:
            noOnes += s[i]

    for i in range(len(noOnes)):
        if noOnes[i] == '2':
            noOnes = noOnes[:i] + '1' * oneCount + noOnes[i:]
            break
        if i == len(noOnes) - 1:
            noOnes = noOnes + '1' * oneCount

    print(noOnes)
