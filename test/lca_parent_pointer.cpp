#include<iostream>
 //
         4
       |  |
      5    6 
    |  |  |  |    
   9
  |
  10

// T : O(2h)  :h = height of BT
// S : O(n)
//LCA(4,6) = 4
BTNode* findLCA (BTNode *root,BTNode *n1,BTNode* n2) {
    
    if (root == n1 || root == n2) {
        return root;
    }
   unordered_set<BTNode *> vNodeSet;
   
   //length of subtree 
   while (n1 != NULL) {
       vNodeSet.insert(n1);
       n1 = n1->parent;
   } 
   while (n2 != NULL) {
   
       if (vNodeSet.find(n2) != vNodeset.end()) {
           return n2;
       }
       n2 = n2->parent;
   }
   
    return NULL;

}
