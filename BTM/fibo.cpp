#include<iostream>
using namespace std;


//F(n) = F(n-1) + F(n-2)
//F(0) = 1
//F(1) = 1

int fiboRec (int n) {
    if (n == 0 || n == 1) {
        return 1;
    } 
    return ( fiboRec (n-1)  + fiboRec (n-2) );
}

//bottom up
int fibo (int n) {
    int result = 1; 
    int prev = 1;
    int current = 1;
    for (int i=2;i<=n;i++)  {
       result = (current + prev); 
       prev = current;
       current = result;
    }
    return result;
}


void testRec (int n) {

    int result = fiboRec (n);
    cout << " Rec ( " << n  << " ) =  " << result << endl;
}

void testBUP (int n) {
    int result = fibo(n);
    cout << " BUP ( " << n  << " ) =  " << result << endl;
}

int main () {
    testRec (3);
    testRec (4);
    testRec (6);

    testBUP (3);
    testBUP (4);
    testBUP (6);
}

