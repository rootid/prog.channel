#include<iostream>
using namespace std;

double pow (double x,int n) {

    if (n == 0) {
        return 1;
    } 
    double cache = pow (x,n/2);
    if (n%2 == 0) {
        return ( cacheR * cacheR );
    } else {
        if (n < 0) {
            return ( (1/x) * cacheR * cacheR);
        } else {  
            return ( x * cacheR * cacheR);
        }
    }

}
