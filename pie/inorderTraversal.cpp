#include<iostream>
#include<stack>
using namespace std;

struct BTNode {
   BTNode *left;
   BTNode *right;
   int val;  
};


//        4
//     3     6 
//   8   1     7
// 9   2

//LDR
void inorderT (BTNode *root) {
    
    if (!root) {
        return ;
    }
    stack <BTNode*> tStack;
    BTNode *tmpNode = root;
    while (!tStack.empty() || tmpNode) {
        while (tmpNode) {
            tStack.push(tmpNode);
            tmpNode = tmpNode->left;
        }
        tmpNode = tStack.top ();
        tStack.pop();
        cout << tmpNode->val << " ";
        if (tmpNode->right) {
            tmpNode = tmpNode->right;
        }
    }

}
