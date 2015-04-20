#include<iostream>


Node* mergeLL(Node *first,Node *second) {

    Node *sentiNode = new Node(-1);
    
    Node *tmp = sentiNode;
    while (first && second) {
    
        if (first->val < second->val) {
            tmp->next = first;
            first = first->next;
           
        }else {
            tmp->next = second;
            second = second->next;
        }
        
        tmp = tmp->next;
    }
    if (first) {
        second = first;
    }
    
    while (second) {
        tmp->next = second;
        second = second->next;
        tmp = tmp->next
    }
    
    return sentiNode->next;
}
