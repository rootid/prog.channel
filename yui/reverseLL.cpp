#include<iostream>
using namespace std;


//1->2->3->NULL
//NULL<-1<-2 3->NULL
//NULL<-1<-2<-3
Node* reverseLL (Node *head) {

    if (!head) {
        return head;
    }
    
    Node *current = head;
    Node *Nnext = NULL;
    Node *Nprev = NULL;
    while (current != NULL) {
        Nnext = current->next;
        current->next = Nprev;
        Nprev = current;
        current = Nnext;
    }
    return Nprev;
}

Node *reverseHelper (Node *head,Node *prev) {
    if (!head) {
        return prev;
    }
    Node *nextP = head->next;
    head->next = prev;
    return reverseHelper(nextP,head);
}

Node* callReverseHelper() {
    return reverseHelper (head,NULL);
}
