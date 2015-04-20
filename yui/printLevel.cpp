#include<iostream>
#include<queue>
using namespace std;


//print the the tree level order
 
//             4 
//         3       30
//     10    5   8     20
// 40
//    90
//100
struct BTNode {
    int value;
    BTNode *left;
    BTNode *right;
    BTNode (int aVal) : 
        value(aVal),left(NULL),right(NULL)
    {

    }
};

void printLevelOrder (BTNode *root) {
    if (!root) {
       return ;
    }
    
    queue<BTNode *> q;
    q.push(root);
    
    while (!q.empty()) {
    
        BTNode *tmpNode = q.front();
        cout << tmpNode->value << " ";
        
        if (tmpNode->left) {
            q.push(tmpNode->left);
        }
        
          if (tmpNode->right) {
            q.push(tmpNode->right);
        }
        
        q.pop();
  }
}


int main () {

    BTNode *root = new BTNode(4);
    root->left = new BTNode(3);
    root->right = new BTNode(30);
    root->left->left = new BTNode(10);
    root->left->right = new BTNode(5);
    root->right->left = new BTNode(8);
    root->right->right = new BTNode(20);

    root->left->left->left = new BTNode(40);
    root->left->left->left->right = new BTNode(90);

    printLevelOrder (root);
    cout << endl ;
}
