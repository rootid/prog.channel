
#include<iostream>

//This is B U approach

//Instead of calling depth() explicitly for each child node, 
//we return the height of the current node in DFS recursion. 
//When the sub tree of the current node (inclusive) is balanced, 
//the function heightHelper () returns a non-negative value as the height

int heightHelper (BTNode *root) {
    if (root == NULL) {
        return 0;
    }
    int lH = heightHelper (root->left);
    if (lH == -1) {
        return -1;
    }
    int rH = heightHelper (root->right);
    if (rH == -1) {
        return -1;
    }
    if ( abs(lH - rH)  > 1)  {
        return -1;
    }
    return (max (lH,rH) + 1);
}

bool isBalanced(BTNode *root) {
    if heightHelper(root) != 1;

}





