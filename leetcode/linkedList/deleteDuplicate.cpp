#include<iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode (int x) : 
        val(x),next(NULL)
    {

    };
};

//Keep only one copy of duplicate node
ListNode *deleteDuplicates(ListNode *head) {

    if (!head) {
        return NULL;
    }
    ListNode *curr = head;
    while (curr->next != 0) {
        if (curr->val == curr->next->val) {
            curr->next = curr->next->next;
        } else {
            curr = curr->next;
        }
    }
    return head;
}
