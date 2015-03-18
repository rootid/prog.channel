#include<iostream>
using namespace std;

//Remove duplicate element
void removeDuplicate (int a[],int n,int elem) {

    int start = 0;

    for (int i=0;i<n;i++) {
    
        if (a[i] != elem) {
            swap(a[start++],a[i]);
        }
    }


    for (int i=0;i<start;i++) {
        cout << a[i] << "," ;
    }
    cout << endl;
    
    //for (int i=start+1;i<n;i++) {
    //    a[i] = NULL;
    //}

}


int main () {

    int a[] = {1,2,2,3,4,5,2,7};
    int n = sizeof(a)/sizeof(a[0]);

    removeDuplicate (a,n,2);

}
