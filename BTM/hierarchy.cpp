#include<iostream>
#include<string>
#include<queue>
using namespace std;

struct Name {
    string fName;
    string mName;
    string lName;
};

struct OrgNode {
    string position;
    Name name; 
    OrgNode *left;
    OrgNode *right;
};


void printLevelOrder (OrgNode *node) {
    
    queue<OrgNode *> lQ;
    int nextV = 0;
    int currentV = 0;
    lQ.push(node);
    currentV = 1;
    vector<OrgNode*> lVc;
    while (!lQ.empty()) {
        OrgNode *tmp = lQ.front();
        if (tmp->left) {
            lQ.push(tmp->left);
            nextV++;
        }
        if (tmp->right) {
            lQ.push(tmp->right);
            nextV++;
        }
        lVc.push_back(tmp);
        if (currentV == 0) {
            for (auto &p:lVc) {
                cout  << p << " ";
            }
            lVc.clear();
           currentV = nextV; 
        }
    
    }
}

int main () {

}
