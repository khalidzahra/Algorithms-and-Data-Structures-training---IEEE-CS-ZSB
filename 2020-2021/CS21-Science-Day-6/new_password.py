import random


def generate_password(n, k):
    letters = []
    password = ''
    for _ in range(k):
        l = 96 + random.randint(1, 26)
        while l in letters:
            l = 96 + random.randint(1, 26)
        letters.append(l)
        password += chr(l)
    while len(password) < n:
        rand_letter = letters[random.randint(0, k - 1)]
        while password[-1] == chr(rand_letter):
            rand_letter = letters[random.randint(0, k - 1)]
        password += chr(rand_letter)

    return password


n, k = map(int, input().split())
print(generate_password(n, k))
