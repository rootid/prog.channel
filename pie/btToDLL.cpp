#include<iostream>

BTNode* flattenNodeHelper (BTNode *current) {
    BTNode* root = current;
    while (root) {
    if (!root) {
        return root;
    }    
    BTNode* tmpLeft = root->left;
    BTNode* tmpRight = root->right;
    root->left = nullptr;
    root->right = tmpLeft;
    BTNode *tmp = current->right;
    
    while (tmp) {
        tmp = tmp->right;
    }
    tmp->right = tmpRight;
    root = root->right;
    }
  return root;
    
}

BTNode* connectAsDLL () {

}

BTNode* convertBTToDLL (BTNode *root) {

    BTNode *tmpNode = flattenNodeHelper (root);
    return ( connectAsDLL (tmpNode) ) ;
}
