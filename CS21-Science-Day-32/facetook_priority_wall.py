def getPriority(action, name):
    if action[1] == "likes":
        p1 = action[0]
        p2 = action[2][:-2]
        return (p1, p2, 5 if name == p1 or name == p2 else 0)
    else:
        p1 = action[0]
        p2 = action[3][:-2]
        if action[1] == "commented":
            return (p1, p2, 10 if name == p1 or name == p2 else 0)
        else:
            return (p1, p2, 15 if name == p1 or name == p2 else 0)

name = input()
n = int(input())
actions = []
factor = {}

for i in range(n):
    actions.append(input().split())

for action in actions:
    prio = getPriority(action, name)
    if prio[0] != name:
        factor[prio[0]] = factor.get(prio[0], 0) + prio[2]
    if prio[1] != name:
        factor[prio[1]] = factor.get(prio[1], 0) + prio[2]

print("\n".join([friend[0] for friend in sorted(factor.items(), key=lambda kv: (-kv[1], kv[0]))]))
