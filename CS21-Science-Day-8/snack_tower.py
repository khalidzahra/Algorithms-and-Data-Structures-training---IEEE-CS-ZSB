def stack(n, sizes):
    dropped = [None] * n
    last_placed = n - 1
    for i in range(n):
        dropped[sizes[i] - 1] = sizes[i]
        if dropped[last_placed] is None:
            print("")
        else:
            while dropped[last_placed] is not None and last_placed >= 0:
                print(dropped[last_placed], end=" ")
                last_placed -= 1
            print("")


n = int(input())
sizes = list(map(int, input().split()))
stack(n, sizes)