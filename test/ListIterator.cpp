#include<iostream>
using namespace std;

//flatten linked list with iterator
class ListIterator {

    struct Node {
        Node *next;
        int value;
        Node (int val) : value(val),next(NULL) {
        
        }  
    };
    
    struct FNode {
        FNode *next;
        FNode *child;
        int value;
        FNode (int val) : value(val),next(NULL),child (NULL) {
        
        }
    };
    
 
    FNode *mHead = NULL;
    
    ListIterator (FNode *head) {
         //flatten the list
         FNode *tail = head;
         //get all the nodes at level 1
         while (tail->next != NULL) {
             tail = tail->next;
         }
         
         FNode *curr = head;
         
         while (curr != tail) {

             if (curr->child != NULL) {  
                 tail->next = curr->child;
                 
                 FNode *tmp = tail;
                 while (tmp->next != NULL) {
                     tmp = tmp->next;
                 }
                 tail = tmp;
             }
             curr = curr->next;
         }
        head = mHead;     
    }
    
    private :
        
    public :
        boolean hasNext () {
            
            if (!head) {
                return false;
            }
           return true; 
        
        }
        
        Node* getNext() {
            Node *tmpNode = head;
            head = head->next;
            return tmpNode;
        }    
};



int main () {

}
