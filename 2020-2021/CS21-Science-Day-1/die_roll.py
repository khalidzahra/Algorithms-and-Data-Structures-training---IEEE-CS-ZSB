def get_hcf(a, b):
    return b if a == 0 else get_hcf(b % a, a)


def simplify(a, b):
    hcf = get_hcf(a, b)
    return (a // hcf, b // hcf)


n, m = map(int, input().split())
frac = simplify(6 - max(n, m) + 1, 6)
print('%d/%d' % (frac[0], frac[1]))
