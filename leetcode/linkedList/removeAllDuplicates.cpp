#include<iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode (int x) : 
        val(x),next(NULL)
    {

    };
};

//Wipe out the all duplicate nodes 
ListNode *deleteDuplicatesII(ListNode *head) {
    
    ListNode *sentNode = new ListNode(-1);
    sentNode->next = head;
    ListNode *prev = sentNode;
    ListNode *curr = head;
    
    while (prev) {
        while (curr != NULL && curr->next != NULL && curr->val == curr->next->val) {
            //To Remove the node completely 
            while(curr->next != NULL && curr->next->val == curr->val) {
                   curr = curr->next;
            }
            curr = curr->next;
        }
        prev->next = curr;
        prev = curr;
        if (curr) {
            curr = curr->next;
        }
    }
    return sentNode->next;;
}
