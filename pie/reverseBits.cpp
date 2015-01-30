#include<iostream>
using namespace std;


//
//100010
//if (1) start 
unsigned int reverseBits (unsigned int n) {

    unsigned int result = 0;
    unsigned int sizeBits = sizeof(n) * 8;
    int i = 0;
    while (i < sizeBits ) {
        if (n & (1 << i) ) {
            result |=  (1 << ( (sizeBits - 1) - i));
        }
        i++;
    }

    return result;
}


int main () {
   cout << "rev = "  << reverseBits (8) << endl;
}
