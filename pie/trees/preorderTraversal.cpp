#include<iostream>

//DLR
void preOrder (BTNode *root) {
    
    if (!root) {
        return;
    }
    stack<BTNode *> tStack;
    BTNode *current = root;
    tStack.push(root);
    while (!tStack.empty() ) {
        BTNode *current = tStack.top();
        cout << current->val << endl;
     
        tStack.pop();

        //traverse right
        if (current->right) {
            tStack.push(current->right);
        }
        //traverse left   
        if (current->left) {
            tStack.push(current->left);
        }
            
    }

}
