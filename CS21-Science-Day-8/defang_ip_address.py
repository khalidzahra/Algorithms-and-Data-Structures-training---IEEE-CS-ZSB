def defangIPaddr(self, address: str) -> str:
    ip = ''
    for c in address:
        if c == '.':
            ip += '[.]'
        else:
            ip += c
    return ip

# Time complexity is O(n)
