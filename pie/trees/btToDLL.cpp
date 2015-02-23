#include<iostream>


//Iterative approach

//       2 
//    5     8
// 7      6   9

//       2 
//          5
//        7   8
//          6   9




BTNode* flattenNodeHelper (BTNode *current) {
    BTNode* root = current;
    while (root) {
    if (!root) {
        return root;
    }    
    BTNode* tmpLeft = root->left; //(get the left substree)
    BTNode* tmpRight = root->right; // (get the right substree)
    root->left = nullptr; 
    root->right = tmpLeft;
    BTNode *tmp = current->right;
    
    while (tmp) {
        tmp = tmp->right;
    }
    tmp->right = tmpRight;
    root = root->right;
    }
  return root;
    
}

BTNode* connectAsDLL () {

}

BTNode* convertBTToDLL (BTNode *root) {

    BTNode *tmpNode = flattenNodeHelper (root);
    return ( connectAsDLL (tmpNode) ) ;
}
