#include<iostream>
using namespace std;

//n! = n * (n-1) !
//fact (4)
//fact (3)
//fact (2) 
//fact (1)
int fact (int n) {
    if (n <= 1) {
        return 1;
    }
    return (n * fact (n-1)) ;
}



int fact (int n) {

    int result = 1;

    for (int i=n;i>1;i--) {
        result *= i;
    }
    return result;

}

int main () {

}
