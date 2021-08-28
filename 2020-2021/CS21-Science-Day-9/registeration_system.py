n = int(input())

names = {}
for _ in range(n):
    name = input()
    if name in names:
        print(name + str(names[name]))
        names[name] += 1
    else:
        print("OK")
        names[name] = 1

# time complexity = O(n)
