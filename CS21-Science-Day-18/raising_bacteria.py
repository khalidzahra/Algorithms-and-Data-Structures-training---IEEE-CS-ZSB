x = int(input())
num = 0
while x > 0:
    if x & 1 == 1:
        num += 1
        x -= 1
    x = x >> 1
print(num)