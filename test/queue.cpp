#include<iostream>
using namespace std;


//<-4,3,2,<-1,->

class Queue {
    
    struct Node {
        int val;
        Node *next;
        Node *prev ;
        Node (int data) : 
            val(data),next(NULL),prev(NULL)
        {
        
        };
    };
    Node *head;
    Node *tail;
    int capacity;
    
    public :
        Queue () {
            head = NULL;
            tail = NULL;
            capacity = 0;
        }
        
        void push (int data) {
           Node *tmpNode = new Node (data);
           tmpNode->next = head;
           if (!tail && !head) {      
                tail = tmpNode;
                head = tmpNode;
            } else {       
               head->prev = tmpNode;
               head = tmpNode;      
           }
           capacity++;
        }
        
        bool pop () {
            if (!tail) {
                return false;
            } else {
                tail = tail->prev;
                capacity--;
            }
            
        }
        
        int getSize() {
            return capacity;
        }
        
        int top() {
        
            return (tail->val);
        }
};
