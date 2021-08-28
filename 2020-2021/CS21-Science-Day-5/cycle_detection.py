def has_cycle(head):
    visited = []
    while head is not None:
        visited.append(head)
        if head.next is not None and head.next in visited:
            return 1
        head = head.next
    return 0
