#include<iostream>
using namespace std;

//Queue using the linked list
struct Node  {
    Node *next;
    int val;
    Node (int val) : 
        val(val),next(NULL)
    {

    };
};

struct Queue {
    Node *head;
    Node *tail;
    Queue ()  : 
       head(NULL),tail (NULL)
    {

    };
    bool isEmpty ();
    void insertIntoQ(int e);
    int removeFromQ();
};

bool Queue :: isEmpty() {
   return ( head == NULL && tail == NULL );
}

void Queue :: insertIntoQ (int e) {
    if (tail == NULL) {
        tail = new Node (e);
        head = tail;
    } else {
        tail->next = new Node(e);
        tail = tail->next;
    }
}

int Queue :: removeFromQ() {
    if (head == NULL) {
        return -1;
    }
    int e = head->val;
    head = head->next;
    return e;
}


int main () {
    
    Queue q;
    q.insertIntoQ(10);
    q.insertIntoQ(10);
    q.insertIntoQ(10);
    q.insertIntoQ(10);
    q.insertIntoQ(10);
    
    cout << q.removeFromQ() << endl;
    cout << q.removeFromQ() << endl;
    cout << q.removeFromQ() << endl;
    cout << q.removeFromQ() << endl;
    cout << q.removeFromQ() << endl;
    cout << q.removeFromQ() << endl;
    cout << q.removeFromQ() << endl;
    cout << q.removeFromQ() << endl;


}
