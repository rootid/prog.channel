#include<iostream>
using namespace std;

//456%10
int inverseInt (int n) {
    //456 -> 65
    //6 
    int revNo = 0;
    int nextNumber = 1;
    while (n != 0) {
        nextNumber = n % 10;
        revNo = (revNo * 10) + nextNumber;
        n = n / 10;
    }

    return revNo;

}

int main () {
    int revInt = inverseInt (6);
    cout << "the rev int (6) " << revInt  << endl;

    revInt = inverseInt (456);
    cout << "the rev int (456) " << revInt  << endl;

}

