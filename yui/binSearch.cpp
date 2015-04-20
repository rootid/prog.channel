#include<iostream>
using namespace std;
//0 1 2 3 4 5 6  7
//3 5 6 7 35 45 50
//key : 7
int findElement (int a[],int m,int start,int end,int key) {
    //key last element 
    if (start > end)  {
        return -1;
    }
    //if (start <= end) { //use this
        int mid = start + (end - start)/2;
        cout << "mid " << mid << endl;
        if (a[mid] == key) {
            if (mid < m) {
                return a[mid+1];
            } 
            cout << "returning max" << endl;
            return -1;
        }
        if (a[mid] < key ) {
            return ( findElement (a,m,mid+1,end,key) );
        } else {
           return ( findElement (a,m,start,mid-1,key) );
      }
    //} 
}

int main () {
    int a[] = {3,5,6,7,35,45,50};
    int m = sizeof(a)/sizeof(a[0]);
    int start = 0;
    int end = m;
    int n = findElement (a,m,start,end,3);
    cout << "max element " << n << endl;

}
