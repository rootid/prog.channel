#include<iostream>
#include<vector>
using namespace std;


int sumOfArray (vector<int> a,int start) {
 
    if (start < a.size() ) {
        return a[start] + sumOfArray(a,start+1) ; 
    }
    return 0;
}

int main () {
    int a[] = {14,5,6,7,8,9,10,10};
    vector<int> v (a,a+sizeof(a)/sizeof(a[0]));
    int r = sumOfArray (v,0);
    cout << "result = " << r << endl;
}
