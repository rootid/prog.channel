#include<iostream>
#include<string>
using namespace std;


class UStack {

    private :
        struct Node {
            string value;
            Node *next;
            Node (string v) : 
                value(v),next(NULL)
            {

            }
        };

        Node *first = NULL;
    
    public :

        UStack () {
            first = new Node ("NULL");

            cout << "sizeof(first) = " << sizeof(first)  << "bytes" << endl;
            cout << "sizeof(first->value) = " << sizeof(first->value) << "bytes" << endl;
            cout << "sizeof(first->next) = " << sizeof(first->next) << "bytes" << endl;
            cout << "sizeof(Node) = " << sizeof(Node)  << "bytes" << endl;
        }

        bool isEmpty () {
           if (first->value == "NULL") {
               return true;
           }
           return false;
        }

        void push(string item) {
            Node *tmp = new Node(item);
            tmp->next = first;
            first = tmp;
        }

        string pop () {
           string result = first->value; 
           if (!isEmpty()) {
               first = first->next;
           }
           return result;
        }

};


int main () {

    UStack *uStack = new UStack ();

    uStack->push ("earliest");
    uStack->push ("Hi");
    uStack->push ("Hello");
    uStack->push ("latest");
    cout << uStack->pop() << " " << endl;

}
