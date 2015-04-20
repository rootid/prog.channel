#include<iostream>
using namespace std;

struct Node {
    int val;
    Node *next; 
    Node (int v) : val(v),next(NULL) {

    }
};


Node* mThToLast (Node *head,int m) {

    Node* refHead = head;
    Node* currHead = head;
    int cnt = 0;
    while (cnt < m) {
        if (refHead == NULL) {
            return refHead;
        } 
        refHead = refHead->next;
        cnt++;
    }
    while (refHead != NULL) {
        refHead = refHead->next;
        currHead = currHead->next;
    }
    return currHead ;
}



int main () {

    int n = 4;
    int count = 0;
    while ( count < n) {
        cout << "cnt = " << count << endl;
        count++;
    }
    cout << "final count " << count << endl;

}
