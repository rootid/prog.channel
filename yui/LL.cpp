#include<iostream>
using namespace std;

class LL {

    struct Node {
        Node *next;
        int val;
        Node (int val) : 
            val(val),next(NULL)
        {
        
        }  
    };
    
    Node *head;
    int size;
    
    void addNodeToLL (int val) {
        
        Node *tmpNode = new Node(val);
        tmpNode->next = head;
        head = tmpNode;
        
    }
    
    bool RemovNodeFromLL () {
        
        if (!head) {
            Node *tmpHead = head;
            head = head->next;
            delete tmpHead;
            return true;
        }
        return false;
        
    }
    
    void printList () {
    
    
    }
    
};
