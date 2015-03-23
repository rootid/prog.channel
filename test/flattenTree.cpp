#include<iostream>
using namespace std;

         
void flattenTree (BTNode *root) {

    if (!root) {
        return;
    }
    
    while (root != NULL) {
        BTNode *tmp = root->right;
        root->right = root->left; 
        root->left = NULL
        BTNode *current = root;
        while (current->right != NULL) {
            current = current->right;
        }
        current->right = tmp;
        root = root->right;
    }
}

int main () {

}
