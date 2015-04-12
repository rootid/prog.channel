#include<iostream>
using namespace std;

void exch (int a[],int m,int n) {
    int tmp = a[m];
     a[m] = a[n];
     a[n] = tmp;
}

void print(int a[],int len) {
    for (int i=1;i<len;i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void swim (int a[],int k) {

    while (k > 1 && a[k] > a[k/2]) {
        exch (a,k,k/2);
        k = k/2;
    }

}

//Better subordinate promoted
void sink (int a[],int k,int n) { //k : parent
    
    while (2*k < n) {
        int j = 2*k;
        //get max child indx as j
        if (a[j] < a[j+1] && j < n) {
            j++;
        }
        if (a[k] > a[j] ) {
            break;
        } else {
           //cout << a[k] << endl;
           exch(a,k,j) ;
        }
        k = j;
    }

}


void heapSort (int a[],int len) {
    //1.sink (build heap)

    for (int k=len/2 ;k>=1;k--) {
        //cout << a[k] << endl;
        sink(a,k,len);
    }
    print (a,len);
    
    //2.sort down 
    int N = len - 1 ;
    while (N >= 1) {
        exch (a,1,N);
        N--;
        sink(a,1,N);
    }


}


int main () {
    int a [] = {-999,-3,90,-4,4,10,100,120,3,5};
    int len = sizeof(a)/sizeof(a[0]);
    print (a,len);
    heapSort (a,len);
    print (a,len);
}
