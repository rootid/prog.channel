#include<iostream>
using namespace std;

//LCA for  BST (using BST property) and BT (using level)
struct BTNode {
};
//   3 
//  5 4 

//    3 
//   5
// 4
//
//  5 
// 4
//3
BTNode* lca (BTNode *root,BTNode *left,BTNode *right) {

    if (!root) {
        return NULL;
    }
    if (root == left || root == right) {
        return root;    
    }
    
    BTNode *tmpL = lca (root->left,left,right);
    BTNode *tmpR = lca (root->right,left,right);
    if (tmpL && tmpR) {
        return root;
    }
    if (tmpL) {
        return tmpL;
    }
    return tmpR;
}

//LCA for BST

//     3
//   4   5  

//   3 
//    4 
//     5
//In case of BST root->left < root < root->right

BTNode *lcaBST (BTNode *root,BTNode *left,BTNode *right)  {
    if (!root) {
        return NULL;
    }
    if (left == root || right == root ) {
        return root;
    }
    if (left->val < root->val < right->val) {
        return root;
    }
    if (left->val < root && right->val < root ) {
        return lcaBST (root->left,left,right);
    }
    if (left->val > root->val && right->val > root->val) {
        return lcaBST (root->right,left,right);
    }
}


int main () {

}

