
class BSTIterator {
    
private :
    //either use stack or queue
    stack<TreeNode *> tStack;
    void doInorderTraversal (TreeNode *root,stack<TreeNode *>& st) {
            if (root) {
                doInorderTraversal(root->right,st);
                st.push(root);
                doInorderTraversal(root->left,st);
            }
    }
    
public:
    
    BSTIterator(TreeNode *root) {
        doInorderTraversal(root,tStack);
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !tStack.empty();
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode *tmpNode = tStack.top ();
        tStack.pop();
        return tmpNode->val;
    }

};
