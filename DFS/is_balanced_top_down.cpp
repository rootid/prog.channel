
#include<iostream>

//This is top DOWN approach


//1.For the current node root, calling depth() for its left and right children actually has to access all of its children, thus the complexity is O(N). 
//2.We do this for each node in the tree, so the overall complexity of isBalanced will be O(N^2) for skwed tree 
//Solution is BOTTOM UP approach

int depth (BTNode *root) {
    if (root == NULL) {
        return 0;
    }
    return max( depth(root->left),depth(root->right) ) + 1;
}

bool isBalanced(BTNode *root) {
    if (!root) {
       return true; 
    } 

    int leftDepth = depth (root->left); 
    int rightDepth = depth (root->right);
    
    return abs(leftDepth - rightDepth) <= 1 && isBalanced (root->left) && isBalanced (root->right);
}





