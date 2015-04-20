#include<iostream>
using namespace std;

int maxDepth(TreeNode *root) {
    if (root == NULL) {
        return 0;
    }
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);
    if (leftDepth == 0 && rightDepth == 0) {  //Leaf Node
        return 1;
    } else if (leftDepth == 0)  {
          return 1 + rightDepth;
    } else  if (rightDepth == 0) {
        return 1 + leftDepth;
    } else {
        return 1 + max(leftDepth, rightDepth);
    }
}
