#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>
using namespace std;

//Deserialize and seralize BT with preorder traversal
struct BTNode {

    int val;
    BTNode *left;
    BTNode *right;
    BTNode (int v) :
        val(v),left(NULL),right(NULL)
    {
    
    }
};

void deSerializeTree (BTNode*& root,vector<string>& s,int& pos) {
    pos = pos + 1;
    if ( pos == s.size() || ( s[pos] == "#") ) {
        return;
    }
    root = new BTNode (atoi(s[pos].c_str()));
    //cout << " " << s[pos] << endl;
    deSerializeTree(root->left,s,pos);
    deSerializeTree(root->right,s,pos);
}

//NOTE : problem with string is substr returns only single digit 
BTNode* deSerializeBT (string st) {
    
    TreeNode *tmp = NULL;
    
    if (st.length() == 0) {
        return ;
    }

    tmp = new TreeNode (tmp[0]);    
    tmp->left = deserilizeBT (st.substr(1,st.length() - 1));
    tmp-right = deserilizeBT ((st.substr(1,st.length() - 1));
    
    return tmp;


}

void serializeBT (BTNode *root) {
    if (!root) {
        cout << "#" << ",";
        return;
    }
    cout << root->val << ",";
    serializeBT (root->left);
    serializeBT (root->right);
}



void printInorder (BTNode *root) {
    if (!root) {
        return;
    }
    printInorder (root->left);
    cout << root->val << " ";
    printInorder (root->right);
}


int main () {

    BTNode *root = NULL;
    string s[] = {"20","8","4","#","#","12","10","#","#","14","#","#","#"};
    vector<string> sV(s,s+sizeof(s)/sizeof(s[0]));
    int pos = -1;
    deSerializeTree (root,sV,pos);

    //printInorder (root);
    //cout << endl;
    for (int i=0;i<sV.size();i++) {
        cout << s[i] << ",";
    }
    cout << endl;
    serializeBT (root);
    cout << endl;
}
