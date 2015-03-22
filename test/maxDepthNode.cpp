#include<iostream>
using namespace std;


int maxDepthNode (BTNode* root,int level) {

    if (!root) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL && (level &1)) {
         return level;  
    }
    return max (maxDepthNode (root->left,level+1) ,maxDepthNode (root->right,level+1));  
}

int main () {

}
