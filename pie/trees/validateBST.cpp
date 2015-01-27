#include<iostream>
using namespace std;

//perform inoder traversal by storing the prev node not INT_MIN or INT_MAX value
//eg     4 
//     2   5
bool validateBSTHelper (BTNode *root,BTNode* &prev) {
    
    if (!root) {
        return true;
    }
    if (validateBSTHelper (root->left,prev) == false ) {
        return false;
    }
    if (prev != NULL && prev->val >= root->val) {
        return false;
    }
    
    prev = root; //put node(4) to 2
    
    if (validateBSTHelper (root->right,prev) == false ) {
        return false;
    }
    return true;
}

bool validateBST (BTNode *root) {

    if (!root) {
        return true;
    }
    BTNode *prev = NULL;
    return validateBSTHelper(root,prev);
}


int main () {

}
