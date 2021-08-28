def findMergeNode(head1, head2):
    nodes = []
    while head1 is not None or head2 is not None:
        if head1 is not None:
            if head1 in nodes:
                return head1.data
            nodes.append(head1)
            head1 = head1.next
        if head2 is not None:
            if head2 in nodes:
                return head2.data
            nodes.append(head2)
            head2 = head2.next
