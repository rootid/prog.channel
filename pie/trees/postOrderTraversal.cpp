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

//post order traversal

//LRD
void postOrder (BTNod *root) {
    if (!root) {
        return ;
    }
    stack<BTNode *> tStack;
    current = root;
    BTNode *current = root;
    BTNode *prev = NULL;
    while (!tStack.empty() || current) {        
        while (current) {
            tStack.push(current);
            current = current->left; 
        }
        current = tStack.top ();
        if (current->right && pre != current->right) {
            current = current->right;
        } else {
            BTNode *v = tStack.top () ; 
            cout << v->val << " ";   
            curr = NULL;
            pre = v;
            tStack.pop();
        }      
    }
    
}
