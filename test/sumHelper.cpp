#include<iostream>
using namespace std;

//    1
//   / \
//  2   3
// / \
//10  1
//
//sum (1210,121,13) = 
//sum(121  13)


void findSumHelper (vector<int> op,BTNode *root,int &sum ) {

    if (!root) {    
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        op.push_back(root->value);
        
        int no = 0; 
        for (int i=0;i<op.size();i++) {
            no = no * 10+ op[i];  //no =1, 12
        }
        sum += no;
        op.pop_back();
        return;
    }
    
    op.push_back(root->val);
    findSumHelper (op,root->left);   // S : O(n) , O(log n)
    findSumHelper (op,root->right); // T : O(n)  
    op.pop_back();
    
}


int main () {

}
