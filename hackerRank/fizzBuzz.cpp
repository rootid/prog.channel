#include<iostream>
using namespace std;

void printFizBuzz (int n=100) {

    for (int i=0;i<n;i++) {
        if ( i%3 == 0 ) 
            cout << "Fizz" ;
        if ( i%5 == 0 ) 
            cout << "Buzz" ;
        if (i%3 != 0 && i%5 != 0 )
            cout << i ;
        cout << "\n";
    }

}



void printFizBuzzS (int n=100) {

    for (int i=0;i<n;i++) {
        i%3 == 0 ? cout << "Fizz" ;
        i%5 == 0 ? cout << "Buzz" ;
        if (i%3 != 0 && i%5 != 0 )
            cout << i ;
        cout << "\n";
    }

}


int main () {

    printFizBuzz ();
    printFizBuzzS ();
}

