#include<iostream>



//        4
//     1     9
//  
//
bool bstHelper (BTNode *root,BTNode& *prev) {

    if (!root) {
        return true;
    }    
    bool leftB = bstHelper (root->left,prev);

    if (prev == NULL || prev->val < root->val) {
        prev = root;
    }  else {
        return false;
    }
    bool rightB = bstHelper(root->right,prev);
    return (leftB && rightB );
}

bool isValidBST (BTNode *root) {
    return bstHelper(root,NULL);
}

int main () {

}
