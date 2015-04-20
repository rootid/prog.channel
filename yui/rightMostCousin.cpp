#include<iostream>
#include<queue>
using namespace std;

struct BTNode {
    int val;
    BTNode *left;
    BTNode *right;

};


BTNode* rightMostCousin (BTNode *root,BTNode *node) {

    queue<BTNode *> tQ;
    tQ.push(root);
    
    int currentV = 1;
    int nextV = 0;
    
    while (!tQ.empty()) {
    
        BTNode *tmp = tQ.front();
       
        if (tmp == node) {
           BTNode *cNode = tQ.back();
           return cNode;
        }
        
        if (tmp->left) {
            tQ.push(tmp->left);
            nextV++;
        }
        
        if (tmp->right) {
            tQ.push(tmp->right);
            nextV++;
        }
        
        tQ.pop();
        
        if (currentV == 0) {
            currentV = nextV;
        }
       
    }
}


int main () {

}
