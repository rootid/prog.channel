#include<iostream>
using namespace std;

BTNode* removeEvenLeaves (BTNode *root,int &count) {

    if (root == NULL || (root->left == NULL && root->right == NULL) ) {
        count += 1;
        if (count%2 == 0 ) {
            return NULL;   
        }
        return root;
    }
    
    root->left = removeLeaves(root->left,count);
    root->right = removeLeaves(root->right,count);
    return root;  //Return updated root
}


int main () {

}
