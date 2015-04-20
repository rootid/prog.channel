#include<iostream>
using namespace std;


void removeDuplicate (int a[],int n) {

    int pivot = 0;
    int i = 1;
    while (i < n) {
       if (a[pivot] != a[i])  {
           cout << " pivot = " << pivot << " , i = " << i  << endl;
           swap (a[++pivot],a[i]);
       }
       i++;
    }

    for (int i=0;i<n;i++) {
        cout << a[i] << ",";
    }
    cout << endl;
}

int main () {

    int a[] = {1,1,2,3,4,4,5,5,9,10};
    int len = sizeof(a)/sizeof(a[0]);
    removeDuplicate (a,len);
}
