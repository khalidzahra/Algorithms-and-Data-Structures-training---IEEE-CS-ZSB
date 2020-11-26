def decodeHuff(root, s):
    decoded = ''
    curr = root
    for c in s:
        if c == '0':
            curr = curr.left
        else:
            curr = curr.right
        if ord(curr.data) > 31:
            decoded += curr.data
            curr = root
    print(decoded)
