

bool validateBST(BTNode *prev,BTNode *root) {

    if (!root) {
        return true;
    }
    bool l = validateBST(prev,root->left);
    if (prev == NULL || prev->val < root->val ) {
        prev = root;
    } else if (prev->val > root->val) {
        return false;
    }
    bool r = validateBST(prev,root->right);
    if(l && r) {
        return true;
    }
    return false;
    
}
