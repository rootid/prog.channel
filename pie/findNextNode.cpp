#include<iostream>
using namespace std;

//1.Node with right child : leftmost node of right subtree
//2.Node w/o right child : return parent of left subtree

//has left parent return it

//         4 
//    1       5
//  3   9
//        7

BTNode* findNextNode (BTNode *root,BTNode *cNode,BTNode *pNode) {
    
    if (!root) {
        return NULL;
    }
    
    if (cNode == root) {
        if(cNode->right) {
            return nextNodeHelper (cNode->right);
        } else {
            return pNode;
        }
    } else {
        BTNode *tmpL = findNextNode (root->left,cNode,root);
        if (tmpL) { //has left parent return it
            return tmpL;
        }
        return (findNextNode (root->right,cNode,pNode) );
    }
}



