#include<iostream>


BTNode* removeLeaves (BTNode *root) {

    if (root == NULL || (root->left == NULL && root->right == NULL) ) {
        return NULL;   
    }
    
    root->left = removeLeaves(root->left);
    root->right = removeLeaves(root->right);
    return root;  //Return updated root
}


int main () {

}
