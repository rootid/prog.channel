

bool validateBST(BTNode *prev,BTNode *root) {

    if (!root) {
        return true;
    }
    if ( false == validateBST(prev,root->left) ) {
        return false;
    }
    if (prev != NULL && prev->val >= root->val ) {
        return false;
    }
    prev = root;
    if (false == validateBST(prev,root->right) ) {
        return false;
    }
    
    return true;
    
}
