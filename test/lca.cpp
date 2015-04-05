
//              4
//          2        5
//     3
//         9
//      10   11  

BTNode* findLCA (BTNode *root,BTNode *r,BTNode *r1) {

    if (!root) {
        return root;
    }
    if (root == r1) {
        return r1;
    }
    if (root == r2) {
        return r2;
    }
   BTNode *l = findLCA (root->left,r,r1);
   BTNode *r = findLCA (root->right,r,r1);
   
   if(l && r) {
       return root;
   } 
   if (l) {
       return l;
   }
   return r;

}
