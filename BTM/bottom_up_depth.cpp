

//Bottom up O(n^2)
int dfsHeight (TreeNode *root) {
        if (root == NULL) return 0;

        int leftHeight = dfsHeight (root -> left);
        if (leftHeight == -1) return -1;
        int rightHeight = dfsHeight (root -> right);
        if (rightHeight == -1) return -1;

        if (abs(leftHeight - rightHeight) > 1)  return -1;
        return max (leftHeight, rightHeight) + 1;
}

bool isBalanced(TreeNode *root) {
    return dfsHeight (root) != -1;
}


//TOP down  O(n)
int depth (TreeNode *root) {
     if (root == NULL) return 0;
     return max (depth(root -> left), depth (root -> right)) + 1;
}

bool isBalanced (TreeNode *root) {
    if (root == NULL) return true;

    int left=depth(root->left);
    int right=depth(root->right);

    return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}

