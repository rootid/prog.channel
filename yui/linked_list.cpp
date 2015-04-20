#include<iostream>
#include<unordered_map>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode (int x) : 
        val(x),next(NULL)
    {

    };
};

struct RandomListNode  {
    int label;
    RandomListNode *next;
    RandomListNode *random;
    RandomListNode (int x) : 
        label(x),next(NULL),random(NULL) 
    {

    };
};


bool hasCycle (ListNode *head) {
    //use of tortoise and hare
    return true;
}

//1->2->3->4->5, and n = 2.
//1->2->3->5
ListNode *removeNthFromEnd(ListNode *head, int n) {
   if (!head)  {
       return NULL;
   }
   int start = 0;
   ListNode *sentinelNode = new ListNode(-1);
   sentinelNode->next = head;
   ListNode *first = sentinelNode;
   ListNode *second = sentinelNode;
   while (start < n) {
       first = first->next;
       start += 1;
   }

   cout << "first " << first->val << endl;
   //while (first != NULL)  W/O sentinel node
   while (first->next != NULL) {
       first = first->next;
       second = second->next;
   }
   cout << "second " << second->val << endl;
   //second->val = second->next->val;
   second->next = second->next->next;

   return sentinelNode->next;
}




//Keep only one copy of duplicate node
ListNode *deleteDuplicatesI_simple(ListNode *head) {
    
    ListNode *sentNode = new ListNode(-1);
    sentNode->next = head;
    ListNode *prev = sentNode;
    ListNode *curr = head;
    while (prev) {
        while (curr != NULL && curr->next != NULL && curr->val == curr->next->val) {
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




ListNode *partition(ListNode *head, int x) {
    ListNode *sentiHead = new ListNode(-1);
    ListNode* dummyHead = sentiHead;
    ListNode *sentiTail = new ListNode(-1);
    ListNode* dummyTail = sentiTail ;
    
    while (head) {
        if (head->val < x) {
            dummyHead->next = head;
            dummyHead = dummyHead->next;
        } else {
            dummyTail->next = head;
            dummyTail = dummyTail->next;
        }
        head = head->next;
    }
    dummyTail->next = NULL;
    dummyHead->next = sentiTail->next;
    return sentiHead->next;
}


//Merge 2 sorted lists
ListNode *mergeTwoLists(ListNode *head1, ListNode *head2) {
    ListNode *sentiNode = new ListNode(-1);
    ListNode *tmpHead = sentiNode;
    while (head1 && head2) {
        if (head1->val < head2->val) {
            tmpHead->next = head1;
            tmpHead = tmpHead->next;
            head1 = head1->next;
        } else {
            tmpHead->next = head2;
            tmpHead = tmpHead->next;
            head2 = head2->next;
        }
    }
    if (head2) {
        head1 = head2;
    }
    while (head1) {
        tmpHead->next = head1;
        tmpHead = tmpHead->next;
        head1= head1->next;
    }
    return (sentiNode->next);
}

//swap the node pair
ListNode* do_swap (ListNode *first,ListNode *second) {
    first->next = second->next;
    second->next = first;
    return second;

}

ListNode *swapPairs(ListNode *head) {
    ListNode *sentiNode = new ListNode (-1);
    sentiNode->next = head;
    ListNode *prev = sentiNode;
    ListNode *curr = head;
    while (prev->next && prev->next->next) {
        prev->next = do_swap ( prev->next,curr->next);
        curr = curr->next;
        prev = prev->next->next;
    }
    return sentiNode->next;
}

//W/o using the prev pointer only using the one pointer
ListNode *swapPairs_simple(ListNode *head) {
    ListNode *sentiNode = new ListNode (-1);
    sentiNode->next = head;
    ListNode *curr = sentiNode;
    while (curr->next && curr->next->next) {
        curr->next = do_swap ( curr->next,curr->next->next);
        curr = curr->next->next;
    }
    return sentiNode->next;
}

//get the intersection
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    //We assume len(headA) < len(head2)
    int lenA = 0;
    int lenB = 0;
    ListNode *cheadA = headA;
    ListNode *cheadB = headB;
    while (cheadA) {
        lenA += 1;
        cheadA = cheadA->next;
    } 
    while (cheadB) {
        lenB += 1;
        cheadB = cheadB->next;
    }

    if (lenA > lenB) {
        ListNode *tmp = headA;
        headA = headB;
        headB = tmp;
    }
    int offset = max(lenA,lenB) - min (lenA,lenB);
    cheadA = headA;
    cheadB = headB;
    while (offset != 0 ) {
        cheadB = cheadB->next;
        offset -= 1;
    }
    while (cheadA && cheadB) {
        if (cheadA == cheadB) {
            return (cheadA);
        }
        cheadA = cheadA->next;
        cheadB = cheadB->next;
    }
    return NULL;
}


void divideList(ListNode *head,ListNode **firstH,ListNode **secondH) {
    ListNode *slow = head;
    ListNode *fast = head;    
    ListNode *prev = NULL;
    while (fast && fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = NULL;
    firstH = &head;
    secondH = &slow;
}

ListNode* findMid(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;    
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

//Reverse linked list 
//1->2->3->4->5
//1<-2<-3<-4<-5

ListNode* reverseLinkedList(ListNode *head) {
    if (!head || !head->next) {
        return head;
    }
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *next_p = head->next;
    while (curr) {
        next_p = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next_p;
    }
    return prev;
}

//think in top-down order start from the head
//Tail recursion
ListNode* reverseLinkedHelper(ListNode *curr,ListNode *prev) {
    if (curr == NULL) {
        return prev;
    } else {
        ListNode *next_p = curr->next;
        curr->next = prev;
        return reverseLinkedHelper(next_p,curr);
    }
}

ListNode* reverseLinkedRec(ListNode *head) {
    return ( reverseLinkedHelper(head,NULL) ) ;
}


//1,0,2,2,0,2,0,0
int parition (int a[],int k,int size) {
    int q = -1;
    int i = 0;
    while (i < size) {
        if (a[i] <= k) {
            q += 1;
            swap (a[i],a[q]);
        }
         i++;
    }
    cout << endl;
    for (int i=0;i<size;i++) {
        cout << a[i] << " ";
    }
    cout << endl;

}


void printList (ListNode *head) {
    while (head)  {
        cout << head->val << " " ;
        head = head->next;
    }
    cout << endl;
}

int main () {
   
    ListNode *head = new ListNode(1); 
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    //removeNthFromEnd (head,2);
    //int a[] = {1,0,2,2,0,2,0,0};
    //int len = sizeof(a)/sizeof(a[0]);
    //parition (a,a[1],len);
    printList(head);
    //ListNode *hList = reverseLinkedList (head);
    ListNode *h1List = reverseLinkedRec (head);
    printList(h1List);

}




