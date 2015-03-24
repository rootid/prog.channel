#include<iostream>
#include<sort>
using namespace std;

//REmove the elements in A with index from B 
//2,3,5,7,8
//1,3

//Sort B (decreasing order) and remove the elements from A

void removeUsingIdx (int a[],int b[],int m,int n) {

    sort (a,a+n,greater<int>);
    for (int i=0;i<m;i++) {
        int j = b[i];
        while (j < n) {
            a[j] = a[j+1];
        }
        //After removing the element adjus the length
        n = n - 1;
    }

}


int main () {

}
