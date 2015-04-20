#include<iostream>
#include<limits.h>
using namespace std;

//4,3,2,1
class Stack {
    
    struct Node {
        Node *next;
        int data;
        Node (int data) : data(data),next(NULL) {
            
        }
    };
    Node *head;
    int capacity;
    
    public :
        Stack () {
            head = NULL;
            capacity = 0;
        }

        void push(int data) {
            Node *tmpNode = new Node (data);
            tmpNode->next = head;
            head = tmpNode;
            capacity++;
        }
        
        int getSize () {
            return capacity;
        }
        
        int top () {
            if (head != NULL) {
                return head->data;
            }
            return INT_MIN;
        }
        
        bool pop () {
            if (capacity == 0) {
                return false;
            } else {
                head = head->next;
                capacity--;
            }
            return true;
        }
        
};

int main () {

    Stack* st = new Stack ();
    st->push(10);
    st->push(1);
    st->push(12);
    st->push(13);
    cout << st->top() << endl;
    cout << "size = "  << st->getSize() << endl;
    cout << st->top() << endl;
    cout << st->pop() << endl;
    cout << "size = "  << st->getSize() << endl;
    cout << st->top() << endl;
    cout << "size = " << st->getSize() << endl;

}
