#include<iostream>

using namespace std;


//:pancake sorting
//:insert the spatuala to max item idx
//:flip the max item idx to first
//:flip all items to size - 1
//:reduce size

void flip  (int a[],int n) {

    int start = 0;
    int end = n;
    while (start < end) {
        swap(a[start++],a[end--]);
    }

}

int findMaxIdx (int a[],int n) {
    int mxIdx = 0;
   
    while (n > 0)  {
        if (a[mxIdx] < a[n]) {
            mxIdx = n;
        }
        n -= 1;
    }
    return mxIdx ;
}

void pSort (int a[],int n) {

    //
    int size_ = n;
    while (size_ > 0) {
        int mxIdx = findMaxIdx(a,size_ - 1);
        flip (a,mxIdx);
        flip (a,size_ - 1);
        size_ -= 1;
    }

}

int main () {

    //int a[] = {2,6,4,1,3};
    int a[] = {2,6,4,1,3,7,0,-1};
    int n = sizeof(a)/sizeof(a[0]);
    pSort (a,n);
    
    for (int i=0;i<n;i++) {
        cout << a[i] << ",";
    }
    cout << endl;
}
