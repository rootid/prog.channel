#include<iostream>


//3^4 = 3^2 * 3^2
//3^5 = 3^2 * 3^2 * 3

int pow (int a,int b) {
    if (b == 0) {
        return a;
    }
    if (a == 0 || a == 1) {
        return a;
    }

    if ( (b%2) == 0) {
        return (pow(a,b/2) * pow(a,b/2));
    } else {

        return ( a * pow(a,b/2) * pow(a,b/2));
    }
    

}


double pow(double x, int n) {
    if ( n == 1) {
          return x;
    } else if (n == 0) {
         return 1;
    } else if ( n == -1) {
         return 1/x;
    } else {
        double cache_result = pow(x,n/2);
        if ( n % 2 == 0) {
            return (cache_result * cache_result);
        } else {
            if (n > 0) {
             return (cache_result * cache_result * x);
            } else {
                return (cache_result * cache_result * 1/x);
            }
        }
    }
}

int main () {

}
