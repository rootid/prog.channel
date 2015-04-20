#include<iostream>
using namespace std;

double getExpPow (double a,int n) {
    
    double cache = 1;
    if (n == 0) {
        return cache;
    } 
    cache = getExpPow (a,n/2);
    if ( (n%2) == 0 ) {
       return  cache * cache;
    } else {
        if (n < 0) {
            return (1/a) * cache * cache;
        } else {
            return a * cache * cache;
        }
    }
}

int main () {

    double result = getExpPow (2,-3);
    cout << "result " << result  << endl;

    result = getExpPow (2,-2);
    cout << "result " << result  << endl;
}

