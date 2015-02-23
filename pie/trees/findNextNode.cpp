#include<iostream>
using namespace std;


//1.Node with right child : leftmost node of right subtree  eg.
//2.Node w/o right child : return parent of left subtree eg.3,5

//has left parent return it

//         4 
//    1       5
//  3   9
//        7


//         24 
//    10       55
//  3   20 
//         23
//      22 
//    21

BTNode *nextNodeHelper  (BTNode *tmp) { 
    while (tmp->left) {
        tmp = tmp->left;
    }
    return tmp;
}

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
        if (tmpL) { //has left parent return it //No left  substree
            return tmpL;
        }
        return (findNextNode (root->right,cNode,pNode) );
    }
}



