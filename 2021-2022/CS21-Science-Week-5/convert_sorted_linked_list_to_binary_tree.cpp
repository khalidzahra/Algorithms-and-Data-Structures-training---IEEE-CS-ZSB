TreeNode* buildTree(vector<int> &arr, int left, int right) {
    if (left > right) return nullptr;
    int mid = (left + right) / 2;
    TreeNode* node = new TreeNode(arr[mid]);
    node->left = buildTree(arr, left, mid - 1);
    node->right = buildTree(arr, mid + 1, right);
    return node;
}
   
TreeNode* sortedListToBST(ListNode* head) {
    vector<int> arr;
    ListNode* curr = head;
    while (curr) {
        arr.push_back(curr->val);
        curr = curr->next;
    }
    return buildTree(arr, 0, arr.size() - 1);
}