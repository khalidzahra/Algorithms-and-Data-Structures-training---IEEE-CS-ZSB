ListNode* swapPairs(ListNode* head) {
    ListNode *dummy = new ListNode(-1), *curr = dummy;
    dummy->next = head;
    while (curr->next && curr->next->next) {
        ListNode *next = curr->next, *nextnext = curr->next->next;
        next->next = nextnext->next;
        nextnext->next = next;
        curr->next = nextnext;
        curr = nextnext->next;
    }
    return dummy->next;
}