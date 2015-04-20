

//Flatten a 2D linkedList . A node contains 3 parameters namely, data , pointer to left, pointer to down . The aim of the function is to flatten the linkedlist.
//
//Ex: 1-->2-->4
//              |
//              V
//              3
//
//Answer is 1-->2-->3-->4
//
//Ex: 1 --> 2--> 3--> 4
//               |
//               5-->6-->7
//               | |
//               8 9
//
//Answer is 1-->2->5 -> 8 -> 6->9 ->7-> 3-> 4



Node* flattenListNode (Node *head) {
    Node *list1 = NULL;
    Node *list2 = NULL;
    if (head->next) {
         list1 = flattenToLL(head->next);
    }
    if (head->child) {
         list2 = flattenToLL(head->child);
    }
   
    // list3->list2->list1
    Node *list3 = head;
    if (!list1 && !list2) {
        return list3;
    }

    Node *last = list3;
    if (list2) {
       last->next = list2; 
       while (last->next) {
           last = last->next;
       }
    }
    last->next = list1;

    return list3
}
