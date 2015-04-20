
#include<iostream>
//f     f
//2->3->9->NULL
//s  s
Node* getMidNode (Node *head) {

    Node* fast = head;
    Node* slow = head;

    while ( !fast && !fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    return slow;

}

int main () {

}
