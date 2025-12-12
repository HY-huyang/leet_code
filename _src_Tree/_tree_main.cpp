//94_1  递归  _2  stack
int main() {
    vector<int>ve = { 1,2,3,4,5 };
    ListNode* ls = to_list(ve);
    Solution().reorderList(ls);
    return 0;
}

//0102 二叉树的层序遍历
int main() {
    vector<optional<int>>vec = { 3,9,20,nullopt,nullopt,15,7 };
    TreeNode* tree = to_tree(vec);
    vector<vector<int>>num = Solution().levelOrder(tree);
    cout << num;
    return 0;
}