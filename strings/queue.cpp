#include<iostream>
#include<string>
using namespace std;

class UQueue {

    private:
        struct Node {
            string item;
            Node *next;
            Node (string v) : 
                item(v),next(NULL)
            {

            }
        };
        Node *first;
        Node *last;

    public :
        
        UQueue () {
            first = NULL ;
            last = NULL;
        }

        bool isEmpty() {
            return (first == last && first == NULL);
        }

        void enqueue(string item) {
            if (isEmpty() ) {
                last = new Node(item);
                first = last;
            } else {
               last->next = new Node(item);
               last = last->next;
            }
        }

        string dequeue() {
            string result = first->item;
            if (!isEmpty()) {
                first = first->next;
            }
            return result ;
        }

};


int main () {

    UQueue *uq = new UQueue ();
    uq->enqueue("earliest");
    uq->enqueue("Hi");
    uq->enqueue("Hello");
    uq->enqueue("Bye");
    uq->enqueue("latest");
    cout << uq->dequeue() << endl;
    cout << uq->dequeue() << endl;

}
