n = int(input())

people = []
for _ in range(n):
    name = input()
    if name in people:
        print("YES")
    else:
        print("NO")
    people.append(name)

# time complexity = O(n)
