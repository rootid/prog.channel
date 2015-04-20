#include<iostream>
#include<string>
using namespace std;

class Empty {

};

class NonEmpty : Empty {
    
    int a;
    int b[10];
    public :
        NonEmpty () {
            a = 10;
            b[0] = 20;
        }
};

int main () {

    Empty* emp = new Empty ();
    cout << "size of empty obj = " << sizeof(emp) << endl;
    cout << "size of empty Class = " << sizeof(Empty) << endl;
    cout << "size of Non empty Class = " << sizeof(NonEmpty) << endl;
    
    Empty a, b;
    if (&a == &b)  { 
        cout << "impossible: report error to compiler supplier" << endl;
    }

    Empty* p1 = new Empty;
    Empty* p2 = new Empty;
    if (p1 == p2) { 
        cout << "impossible: report error to compiler supplier"; 
    }

}
