
//        4
//     3        9
// 1        13       6
//        4    1   91 
//        



BTNode* findLCA (BTNode *root,BTNode *f,BTNode *s) {
    if (!root) {
        return NULL; 
    }
    if (root == f || root == s) {
        return root;
    }
    BTNode* l =  findLCA (root->left,f,s);
    BTNode* r =  findLCA (root->right,f,s);
    if (l && r) {
        return root;
    } 
    if (l) {
        return l;
    } 
    if (r) {
        return r;
    }
    return NULL;
}
