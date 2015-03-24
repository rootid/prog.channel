#include<iostream>
using namespace std;
 
bool isSymmetricTreeNode (BTNode* r1,BTNode* r2) {

    if (!r1 && !r2) {
        return true;
    }
    if ( (r1 && !r2) || (!r1 && r2) ) {
        return false;
    }
    if (r1->val != r2->val) {
        return false;
    }
    
    return ( isSymmetricTreeNode (r1->left,r2->left) 
                &&  isSymmetricTreeNode (r1->right,r2->right) );
} 

int main () {

}
