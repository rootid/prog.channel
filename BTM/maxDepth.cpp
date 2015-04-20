


int maxDepth(TreeNode *root) {
    if (root == NULL) {
        return 0;
    }

    int leftDepth = 0;
    int rightDepth = 0;
    leftDepth = maxDepth(root->left);
    rightDepth = maxDepth(root->right);
    return 1 + max(leftDepth, rightDepth);
}
