#include<iostream>
using namespace std;

struct Node {
    int value;
    Node *next;
    Node *child;
    Node (val) : 
        value(val),next(null),child(null)
    {
    
    }
};

int getDepthSum (Node* head) {

    Node *current = head;
    int sum = 0;
    unordered_map<int,int> depthMap;
    unordered_map<int,int> countMap;
    while (current != null) {
         int depth = 1;         
         Node *cChild = current;
         while (cChild->child != null) {
             depthMap[cChild->val] = depth;
             countMap[cChild->val]++;
             cChild = cChild->child;
         }
         current = current->next;
    }
    
    for (auto &p:depthMap) {
       sum += p.first * p.second * countMap[ p.first];  
    }
    
    return sum;
}
